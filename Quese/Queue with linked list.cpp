#include<iostream>
using namespace std;

#define max 5

struct Queue
{
int size[max]; 	
int first,end;
};

void init(Queue &q)
{
	q.first = q.end = 0;
}

void isEmpty(Queue &q){
	if(q.first = q.end = -1){
		cout<<"Queue is empty"<<endl;
	}
	else{
		cout<<"Queue is not empty"<<endl;
	}
}

void isFull(Queue &q){
	if(q.end = max-1){
		cout<<"Queue is Full"<<endl;
	}
	else{
		cout<<"Queue is not Full"<<endl;
	}
}

void enqueue(Queue &q, int value)
{
	if(q.end = max-1){
		cout<<"Queue is Full"<<endl;
	    return;
	}
	
	q.end++;
	cout<<value<<" is added."<<endl;
	q.size[q.end] = value;
  	
}

void dequeue(Queue &q){
	if(q.first = q.end = -1){
		cout<<"Queue is Empty."<<endl;
	    return;
	}
	q.first++;
	cout<<q.size[q.first]<<" is Deleted."<<endl;
}

void display(Queue &q)
{
	if(q.first = q.end = -1){
		cout<<"Queue is Empty."<<endl;
	    return;
	}
	
	for(int i=0;i<q.end;i++){
		cout<<q.size[i];
	}
	cout<<endl;
  	
}

int main()
{
	Queue q;
	init(q);
	
	enqueue(q,100);
	enqueue(q,200);
	enqueue(q,300);
	enqueue(q,400);
	
	display(q);
	return 0;
}
