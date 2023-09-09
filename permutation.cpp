#include <bits/stdc++.h>


using namespace std;


/*                factorial funtion i.e. a function which takes an integer value and returns its factorial             */
int fact(int n){
    int res = 1;
    for(int i =1;i<=n;i++){
    res = res*i;
    }
return res;
}


/*         Below is a function which returns an address of the first term of a dynamically allocated array containing permutated result.          */


int* perm(int array[], int size_of_array){
    
    int* arr = new int[size_of_array];


for(int i =0;i<size_of_array;i++){
    arr[i] = array[i];
}
    
if(next_permutation(arr,arr+size_of_array)){
    return arr;
}
}



int main(int argc, char* argv[]){




int array[] = {1,2,3}; // Defining an array.




int size = sizeof(array)/sizeof(array[0]);





int* p = array;
for(int i = 0; i<fact(size);i++){
    for(int j=0;j<size;j++){
        cout<<p[j]<<"  "; //  Printing the permutated terms for every steps.
    }
    cout<<endl;
    p=perm(p,size); // Updating the array for next evaluation
}





delete [] p;








return 0;

}




















