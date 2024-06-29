#ifndef HEADER
#define HEADER

#include <iostream>
using namespace std;

class node {
    public:
        int val;
        node* next;  
        node(int, node*); 
}; 

class linkedlist {
    private:
        node* start; 
        node* end;
    public:
        linkedlist(); 
        bool is_empty();  
        size_t length();  
        void append_begin(int);
        void append_end(int); 
        void pop_begin(); 
        void pop_end(); 
        void display(); 
        int get(int);
}; 
#endif
