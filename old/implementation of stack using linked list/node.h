#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED
template<typename T>
class node {
    public :
        int data;
        node <T>*next;

        node(int data) {
            this -> data = data;
            next = NULL;
        }
};




#endif // NODE_H_INCLUDED
