#include <iostream>
using namespace std;

// float moneyReceived(int currentMoney=100, float factor{ //IT is wrong and will not be able to execute.

float moneyReceived(int currentMoney, float factor = 1.04){
    return currentMoney+factor;
}

int main()
{
    int a, b;
    int money = 10000;

    cout<<"IF you have "<<money<<" Rs in your bank account, you will receive "<<moneyReceived(money)<<" Rupee after 1 year"<<endl; 

    cout<<"IF you have "<<money<<" Rs in your bank account, you will receive "<<moneyReceived(money,10)<<" Rupee after 1 year for VIP";    

    return 0;
}

// Constant variables must be written in function to the extreme left other wise function will not be executed.




// IF you dont want any function to change value of an given argument then just put a const in the beginning of argument. THen Compiler will throw a error if value of argument is changed 
// Example

int sum(const int a);
// now value of a  cant be changed 