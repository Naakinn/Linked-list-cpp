#include <iostream>
#define CSTDDEF_H
#include "header.h"

int main() {
	// Usage example
    linkedlist list1{};
    list1.append_begin(56); 
    list1.append_end(34);  
    list1.append_begin(45); 
    list1.append_end(6); 
    list1.display(); 
	 
	// Your code here
	
    return 0;  
}
