#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main(){

    int n;
    cin >> n;
    if(n==2 || n==3){
        cout << "NO SOLUTION";
    } else{
        vector<int> sol;
        if(n%2==0){
            for(int i=2; i<=n; i+=2){
                sol.push_back(i);
            }
            for(int i=1; i<n; i+=2){
                sol.push_back(i);
            }
        }else{
            for(int i=2; i<n; i+=2){
                sol.push_back(i);
            }
            for(int i=1; i<=n; i+=2){
                sol.push_back(i);
            }
        }

        for(int i=0; i<sol.size(); i++){
            cout << sol[i] << " ";
        }
        cout << endl;

    }
    
    


    return 0;
}