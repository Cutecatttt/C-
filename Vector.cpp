#include <bits/stdc++.h>

using namespace std;
/*
vector<data_type> vector_name;
size() : Trả về số lượng phần tử trong vector. Độ phức tạp O(1)
length() : Trả về số lượng phần tử trong vector. Độ phức tạp O(1)
push_back() : Thêm phần tử vào cuối vector. Độ phức tạp O(1)
pop_back() : Xóa phần tử cuối cùng trong vector. Độ phức tạp O(1)
*/
int main(){
    int n; cin >> n;
    vector<int> a[n];
    for(int i = 0; i < n ; i++){
        int m; cin >> m;
        for(int j = 0; j < m; j++){
            int x; cin >> x;
            a[i].push_back(x);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < a[i].size(); j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
