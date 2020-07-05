#include<bits/stdc++.h>
using namespace std;

struct stud
    {
        int roll, year, r;
        string name;
    };

    void showRank(int r)
    {
        cout<<"Rank is: "<<r<<"\n";
    }
    void showRank(stud s)
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
     void showRank(stud s, int r)
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
       // FUNTION OVERLOADING
          showRank(1000);                               //integer input

          struct stud s;

          showRank(s);                                  //student details input
          showRank(s,1000);                        // student details and rank input



}
