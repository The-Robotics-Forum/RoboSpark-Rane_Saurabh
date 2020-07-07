#include<bits/stdc++.h>
using namespace std;

class String
{
	string name;
	public:
	string x;
	string y;
	string sum;

	String()
	{
	sum="";
	cout<<"Enter the string :  ";
	cin>>x;
	}
	string operator +();
	string operator *(int n);
    
};
string String :: operator *(int n)
{
	for(int i=0;i<n;i++)
	sum = sum + x;
    return sum;	
}

string String :: operator + ()
{
    sum = x + y;
    return sum;
}

int main()
{
	char opt;
	String s;
	int i;
	string concat;
    string multi;
    string comp;
	cout<<"Enter the operator (+ or *): \n ";
	cin>>opt;
	if(opt=='+')
	{
    cout<<"Enter second string: ";
	cin>>s.y;
	concat = s.x + s.y ;
	cout<<"\nFinal string : "<<concat<<endl;
    }
    else if(opt=='*')
	{
	cout<<"\nEnter the number for how many times : ";
	cin>>i;
    multi = s * i;
	cout<<"\nFinal string : "<<multi<<endl;
    }
    else{
        cout << "\nWe don't have that operator....";
    }
}