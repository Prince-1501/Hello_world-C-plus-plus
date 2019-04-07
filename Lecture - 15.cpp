// --- **  concept of arrays in C++ ** ---- //

#include <iostream>
using namespace std;
int main()
{
   // we are going to make a array
    // to store roll number
    // int roll; // normal varibale
    
   /* int roll[7];
    for ( int i=0;i<7;i++)
    {
        cout<<"Enter the roll number : "<<endl;
        //cin>>roll[i];
        int x ; cin>>x;
        
        roll[i] = x;  // =  assignment operator
    }
    cout<<"print roll : "<<roll[3]<<endl;
    
    */
    
    char value[5];
    value[0]='w';
    value[1]='e';
    value[2]='f';
    value[3]='q';
    value[4]='u';
    
    cout<<"print value at index :"<<value[2]<<endl;
}
