#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void Increment(int a){ //Call by value
    a =a+1;

}
void IncrementImproved(int *p){

    *p = *p+1;
}

void DecrementImproved(int *p){

    *   p = *p-1;
}



int main(){

    int c=20;
    IncrementImproved(&c);
    cout<<"Checking for increment :"<<c<<endl;
    DecrementImproved(&c);
    cout<<"Checking for decrement :"<<c<<endl;

    return 0;

}