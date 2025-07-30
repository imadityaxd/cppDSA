#include<bits/stdc++.h>
using namespace std;

int countDigits(int n){
    int cnt = 0;
    while(n>0){
        cnt=cnt +1;
        //the number of times it's divisible by 10, is the number of digits present in a number 
        //ex. 54 has two digits and it is also divisible by 10 only two times - first time - 54/10 = 5.4 and second time 5.4/10 = .54 .
        n = n/10;
    }
    return cnt;
}
int countDigits2(int n){
    int cnt = (int)(log10(n)+1);
    return cnt;
}

int isArmstrong1(int n){
        int sum = 0;
        while(n>0){
            int ld = n%10;
            sum = sum + (ld*ld*ld);
            n = n/10;
        }
        return sum;
}
bool isArmstrong(int n){
    int n2 = isArmstrong1(n);
    if(n2 == n){
        return true;
    }else{
        return false;
    }
}
void printAllDivisors(int n){
    vector<int> num;
    for(int i =1;i<=n;i++){
        if(n%i == 0){
            num.push_back(i);
        }
    }
    for(auto i:num){
       std:cout<<i<<endl;
    }
    
}

void HCF(int n1, int n2){
    // vector<int> num, num2;
    // for(int i = 1; i<=n1;i++){
    //     if(n1%i == 0){
    //         num.push_back(i);
    //     }
    // }
    // //for 2nd number
    // for(int i =1; i<=n2; i++){
    //     if(n2%i == 0){
    //         num2.push_back(i);
    //     }
    // }
    // set<int> hcf;
    // num.insert(num.begin(), num2.begin(), num2.end());
    // for(auto it:num){
    //     if(n1%it==0 && n2%it==0){

    //         hcf.insert(it);
    //     }
    // }
    // auto hcf1 = hcf.rbegin();
    // cout<<endl<<*hcf1;
    //smart and better complexity approach
    for(int i = min(n1,n2);i>=1;i--){
        if(n1%i ==0 && n2%i ==0){
            cout<<i<<endl;
            break;
        }
    }
}

void checkPrime(int n) {
    // 1. Handle edge cases first. 1 and non-positive numbers are not prime.
    if (n <= 1) {
        std::cout << n << " is not a prime number.";
        return; // Exit the function early
    }

    // 2. Assume the number is prime until we find a divisor.
    bool is_prime = true;

    // 3. Loop to find a divisor.
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            // If we find a divisor, it's not prime.
            is_prime = false;
            break; // Exit the loop immediately, no need to check further.
        }
    }

    // 4. Print the final result after the loop is done.
    if (is_prime) {
        std::cout << n << " is a prime number.";
    } else {
        std::cout << n << " is not a prime number.";
    }
}

int main(){
    
    // cout<<countDigits(54)<<endl;
    // cout<<countDigits2(54)<<endl;
    // cout<<isArmstrong(1634)<<endl;//works only till 3 digit numbers
    // cout<<isArmstrong(1634)<<endl;//works only till 3 digit numbers
    // printAllDivisors(36);
    // HCF(54,72);
    checkPrime(9);
    return 0;
}