#include <stdio.h>
#include <string.h>
void nhapTenKH(char name[100]);

int main(void) {
    /*
    Yêu cầu 1: Viết hàm để kiểm tra xem tên khách hàng có chứa ký tự số không. Nếu có, yêu cầu khách hàng nhập lại tên.
    */
   //Khai báo biến và kiểu dữ liệu để lưu tên khách hàng
    char name[100]="abc4de";
    // Kiểm tra điều kiện trong chuỗi có chứa số hay không
    //Sử dụng các hàm trong thư viện ctype.h

    
    printf("%s", name);
    return 0;
}

void nhapTenKH(char name[100]){
    printf("Nhap ten khach hang: ");
    scanf("%[^\n]99s", name);

    name[strlen(name)] = '\0';
    printf("%s\n",name);
}
