#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){

    int a=10;
    int *p;
    p=&a;
    cout<<"Printing value store in P:"<<p<<endl;
    cout<<"Printing address of a:"<<&a<<endl;
    cout<<"Derefencing of P:"<<*p<<endl;
    *p = 20;
    cout<<"Value changes now :"<<*p<<endl;
    cout<<"Checking the value of a :"<<a <<endl;
    int b=30;
    *p=b;// Address of P is same but value get changed
    cout<<"new value of p :"<<*p<<endl;
    cout<<"Address of p is :"<<p<<endl;
    int siz= sizeof(a);
    cout<<p+1<<endl; 


    

    return 0;

}