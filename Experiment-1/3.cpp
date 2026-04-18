/*Write a program to count even and odd numbers in a 1D array.
Expected Output (Sample):
Enter number of elements: 5
Enter elements: 1 2 3 4 5
Even numbers count = 2
Odd numbers count = 3
*/

#include <iostream>
using namespace std;

int main(){
    int a[5],even_count=0,odd_count=0;
    cout<<"Enter The Elements Of The Array:";
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    for(int i=0;i<5;i++){
        if(a[i]%2==0){
            even_count+=1;
        }else{
            odd_count+=1;
        }
    }
    cout<<"Even Numbers Count="<<even_count<<endl;
    cout<<"odd Numbers Count="<<odd_count<<endl;
    
}