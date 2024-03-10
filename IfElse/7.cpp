#include <iostream>

using namespace std;

int main() {
    float tongThanhToan, thoiGianSuDung;
    const int phiThueBao = 25000;
    const int phi50PhutDauTien = 600;
    const int phi150PhutTiepTheo = 400;
    const int phiSau200Phut = 200;
    cout << "Nhap thoi gian su dung cua khach hang (phut): ";
    cin >> thoiGianSuDung;
    if (thoiGianSuDung <= 50) {
        tongThanhToan = phiThueBao + phi50PhutDauTien;
    }
    else if (50 < thoiGianSuDung && thoiGianSuDung <= 200) {
        tongThanhToan = phiThueBao + phi50PhutDauTien + (thoiGianSuDung - 50)*phi150PhutTiepTheo; 
    }
    else {
        tongThanhToan = phiThueBao + phi50PhutDauTien + 150*phi150PhutTiepTheo + (thoiGianSuDung - 200)*phiSau200Phut;
    }
    cout << "Tong so tien khach hang phai thanh toan: " << tongThanhToan;

    return EXIT_SUCCESS;
}