//
//  main.cpp
//  lecture 17
//
//  Created by Prince  Kumar on 08/04/19.
//  Copyright © 2019 Prince  Kumar. All rights reserved.
//  -- ** functions in c++  **  --- //

#include <iostream>
using namespace std;
int add(int x , int y);  // function declaration

int add(int x , int y)
{
    return x+y;
}

int sub(int x , int y);  // function declaration

int sub(int x , int y)  // function define
{
    return x-y;
}

void pattern();   // function declare
/*void pattern()
{
    cout<<"Hello world by Prince "<<endl;
}*/

int main()
{
    cout<<"Enter two numbers : "<<endl;
    int a,b; cin>>a>>b;
   // int b;
    int result = add(a,b);   // function call
    int ans = sub(a,b);
    cout<<result<<endl;
    cout<<"sub value : "<<ans<<endl;
    pattern();
    //cout<<pattern()<<endl;
}

void pattern()
{
    cout<<"Hello world by Prince "<<endl;
}
