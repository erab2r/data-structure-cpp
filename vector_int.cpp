#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>v(10,-2);
    vector<int>v2(v);
    for(int i=1;i <v.size(); i++) {
        cout << v[i] << " ";
    }
    return 0;
}