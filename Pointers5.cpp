// Pointers and arrays
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int A[] = {1000,200,100,78,13,65,6,21};
    int *p = &A[0];
    int size_of_arr = sizeof(A)/sizeof(A[0]);
    cout<<"Length of array : "<<size_of_arr<<endl;
    for (int i = 0; i <size_of_arr ; i++)
    {   
        cout<<"Values of Arr["<<i<<"] is : "<< *p<<endl;
        p = p+1;
       
    }
    
    return 0;

}