#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    int most = 1;
    int inner = 1;
    for(int i=1; i<s.size(); i++){
        if(s[i]==s[i-1]){
            inner++;
        }else{
            most = max(most, inner);
            inner = 1;
        }
    }
    cout << max(most, inner);

    return 0;
}