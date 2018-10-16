#include<stdio.h>
#define max 10

int queue[max];
int front=-1;
int back=-1;
int val;

int isempty()
{
	if(front == -1 || back < front)
		return 1;
	else return 0;
}

int isfull()
{
	if(back == max-1)
		return 1;
	else return 0;
}

void enque()
{
	printf("Enter the value you want to insert\n");
	scanf("%d",&val);
	if(isfull() == 1)
		printf("Queue is full\n");
	else if(front == -1 && back == -1)
	{
		front = back = 0;
		queue[back] = val;
	}
	else
	{
		back++;
		queue[back] = val;
	}
	
}

void deque()
{
	if(isempty() == 1)
		printf("Queue is empty\n");
	else
	{
		val = queue[front];
		front ++;
		if(front > back)
			front = back = -1;
		printf("The deleted value is %d\n",val);
	}
}

void peek()
{
	if(isempty() == 1)
		printf("Queue is empty\n");
	else
		printf("%d",queue[front]);
}

void display()
{
	for(int i=front;i<=back;i++)
	{
		printf("%d ",queue[i]);
	}
	
	printf("\n");
}

int main()
{
	int option;
	do
	{
		
		printf("To enque enter '1' \n");
		printf("To deque enter '2' \n");
		printf("To peek enter '3' \n");
		printf("To display enter '4' \n");
		printf("To exit enter '5' \n");
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
			display();
			break;	
		}
	}while(option != 5);
	return 0;
}




