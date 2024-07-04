#include <iostream>
#define CSTDDEF_H
#include "header.h"
 
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
        std::cout << tmp->val << ' ';  
        tmp = tmp->next; 
    }
    std::cout << '\n'; 
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
    return *(this->getptr(index)); 
}
int linkedlist::find(int value) {
    node* tmp = start; 
    int idx = 0; 
    while(tmp != nullptr) {
        if (tmp->val == value) return idx; 
        idx++; 
        tmp = tmp->next; 
    }
    return -1;    
}

void linkedlist::replace(int oldval, int newval) {
    node* tmp = start; 
    while (tmp != nullptr) {
        if (tmp->val == oldval) {
            tmp->val = newval;
            break; 
        }  
        tmp = tmp->next; 
    }
}

void linkedlist::replace_all(int oldval, int newval) {
    node* tmp = start; 
    while (tmp != nullptr) {
        if (tmp->val == oldval) {
            tmp->val = newval; 
        }
        tmp = tmp->next; 
    }
}

int* linkedlist::getptr(int index) {
    if (index < 0) index = this->length() + index; 
    int iter = 0; 
    node* tmp = start;
    while (iter != index) {
        
        if (tmp == nullptr) throw_exeption("List index in out of range"); 
        tmp = tmp->next; 
        iter++; 
    } 
    return &(tmp->val);
}
void linkedlist::insert(int index, int value) {
    if (index < 0) index = this->length() + index;
    if (index == 0) {
        this->append_begin(value); 
        return; 
    }
    int shf = index - 1; 
    int iter = 0; 
    node* tmp = start; 
    while (iter != shf) {
        if (tmp == nullptr) this->throw_exeption("List index is out of range"); 
        tmp = tmp->next; 
        iter++; 
    }
    node* ptr = new node{value, tmp->next};
    tmp->next = ptr; 
}
void linkedlist::throw_exeption(const char* err_msg) {
    std::cout << err_msg << '\n'; 
    std::terminate();

}

