//
//  main.cpp
//  lecture 24
//
//  Created by Prince  Kumar on 11/04/19.
//  Copyright © 2019 Prince  Kumar. All rights reserved.
//  -- Inline functions  in c++ --

#include <iostream>
using namespace std;

inline int add(int x , int y)
{
    return x+y;
}

int main()
{// main block
   
    int a, b;
    cout<<"Enter two numbers : "<<endl;
    cin>>a>>b;
    int res = add(a,b);
    cout<<"Result is : "<<res<<endl;
}

