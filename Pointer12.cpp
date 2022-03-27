#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int * getRandom( ) {

    
    int *ptr = (int*)malloc(10*sizeof(int));
    
   // set the seed
    for (size_t i = 1; i <=10; i++)
    {
        ptr[i] = i*100;
    }
    

   return ptr;
}

int main(){
      // a pointer to an int.
   int *p;

   p = getRandom();
   
   for ( int i = 1; i <= 10; i++ ) {
      cout << p[i] <<" ";
   }
    return 0;

}