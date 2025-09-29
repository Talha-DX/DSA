#include <iostream>
using namespace std;

void add(int num[], int &c)
{
	if(c >= 10){
		cout<<"No space left."<<endl;
		return;
	}

	int n,p;
	cout << "Enter Number to add: " << endl;
	cin >> n;
	cout << "In which position you want to add value: " << endl;
	cin >> p;

	for (int i = c ; i > p ; i--)
	{
		num[c] = num[c-1];
	}

	num[p] = n;
	c++;

	cout<<"Value added Successfuly. "<<c<<endl;
	
}

void dele(int num[], int &c)
{
	int d;
	cout<<"Enter Position which you want to Delete: "<<endl;
	cin>>d;

    for (int i = d; i <= c-1; i++)
	{
		num[c] = num [c+1];
	}
   
	c--;
	
    cout<<"Deleted Successfully..."<<endl;

}

void dis(int num[], int &c)
{
  for (int i = 0; i < c; i++)
  {
	cout<<num[i]<<" ";
  }
  
}

void up(int num[], int &c)
{
	int u, n;

	cout<<"Which value you want to Change: "<<endl;
	cin>>u;
	cout<<"Enter New Value: "<<endl;
	cin>>n;
     
    cout<<"Value Changed -> "<<num[u]<<" to "<<n<<endl;

	num[u] = n;
    
}

int main()
{
	int c = 0;
	int num[10];
	int choice;
	while (choice != 5)
	{
		cout << "\n...Number Machine..." << endl;
		cout << "1: Add Number: " << endl;
		cout << "2: Delete Number: " << endl;
		cout << "3: Display Number: " << endl;
		cout << "4: Update Number: " << endl;
		cout << "5: Exit: " << endl;
		cout << "Enter your choice:";
		cin >> choice;

		switch (choice)
		{
		case 1:
			add(num, c);
			break;

		case 2:
			dele(num, c);
			break;

		case 3:
			dis(num, c);
			break;

		case 4:
			up(num, c);
			break;

		case 5:
			cout << "Exiting program...." << endl;
			break;

		default:
			cout << "You enter Wrong choice. Try again." << endl;
			break;
		}
	}

	return 0;
}
