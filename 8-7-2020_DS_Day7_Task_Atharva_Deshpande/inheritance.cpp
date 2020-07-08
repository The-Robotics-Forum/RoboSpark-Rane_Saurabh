#include<bits/stdc++.h>
using namespace std;

class personal{
    public:
    string name;
    string surname;
    int mob_num;
    string dob;
    

    personal(){
        cout << "Enter your first name : \n";
        cin >> name;
        cout << "Enter your last name : \n";
        cin >> surname;
        cout << "Enter your mobile number : \n";
        cin >> mob_num;
        cout << "Enter your date of birth in the format(DD/MM/YYYY) : \n";
        cin >> dob;
    }

};

class professional{
    public:
    string name_org;
    string job_pro;
    string project;
    char temp;
    professional(){
        cout << "Name of your organisation : \n";
        cin >> name_org;
        cout << "Your profile (Employee/businessman/student) : \n";
        cin >> job_pro;
        cout << "Your project title: \n";
        cin >> project;  
    }
};

class academic{
    public: 
    int year_pass;
    float cgpa;
    string col_name;
    string branch;
    academic(){
        cout << "Enter your year of passing :\n";
        cin >> year_pass;
        cout << "Enter your cgpa : \n";
        cin >> cgpa;
        cout << "Enter college name : \n";
        cin >> col_name;
        cout << "Enter your branch : \n";
        cin >> branch;
    }
};


class biodata : public personal , public professional , public academic{
    public:
    biodata(){
        display();
    }
    void display(){
    cout << "\n\nYour entered info :-- \n";
    cout << "Name :" << name << endl;
    cout << "Surname :" << surname << endl;
    cout << "Mobile no. :" << mob_num << endl;
    cout << "DOB :" << dob << endl;
    cout << "Name of organisation :" << name_org << endl;
    cout << "Profile :" << job_pro << endl;
    cout << "Project title :" << project << endl;
    cout << "Year of passing :" << year_pass << endl;
    cout << "CGPA :" << cgpa << endl;
    cout << "College :" << col_name << endl;
    cout << "Branch :" << branch << endl;
    cout << "Thanks for the info...";
    }
};

int main(){
    cout << "Enter your Bio-data ::: \n";
    biodata a;
}