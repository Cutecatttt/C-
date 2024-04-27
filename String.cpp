#include <bits/stdc++.h>

using namespace std;
/*
getline(cin, string, delimiter) dùng để đọc xâu đến khi gặp kí tự delimiter
Trước hàm getline() mà trong luồng cin có thừa kí tự enter thì phải dùng thêm hàm cin.ingore() trước đó

Để nối 2 xâu bạn có thể dùng toán tử +=
Để so sánh 2 xâu bạn có thể sử dụng luôn các toán tử so sánh như >, <, !=, ==...

Hàm length() và size() Trả về độ dài xâu
Hàm push_back()        Thêm 1 ký tự vào cuối string 
Hàm pop_back()         Xóa đi ký tự cuối cùng trong string.
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

Hàm stoi()	 Chuyển string thành số int
Hàm stoll()      Chuyển string thành số long long
Hàm stof()       Chuyển string thành số float
Hàm stod()	 Chuyển string thành số double
Hàm stold()      Chuyển string thành số long double
Hàm to_string()  Chuyển số thành xâu.
*/
void email_1(string n, string s){
	s += ".";
	//tach ho va ten
	while(s.find(" ") != string::npos){
	    s[0] = toupper(s[0]);
	    int pos = s.find(" ");
	    s += s[0];
	    s.erase(0, pos+1);
	}
	s[0] = toupper(s[0]);
    n.erase(0, 2) ;
    s += n;
    s.insert(0, "email: ");
    s += "@sis.hust.edu.vn";
    cout << s << endl;
}

void email_2(string n, string s){
    stringstream ss(s);
    string tmp;
    string a = ".";
    //dich bit
    while(ss >> tmp){
        a+= toupper(tmp[0]);
    }
    tmp += a;
    tmp[0] = toupper(tmp[0]);
    tmp.pop_back();
    n.erase(0, 2) ;
    tmp += n;
    tmp.insert(0, "email: ");
    tmp += "@sis.hust.edu.vn";
    cout << tmp << endl;
}

void email_3(string n, string s){
    stringstream ss(s);
    string tmp;
    string a = ".";
    //tach ho va ten
    while(getline(ss, tmp, ' ')){
        a+= toupper(tmp[0]);
    }
    tmp += a;
    tmp[0] = toupper(tmp[0]);
    tmp.pop_back();
    n.erase(0, 2) ;
    tmp += n;
    tmp.insert(0, "email: ");
    tmp += "@sis.hust.edu.vn";
    cout << tmp << endl;
}

int main(){
    string n;
    cout << "nhap ma so sinh vien: ";
    cin >> n;
    string s;
    //xoa lenh xuong dong truoc do
    cin.ignore();
    //nhap xau co dau cach
    cout << "nhap ten sinh vien: ";
    getline(cin, s);
    //chuyen ve chu in thuong
    for(char &x : s)
		x = tolower(x);
	email_1(n, s);
	email_2(n, s);
    email_3(n, s);
    return 0;
    
}
