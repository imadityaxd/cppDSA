#include<bits/stdc++.h>

using namespace std;
/*emplace() is a member function of C++ STL containers that constructs a new element directly inside the container using the arguments you provide, without creating a temporary object.

It is more efficient than push() when adding complex objects, because it avoids extra copying or moving.*/
//functions
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
    //insert() - to insert something in vector 
    cout<<endl<<"Inserts 2 at beginning: ";
    nums2.insert(nums2.begin(),2);//inserts 2 at 0th index
    for(auto it=nums2.begin();it<nums2.end(); ++it){
        cout<<*it<<" ";
    }
    cout<<endl<<"Inserts two 50 at end: ";
    nums2.insert(nums2.end(),2,50);
    for(auto it=nums2.begin();it<nums2.end(); ++it){
        cout<<*it<<" ";
    }
    //inserting a vector into a vector 
    vector<int> copy ={50,50};
    vector<int> copy2 = {1,2,3,4};
    copy2.insert(copy2.begin(), copy.begin(),copy.end());
    cout<<endl<<"Inserted copy vector into copy2: ";
    for(auto it=copy2.begin(); it<copy2.end();++it){
        cout<<*it<<" ";
    }
    //swap two vectors - swap();
    copy.swap(copy2);
    cout<<endl<<"Now the vector is swapped- copy2: ";
    for(auto it=copy2.begin(); it<copy2.end();++it){
        cout<<*it<<" ";
    }
    cout<<endl<<"Now the vector is swapped- copy: ";
    for(auto it=copy.begin(); it<copy.end();++it){
        cout<<*it<<" ";
    }

    //erasing an entire vector - clear()
    cout<<endl<<"The entire vector is empty- (1 means empty and 0 means there is an element): ";
    copy.clear();
    for(auto it=copy.begin(); it<copy.end();++it){
        cout<<*it<<" ";
    }
    cout<<copy.empty();
}

//lists 
void explainList(){
    //creating a list 
    list<int> nums= {1,2,3};
    //printing a list 
    for(int num:nums){
        cout<<num<<" ";
    }
    //accessing elements of a list 
    cout<<endl<<"First element: "<<nums.front();//front()- access first element
    cout<<endl<<"Last element: "<<nums.back(); //back() - access last element
    //inserting elements in a list 
    nums.push_front(5);
    cout<<endl<<"Inserted 5 in the list at the beginning: ";
    for(int num:nums){
        cout<<num<<" ";
    }
    cout<<endl<<"Deleted 5 from the list from the beginning: ";
    nums.pop_front();
    for(int num:nums){
        cout<<num<< " ";
    }
    //inserting at the back
    nums.push_back(5);
    cout<<endl<<"Inserted 5 in the list at the end: ";
    for(int num:nums){
        cout<<num<<" ";
    }
    cout<<endl<<"Deleted 5 from the list from the end: ";
    nums.pop_back();
    for(int num:nums){
        cout<<num<< " ";
    }
    //all other operations and functions are same as vector 

}
//deque
void explainDeque(){
    deque<int> dq;
    dq.push_back(1); //{1}
    dq.emplace_back(2); //{1,2}
    dq.push_front(3); //{3,1,2}
    dq.emplace_front(4); //{4,3,1,2}

    dq.pop_back(); // {4,3,1}
    dq.pop_front(); //{3,1}

    cout<< dq.back(); // accesses the last element
    cout << dq.front(); // accesses the first element

}
//stack 
void explainStack(){
    //based on lifo
    //push(),pop(), top()
    stack<int> nums;
    //can't add elements while declaration
    nums.push(3);
    nums.push(2);
    nums.push(1);//1,2,3
    cout<<"Top of the stack:"<<nums.top()<<endl;//1
    nums.emplace(4);
    cout<<"Top of the stack:";
    cout<<"Top of the stack:"<<nums.top()<<endl;//1
    cout<<"Is the stack empty? (0 or 1): "<<nums.empty()<<endl;
    cout<<"Size of the stack: "<<nums.size()<<endl;

    //swapping two stacks
    stack<int>s1,s2;
    s1.push(4);
    s1.push(5);//5,4
    s2.push(1);
    s2.push(2);//2,1
    s1.swap(s2);//s1 - 2,1 and s2 - 5,4

}
//queue
void explainQueue(){
    //based on FIFO
    queue<int>nums;
    nums.push(1);
    nums.push(2);
    nums.emplace(4);
    //adds 5 to the last element of queue

    nums.back() += 5;
    cout<<nums.back();
    cout<<endl<<nums.front();
    nums.pop();
    cout<<endl<<nums.front();
    //size, swap, empty same as stack
}

//priority queue
void explainPriorityQueue(){
    //largest element stays at the top
    //maximum heap
    priority_queue<int> pq;
    pq.push(2);
    pq.push(4);
    pq.push(1);
    pq.push(10);
    cout<<pq.top();

    //size, swap, empty function same as others

    //Minimum Heap
    priority_queue<int, vector<int>,greater<int>> pq1 ;
    pq1.push(5);
    pq1.push(2);
    pq1.push(8);
    pq1.emplace(10);
    cout<<endl<< pq1.top();

}

