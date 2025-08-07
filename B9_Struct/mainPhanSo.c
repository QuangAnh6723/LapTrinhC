#include <stdio.h>

typedef struct {
    int tu;
    int mau;
} PhanSo_t;

// viet phep toan + 2 phan so
// viet phep toan - 2 phan so
// viet phep toan * 2 phan so

int tinhTong(int a, int b)
{   
    return a + b;
}

void inRaPhanSo(PhanSo_t ps)
{
    printf("phan so %d / %d\r\n", ps.tu, ps.mau);
}

PhanSo_t tinhTongPhanSo(PhanSo_t a, PhanSo_t b)
{   
    PhanSo_t psTong;
    psTong.mau = a.mau * b.mau;
    psTong.tu = a.tu * b.mau + a.mau * b.tu;
    return psTong;
}

int main()
{
    PhanSo_t psA, psB;
    psA.tu = 1;
    psA.mau = 3;
    psB.tu = 1;
    psB.mau = 2;
    inRaPhanSo(psA);
    inRaPhanSo(psB);
    
    PhanSo_t sumPS = tinhTongPhanSo(psA, psB);
    // 1/3 + 1/2 = 5/6
    inRaPhanSo(sumPS);

    return 0;
}