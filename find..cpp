#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>v = {1,2,3,3,5,3};
    auto it = find(v.begin(),v.end(),300);

    if(it== v.end()){
        cout << "Not found" << " ";
    }
    
    else{
        cout << "Found" << " ";
    }
    return 0;
}