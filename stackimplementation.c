#include<stdio.h>
#include<conio.h>
#define SIZE 3
int stack[SIZE];
int top=-1;


void push(int ele)
{
  if(top==SIZE-1)
  {
    printf("Stack overflow\n");
  }
  else 
  {
   top++;
   stack[top]= ele;
  }
}

int pop()
{
  if(top==-1)
  {
    printf("Stack underflow\n");
  }
  else
  {
    return stack[top];
    top--;
   }
}
 

void display() 
{
  
  
  if(top==-1)
  {
    printf("Stack underflow\n");
  }
  else 
  {
   printf("The stack elements are: \n ");
   for(int i=top;i>=0;i--)
   {
     printf("%d ", stack[i]);
     printf("\n");
   }
   }
}
int main()
{
  int ele,choice;
  printf("Enter a number 1.PUSH 2.POP 3.DISPLAY\n");
  scanf("%d", &choice);
  for(;;)
{
  switch(choice)
  {
   case 1:
    {
      printf("Enter the element to be pushed\n");
      scanf("%d", &ele);
      push(ele);
      break;
    }
    case 2:
    {
     pop();
     printf("\nThe element popped is %d", stack[top]);
     break;
     }
    case 3:
    {
     display();
     break; 
    }
    default:
    {
      printf("\nEnter a valid number");
      break;
    }
  } 
   printf("Enter a number 1.PUSH 2.POP 3.DISPLAY\n");
  scanf("%d", &choice); 
}

 return 0;
}s