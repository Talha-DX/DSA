#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};

void insertbeg(Node* &head, int value)
{
	Node* box = new Node();
	box->data = value;
	box->next = head;
	head = box;
	cout<<"Successfully added."<<endl;
}

void insertEnd(Node* &head, int value)
{
	Node* box = new Node();
	box->data = value;
	box->next = NULL;
	
	if(head == NULL)
	{
		head = box;
		cout<<"Successfully Added."<<endl;
		return;
	}
	
	Node* temp = head;
	while(temp->next != NULL)
	{
		temp = temp->next;
	}
	
	temp->next = box;
	cout<<"Successfully Added."<<endl;
	
}

void insertCen(Node* &head, int pos, int value)
{
	Node* box = new Node();
	box->data = value;
	
	if(pos == 0)
	{
		insertbeg(head, value);
		return;
	}
	
	Node* temp = head;
	
	for(int i=0;i<pos-1;i++)
{
	if(temp == NULL)
	{
		cout<<"Value is out of Bound. Sorry"<<endl;
		return;
	}
	temp = temp->next;
}
box->next = temp->next;
temp->next = box;
}

void display(Node* &start)
{
	Node* temp = start;
	
	while(temp != NULL)
	{
		cout<<temp->data<<" -> ";
		temp = temp->next;
	}
	cout<<"NULL"<<endl;
}

void insertfrodele(Node* &head)
{
	if(head == NULL)
	{
		cout<<"List is empty."<<endl;
	}
	Node* temp = head;
	head = head->next;
	delete temp;
	
	cout<<"Successfully Deleted the Node at the Front."<<endl;
}
void insertEnddele(Node* &head)
{
	if(head == NULL)
	{
		cout<<"List is empty."<<endl;
	}
	
	if(head->next == NULL)
	{
		delete head->next;
		cout<<"Successfully Deleted the Node at the End."<<endl;
	}
	Node* temp = head;
	while(temp->next->next != NULL)
	{
		temp = temp->next;
	}
	delete temp->next;
	temp->next = NULL;
	cout<<"Successfully Deleted the Node at the End."<<endl;
}

void insertPosdele(Node* &head, int pos)
{
	if(head == NULL)
	{
		cout<<"List is empty."<<endl;
	}
	
	if(pos == 0)
	{
		insertfrodele(head);
		return;
	}
	
	Node* temp = head;
	
	for(int i=0;i<pos-1;i++)
{
	if(temp == NULL)
	{
		cout<<"Value is out of Bound. Sorry"<<endl;
		return;
	}
	temp = temp->next;
}
  delete temp->next;
}

void update(Node* head,int pos,int value)
{
	Node* temp = head;
	int index = 0;
	
	while(temp != NULL)
	{
		if(index == pos)
		{
			temp->data = value;
			cout<<"Successfully Updated."<<endl;
			return;
		}
		temp = temp->next;
		index++;
	}
	cout<<"Can't able to find. Out of bound"<<endl;
}

void reverse(Node*& head){
	Node* prev = NULL;
	Node* curr = head;
	Node* next = NULL;
	
	while(curr != NULL){
		next = curr->next;
		curr->next =prev;
		prev = curr;
		curr = next;
	}
	head = curr;
}
int main()
{
	Node* head = NULL;
	
	int choice;
	
	while(choice != 6)
	{
		cout<<"-------------------------"<<endl;
		cout<<"...Linked List Project..."<<endl;
		cout<<"-------------------------"<<endl;
		cout<<"1: Add Link "<<endl;
		cout<<"2: Delete Link "<<endl;
		cout<<"3: Update Link "<<endl;
		cout<<"4: Reverse Link "<<endl;
		cout<<"5: Display All Link "<<endl;
		cout<<"6: Exit: "<<endl;
		cout<<"Enter your Choice: ";
		cin>>choice;
	

switch(choice)
{
	case 1:
		int add;
		cout<<"----------------"<<endl;
		cout<<"1: At the Front "<<endl;
		cout<<"2: At the End "<<endl;
		cout<<"3: Randomly Add "<<endl;
		cout<<"----------------"<<endl;
		cout<<"Enter your choice: ";
		cin>>add;
		if(add == 1)
		{
			int value;
			cout<<"Enter Value you want to Insert at Begining: ";
			cin>>value;
			insertbeg(head,value);
		}
		else if(add == 2)
		{
			int data;
			cout<<"Enter Value you want to Insert at End: ";
			cin>>data;
			insertEnd(head, data);
		
		}
		else if(add == 3)
		{
			int d, p;
			cout<<"Enter Value you want to Insert: ";
			cin>>d;
			cout<<"Enter Position: ";
			cin>>p;
			insertCen(head,p,d);
		}
		else
		{
		cout<<"Wrong Choice."<<endl;
		}
		cout<<"----------------"<<endl;
	break;
	
	case 2:
		int dele;
		cout<<"----------------"<<endl;
		cout<<"1: At the Front "<<endl;
		cout<<"2: At the End "<<endl;
		cout<<"3: Randomly Delete "<<endl;
		cout<<"----------------"<<endl;
		cout<<"Enter your choice: ";
		cin>>dele;
		if(dele == 1)
		{
			insertfrodele(head);
		
		}
		else if(dele == 2)
		{
		    insertEnddele(head);
		}
		else if(dele == 3)
		{
			int pos, value;
			cout<<"Enter Position you want to delete Node: "<<endl;
			cin>>pos;	
		    insertPosdele(head, pos);
		}
		else
		{
			cout<<"Wrong Choice."<<endl;
		}
		cout<<"----------------"<<endl;
	break;
	
	case 3:
		int pos, value;
		cout<<"Enter position where you want to change the value: "<<endl;
		cin>>pos;
		cout<<"Enter value to change: "<<endl;
		cin>>value;
			update(head,pos,value);
	break;
	
	case 4:
			reverse(head);
	break;
	
	case 5:
			display(head);
	break;
	
	case 6:
			cout<<"Program is Quiting."<<endl;
	break;
	
	default:
	cout<<"Your're Choice was Wrong...Try again.'"<<endl;	
	break;
}
}
}




