#include <iostream>
using namespace std;
// Toán tử phân giải phạm vi(::) : dùng để truy cập biến toàn cục
/* Tình huống đặt ra: có sự trùng lặp tên giữa "biến cục bộ (local variable)" và biến toàn cục (global variable)
trong chương trình */
/* => Cách giải quyết: dùng toán tử phân giải phạm vi (::), có cấu trúc ::variable */

int value(10);
int main()
{
    int value = 5;
    value++;   // local variable +1
    ::value--; // global variable -1

    cout << "Local variable: " << value << endl;
    cout << "Global variable: " << ::value << endl;

    return 0;
}
/* LƯU Ý: CẦN TRÁNH ĐẶT TRÙNG LẶP GIỮA VIỆC ĐẶT TÊN BIẾN TOÀN CỤC VÀ BIẾN CỤC BỘ 
THAY VÀO ĐÓ TA CÓ THỂ THÊM TIỀN TỐ "g_" VÀO TRƯỚC TÊN CỦA BIẾN TOÀN CỤC ĐỂ DỄ PHÂN BIỆT */

