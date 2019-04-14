//
//  main.cpp
//
//  Created by Prince  Kumar on 14/04/19.
//  Copyright © 2019 Prince  Kumar. All rights reserved.
//  Parameterized constructer in c++

// * It is a special type of function.
// * Its name is same as it name of class
// * It has not any return type
// * it must be instance member function not static.

//  Parameterized constructer in c++


#include <iostream>
using namespace std;
class complex
{
private:
    int a,b;
public:
    complex(int x , int y) // constructer bascically --> function
    {a=x ; b=y;}
    
    complex (int x)  // Parameterized constructer
    { a= x ;}
    
    complex()  // default constructer
    { }
};

 /*class box
{
public:
    int a;
    
    box(int x)  // Parameterized constructer
    {a=x;}
    
    box()  // default constructer
    { }
}; */

class box
{
private:
    int len;
    
public:
    
    void set_data(int x);  // function define
    /*
     void set_data(int x)
     { len =x ;}
     */
     
};
// return type   class_name :: function_name   declare

void box ::  set_data(int x)
{
    len=x;
}


int main()
{
   complex c1(2,3);
    complex c2;
    complex c3(3);
    
   // box b1(4);
   // box b2;
    box b1;
    b1.set_data(3);
}
