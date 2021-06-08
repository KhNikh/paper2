#include <bits/stdc++.h>
using namespace std;

int main() {
    int n , max_ele , i;
    cout << "Enter Size of array: ";
    cin>>n;
    int arr[n];
    vector<int> result;
    cout << "Enter elements in array: ";
    for (i = 0;i<n;i++){
        cin >> arr[i];
    }
    cout << "leaders are: ";
    max_ele = arr[n - 1];
    result.push_back(max_ele);
    for (i = n - 2; i >= 0;i--){
        if(arr[i]>max_ele){
            max_ele = arr[i];
            result.push_back(max_ele);
        }
    }

    for (i = result.size()-1; i >= 0;i--){
        cout << result[i] << " ";
    }
    cout << "\n";
    return 0;
}