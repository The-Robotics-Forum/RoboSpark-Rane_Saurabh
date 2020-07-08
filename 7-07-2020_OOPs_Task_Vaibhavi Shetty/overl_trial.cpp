#include<bits/stdc++.h>
using namespace std;

class String
{
       public:
        char s1[25], s2[25];
        String()
        {

        }
        String(char str1[], char str2[])
        {
            strcpy(s1,str1);
            strcpy(s2, str2);
        }
        friend istream& operator >> (istream &cin, String s);
        friend void operator+(String s);

};
void operator+(String s)
        {
            string scat = strcat(s.s1,s.s2);
            cout<< "\nFinal String: "<<scat;
        }
void operator*(int t, String s)
        {
            cout<<"\nFinal String: \n";
            for(int i=0;i<t;i++)
            {
                cout<<s.s1;
            }
        }

istream& operator >> (istream &cin, String s)
{
   cout << "Enter String1: \n";
   cin>> s.s1;
    cout << "\nEnter String2: \n";
   cin>> s.s2;

   +s;
     2*s;

}
ostream& operator >> (ostream &cout, string s)
{
    cout << "The Final String: "<< s;
}


int main()
{
    String s;
    cin>> s;

}
