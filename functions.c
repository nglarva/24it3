#include "functions.h"

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
