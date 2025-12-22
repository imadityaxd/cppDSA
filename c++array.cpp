#include<bits/stdc++.h>
using namespace std;

//find largest element in an array
void largest(int arr[],int n){
    int largest = arr[0];
    
    for(int i =0; i<n;i++){
        if(arr[i]> largest){
            
            largest = arr[i];
        }
    }
    cout<<"Largest Element: "<<largest;
}
//second largest element without sorting 
void secondLargest(int arr[],int n){
    int largest = arr[0];
    int slargest;
    for(int i =0; i<n;i++){
        if(arr[i]> largest){
            largest = arr[i];
        }
    }
    slargest = -1;
    for(int i=0;i<n;i++){
        if(arr[i]> slargest && arr[i] != largest){
            slargest = arr[i];
        }
    }
    cout<<"Second Largest Element: "<<slargest;
}
//check if the array is sorted 
int isSortedd(int n, int arr[]){
    for(int i=1;i<n;i++)
    {
        if(arr[i]>=arr[i-1]){

        }else{
            return false;
        }
    }
    return true;
}
int main(){
    //find largest element in an array

    int arr[] = {1,3,5,8,10,2};
    int n= sizeof(arr)/sizeof(arr[0]);
    secondLargest(arr, n);
    cout<<endl<<isSortedd(n,arr);

    return 0;
}