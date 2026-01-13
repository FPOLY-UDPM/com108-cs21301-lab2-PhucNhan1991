/******************************************************************************
 * Họ và tên: [Nguyễn Phúc Nhân]
 * MSSV:      [PS47835]
 * Lớp:       [CS21301]
 *****************************************************************************/

 // BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH CỘNG / TRỪ 2 SỐ 
// Input: Nhập vào từ bàn phím 2 số  
// Output: Hiển thị ra màn hình tổng, hiệu 2 số 

#include <stdio.h>

int main(){
    


    float x, y; //Khai bao 2 bien x, y
    printf("Nhap 2 so x va y\n"); // Hiển thị nội dung câu " Nhập 2 số x và y"
    scanf("%f %f",&x, &y); // Câu lệnh dùng để nhập 2 số x và y
    printf("Tong 2 so %.1f + %.1f = %.1f\n",x,y ,x+y); // In ra màn hình tổng của 2 số x +y
    printf("Hieu 2 so x - y = %.1f", x-y); // In ra màn hình hiệu của 2 số x -y
    return 0;

}

