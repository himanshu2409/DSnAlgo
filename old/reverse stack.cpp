#include<iostream>
#include<stack>
using namespace std;
int main()
{  int n;
    cin>>n;
    stack<int>s1;
    stack<int>s2;
    for(int k=0;k<n;k++)
        { int a;
    cin>>a;
     s1.push(a);
     }
     int m=s1.size();
     for(int p=0;p<m;p++){
     int j=s1.top();
     s1.pop();
     while(s1.size()-p!=0)
     {
         int i=s1.top();
         s2.push(i);
         s1.pop();
     }
     s1.push(j);
     while(s2.size()!=0)
     {
       int i=s2.top();
       s2.pop();
       s1.push(i);

     }

     }
     while(s1.size()!=0)
     {
         cout<<s1.top()<<endl;
         s1.pop();
     }

}

