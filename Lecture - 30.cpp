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

// * it does not pass any arguments
// * It has same name as a class but with a tilde ( ~ ) symbol


//  Destructor in c++


#include <iostream>
using namespace std;
class complex
{
public:
    int a,b;
    complex()  // --> constructor
    {cout<<"Hii I am constructor "<<endl;}
    
    ~complex()
    {cout<<"Bye i am Destructor "<<endl;}
    
    void set_data(int x , int y)
    {a=x; b=y;}
    
    void show_data()
    {cout<<"Value of a : "<<a<<endl<<"value of b : "<<b<<endl;}
    
    
};
class box
{
public:
    int a;
    ~box()
    {cout<<"Bye i am box"<<endl;}
    
};
using namespace std;
int main()
{// main block
    complex c1;
    c1.set_data(2, 3);
    c1.show_data();
    complex c2;
    box b1;
}
