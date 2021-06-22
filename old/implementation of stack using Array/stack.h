#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
template<typename T>
class stackarr
{
    T*data;
    int nextindex;
    int length;
public:
    stackarr(int size)
    {
        nextindex=0;
        data=new T[size];
        length=size;
    }
    int getsize()
    {
        return nextindex;
    }
    bool isempty()
    {
        return nextindex==0;
    }
    T top()
    {
        if(isempty())
        {
            cout<<"stack is empty!"<<endl;
            return 0;
        }
        return data[nextindex-1];
    }
    void push(T element)
    {
        if(nextindex==length)
        {
            cout<<"stack is full!"<<endl;
            return ;
        }
        data[nextindex]=element;
        nextindex++;
    }
    T pop()
    {
        if(isempty())
        {
            cout<<"stack is empty!"<<endl;
            return 0;
        }
        T temp=data[nextindex-1];
        nextindex--;
        return temp;
    }
};



#endif // STACK_H_INCLUDED
