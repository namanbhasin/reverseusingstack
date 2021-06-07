#include<stdio.h>
#define maxstack 10
typedef struct stack{
	int data[maxstack];
	int top;
}stack;
void push(stack *,int);
int pop(stack *);
void display(stack);
int main()
{
	stack s1;
	s1.top=-1;
	int n,a[10],item,i;
	printf("Enter the number of elements you want to enter in stack\n");
	scanf("%d",&n);
	printf("Push the list elements into the stack\n");
	for(i=0;i<n;i++)
	{
		printf("Enter the elements in stack\n");
		scanf("%d",&item);
		push(&s1,item);	
	}
	printf("The reverse list is\n");
	for(i=s1.top;i>=0;i--)
	{
		item=pop(&s1);
		a[i]=item;
	}
	for(i=n-1;i>=0;i--)
	{
		printf("%d\t",a[i]);
	}
	
	return 0;	
}
void push(stack *s1,int item)
{
	if(s1->top==maxstack-1)
		printf("Overflow\n");	
	s1->top++;
	s1->data[s1->top]=item;
	return;
}

int pop(stack *s1)
{
	int item;
	if(s1->top==-1)
	{
		printf("Underflow\n");
		return -1;
	}
	else
	{
		item=s1->data[s1->top];
		s1->top--;
		return item;
	}
}

