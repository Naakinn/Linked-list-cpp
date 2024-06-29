#include "headers/header.h"


node::node(int value, node* next_elem) {
    val = value; 
    next = next_elem; 
}
 
linkedlist::linkedlist(): start{nullptr}, end{nullptr} {}

bool linkedlist::is_empty() { return start == nullptr; }

void linkedlist::append_begin(int value) {
    node* ptr = new node{value, start};
    if (end == nullptr) end = ptr; 
    start = ptr; 
}
void linkedlist::append_end(int value) {
    node* ptr = new node{value, nullptr};  
    if (this->is_empty()) start = end = ptr; 
    else {
        end->next = ptr;
        end = ptr;  
    }
}
void linkedlist::pop_begin() {
    if (!(this->is_empty())) {
        node* tmp = start->next;
        delete start;
        
        if (tmp == nullptr) {
            start = end = nullptr; 
        }
        else {
            start = tmp;  
        }
    }
}
void linkedlist::pop_end() {
    if (!(this->is_empty())) {
        node* tmp = start;
        
        if (tmp->next == nullptr) {
            delete tmp; 
            start = end = nullptr; 
        }
        else {
            while (tmp->next != end) {
                tmp = tmp->next; 
            } 
            delete end; 
            end = tmp; 
            end->next = nullptr; 
        }
    }
}
void linkedlist::display() {
    node* tmp = start; 
    while(tmp != nullptr) {
        cout << tmp->val << ' ';  
        tmp = tmp->next; 
    }
    cout << '\n'; 
}
size_t linkedlist::length() {
    node* tmp = start;
    size_t length = 0;  
    while(tmp != nullptr) {
        length++; 
        tmp = tmp->next; 
    }
    return length; 
}
int linkedlist::get(int index) {
    if (index < 0) index = this->length() + index; 
    int iter = 0; 
    node* tmp = start;
    while (iter != index) {
        
        if (tmp == nullptr) {
            try {
                throw "List index out of range";  
            }
            catch (const char* err) {
                cout << err << '\n';
                terminate();
            }
        }
        tmp = tmp->next; 
        iter++; 
    } 
    return tmp->val; 
}


