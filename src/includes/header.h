#ifndef CSTDDEF_H
#include <cstddef>
#endif

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
        void throw_exeption(const char*); 
    public:
        linkedlist(); 
        bool is_empty();  
        std::size_t length();  
       void append_begin(int);
        void append_end(int); 
        void pop_begin(); 
        void pop_end(); 
        void display(); 
        int get(int);
        int find(int);
        void replace(int, int); 
        void replace_all(int, int); 
        int* getptr(int); 
        void insert(int, int);  
}; 
