/******************************************************************************
 * Họ và tên: [Nguyễn Phúc Nhân ]
 * MSSV:      [PS47835]
 * Lớp:       [CS21301]
 *****************************************************************************/

// BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN 
// Input: Nhập vào bán kính của đường tròn 
// Output: Hiển thị ra màn hình chu vi và diện tích của hình tròn

#include <stdio.h>
#define PI 3.14 // Khai báo hằng số PI = 3.14
int main()
{
    //Khai báo biến bán kính, Chu vi, diện tích
    float banKinh, chuVi, dienTich;

    // Nhập độ lớn bán kính hình tròn
    printf("Nhập bán kính hình tròn (Nhớ nhập > 0 nhé bạn)");
    scanf("%.2f",&banKinh);

    //Biểu thức tính Chu vi và diện tích hình tròn
    chuVi = 2 * PI * banKinh ;

    dienTich = banKinh * banKinh * PI;

    //In ra màn hình kết quả Chu vi và Diện tích hình tròn
    printf("Chu vi hình tròn = %.2f\n", chuVi);
    printf("Diện tích hình tròn = %.2f",dienTich);

    return 0;
}