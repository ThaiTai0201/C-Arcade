#include <iostream>

using namespace std;

struct Luong {
    float luong;
    int thueTNCN;
    float luongRong;
};

void nhapLuongNhanVien(Luong &luongNhanVien) {
    cout << "Nhap so tien luong cua nhan vien: ";
    cin >> luongNhanVien.luong;
}

int tinhLuongNhanVien(Luong luongNhanVien) {
    if (luongNhanVien.luong < 7) {
        luongNhanVien.thueTNCN = 10/100;
        luongNhanVien.luongRong = luongNhanVien.luong - luongNhanVien.luong*luongNhanVien.thueTNCN;
    }
    else if (luongNhanVien.luong >= 7 && luongNhanVien.luong <= 15) {
        luongNhanVien.thueTNCN = 20/100;
        luongNhanVien.luongRong = luongNhanVien.luong - luongNhanVien.luong*luongNhanVien.thueTNCN;
    }
    else {
        luongNhanVien.thueTNCN = 30/100;
        luongNhanVien.luongRong = luongNhanVien.luong - luongNhanVien.luong*luongNhanVien.thueTNCN;
    }
    return luongNhanVien.luongRong;
}

int main() {
    Luong luongNhanVien;
    nhapLuongNhanVien(luongNhanVien);
    tinhLuongNhanVien(luongNhanVien);
    cout << "Luong nhan vien: " << luongNhanVien.luong << endl;
    cout << "Thue thu nhap ca nhan: " << luongNhanVien.thueTNCN << " %" << endl;
    cout << "Luong thuc nhan: " << luongNhanVien.luongRong;

    return EXIT_SUCCESS;
}