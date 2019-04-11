//
//  main.cpp
//  lecture 22
//
//  Created by Prince  Kumar on 11/04/19.
//  Copyright © 2019 Prince  Kumar. All rights reserved.
//
// Function overloading in c++


#include <iostream>
using namespace std;
int area( int a , int b )  // area of rectangle
{
    return a*b;
}
int area(int a )
{
    return 3.14 * a * a;
}
//

//int area ( int a , char b)
//{
  //  return a+b;
//}
int main()
{
    int len;
    int breadth ;
    int r;
    cout<<"Enter length and breadth of rectangle : "<<endl;
    cin>>len;
    cin>>breadth;
    cout<<"Enter radius of circle : "<<endl;
    cin>>r;
    
    int a_rec = area(len ,breadth);
    cout<<"Area of reactangle : "<<a_rec<<endl;
    
    int a_cir = area(r);
    cout<<"Area of circle :"<<a_cir<<endl;
}
