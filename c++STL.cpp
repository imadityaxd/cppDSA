#include<bits/stdc++.h>

using namespace std;

int add(int a, int b){

    return a+b;
}

//pairs
void explainPair(){
    // pair <int, int> p = {1,3};

    // cout << p.first << " " << p.second;

    pair <int, pair<int, int>> p= {1,{3,4}};

    cout << p.first << " " << p.second.second << " " << p.second.first;
}

//vectors 

void explainVector(){

    vector <int> v;

    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int,int>>vec;

    vec.push_back({1,2});
    vec.emplace_back(1,2);

    //print vector elements 
    for (int v1: v){
        cout <<v1 <<"\n";
    }

    //create a vector that will store strings 

    vector<string> cars = {"Volvo", "BMW","Ford","Mazda"};

    //print vector elements using for-each loop

    for(string car : cars){
        cout << car << "\n";
    }

    //accessing a vector -they are index based and accessing starts at 0th index 
    cout << cars[0]<<endl;

    //accessig an element using .at()function - .at() function is more reliable than index based

    cout << cars.at(0)<<endl;

    //to change a vector element 
    cars.at(1) = "Mustang";
    //find out size of a vector 
    cout << "printing the size of vector: "<< cars.size()<<endl;

    //check if vector is empty or not 
    cout << "checking whether the vector is empty(0) or not(1) : "<< cars.empty()<<endl;

    //to access first element .front() function can be used
    cout << cars.front()<<endl;
    //to access last element .back() function can be used 
    cout << cars.back()<<endl;


    //using iterators 
    vector <string> ::iterator it;
    //loop through the vector using iterator 
    cout<<"Loop through iterator: "<<endl;
    for(it = cars.begin(); it<cars.end();++it){
        cout<< *it << " ";
    }
    //.begin() - returns an iterator that points to first element of vector
    // .end() - returns an iterator that points one position after last element of vector 

    it = cars.begin();
    cout<<endl<<*it;

    it = cars.end()-1;
    cout <<endl<<*it;
    //setting value using iterator 
    *it = "Tesla";
    cout<<endl<<"Mazda is changed to: "<<*it;

    //using auto keyword 
    //The auto keyword allows the compiler to automatically determine the correct data type, which simplifies the code and makes it readable.

    auto it1 = cars.begin()+1;
    cout<<endl<<*it1;

    //looping through the vector using auto keyword 
    for(auto it1 = cars.begin();it1<cars.end()-1; ++it1){
        cout <<" "<<*it1;
    }
    // it's better to use iterators instead of for-each loop , if you have to modify the data in the vector.
    vector <int> nums2 = {1,2,3,4,5,6,7,8,9};
    
    //loop through vector elements
    for(auto it3 = nums2.begin(); it3!=nums2.end();){
        if(*it3 == 2){
            it3 = nums2.erase(it3); // 2 has been erased from the vector 
        }
        else{
            ++it3;
        }
    }
    cout<<endl;
    //print vector elements
    for(const int& num1:nums2){
        cout<<num1<< " ";
    } 
    //prints - 1 3 4 5 6 7 8 9

    //iterate in reverse - use rbegin() and rend()
    cout<<endl<<"Reverse: ";
    for(auto it = nums2.rbegin();it!=nums2.rend();++it){
        cout<< *it <<" ";
    }
}

int main(){
    // int num;
    // cout << "enter a number: ";
    // cin >> num ;
    // cout<< add(num, 4) << endl;
    // cout<<"Pairs: "<<endl;

    // explainPair();
    // cout<< endl;
    cout <<"Vectors: " <<endl;
    explainVector();
    return 0;
}