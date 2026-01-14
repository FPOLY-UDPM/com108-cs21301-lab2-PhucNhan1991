/******************************************************************************
 * Họ và tên: [Nguyễn Phúc Nhân]
 * MSSV:      [PS47835]
 * Lớp:       [CS21301]
 *****************************************************************************/

// BÀI LÀM THÊM
// BÀI 5: XÂY DỰNG CHƯƠNG TRÌNH TÍNH TÍCH VÀ THƯƠNG CỦA 2 SỐ

#include<stdio.h>
float a, b, thuong;
int main()
{
    printf("Nhập 2 số a và b :");
    scanf("%f %f",&a, &b);
    if(b == 0)
    {
        printf("Phép chia không thể thực hiện do b = 0");
    }
    else 
    {
        thuong = a/b;
        printf("Kết quả của %.2f/%.2f = %.2f",a,b,thuong);
    }
    return 0;
}