//set
void explainSet(){
    //sorted and unique elements
    set<int>st;
    st.insert(1);
    st.insert(2);
    st.insert(3);
    st.insert(4);
    auto it= st.begin();
    cout<<*it<<endl;
    //functionality of insert in verctor can be used also, that only increases efficiency
    //begin(),end(),rbegin(),rend(),size(),
    //empty() and swap() are same as those of above

    it= st.find(3);//prints 3 if it is there
    cout<<*it<<endl;
    it = st.find(6);
    cout<<*it<<endl;//prints last element if 6 is not there 
    int cnt = st.count(1);//counts the no. of 1s in set
    cout<<cnt<<endl;
    st.erase(3);
    cout<<"Prints all elements of set: "<<endl;
    for(int num: st){
        cout<< num <<" ";
    }
    //lower_bound() and upper_bound() function works in the same way
    //as in vector it does
    
    auto it2 = st.lower_bound(2);//Finds an iterator pointing to the first element that is ≥ 2
    auto it3 = st.upper_bound(3);//Finds an iterator pointing to the first element that is > 3
}

//MultiSet
void explainMultiSet(){
    //only sorted but not unique elements
    multiset<int>ms;
    ms.insert(1);//{1}
    ms.insert(1);//{1,1}
    ms.insert(1);//{1,1,1}

    ms.erase(1); // all 1's erased

    int cnt = ms.count(1);
    //only a single one erased
    ms.erase(ms.find(1));
    //rest all functions same as set
}   
//Unordered Set
void explainUSet(){
    //lower_bound & upper_bound function does not work
    // rest all functions are same as set
    // stores in unsorted way
    //it has better complexity than set in most case, except some when collision happens
     unordered_set<int> us;

    us.insert(10);
    us.insert(5);
    us.insert(20);
    us.insert(15);
    us.insert(5); // duplicate, won't be added

    for (int val : us) {
        cout << val << " ";
    }
}
//Map
void explainMap(){
    //a map stores elements in key/value pairs.
    //elements in map are:
    //accessible by keys (not index), and each key is unique
    //automatically sorted in ascending order by their keys
    //creating a map that will store people name and their age 
    map<string, int>people = {
        {"Aditya" , 21},
        {"Yash" , 18},
        {"Subh", 12}
    };

    //accessing an element 
    cout<<"Aditya's age is: " <<people["Aditya"]<<endl;
    //elements can also be accessed with the at() function
    cout<<"Yash's age is: "<<people.at("Yash")<<endl;
    //at() is preferred because it throws error if element does not exist
    //changing values
    people["Subh"] = 11;
    cout<<"Subh's age is: "<<people.at("Subh")<<endl;
    //changing values using at()
    people.at("Subh") = 12;
    cout<<"Subh's age is: "<< people.at("Subh")<<endl;
    //adding elements 
    people["Jenny"] = 20;
    //adding elements with insert() function
    people.insert({"Bruno", 14});
    people.insert({"Alia", 18});

    //finding the size of map 
    cout<<people.size()<<endl;
    //check if a specific element exists - count() function
    cout<<"1 if exists, 0 if not-exists: "<<people.count("Jenny")<<endl;

    //loop through a map 
    //.first() to access keys and .second() to access values
    for (auto person: people){
        cout<<person.first<<" is: " <<person.second<<endl;
    }
    //using iterator 
    cout<<"Printing using iterator: "<<endl;
    for(auto it = people.begin(); it!= people.end(); ++it){
        cout<< it->first <<" is: "<< it->second<<endl;
    }

    //use erase() function to remove specific elements from map 
    people.erase("Bruno");
    //erase all elements from map 
    cout<<"Now the whole map is cleared: "<<endl;
    people.clear();
    //check if a map is empty 

    cout<<"1 if empty, 0 if not-empty: "<<people.empty()<<endl;
}

//multimap
void explainMultiMap(){
    //everything same as map, only it can store multiple keys
    //duplicate keys but in sorted manner
    //only people[key] cannot be used here
}
//unorderedset
void explainUnorderedMap(){
    //unique keys but not sorted 
}

//explainExtra ka part 
bool comp(pair<int,int>p1,pair<int,int>p2){
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;
    if(p1.first<p2.first){
        return true;
    }else{
        return false;
    }
}

void explainExtra(){
    //sort in increasing / ascending order
    //sort(a, a+n);
    int a[5] = {3,5,7,1,2};
    sort(a,a+5);
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;
    vector<int> v ={4,1,5,8,9,6};
    sort(v.begin(), v.end());
    for(int i:v){
        cout<<i<<" ";
    }
    

    //sort it according to second element
    //if second element is same, then sort 
    //it according to first element but in descending

    vector<pair<int,int>>vec = {{1,2},{2,1},{4,1}};
    sort(vec.begin(),vec.end(), comp);
    cout<<endl<<"comparator"<<endl;

    for (auto p:vec){
        cout<<p.first<<" "<<p.second<<endl; 
    }
    //{{4,1},{2,1},{1,2}};
    //sort in descending order
    //sort(a,a+n,greater<int>())
    sort(a,a+5,greater<int>());
    cout<<endl<<"descending: ";
    for(int i:a){
        cout<<i<<" ";
    }
    //vector 
    sort(v.begin(),v.end(),greater<int>());
    cout<<endl;
    for(int i:v){
        cout<<i<<" ";
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
    // cout <<"Vectors: " <<endl;
    // explainVector();
    // cout<<"Lists: "<<endl;
    // explainList();
    // cout<<"Stack: "<<endl;
    // explainStack();
    // cout<<"Queue: "<<endl;
    // explainQueue();
    // cout<<"Priority Queue: "<<endl;
    // explainPriorityQueue();
    // cout<<"Set: "<<endl;
    // explainSet();
    // cout<<"MultiSet: "<<endl;
    // explainMultiSet();
    // cout<<"UnorderedSet: "<<endl;
    // explainUSet();
    // cout<<"Map: "<<endl;
    // explainMap();
    cout<<"explainExtra"<<endl;
    explainExtra();
    
    return 0;
}