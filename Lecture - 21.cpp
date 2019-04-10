//
//  main.cpp
//  jcscs
//
//  Created by Prince  Kumar on 10/04/19.
//  Copyright © 2019 Prince  Kumar. All rights reserved.
//  pointers in c++

#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    // cout<<a<<endl;
    // we make pointer variable to store address of variable a
    
    // ******
    int *p;  // pointer variable
    p = &a;
    
    //  p --> address of variable
    //  *p --> value of data present on that address
    
    cout<<"address of a : "<<p<<endl;
    cout<<"Value present at that address : "<<*p<<endl;
    cout<<&p<<endl;
    
    // int *ptr; --> pointer variable
    
    // ptr
    // *ptr
    // &ptr
    
}
