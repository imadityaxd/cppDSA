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
//remove duplicates from a sorted array
void removeD(int arr[], int n){
    set <int> s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }

    for(auto x : s){
        cout<<x<<", ";
    }
}
//left- rotate array by 1 place - brute force approach
void lrotateArr(int arr[], int n){
    //[3,4,5,1,2] 
    //[4,5,1,2,3]
    vector<int>v1;
    for(int i=1;i<n;i++){
        v1.push_back(arr[i]);
    }
    cout<<endl;
    //elements are now copied into dummy array 
    //store first element of original array
    int first = arr[0];
    //push the stored first element to the end of the dummy array 
    v1.push_back(first);
    for(auto x:v1){
        cout<<x<<" ";
    }

}

//left-rotate array by 1 place - optimal approach
void lrotateArr2(int arr[], int n){
    //Store the value of the first element of the array in a temporary variable.
// Iterate through the array starting from the second element.
// Shift each element one position to the left by assigning the current element to the position of its predecessor.
// After completing the iteration, place the value from the temporary variable into the last position of the array.
    int first = arr[0];
    for(int i = 1; i<n;i++){
        arr[i-1]= arr[i];
    }
    arr[n-1] = first;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[] = {1,3,5,8,8,9,11,11,10,2};
    int n= sizeof(arr)/sizeof(arr[0]);
    lrotateArr2(arr,n);

    return 0;
}