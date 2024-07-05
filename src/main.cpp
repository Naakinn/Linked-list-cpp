#include <iostream>
#define CSTDDEF_H
#include "header.h"

int main() {
    linkedlist list1{};
    list1.append_begin(56); 
    list1.append_end(34);  
    list1.append_begin(45); 
    list1.append_end(6); 
    list1.display(); 

	linkedlist list2{}; 
	list2.append_begin(1); 
	list2.append_begin(1); 
	list2.append_begin(1);
    list2.append_begin(1); 	
	list2.append_begin(1);

	list1.insert(4, 56565); 
	list1.display();
    return 0;  
}
