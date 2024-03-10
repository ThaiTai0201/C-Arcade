#include <iostream>

using namespace std;

int main() {
    float diemKiemTra1, diemKiemTra2, diemKiemTra3, diemThiGiuaKi, diemThiCuoiKi;
    float tongDiemKiemTra, tongDiemHK;
    cout << "-----------Diem kiem tra---------------" << endl;
    cout << "Nhap diem kiem tra 1: ";    cin >> diemKiemTra1;
    cout << "Nhap diem kiem tra 2: ";    cin >> diemKiemTra2;
    cout << "Nhap diem kiem tra 3: ";    cin >> diemKiemTra3;
    tongDiemKiemTra = diemKiemTra1 + diemKiemTra2 + diemKiemTra3;

    cout << endl << "-----------Diem thi giua ki------------" << endl;
    cout << "Nhap diem thi giua ki: ";  cin >> diemThiGiuaKi;
    cout << "-----------Diem thi cuoi ki------------" << endl;
    cout << "Nhap diem thi cuoi ki: "; cin >> diemThiCuoiKi;
    
    tongDiemHK = tongDiemKiemTra + diemThiGiuaKi + diemThiCuoiKi;
    cout << endl << "-------------Tong diem---------------" << endl;
    cout << "Tong diem kiem tra: " << tongDiemKiemTra << endl;
    cout << "Tong diem hoc ki: " << tongDiemHK;

    return EXIT_SUCCESS;
}