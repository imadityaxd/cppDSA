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

    //print vector elements 

    for(string car : cars){
        cout << car << "\n";
    }

    //accessing a vector -they are index based and accessing starts at 0th index 
    cout << cars[0]<<endl;

    //to access first element .front() function can be used

    cout << cars.front()<<endl;
    //to access last element .back() function can be used 
    cout << cars.back()<<endl;
    
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