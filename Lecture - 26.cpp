//
//  main.cpp
//  class
//
//  Created by Prince  Kumar on 12/04/19.
//  Copyright © 2019 Prince  Kumar. All rights reserved.
//  static and instance member variable

#include <iostream>
using namespace std;
/*class amount
{
public:
    int balance;
    static int roi;
    
    void set_data(int x)
    {
        balance=x;
    }
};*/

class amount
{
private:
    int balance;  // instance member varaible
    static int roi;   // static member varaible
    
    
public:
    static int k;
    void set_data(int x)
    {
        balance=x;
    }
    
    void display()
    {
        balance = balance + roi * 0.01 *balance;
        cout<<"Our New balance is : "<<balance<<endl;
        
    }
};


//  :: scope resolution operator
int amount :: roi = 2;
int main()
{
    amount a1;
   // a1.balance = 25000;
    a1.set_data(25000);
    a1.display();
    
}
