#include <stdio.h>

int main(void) {
    /*
    Yêu cầu 1: Viết hàm để kiểm tra xem tên khách hàng có chứa ký tự số không. Nếu có, yêu cầu khách hàng nhập lại tên.
    */
   //Khai báo biến và kiểu dữ liệu để lưu tên khách hàng
    char name[100];
   //Sử dụng scanf nhập tên khách hàng từ bàn phím
    printf("nhap ten khach hang: ");
    scanf("%[^\n]99s", &name);
   //In tên khách hàng ra màn hình
    printf("%s",name);
    // Kiểm tra điều kiện trong chuỗi có chứa số hay không

   



    return 0;
}
