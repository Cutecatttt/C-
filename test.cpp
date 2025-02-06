#include<bits/stdc++.h>
using namespace std;
int n;
int arr[200005], save[200005];
map<int, int> mp;

int main() {
    cin >> n;
    int k = 0; // số nút
    int maximum = INT_MIN;
    //xác định nút
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] > maximum) {
            save[k] = i;
            k++;
            maximum = arr[i];
        }
    }
    save[k] = arr[n-1];

    //số nút lớn hơn pt cuối
    int x = 0;
    for(int i = 0; i < k; i++) {
        if(arr[save[k]] > arr[n-1]) {
            x = k-i;
            break;
        }
    }


    //tính độ dài maximum giữa các nút
    for(int i = 0; i < k; i++){
        int maximum = 0;
        for(int j = save[i]+1; j < save[i+1]; j++) {
            int z = 0;
            int temp = INT_MIN;

            for(int k = j; k < save[i+1]; k++) {
                if(arr[k] > temp) {
                    z ++;
                    temp = arr[k];
                }
            }

            if(z > maximum) {
                maximum = z;
            }
        }
        save[i] = maximum;
    }
    /*
    -TH1 cắt trước max của dãy => max của (độ dài max giữa 2 nút) + (các nút > hơn nó)
    -TH2 cắt sau max => độ dài max từ (max của dãy) đến (pt cuối) + (các nút > (pt cuối))
    -TH3 ko cắt => số nút
    */
    //TH3 + TH2
    int ans = max(k, save[k-1] + x + 1);
    //TH1
    for(int i = 0; i < k-1 ; i++) {
        if(save[i] +(k-i-1) > ans) {
            ans = save[i] +(k-i-1);
        }
    }
    cout << ans;
    return 0;
}
