#include<bits/stdc++.h>
using namespace std;

class String
{

public:
    char str[25];

    String(char s[])
        {
            strcpy(str, s);
        }
        void operator*(int t);
        void operator +(String &s);
         friend istream& operator >> (istream &cin, String &s);
        void display();
};
istream& operator >> (istream &cin, String &s)
{
   cout << "\nEnter String: \n";
   cin>> s.str;

}
void String::operator*(int t)
        {
            cout<<"\nFinal String: ";
            for(int i=0;i<t;i++)
            {
                cout<<str;
            }
            cout<<endl;
        }
void String :: operator+(String& s1)
{
    strcat(str,s1.str);
    String temp(str);
    temp.display();
}
void String:: display()
{
    cout<<"\nConcatenated String: "<<str<<endl;
}

int main()
{
    String s1(""), s2(""), s3("");

    cout<< "For Concatenation";
    cin>> s1;
    cin>>s2;
    s1+s2;

    cout<<"\nFor String Multiplication";
    cin>>s3;

    cout<<"\nEnter Number";
    int t;
    cin>>t;
    s3*t;
}
