/*Write a program to perform the simple arithmetic operations using switch case. Read two
numerical value and an operator (char type). Implement the operations using inline
functions.
*/
#include<iostream>
using namespace std;


inline void switch_case(int a,int b,char op){
    switch(op){
        case '+':
            cout<<"Addition of 2 Numbers is:"<<a+b<<endl;
            break;
        case '-':
            cout<<"Subtraction of 2 Numbers is:"<<a-b<<endl;
            break;
        case '*':
            cout<<"Multiplication of 2 Numbers is:"<<a*b<<endl;
            break;
        case '/':
            cout<<"Division of 2 Numbers is:"<<a/b<<endl;
            break;
        default:
            cout<<"Enter Valid Operator!!";
    }
    

}



int main(){
    int a,b;
    cout<<"Enter 2 Numerical Value:";
    cin>>a>>b;
    char op;
    cout<<"Enter + For Add \n - For Subtraction \n * For Multiplication \n / For Division "<<endl;
    cin>>op;
    switch_case(a,b,op);
    
}