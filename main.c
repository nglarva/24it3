#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
void nhapTenKH(char name[100]);
bool checkDigitInStr(char name[100]);

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
        
    } while (checkDigitInStr(name) == 1);     
    printf("Ten KH duoc nhap vao: %s\n", name);
    return 0;
}
//Hàm nhập tên khách hàng
void nhapTenKH(char name[100]){
    printf("Nhap ten khach hang: ");
    //scanf("s", name);
    fgets(name,99,stdin);

    name[strlen(name)] = '\0';
    printf("%s\n",name);
}

// Kiểm tra điều kiện trong chuỗi có chứa số hay không
//Sử dụng các hàm trong thư viện ctype.h
bool checkDigitInStr(char name[100]){

    for (unsigned int i = 0; i < strlen(name); i++)
        {
           if (isdigit(name[i]))
           {
                printf ("co so trong ham. Yeu cau nhap lai \n");
                return true;
          }
           
        }
    return false;
}
