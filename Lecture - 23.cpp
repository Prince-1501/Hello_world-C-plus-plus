//
//  main.cpp
//  lecture 23
//
//  Created by Prince  Kumar on 11/04/19.
//  Copyright © 2019 Prince  Kumar. All rights reserved.
//  -- Default arguments in functions --

#include <iostream>
using namespace std;
int add( int x , int y , int z=0 , int g=0, int f=0)
{
    return x+y+z+g+f;
}
int mul(int a , int b , int c=1 , int d=1)
{
    return a*b*c*d;
}
/*int add (int x , int y , int z )
{
    return x+y+z;
}*/

int main()
{// main block
    int a = 5;
    int b = 2;
    int c= 3;
    int result  =  add(a,b , c , 7 );
    cout<<"Ans. is : "<<result<<endl;
    
    int res =  mul(3,4,2);
    cout<<"multiply is : "<<res<<endl;
    
   // int result1 = add(a,b,c);
   // cout<<"addition of 3 numbers is  : "<<result1<<endl;
}






