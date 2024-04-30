#include <bits/stdc++.h>

using namespace std;

/*
multimap<key_data_type, value_data_type> map_name
Các phần tử trong map có thể có key trùng nhau
Multimap lưu các phần tử theo thứ tự tăng dần về key
Multimap không hỗ trợ truy cập value thông qua key bằng cú pháp map[key]
Multimap không hỗ trợ chỉ số như mảng hay vector mà chỉ số của multimap chính là key
Sử dụng các hàm tương tự như trong set
mp.find(): Trả về iterator tới cặp phần tử đầu tiên có key tương ứng trong map.
mp.erase(key): Xóa đi các phần tử có cùng giá trị key trong multimap. => ĐPT(logN)
mp.erase(iterator): Chỉ xóa đi phần tử mà iterator đang chỉ tới. => ĐPT(1)
*/

int main(){
    multimap<int, int> mp;
    mp.insert(make_pair(1, 2));
    mp.insert(make_pair(2, 4));
    mp.insert(make_pair(3, 5));
    mp[1] = 3;
    mp[4] = 6;
    auto it = mp.find(3);
    mp.erase(it);
    for(pair<int, int> it : mp){
        cout << "key = " << it.first << ", value = " << it.second << endl;
    }
}
