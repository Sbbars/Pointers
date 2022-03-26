#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void Print(char *C){

    int i=0;
    while(C[i] !='\0'){

        cout<<"Value of character array is : "<<C[i]<<endl;
        i++;
    }

}

int main(){
    char Arr[] = "Saurabh";
   
    // Print(&Arr[0]); 
    cout<<"String length is : "<<strlen(Arr)<<endl;
    for (int i = 0; i < strlen(Arr); i++)
    {
        cout<<"Arr element is : "<<Arr[i]<<endl;

    }
    
    


    return 0;

}