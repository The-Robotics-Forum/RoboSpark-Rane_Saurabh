#include<bits/stdc++.h>
using namespace std;

class student
{
    public:
    string name;
    int roll;
    int cgpa;
    int *marks = new int[5];
    int sum=0;

   
    student (){
        cout << "Give the information:\n";
        cout << "Name: ";
        cin >> name;
        cout << "Roll No: ";
        cin >> roll;
    }
    void total_marks(){
        for( int i = 1; i <= 5; i++ )     
	{
        cout << "Enter the marks of subject "<<i<<" : ";
		 cin >>  *(marks+i);
	}
	for( int i = 1; i <= 5; i++ )            
	{
		sum += *(marks+i);
	}
    cout <<"total marks: "<<sum<<endl;
    delete[] marks;
    }

};

int main()
{
    student s; 
    
    s.total_marks();

}