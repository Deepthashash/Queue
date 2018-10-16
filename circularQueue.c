#include<stdio.h>
#define MAX 3

int cq[MAX];
int front = 0;
int back = 0;
int count = 0;
int val;

void enque()
{
	printf("Enter the value\n");
	scanf("%d",&val);
	if(count == MAX)
		printf("Overflow\n");
	else
	{
		cq[back] = val;
		back = (back + 1) % MAX;
		count++;
	}
}

void deque()
{
	if(count == 0)
		printf("Underflow\n");
	else
	{
		front = (front + 1) % MAX;
		count--;
	}
}

int peek()
{
	if(count == 0)
		printf("Underflow\n");
	else
	{
		printf("%d\n",cq[front]);
	}
}

int display()
{
	int j = count;
	for(int i=front;j!=0;j--)
	{
		printf("%d ",cq[i]);
		i = (i+1)%MAX;
	}
}

int main()
{
	int option;
	do{
		printf("Enter '1' to enque\n");
		printf("Enter '2' to deque\n");
		printf("Enter '3' to peek\n");
		printf("Enter '4' to display\n");
		printf("Enter '5' to exit\n");
		scanf("%d",&option);
		
		switch(option)
		{
			case 1:
			enque();
			break;
			case 2:
			deque();
			break;
			case 3:
			peek();
			break;
			case 4:
			peek();
			break;
		}	
	}while(option!=5);
}
