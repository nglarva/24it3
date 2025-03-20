#include "functions.h"
#define NOW 2025
//function prototype
bool isLeapYear(int year);
bool checkMonth(int month);

int month31[7] = {1,3,5,7,8,10,12};
int month30[4] = {4,6,9,11};

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
    int month;
    int day;
    bool valid = true;

    do {
        printf("Nhap nam hien tai: \n");
        scanf("%d", &leapyear);

        if(leapyear < 2000 || leapyear > NOW){
            valid = false;
        }
        printf("nhap thang: \n");
        scanf("%d", &month);

        if(month<=0 &&month>12)
        {
            valid = false;
        }
        printf("nhap ngay: \n");
        scanf("%d", &day);

        if(day<= 0 || day > 31){
            valid = false;
        }
        if(checkMonth(month) == -1 && day > 31)
        {
            printf("Thang %d khong co %d ngày", month, day);
            valid = false;
        }
        else if(checkMonth(month) == 0 && isLeapYear(leapyear) && day > 29){
            printf("Thang %d khong co %d ngày", month, day);
            valid = false;
        }
        else if (checkMonth(month) == 0 && !isLeapYear(leapyear) && day > 28){
            printf("Thang %d khong co %d ngày", month, day);
            valid = false;
        }
        


    }while(valid == false);
    
    return 0;
    
}

bool isLeapYear(int year){
    return year % 4 == 0 ? 1 : 0;
}
bool checkMonth(int month){
    for(int i=0;i< sizeof(month30)/sizeof(month30[0]);i++){
        if(month = month30[i]){
            return -1;
        }
    }
    if(month == 2){
        return 0;
    }
    return 1;

}