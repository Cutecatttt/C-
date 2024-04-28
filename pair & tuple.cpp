#include <bits/stdc++.h>

using namespace std;

//pair<datatype1, datatype1> v;
//make_pair (a, b): khoi tao voi hai gia tri a va b

int main() {
    pair<int,int> v = make_pair(100, 200);
    //pair<int,int> v = {100, 200};
    cout << v.first << endl;
    cout << v.second << endl;
    
    //tuple<datatype, datatype, ...> t;
    tuple<int, int, int> t = {100, 200, 300};
    cout << get<0>(t) << endl;
}
