//Multiple Inheritance

#include<bits/stdc++.h>
using namespace std;

class Personal
{
    protected:
    char name[25], surn[25], add[100],dob[11];
    int mob;
public:

    void getper()
    {
        cout<<"\nEnter the following details.\n";
        cout<<"\nName: ";
        cin>> name;
        cout<<"\nSurname: ";
        cin>>surn;
        cout<<"\nAddress: ";
        cin.ignore();
        cin.get(add,100);
        cout<<"\nMobile No.: ";
        cin>>mob;
        cout<<"\nEnter Date of Birth (DD/MM/YYYY): ";
        cin.ignore();
        cin>>dob;
            cin.ignore();
    }
   void display1()
    {
        cout << "\nPrinting Details:";
        cout<<"\nName: "<<name<<endl;
        cout<<"\nSurname: "<<surn<<endl;
        cout<<"\nAddress: "<<add<<endl;
        cout<<"\nMobile No.: "<<mob<<endl;
        cout<<"\nDate of Birth: "<<dob<<endl;
    }
};

class Proffesional
{
    protected:
    char nam_org[50],job_pro[25], pro[50];
    public:

    void getpro()
    {
        cout<<"\nEnter the following details.\n";
        cout<<"\nName of Organization: ";
        cin.get(nam_org,50);
        cout<<"\nJob Profile: ";
        cin.ignore();
        cin.get(job_pro,25);
        cout<<"\nProject: ";
        cin.ignore();
        cin.get(pro,50);
    }
    void display2()
    {
        cout<<"\nName of Organization: "<<nam_org<<endl;
        cout<<"\nJob Profile: "<<job_pro<<endl;
        cout<<"\nProject: "<<pro<<endl;
    }
};

class Academic
{
    protected:
    int year_p, cgpa;
    char cllge[50], bran[25];
    public:

    void getaca()
    {
        cout<<"\nEnter the following details.\n";
        cout<<"\nYear of passing: ";
        cin>> year_p;
        cout<<"\nCGPA: ";
        cin>> cgpa;
        cout<<"\nCollege Name: ";
        cin.ignore();
        cin.get(cllge,50);
        cout<< "\nBranch: ";
        cin.ignore();
        cin.get(bran,25);
    }
    void display3()
    {
        cout<<"\nYear of passing: "<<year_p<<endl;
        cout<<"\nCGPA: "<<cgpa<<endl;
        cout<<"\nCollege Name: "<<cllge<<endl;
        cout<< "\nBranch: "<<bran<<endl;
    }
};
class Biodata :  public Personal,public Proffesional,public Academic
{
    public:

         void getData()
                      {
                          this->getper();
                          this->getpro();
                          this->getaca();
                      }
        void showData()
                    {
                        this->display1();
                        this->display2();
                        this->display3();
                    }
};
int main()
{
    Biodata b;
    b.getData();
    b.showData();
}
