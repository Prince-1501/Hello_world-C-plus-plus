//
//  main.cpp
//  dcdcs
//
//  Created by Prince  Kumar on 14/04/19.
//  Copyright © 2019 Prince  Kumar. All rights reserved.
//  constructer in c++

// * It is a special type of function.
// * Its name is same as it name of class
// * It has not any return type
// * it must be instance member function not static.


#include <iostream>
using namespace std;
class box
{
public:
    int length;
    int breadth;
    
   //  int void
    // constructer name =  class name
    box()  // this is constructer
    {
        cout<<"constructer is executed."<<endl;
    }
};

class student
{
public:
    int std;
    int age ;
    int roll;
    
    student()  /// this is constructer
    {
        std = 5;
    }
};
int main()
{
    // main block
    box b1;
    student prince;
    //prince.std =5;
    //prince.age=9;
    //prince.roll= 44;
    
    //cout<<prince.std<<" "<<prince.age<<" "<<prince.roll<<endl;
    cout<<"class is : "<<prince.std<<endl;
    student raj;
    raj.roll = 23;
    raj.age =10;
    
    cout<<raj.std<<" "<<raj.age<<" "<<raj.roll<<endl;
}


