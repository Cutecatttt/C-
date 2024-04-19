#include <bits/stdc++.h>

using namespace std;
/*
getline(cin, string, delimiter) dùng để đọc xâu đến khi gặp kí tự delimiter
Trước hàm getline() mà trong luồng cin có thừa kí tự enter thì phải dùng thêm hàm cin.ingore() trước đó

Để nối 2 xâu bạn có thể dùng toán tử +=
Để so sánh 2 xâu bạn có thể sử dụng luôn các toán tử so sánh như >, <, !=, ==...

Hàm length() và size() Trả về độ dài xâu
Hàm push_back()        Thêm 1 ký tự vào cuối string và pop_back() sẽ xóa đi ký tự cuối cùng trong string.
Hàm insert()           Chèn một xâu khác vào vị trí bất kỳ trong xâu hiện tại thông qua chỉ số chèn.
Hàm erase(pos, n)      Xóa n ký tự trong xâu s tính từ chỉ số pos
Hàm substr(pos, n)     Trả về xâu con gồm n ký tự tính từ chỉ số pos của xâu s
Hàm find()             Tìm kiếm sự xuất hiện của xâu con trong xâu hiện tại,
<hàm sẽ trả về chỉ số đầu tiên của xâu con nếu xâu này tồn tại trong xâu đang tìm kiếm, ngược lại sẽ trả về giá trị là string::npos>
Hàm a.compare(b)       So sánh 2 xâu a và b,
<Hàm trả về 0 khi hai xâu bằng nhau, trả về -1 nêu xâu a nhỏ hơn xâu b và trả về 1 nếu xâu a lớn hơn xâu b>
Hàm tolower()          Chuyển các chữ về chữ in thường
Hàm toupper()          Chuyển các chữ về chữ in hoa
Hàm stringstream       Biến xâu string của bạn thành luồng (tương tự như luồng vào từ bàn phím là cin)

Hàm stoi()	     Chuyển string thành số int
Hàm stoll()      Chuyển string thành số long long
Hàm stof()       Chuyển string thành số float
Hàm stod()	     Chuyển string thành số double
Hàm stold()      Chuyển string thành số long double
Hàm to_string()  Chuyển số thành xâu.
*/
int main(){
  int n;
  cout << "nhap so tuoi : ";
  cin >> n;
  string s;
  cout << "nhap ho ten : ";
  cin.ignore();
  getline(cin, s);
  stringstream ss(s);
  stringstream sa(s);
  string tmp;
  while(ss >> tmp){
    cout << tmp << endl;
  }
  while(getline(sa, tmp, ' ')){
    cout << tmp << endl;
  }
  s.push_back('@');
  s += "gmail.com";
  s.insert(0, "email: ");
  for(char &x : s)
		x = tolower(x);
  cout << "So tuoi : " << n << endl;
  if(s.find("nguyen") == string::npos){
      cout << "NOT FOUND\n";
  }
  else{
      cout << "FOUND\n";
      cout << s.find("Nguyen") << endl;
  }

  cout << s << endl;
  return 0;
}
