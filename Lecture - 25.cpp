//
//  main.cpp
//  class
//
//  Created by Prince  Kumar on 12/04/19.
//  Copyright © 2019 Prince  Kumar. All rights reserved.
//
// access specifier in c++


#include <iostream>
using namespace std;
class student
{
public:
    string name;
    int age;
    
    void display()
    {
        cout<<"Name of student is : "<<name<<endl;
        cout<<"Age of student is : "<<age<<endl;
    }
};
int main()
{
    student student1;
    student1.name= "prince";
    student1.age= 20;
    student1.display();
}
