/*Write a program using function overloading to calculate volumes of different geometric
shapes. Define overloaded functions named calculateVolume() to compute the volume of a
cube, a rectangular box, and a cylinder based on the given dimensions.*/

#include<iostream>
using namespace std;

int calculateVolume(int a){
    return a*a*a;
}
int calculateVolume(int l,int b,int h){
    return l*b*h;
}
float calculateVolume(float h,float r){
    return 3.14*r*r*h;
}

int main(){
    int a;
    cout<<"Enter The Side Of The Cube:";
    cin>>a;
    cout<<"The Volume Of The Cube:"<<calculateVolume(a)<<endl;
    int l,b,h;
    cout<<"Enter The Dimensions Of the Cuboid"<<endl;

    cout<<"Length:";
    cin>>l;
    cout<<"Breadth:";
    cin>>b;
    cout<<"Height:";
    cin>>h;
    cout<<"The Volume Of The Cuboid:"<<calculateVolume(l,b,h)<<endl;
    float r,H;
    cout<<"Enter The Dimensions Of The Cylinder"<<endl;
    cout<<"Radius:";
    cin>>r;
    cout<<"Height:";
    cin>>H;
    cout<<"The Volume Of The Cylinder:"<<calculateVolume(H,r)<<endl;
}