#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include"node.h"
using namespace std;
template<typename T>

class stack
{ node<T>*head;
int size;
int x;
public:
    stack(int size)
    {    size=0;
     node<T>*head=NULL;
    }
    int getsize()
    {
        return size;
    }
    bool isempty()
    {
       return size==0;
    }
   T top()
   { if(isempty())
   {
       cout<<"stack is empty"<<endl;
       return 0;
   }
   return head->data;

   }
   T pop()
   { if(isempty())
      {
          cout<<"stack is empty"<<endl;
       return 0;
      }
      node<T>*temp=head;
      head=head->next;
      size--;
      T data=temp;
      delete(temp);
      return data;

   }
   void push(T element)
   {
       node*temp=head;
       head=head->next;
       delete(temp);
   }


};



#endif // STACK_H_INCLUDED
