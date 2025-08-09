#include<bits/stdc++.h>
using namespace std;

int cnt = 0;
void f(){
    //printing  0 to 4 ;
    if(cnt == 4) return;
    cout<<cnt<<endl;
    cnt++ ;
    f();
}


//printing name five times by passing parameter 
void name(int n , int times){
    int cnt = times;
    if(n == cnt)return;
    cout<<" Aditya "<<endl;
    n++;
    cout<<n<<endl;
    name(n, times);
}

//print from N to 1
void reverse(int n, int cnt){
    if(n<1){
        return;
    }else{
        cout<<n<<endl;
        n--;
        reverse(n,cnt);
    }
}
//print from 1 to N using backtracking 
void backtracking(int i, int n){
    if(i<1){
        return;
    }
    backtracking(i-1,n);
    cout<<i<<" ";
}

//print from N to 1 using backtracking 
void revbacktracking(int i, int n) {
    if(i>n){
        return;
    }
    revbacktracking(i+1,n);
    cout<<i<<" ";
}
//parameterized and functional recursion
//sum of N numbers
//parameterized way
void add(int i, int sum){
    if(i<1){
        cout<<sum;
        return;
    }
    add(i-1,sum+i);
}
//functional way
int add2(int n){
    if(n==0){
        return 0;
    }
    
    return n + add2(n-1);
}
//factorial of N 
int fact(int n){
    if(n==0){
        return 1;
    }
    return n * fact(n-1);
}
//reverse array using recursion 
void revArray(int arr[],int l,int r){
    if(l>=r){
        return;
    }
    //wap elements at start and end'
    int temp = arr[l];
    arr[l] = arr[r];
    arr[r] = temp;
    revArray(arr,l+1,r-1);
}
//2nd method to reverse array
void revArray2(int arr[], int i, int n){
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    revArray2(arr, i+1,n);
}
//check if a string is palindrome 
bool palindrome(int i, string &s){
    if(i>=s.size()/2) return true;
    if(s[i] !=s[s.size() - i-1]) return false;
    return palindrome(i+1,s);
}
//function to remove whitespaces from string
string removeSpaces(string str) 
{ 
    string result = "";
        for (char c : str) {
            // Keep only letters and digits
            if (isalnum(c)) {
                result += c;
            }
        }
        return result;
} 
int main(){
    // f();
    // name(0, 5);
    // reverse(5,5);
    // backtracking(5,5);
    // revbacktracking(1,5);
    // add(3,0);
    // cout<<add2(3);
    // cout<<fact(5);
    // int arr[] = {1,2,3,4,5};
    // int n=  sizeof(arr)/sizeof(arr[0]);
    // //1 element in arr is of size 4
    // cout<<sizeof(arr[0])<<" "<<sizeof(arr)<<" "<<n<<endl;
    // revArray(arr,0,n-1);
    // for(int i:arr){
    //     cout<<i<<" ";
    // }
    // cout<<endl<<"Using second method"<<endl;
    // revArray2(arr,0,n-1);
    // for(int i = 1;i<=n;i++){
    //     cout<<i<<" ";
    // }
    string s = "madam isi : madam";
    string s1 = removeSpaces(s);
    cout<<s1<<endl;
    int result = palindrome(0,s1);
    if(result == 1){
        cout<<s1<<" is a palindrome.";
    }else{
        cout<<s1<<" is not a palindrome.";
    }
    return 0;
}