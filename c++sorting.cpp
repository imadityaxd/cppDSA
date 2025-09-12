//today we're gonna implement selection sort, bubble sort, and insertion sort 
#include<bits/stdc++.h>
using namespace std;

//bubble sort
void bubbleSort(int arr[], int n){
    //arr[j] > arr[j+1]
    //swap(arr[j], arr[j+1])
    
    for (int pass = 0; pass < n-1; pass++) {      // Outer loop
        for (int i = 0; i < n-pass-1; i++) {      // Inner loop
            if (arr[i] > arr[i+1]) {
                swap(arr[i], arr[i+1]);
            }

    }
}
    //printing the sorted array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

//recursive bubble sort
void recBubble(int arr[],int n){
    if(n==1){
        return;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    recBubble(arr,n-1);
}
//selection sort 

void selectionSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=min+1;j<n;j++){
            if(arr[min]>arr[j]){
                min=j;
            } 
        
        }
        swap(arr[min],arr[i]);
    }
    cout<<endl<<" Sorted array: ";
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
//Insertion Sort
void insertionSort(int arr[], int n){
    for(int i =0;i<n;i++){
        for(int j = i;j >0;j--){
            if(arr[j]<arr[j-1])
                swap(arr[j],arr[j-1]);
                
        }
    }
    //printing 
    cout<<endl;
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
//recursive insertion sort 
void recInser(int arr[],int n,int i){
    if(i==n){
        return;
    }
    for(int j = i;j >0;j--){
            if(arr[j]<arr[j-1])
                swap(arr[j],arr[j-1]);
                
    }
    recInser(arr,n,i+1);
}

int main(){
    int n =5;
    // cout<<"Enter size of array: ";
    // cin>>n;
    int arr[n] = {2,1,5,4,3};
    // cout<<"Enter array elements: ";
    // for(int i =0;i<n;i++){
    //     cin>>arr[i];
    // };
    // for(int i =0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl<<"Sorted Array: ";
    //bubbleSort(arr, n);
    // selectionSort(arr,n);
    //insertionSort(arr,n);
    // recBubble(arr,n);
    recInser(arr,n,0);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "; 
    }
    return 0;
}