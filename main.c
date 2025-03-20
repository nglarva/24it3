#include "functions.h"
#define NOW 2025

int main(void)
{
    /*
    Yêu cầu 1: Viết hàm để kiểm tra xem tên khách hàng có chứa ký tự số không. Nếu có, yêu cầu khách hàng nhập lại tên.
    */
    // Khai báo biến và kiểu dữ liệu để lưu tên khách hàng
    //  char name[100]= "aabbc";
    //  printf("Check: %d\n", checkDigitInStr(name));
    //  do
    //  {
    //      nhapTenKH(name);
    //      //printf("Do dai: %d\n", strlen(name));

    // } while (checkDigitInStr(name)==true);
    // printf("Ten KH duoc nhap vao: %s\n", name);

    /*
    Yêu cầu 2: Viết một hàm để kiểm tra xem ngày chiếu có hợp lệ không (định dạng ngày tháng năm đúng: dd/mm/yyyy).
    */

    // Nhập năm từ bàn phím. Kiểm tra điều kiện năm nhuận
    int leapyear;
    do
    {
        printf("Nhap nam hien tai:");
        scanf("%d", &leapyear);
    }while (leapyear <= 2000 || leapyear >= NOW);
    if (leapyear % 4 == 0)
        {
            printf("La nam nhuan\n");
        }
        else
        {
            printf("Nam khong nhuan\n");
        }
    

    return 0;
}
