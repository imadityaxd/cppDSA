#include<iostream>
using namespace std;

void pattern1(int n){
    int i;
    int j;
    for(i=0;i<=n;i++){
        for(j=0;j<=n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern2(int n){
    int i;
    int j;
    for(i=0;i<=n;i++){
        for(j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern3(int n){
    int i;
    int j;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

void pattern4(int n){
    int i;
    int j;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}


void pattern5(int n){
    int i;
    int j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}


void pattern6(int n){
    int i;
    int j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i+1;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

void pattern7(int n){
    int i;
    int j;
    for(i=0;i<n;i++){
        for(j=0;j<n-i+1;j++){
            cout<<" ";
        }
        for(int k =0;k<2*i+1;k++){
            cout <<"x";
        }
        for(j=0;j<n-i+1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}


void pattern8(int n){
    int i;
    int j;
    for(i=0;i<=n;i++){
        for(j=0;j<i;j++){
            cout<<" ";
        }
        for(int k =0;k<2*n-(2*i +1);k++){
            cout <<"x";
        }
        for(j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}


void pattern9(int n){
    int i;
    int j;
    for(i=0;i<n;i++){
        for(j=0;j<n-i+1;j++){
            cout<<" ";
        }
        for(int k =0;k<2*i+1;k++){
            cout <<"x";
        }
        for(j=0;j<n-i+1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
    
    for(i=0;i<=n;i++){
        for(j=0;j<i;j++){
            cout<<" ";
        }
        for(int k =0;k<2*n-(2*i +1);k++){
            cout <<"x";
        }
        for(j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}


int main(){
    int num;
    cout<<"Enter a number: ";
    cin >> num;
  
    pattern9(num);
    return 0;
}
