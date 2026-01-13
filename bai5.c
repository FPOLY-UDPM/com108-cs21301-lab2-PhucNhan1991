/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

// BÀI LÀM THÊM
// BÀI 5: XÂY DỰNG CHƯƠNG TRÌNH TÍNH TÍCH VÀ THƯƠNG CỦA 2 SỐ

#include <stdio.h>

int main(){
    int so1, so2;
    printf("Nhập 2 số 1:");
    scanf("%d",&so1);

    printf("Nhập 2 số 2:");
    scanf("%d",&so2);

    int tich=1;
    float thuong;

    tich = so1 * so2;
    thuong = so1 /so2;
    printf(" tích của 2 số=%d\n",tich);
    printf("Thương của 2 số =%.2f8 ",thuong);



    return 0;
} 