#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("enter the number of disk\n");
scanf("%d",&n);
towerOfHanoi(n,'A','C','B');
getch();
}
int towerOfHanoi(int n,char from_rod, char to_rod, char aux_rod)
{
if(n==1)
{
printf("\nmove disk one from rod %c to rod %c",from_rod, to_rod);
printf("\n======================================\n");
return;
}
towerOfHanoi(n-1, from_rod, aux_rod, to_rod);
printf("\n move disk %d from rod %c to rod %c   ",n, from_rod, to_rod);
printf("\n======================================\n");
towerOfHanoi(n-1, aux_rod, to_rod, from_rod);
return 0;
}
