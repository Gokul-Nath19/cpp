/*Program 1:
Write a program to find whether a given number is a perfect number or not. A perfect number
is a positive integer that is equal to the sum of its proper divisors (excluding the number
itself). Take the number as input from the user and display whether it is a perfect number or
not.*/

#include<iostream>
using namespace std;

int main(){
    int n,d=0;
    cout<<"enter a number:";
    cin>>n;
    for(int i=1;i<n;i++){
        if(n%i==0){
            d=d+i;
        }
    }
    if(n==d){
        cout<<n<<" is perfect number"<<endl;
    }
    return 0;
}