#include<bits/stdc++.h>
using namespace std;

class student
    {   
        public:
        string name;
        int roll;
        int year;
        int rank;
    };

    void showRank(int r)
    {
        cout<<"Rank is: "<<r<<"\n";
    }
    void showRank(student s)
    {
        cout << "Name: ";
        cin >> s.name;
        cout << "Roll No: ";
        cin >> s.roll;
        cout << "Year: ";
        cin >> s.year ;

        cout<<"\nName: "<<s.name<<"\n";
        cout<<"Roll No.: "<<s.roll<<"\n";
        cout<<"Year: "<<s.year<<"\n";
        cout << "No Rank"<<"\n";
    }
     void showRank(student s, int r)
    {
        cout << "Name: ";
        cin >> s.name;
        cout << "Roll No: ";
        cin >> s.roll;
        cout << "Year: ";
        cin >> s.year ;

        cout<<"\nName: "<<s.name<<"\n";
        cout<<"Roll No.: "<<s.roll<<"\n";
        cout<<"Year: "<<s.year<<"\n";
        cout<<"Rank: "<<r<<"\n";
    }



int main()
{
      
    student s;
    showRank(1); 
    showRank(s);                                  
    showRank(s,1);                        
}