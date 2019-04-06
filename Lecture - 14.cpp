#include <iostream>
using namespace std;
int main()
{
    // man pen buy --> x coin // pen cost ---> 10 coins
    
    cout<<"Enter the money : "<<endl;
    int x; cin>>x;
    
   /*
    if ( x>= 10)
    {
        cout<<"He is able to buy pen"<<endl;
    }
    else
    {
        cout<<"He is NOT able to buy pen"<<endl;
    }
    
    */
    
    //if ( x>= 10){ cout<<"He is able to buy pen"<<endl; }
    
   // if ( x>= 10)
     //   cout<<"He is able to buy pen"<<endl;
    //else
      //  cout<<"He is NOT able to buy pen"<<endl;

   /* if ( x>=10)
    {
        cout<<"He is able to buy pen"<<endl;
    }
    else if ( x>=5 & x<10 )    // upper wala nahi to ye wala
    {
        cout<<"He buy 5 star"<<endl;
    }
    else if ( x==3)
    {
        cout<<"He buy pencil"<<endl;
    }
    else
    {
        cout<<"He return back to home "<<endl;
    }
    
    */
    
    
    
    /*if ( x>=10)
    {
        cout<<"He is able to buy pen"<<endl;
    }
    else if ( x>=5 & x<10 )    // upper wala nahi to ye wala
    {
        cout<<"He buy 5 star"<<endl;
    }
    else if ( x==3)
    {
        cout<<"He buy pencil"<<endl;
    }
     
     */
    
    // ternary operator
    
    // return variable  = condition ? true value : false value
   
    //int w = ( x>=10) ? 1 : 0 ;
    //cout<<"result will be "<<w<<endl;
    
    int w = ( x>=10) ? x+5 : x-5 ;   // 55+5=60--->w
    cout<<"result will be "<<w<<endl;    
}
