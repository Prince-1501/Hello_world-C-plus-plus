//
//  main.cpp
//  cscs
//
//  Created by Prince  Kumar on 09/04/19.
//  Copyright © 2019 Prince  Kumar. All rights reserved.
//   --- ** class and Object ** ---  //

#include <iostream>
using namespace std;
class student
{
public: // access specifier  --> private & protected
    string name;
    int age;
    int roll;
};  // necessary semi colon


class box
{
public:
    int l;
    int b;
    int h;
};

int main()
{
    // int a ; a=50;  cout<<a<<endl;
    
    student person1;  // person1 --> object --> class = student
    person1.name = "prince";   // . operator  --> access use
    person1.age=20;
    person1.roll=44;
    
    cout<<"name is : "<<person1.name<<endl;
    
    student person2;
    person2.name = "hari";
    person2.age= 23;
    person2.roll=50;
    
    cout<<"roll is :"<<person2.roll<<endl;
    
    
    ////////////////////////////////////////////////////
    
    box box1;
    box1.l=5;
    box1.b=2;
    box1.h=9;
    
    //box box2;
    
    int volume = box1.l * box1.b * box1.h;
    cout<<"Volume of box1 is : "<<volume<<endl;
}

