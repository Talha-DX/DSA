#include<iostream>
using namespace std;

#define max 5

struct Queue
{
  int arr[max];
  int front, end;	
};

void init(Queue &q)
{
	q.front = -1;
	q.end = -1;
}

void isEmpty(Queue &q)
{
	if(q.front == -1 && q.end == -1)
	{
		cout<<"Queue is Empty"<<endl;
	}
	else{
		cout<<"Queue is not Empty."<<endl;
	}
}

void isFull(Queue &q)
{
    if(q.end == max-1)
	{
		cout<<"Queue is Full"<<endl;
	}
	else
	{
		cout<<"Queue is not Full."<<endl;
	}	
}

void enqueue(Queue &q, int v)
{
	if(q.end == max-1)
	{
		cout<<"No Space. Queue is Full"<<endl;
		return;
	}
	if(q.front == -1 && q.end == -1){
	  q.front = q.end = 0;
	}
	else{
		q.end++;
	}
    q.arr[q.end] = v;
	cout<<"Added Value: "<<v<<endl; 
	
}
void dequeue(Queue &q)
{
	if(q.front == -1 && q.end == -1)
	{
		cout<<"Queue is Empty"<<endl;
		return;
	}
	cout<<q.arr[q.front] <<" removed from the Queue"<<endl;
	if(q.front == q.end)
	{
		q.front = q.end = 0;
	}
	else{
		q.front++;
	}
	
}

void Redo(Queue &q)
	{
	q.front--;
	cout<<"Redo"<<endl;  	
	}
	
void display(Queue &q)
{
	if(q.front == -1 && q.end == -1)
	{
		cout<<"Queue is Empty"<<endl;
		return;
	}
	cout<<"Queue ";
    for(int i=q.front;i<=q.end;i++)
	{
		cout<<q.arr[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	Queue q;
    init(q);
    
//	isEmpty(q);
	
//	enqueue(q,100);
//	enqueue(q,200);
//	enqueue(q,300);
//	enqueue(q,400);
//	enqueue(q,500);
//
//		
//	dequeue(q);
//	
//	isFull(q);
//	
//	display(q);
//	
//	Redo(q);
//	
//	display(q);
	
	return 0;
}
