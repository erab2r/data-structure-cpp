#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>v = {1,2,3,3,5,3};
    replace(v.begin(),v.end()-1,3,300);

    for(int x : v){
        cout << x << " ";
    }
    return 0;
}