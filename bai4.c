/******************************************************************************
 * Họ và tên: [Nguyễn Phúc Nhân]
 * MSSV:      [PS47835]
 * Lớp:       [CS21301]
 *****************************************************************************/

// BÀI 4: XÂY DỰNG CHƯƠNG TRÌNH TÍNH ĐIỂM TRUNG BÌNH 
// Input: Nhập vào từ bàn phím điểm môn Toán, Lý, Hóa 
// Output: Hiển thị ra màn hình điểm trung bình  
// Biết rằng
// Điểm Toán có hệ số 3, điểm Lý có hệ số 2, điểm Hóa có hệ số 1

#include <stdio.h>
//Khai báo biến cho các điểm môn Toán, Lý, Hoá
float diemToan, diemLy, diemHoa, diemTrungBinh=0;
int main()
{
    // Nhập  điểm môn Toán 
    printf("Nhập điểm môn Toán\n");
    scanf("%.2f",&diemToan);

    // Nhập điểm môn Lý
    printf("Nhập điểm môn Lý\n");
    scanf("%.2f",&diemLy);

    printf("Nhập điểm môn Hoá");
    scanf("%.2f",&diemHoa);

    // Biểu thức tính điểm trung bình của 3 môn Toán, Lý, Hoá
    diemTrungBinh = ((diemToan * 3) + (diemLy*2) + diemHoa)/6;

    // In ra màn hình điểm trung bình của 3 môn
    printf("Điểm trung bình của 3 môn Toán, Lý, Hoá = %.2f",diemTrungBinh);

    return 0; 
}