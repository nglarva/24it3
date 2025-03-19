#include "functions.h"

int main(void) {
    /*
    Yêu cầu 1: Viết hàm để kiểm tra xem tên khách hàng có chứa ký tự số không. Nếu có, yêu cầu khách hàng nhập lại tên.
    */
   //Khai báo biến và kiểu dữ liệu để lưu tên khách hàng
    char name[100]= "aabbc";
    printf("Check: %d\n", checkDigitInStr(name));
    do
    {
        nhapTenKH(name);
        //printf("Do dai: %d\n", strlen(name));        
        
    } while (checkDigitInStr(name)==true);     
    printf("Ten KH duoc nhap vao: %s\n", name);
    return 0;
}
