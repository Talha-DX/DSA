#include <iostream>
using namespace std;
#define Max 5

int stact[Max];
int top = -1;

void peek(){
	if(top == -1){
		cout<<"Stack is Empty."<<endl;
		return;
	}
	cout<<"Top value is: "<<stact[top]<<endl;
}

void push(int x)
{
	if(top >= Max){
		cout<<"Stack is Full."<<endl;
		return;
	}
	top++;
	stact[top] = x;
	cout<<x<<" Pushed."<<endl;
}

void pop()
{
	if(top == -1){
		cout<<"Stack is Empty."<<endl;
		return;
	}
	stact[--top];
	cout<<"Value Deleted."<<endl;
}

void isEmpty()
{
 if(top == -1){
 	cout<<"Stact is Empty."<<endl;
 }	
 else{
 	cout<<"Stact is not Empty."<<endl;
 }
}

void display()
{
 	if(top == -1){
 	cout<<"Stact is Empty."<<endl;

   }
   else{
	cout<<"Stact Element"<<endl;
	for(int i=0;i<=top;i++){
		cout<<stact[i]<<" ";
	}	
	cout<<endl;
}
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



