#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){

    int a= 31;
    int *p = &a;
    int **q = &p;
    int ***r = &q;
    cout<<"Pointer pointing to a :"<<*p<<endl;
    cout<<"Pointer pointing to another pointer : "<<*(*q)<<endl;
    cout<<"Pointer to pointer which is pointing another pointer : "<<*(*(*r))<<endl;
    // *(*(*r))=2000;
    cout<<"Updated Pointer pointing to a :"<<*p<<endl;
    cout<<"Updated Pointer pointing to another pointer : "<<*(*q)<<endl;
    cout<<"Updated Pointer to pointer which is pointing another pointer : "<<*(*(*r))<<endl;
    *p = **q+200;
    cout<<"Again Updated Pointer pointing to a :"<<*p<<endl;
    cout<<"Again Updated Pointer pointing to another pointer : "<<*(*q)<<endl;
    cout<<"Again Updated Pointer to pointer which is pointing another pointer : "<<*(*(*r))<<endl;
   


    return 0;

}