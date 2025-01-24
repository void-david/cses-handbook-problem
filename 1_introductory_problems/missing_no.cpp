#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long find(vector<long long> arr, int n){
    int left = 0;
    int right = n-1;
    while(left<=right){
        int mid = (left+right)/2;
        if(arr[mid]!= mid+1 && arr[mid-1]==mid){
            return mid + 1;
        } else if(arr[mid] == mid + 1){
            left = mid + 1;
        } else{
            right = mid - 1;
        }

    }
    return 1;
}

int main(){
    int n;
    cin >> n;
    vector<long long>v (n-1);
    for(int i=0; i<n-1; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    cout << find(v, n) << endl;

    


    return 0;
}