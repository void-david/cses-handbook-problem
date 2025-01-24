#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

long long solve(vector<long long> &array, int n){
    long long best = INT_MIN; 
    long long sum = 0;
    for (int k = 0; k < n; k++) {
    sum = max(array[k],sum+array[k]);
    best = max(best,sum);
    }
    return best;
}

int main(){
    int n;
    cin >> n;
    vector<long long> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    cout << solve(v, n) << endl;
    



    return 0;
}