#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cout<<"Enter value for n :"<<endl;
    cin>>n;
    int *ptr = (int *)malloc(n*sizeof(int));

    for (size_t i = 0; i < n; i++)
    {
        ptr[i] = i+1;
    }
    // free(ptr);
    // ptr[2]=100;
    int *B = (int *)realloc(ptr,2*n*sizeof(int));
    cout<<"Prev block address and new block address are :"<<ptr<<" "<<B<<endl;
    
    for (size_t i = 0; i < 2*n; i++)
    {
       cout<<B[i]<<" ";
    }
    free(ptr);
    free(B);
    
    
    // int Arr[n];
    // for (size_t i = 0; i < n; i++)
    // {
    //     Arr[i] = i+10;
    // }
    // for (size_t i = 0; i < n; i++)
    // {
    //     cout<<Arr[i]<<endl;
    // }
    
    
    return 0;

}