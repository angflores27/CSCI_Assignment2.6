//  Assignment 2.6
//  Angela Flores Figueroa
//  CSCI 40 Fall 2022
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    
    // Question 1
    // Ask a user to enter two integers and store them in two integer variables. Then use a for loop statement to display the 3rd power of all the numbers between a and b with a and b included.
   
    int x, y, t, i, power;
    cout << "Please enter two variables: "<<endl;
    cin>>x>>y;
    
    //make sure y is larger than x
    if (x>y){
        t=y;
        y=x;
        x=t;}
    
    for( i=x; i<=y; i++){
        power=i*i*i;
        cout<<"The 3rd power of "<<i<<" is: "<<power<<endl;
        
    }
   cout<< endl;
   cout<< endl;

    
    // Question 2
    // Use a for loop statement to produce and display a table of temperature conversions between Celsius and Fahrenheit:
    cout<<"Now we will show a table array of degrees in C and F."<<endl;
    
    int increment, temp, end;
    cout<<"What increments do you wish to use?"<<endl;
    cin>>increment;
    cout<<"What degree Celsius do you want to start with?"<<endl;
    cin>>temp;
    cout<<"What degree Celsisu do you want to end with?"<<endl;
    cin>>end;
    
    cout.setf(ios::fixed);
    cout.precision(1);
    
    cout<<"====================================================="<<endl;
    cout<<setw(10)<<"Celsius"<<setw(40)<<"Farenheit"<<endl;
    cout<<"====================================================="<<endl;
    
    for (temp; temp<=end; temp=temp+increment){
        cout<<setw(10)<<temp<<setw(40)<<(9/5.0)*temp+32<<endl;}
    return 0;
}
