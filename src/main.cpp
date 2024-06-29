#include "headers/header.h"

int main() {
    linkedlist list;
    list.append_begin(56); 
    list.append_end(34);  
    list.append_begin(45); 
    list.append_end(6); 
    list.display(); 
    cout << list.length() << '\n'; 
    cout << list.get(-1) << '\n'; 
    cout << list.get(-2) << '\n'; 
    cout << list.get(-3) << '\n'; 
    cout << list.get(-4) << '\n';
    cout << list.get(-10) << '\n'; 
    return 0;  
}
