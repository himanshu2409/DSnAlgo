#include<iostream>
using namespace std;
#include"stack.h"
int main()
{
    stackarr<int>s(5);
    s.push(10);
     s.push(20);
      s.push(30);
       s.push(40);
        s.push(50);
        cout<<s.getsize()<<endl;
        cout<<s.top()<<endl;
        while(!s.isempty())
        {
            cout<<s.pop()<<endl;
        }
        cout<<s.getsize()<<endl;

}
