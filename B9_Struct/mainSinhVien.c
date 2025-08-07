#include <stdio.h>
#include <string.h>

struct SinhVien
{
    char ten[100];
    int tuoi;
    int mssv[10];
    float dToan;
    float dAnh;
    float dVan;
    float dTb;
};

int main()
{
    struct SinhVien sv[100];
    sv[0].tuoi = 10;
    strcpy(sv[0].ten," le quag anh");
    gets(sv[0].ten);

    sv[1].tuoi = 30;



    return 0;
}