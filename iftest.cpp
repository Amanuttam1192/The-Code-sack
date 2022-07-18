#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
       int a[5];
       int c=0;
       for(int i=0;i<5;i++)
       {
           cin>>a[i];
           if(a[i]==1)
           {
            c++;
           }
       }
       if(c==0)
       {
           cout<<"Beginner"<<"\n";
       }
       else if(c==1)
       {
           cout<<"Junior Developer"<<"\n";
       }
        else if(c==2)
       {
           cout<<"Middle Developer"<<"\n";
       }
       else if(c==3)
       {
           cout<<"Senior Developer"<<"\n";
       }
       else if(c==4)
       {
           cout<<"Hacker"<<"\n";
       }
       else
       {
           cout<<"Jeff Dean"<<"\n";
       }
    }
}
