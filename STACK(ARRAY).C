#include<stdio.h>
#include<conio.h>
int stack[100],choice=0,n,i,j,top= -1;

void push ();
void pop();
void show();
void main()
{
clrscr();
printf("enter the number of elements in the stack ");
scanf("%d",&n);
printf("\nstack operations using array ");
printf("\n------------------------------");
while(choice!=4){
printf("\n choice one option from below ");
printf(" \n 1.push");
printf("\n2.pop");
printf("\n3.show");
printf("\n4.exit");
printf("\n enter your choice ");
scanf("%d",&choice);
switch (choice )
{
    case 1:
    {
	push();
	break;
   }
   case 2:
   {
       pop();
       break;
   }
   case 3 :
   {
      show();
      break;

   }
    case 4 :
   {
      printf("\n now u can exit");
      break;

   }
   default :
   {
       printf("\n invalid choice ");
   }
}
}
}
void push ()
{
    int val;
    if(top==n)
    {
	printf("\nstack is over flow ");
	printf("\n--------------------------");
    }
    else {
	printf( " \n enter the element ");
	scanf("%d",&val);
	top=top+1;
	stack[top]=val;

    }
}
void pop()
{
    int val;
    if (top==-1)
    {
	printf("\n underflow");
	printf("\n------------------------");

    }
    else
    {
       top=top-1;

    }

}
void show()
   {
    for(i=top;i>=0;i--)
   {
	printf("%d\n",stack[i]);

    }
    if(top==-1)
  {
	printf("\n stack is empty");
	printf("\n------------------------------");
    }
    }



