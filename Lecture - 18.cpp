//
//  main.cpp
//  lecture 18
//
//  Created by Prince  Kumar on 09/04/19.
//  Copyright © 2019 Prince  Kumar. All rights reserved.
//
// function to decide maxium number

#include <iostream>
using namespace std;
// declare --> function
//int maximum ( int a ,int b );

int maximum(int a , int b )  // a= 5 // b= 6
{
    if(a>b)
        return a;
    else
        return b;
}


int main()
{
    cout<<"We are in main block"<<endl;
    int a1, b1;
    cout<<"Please enter two number : "<<endl;
    cin>>a1>>b1;
    // cin>>a1;
    // cin>>b1;
    int c = maximum(a1,b1);
    cout<<"Bigger number is : "<<<<endl;
}


