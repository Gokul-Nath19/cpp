/*Write a program that prompts the user to input the number of quarters, dimes, and nickels.
The program should output the total value of the coins in dollars and cents.
Total Cents = (quarters × 25) + (dimes × 10) + (nickels × 5)
*/

#include <iostream>
using namespace std;

int main(){
    int quarters,dimes,nickels;
    cout<<"Enter No of Quarters:";
    cin>>quarters;
    cout<<"Enter No of Dimes:";
    cin>>dimes;
    cout<<"Enter No of Nickels:";
    cin>>nickels;
    int cents;
    float dollars;
    cents=(quarters*25) + (dimes * 10) + (nickels * 5);
    dollars=cents/100.00;
    cout<<"$"<<dollars<<endl;
}