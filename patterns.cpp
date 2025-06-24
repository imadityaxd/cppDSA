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

void pattern10(int n){
    int i;
    int j;
    for(i=0;i<n;i++){
        
        for(int k =0;k<2*i+1;k++){
            cout <<"x";
        }
        for(j=0;j<n-i+1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
    
    for(i=0;i<=n;i++){
       
        for(int k =0;k<2*n-(2*i +1);k++){
            cout <<"x";
        }
        for(j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern11(int n){
    int i;
    int j;
    int start;
    for(i=0;i<=n;i++){
        if(i%2 == 0){
                start = 1;
            }
            else{
                start = 0;
            }
        for(j=0;j<=i;j++){
            cout<<start;
            start = 1- start;
        }
        cout<<endl;
    }
}

void pattern12(int n){
    int i;
    int j;
    int k;
    for(i=0;i<=n;i++){
        //numbers
        for(j=0;j<=i;j++){
            cout<<j;
        }
        //space
        for(k=0;k<=(2*n)-2*i;k++){
            cout<<" ";
        }
        //stars
        for(j=0;j<=i;j++){
            cout<<j;
        }

        cout<<endl;
    }
}

void pattern13(int n){
    int i;
    int j;
    int count = 1;
    for(i=0;i<=n;i++){
        for(j=0;j<=i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}

void pattern14(int n){
    int i;
    for(i=0;i<=n;i++){
        for(char ch='A';ch<='A'+i;ch++){
            cout<< ch <<" ";
        }
        cout<<endl;
    }
}

void pattern15(int n){
    int i;
    for(i=0;i<n;i++){
        for(char ch='A';ch<='A'+ (n-i-1);ch++){
            cout<< ch <<" ";
        }
        cout<<endl;
    }
}


void pattern16(int n){
    int i;
    for(i=0;i<n;i++){
        char ch = 'A' + i;
        for(int j=0;j<=i;j++){
            cout<< ch << " ";
        }
        cout<<endl;
    }
}

void pattern17(int n){
    int i;
    int j;
    //APPROACH - 1;
    // for(i = 0;i<=n;i++){
    //     char ch = 'A'+ i;
    //     //space
    //     for(j=0;j<=n-i;j++){
    //         cout<<" ";
    //     }
    //     //triangle
    //     for(char cg='A';cg<'A'+i;cg++){
    //         cout<<cg;
    //     }
    //     //column
    //     cout<<ch;
    //     //triangle
    //     for(char cg='A';cg<'A'+i;cg++){
    //         cout<<cg;
    //     }
    //     //space
    //     for(j=0;j<=n-i;j++){
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }

    //APPROACH - 2;

    for(i=0;i<=n;i++){
       
        //space
        for(j=0;j<=n-i;j++){
            cout<<" ";
        }
        //alphabets
        char ch= 'A';
        int breakpoint = (2*i+1)/2;
        for(j= 1;j<=2*i + 1;j++){
            cout<<ch;
            if(j<=breakpoint){
                ch++;
            }
            else{
                ch--;
            }
        }

        //space
        for(j=0;j<=n-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin >> num;
  
    pattern17(num);
    return 0;
}
