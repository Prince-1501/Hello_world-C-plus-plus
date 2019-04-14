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

//  copy constructer  & reference variable in c++


#include <iostream>
using namespace std;
/*int main()
{
    int x =5;
    int &y =  x ;  // y-> reference variable
    //int &y;
    
    // y-> store x value
    cout<<y<<endl;
    y++;  // we can icrement value through reference variable
    cout<<y<<endl;
    cout<<x<<endl;
    cout<<&y<<endl;
    cout<<&x<<endl;
}*/
class complex
{
public:
    int a,b;
public:
    complex(int x , int y) // constructer bascically --> function
    {a=x ; b=y;}
    
    complex (int x)  // Parameterized constructer
    { a= x ;}
    
    complex()  // default constructer
    { }
    
    complex ( complex &c1) // copy constructer
    { a = c1.a; // = is a assignment operator
      b = c1.b;
    }
    
    // void fun( int x )
};
int main()
{
    complex c1(2,3);
    complex c2(c1); // copy c1 into c2;
    cout<<c2.a<<" "<<c2.b<<endl;
}

