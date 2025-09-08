#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cout<<"Enter size of an array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements in the array: "<<endl;
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;  
    }

    // Display result
    cout << "\nFrequencies of elements:\n";
    for (auto it : freq) {
        cout << it.first << " appears " << it.second << " times\n";
    }

     // Step 2: Find highest and lowest
    int maxFreq = 0, minFreq = n+1;  
    int maxElement, minElement;

    for (auto it : freq) {
        if (it.second > maxFreq) {
            maxFreq = it.second;
            maxElement = it.first;
        }
        if (it.second < minFreq) {
            minFreq = it.second;
            minElement = it.first;
        }
    }

    cout << "Element with highest frequency: " << maxElement 
         << " (occurs " << maxFreq << " times)\n";

    cout << "Element with lowest frequency: " << minElement 
         << " (occurs " << minFreq << " times)\n";
    return 0;
}