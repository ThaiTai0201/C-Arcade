#include <iostream>

using namespace std;

int main() {
    int salesVolume, commissionFee; // doanh số, phí hoa hồng
    cout << "Enter the sales volume for the month (in million VND): ";
    cin >> salesVolume;
    if (salesVolume <= 100) {
        commissionFee = salesVolume * 5/100;
    }
    else if (salesVolume <= 300) {
        commissionFee = salesVolume * 10/100;
    }
    else if (salesVolume > 300) {
        commissionFee = salesVolume * 20/100;
    }
    cout << "The total commission received is (in million VND): " << commissionFee << endl;

    return EXIT_SUCCESS;
}