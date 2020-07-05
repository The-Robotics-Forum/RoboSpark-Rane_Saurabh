#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll, year;
    double sum=0, cgpa;

    Student()
    {
        //default constructor
        name = "default name";
        roll = 0;
        cgpa = 0;
        year = 0;
    }
    Student(string n, int r, int y)
    {
        name = n;
        roll = r;
        cgpa = 0;
        year = y;
    }

    void input()
    {
        cout << "Give the input:\n";
        cout << "Name: ";
        cin >> name;
        cout << "Roll No: ";
        cin >> roll;
        cout << "Year ";
        cin >> year;

        Student s(name,roll,year);
    }

    int total_marks(double *arr)
    {
        for(int i=0; i<5 ;i++)
        {
            cout<<"Enter Mark\n" ;
            cin >>arr[i] ;
            sum=sum+arr[i];
        }
        return sum;
    }

    double fcgpa(double total)
    {
        double per = total/5;
        cgpa = per/9.5;
    }

    void display()
    {
        cout << "\nName: "<< name <<"\n";
        cout << "Roll No.: "<< roll <<"\n";
        cout << "Year: "<< year <<"\n";
        cout << "CGPA: "<< cgpa <<"\n";
    }

};

int main()
{
     Student stud;

     stud.input();

     double *arr = new double[5];
     double sum1=stud.total_marks(arr);
     delete arr;

     stud.fcgpa(sum1);
     stud.display();
}
