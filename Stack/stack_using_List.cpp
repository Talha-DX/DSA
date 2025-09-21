#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
};

Node* head = NULL;

void push(int v)
{
	Node* Nnew = new Node();
	Nnew->data = v;
	Nnew->next = head;
	head = Nnew;
	cout<<v<<" is Added to Stack"<<endl;
}

void pop()
{
	if(head == NULL)
	{
   		cout<<"Stack is empty."<<endl;
   		return;
	}
	Node* temp = head;
	head = head->next;
	cout<<"Successfully Deleted."<<temp->data<<endl;
	delete temp;

}

void isEmpty()
{
   	if(head == NULL){
   		cout<<"Stack is empty."<<endl;
	}
	else{
		cout<<"Stack is not Empty."<<endl;
	}
}

void peek()
{
	if(head == NULL){
   		cout<<"Stack is empty."<<endl;
	  return;
	}
	cout<<"Top Element in stack is: "<<head->data<<endl;
}

void display()
{
	if(head == NULL){
   		cout<<"Stack is empty."<<endl;
	  return;
	}
	
	Node* temp = head;
	cout<<"...Stack Elements..."<<endl;
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
	
}

int main()
{
	push(100);
	push(200);
	push(300);
	
	peek();
	
	pop();
	
	isEmpty();
	
	display();
return 0;	
}



