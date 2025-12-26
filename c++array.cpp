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

//rotate left array by k-places 
//1- reverse array function 
void reversePart(int arr[],int start,int end){
        while(start<end){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
    }
//2- reverse array functions use - rotate part
void lrotate3(int arr[], int n, int k){
    k = k%n;
    reversePart(arr,0,k-1); // reverse array only till k 
    reversePart(arr,k,n-1); // reverse array from k to last element 
    reversePart(arr,0,n-1); //reverse the whole array finally 

}

//rotate array to right by k places 
//reverse function 
void reverse3(int arr[], int start , int end){
    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
//rotate function 
void rotateRight(int arr[],int n ,int k){
    k = k %n;
    reverse3(arr,0,n-1-k);
    reverse3(arr,n-k,n-1);
    reverse3(arr,0,n-1);
}

//move zeroes to end 
void moveZeroes1(int arr[], int n){
    //brute force approach 
    //shift all non zero elements in a temporary array 
    vector<int>v1;
    for(int i = 0; i<n;i++){
        if(arr[i]!=0){
            v1.push_back(arr[i]);
        }
    }
    for(auto x:v1){
        cout<< x<< " ";  
    }
    //now push all zeroes into the vector 
    for(int i = 0; i<n;i++){
        if(arr[i] == 0){
            v1.push_back(arr[i]);
        }
    }
    cout<<endl;
    for(auto x: v1){
        cout<<x<<" ";
    }
}

void moveZeroes2(int arr[], int n){
    //optimal solution 
    int j;
    for(int i = 0; i<n;i++){
        if(arr[i] == 0) {
            j = i;
            break;
        }
    }
    for(int i = j+1; i<n;i++){
        if(arr[i] != 0){
            swap(arr[i],arr[j]);
            j++;
        }
    }

    
}

//linear search in an array 
bool linearSearch(int arr[], int n, int k){
    for(int i = 0; i<n;i++){
        if(arr[i] == k){
            cout<<k<<" is at this index "<<i<<endl;
            return true;
        }

    }
    return false;
}

//union of two sorted arrays
void unionSorted(int arr[], int arr2[], int n, int m){
    set<int>s;
    for(int i =0;i<n;i++){
        s.insert(arr[i]);
    }
    for(int j=0;j<m;j++){
        s.insert(arr2[j]);
    }
    for(auto x:s){
        cout<<x<<" ";
    }
}
//two pointer approach for union of two sorted arrays
void unionSorted2(int arr[], int arr2[], int n, int m){
    //create an empty vector to store elements 
    //a while loop that runs til i<n and j<m 
    // it checks if a[i] is less than a2[j] so push a[i] else if a2[j] < a[i] then push a2[j]
    //keeps doing it until every element from both the arrays are pushed into the vector without any duplicate elements 
    vector<int>v1;
    int i=0,j=0;
    while(i<n && j<m){
        if(arr[i]< arr2[j]){
            if(v1.size() ==0 || v1.back()!=arr[i]){
                v1.push_back(arr[i]);
            }
            i++;
        }
        else{
            if(v1.size() ==0 || v1.back()!=arr2[j]){
                v1.push_back(arr2[j]);
            }
            j++;
        }
    }
        while(i<n){
            if(v1.size() ==0 || v1.back()!=arr[i]){
                v1.push_back(arr[i]);
            }
            i++;
        }
        while(j<m){
            if(v1.size() ==0 || v1.back()!=arr2[j]){
                v1.push_back(arr2[j]);
            }
            j++;
        }
        for(auto x:v1){
            cout<<x<<" ";
        }
}
int main(){
    
    int arr[] = {1,2,2,3,4,4,5};
    int arr2[] = {2,3,5,7,9,11};
    int n= sizeof(arr)/sizeof(arr[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);
    
    unionSorted2(arr,arr2, n,m);
    return 0;
}