/******************************************************************************
 * Họ và tên: [Nguyễn Phúc Nhân]
 * MSSV:      [PS47835]
 * Lớp:       [CS21301]
 *****************************************************************************/

 // BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN 
// Input: Nhập vào từ bàn phím chiều dài và chiều rộng 
// Output: Hiển thị ra màn hình chu vi và diện tích của hình chữ nhật

#include<stdio.h>
int main()
{
    float ChieuDai, ChieuRong; // Khai báo 2 biến chiều dài và chiều rộng của hình chữ nhật
    float dienTich, chuVi; // Khai báo biến cho diện tích và chu vi của hình chữ nhật
    
    
    // Người dùng nhập số đo chiều dài và chiều rộng
    printf("Nhập chiều dài (Số dương) : ");
    scanf("%f",&ChieuDai);
    printf("Nhập chiều rộng (Số dương) : ");
    scanf("%f",&ChieuRong);
    
    // Biểu thức tính toán của diện tích và Chu vi hình chữ nhật54
    dienTich = ChieuDai * ChieuRong;
    chuVi = (ChieuDai + ChieuRong)* 2;

    //In ra màn hình kết quả diện tích và chu vi hình chữ nhật
    printf("Diện tích hình chữ nhật = %.2f\n",dienTich);
    printf("Chu vi hình chữ nhật = %.2f",chuVi);


    return 0;
    

}