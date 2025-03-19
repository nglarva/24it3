#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
void nhapTenKH(char name[100]);

int main(void) {
    /*
    Yêu cầu 1: Viết hàm để kiểm tra xem tên khách hàng có chứa ký tự số không. Nếu có, yêu cầu khách hàng nhập lại tên.
    */
   //Khai báo biến và kiểu dữ liệu để lưu tên khách hàng
    char name[100]= "aab4c";
    bool isDigitInStr;
    do
    {
        isDigitInStr = 0;
        nhapTenKH(name);
       
        name[strlen(name)] = '\0';
        printf("Do dai: %d\n", strlen(name));
        for (unsigned int i = 0; i < strlen(name); i++)
        {
           if (isdigit(name[i]))
           {
                printf ("co so trong ham. Yeu cau nhap lai \n");
                isDigitInStr = true;
                break;
          }
           
        }
        printf("%d\n", isDigitInStr);
    } while (isDigitInStr == 1);
    
        
        
    // Kiểm tra điều kiện trong chuỗi có chứa số hay không
    //Sử dụng các hàm trong thư viện ctype.h


    printf("%s", name);
    return 0;
}

void nhapTenKH(char name[100]){
    printf("Nhap ten khach hang: ");
    //scanf("s", name);
    fgets(name,99,stdin);

    name[strlen(name)] = '\0';
    printf("%s\n",name);
}
