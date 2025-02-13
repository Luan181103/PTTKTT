// khai báo 
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <math.h>

using  namespace std;

// tổng mảng 1 chiều
int tong(int a[], int n)
{
    int S = 0;
    for (int i = 0; i < n; i++)
    {
        S += a[i];
    }
    return S;
}

// Tính tích mảng 1 chiều
int tich(int a[], int n)
{
    int P = 1;
    for (int i = 0; i < n; i++)
    {
        P *= a[i];
    }
    return P;
}

// hàm đếm số âm, số dương, số 0
void demSo(int a[], int n, int& soduong, int& soam, int& sokhong)
{
    soduong = 0; soam = 0; sokhong = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            soduong++;
        }
        else if (a[i] < 0)
        {
            soam++;
        }
        else
        {
            soam++;
        }
    }
}


// hàm tìm phần từ xuất hiện 1 lần
int demSo1lan(int a[], int n, int x)
{
    int kq = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]==x)
        {
            kq += 1;
        }
    }
    return kq;
}

void xuatHien1lan(int a[], int n, int b[], int& m)
{
    m = 0;
    for (int i = 0; i < n; i++)
    {
        if (demSo1lan(a, n, a[i]) == 1)
        {
            b[m] = a[i];
            m += 1;
        }
    }
}




//Thuật toán sắp xếp 
// 
// Sắp xêp tăng 
void sapxeptang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int x = a[i];
                a[i] = a[j];
                a[j] = x;
            }
        }
    }
}

// sắp xếp chẵn tăng 
void sapxepchantang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[j] % 2 == 0)
                {
                    if (a[i] > a[j])
                    {
                        int x = a[i];
                        a[i] = a[j];
                        a[j] = x;
                    }
                }
            }
        }

    }
}
// BT CHUONG 2
// Bai 1
// hàm liệt kê các giá trị chẵn


void lk_sochan(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf(" %d", a[i]);
        }
    }

}

// tìm giá trị âm của mảng
void lk_soam(int a[], int n)
{
    printf("Vi tri co so am la:");
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            printf(" a[%d]", i);
        }
    }
}

// hàm nhập mảng 1 chiều
void nhapMang1Chieu( float a[], int& n)
{
    printf("so phan tu mang: ");
    scanf_s("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("a[%d]: ", i);
        scanf_s("%f", &a[i]);
    }
}

void nhapMang1Chieu_songuyen(int a [], int& n)
{
    printf("so phan tu mang: ");
    scanf_s("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("a[%d]: ", i);
        scanf_s("%d", &a[i]);
    }
}

//Thuật toán tìm mix, max
float GTNN(float a[], int n)
{
    int x = 0;
    float min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            x = i;
        }
    }
    return min;
}

float GTLN(float a[], int n)
{
    int i = 0;
    float max = a[0];
    for (i = 0; i < n; i++)
    {
        if (max > a[i])
        {
            a[i] = max;
        }
    }
    return max;

}

float timsoduongdautien(float a[], int n)
{
    if (n <= 0)
    {
        return -1;
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            return a[i];
        }
    }

    return -1;
}

int timsochancuoicung(int a[], int n)
{
    if (n <= 0)
    {
        return -1;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] % 2 == 0)
        {
            return a[i];
        }
    }
    return -1;

}

int bai7(int a[], int n)
{
    if (n <= 0)
    {
        return -1;
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            return i;
        }
    }

    return -1;
}


int lasohoanthien(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    
    int tong = 0;
    for (int i = 1; i <= n/2; i++)
    {
        if (n % i == 0)
        {
            tong += i;
        }
    }
    return tong == n;
}


int bai8(int a[], int n)
{
    if (n < 0)
        return -1;
    int vt = -1;
    for (int i = 0; i < n; i++)
    {
        if (lasohoanthien(a[i]))
        {
            vt = i;
        }
    }
    return vt;
}

float bai9(float a[], int n)
{
    if (n <= 0)
    {
        return -1;
    }

    float min = FLT_MAX;
    int soduong = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            soduong = 1;
            if (a[i] < min)
            {
                min = a[i];
            }
        }
    }
    if (!soduong)
    {
        return -1;
    }

    return min;

}

int songuyento(int n)
{
    if (n <= 1)
    {
        return 0;
    }

    if (n == 2)
    {
        return 1;
    }

    if (n == 3)
    {
        return 1;
    }

    if (n % 2 == 0 )
    {
        return 0;
    }

    if (n % 3 == 0)
    {
        return 0;
    }


    for (int i = 5; i * i < n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return 0;
        }
    }

    return 1;
}

int bai10(int a[], int n)
{
    if (n <= 0)
    {
        return -1;
    }
    
    for (int i = 0; i < n; i++)
    {
        if (songuyento(a[i]))
        {
            return a[i];
        }
    }
}

int bai11(int a[], int n)
{
    if (n < 0)
    {
        return -1;
    }

    for (int i = 0; i < n; i++)
    {
        if (lasohoanthien(a[i]))
        {
            return a[i];
        }
    }
}

float bai12(float a[], int n)
{
    if (n <= 0)
    {
        return 0;
    }

    float max_am = -FLT_MAX;
    int soam = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            soam = 1;
            if (a[i] > max_am)
            {
                max_am = a[i];
            }
        }
    }

    if (!soam)
    {
        return 0;
    }

    return max_am;
}

int bai13(int a[], int n)
{
    if (n < 0)
    {
        return 0;
    }

    int ktr_songuyento = 0;
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (songuyento(a[i]) && a[i] > max)
        {
            ktr_songuyento = 1;
            max = a[i];
        }
    }

    if (!ktr_songuyento)
    {
        return 0;
    }

    return max;
}

int Bai14(int a[], int n)
{
    if (n <= 0)
    {
        return 0;
    }

    int max = INT_MAX;
    int ktr_sohoantien = 0;
    int vt = 0;
    for (int i = 0; i < n; i++)
    {
        if (lasohoanthien(a[i]) && a[i] < max)
        {
            ktr_sohoantien = 1;
            max = a[i];
            vt = i;
        }
    }
    return vt;

}

int Bai15(int a[], int n)
{
    if (n <= 0)
    {
        return -1;
    }

    int channhonhat = -1;
    int vt = -1;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            if (channhonhat == -1 || a[i] <= channhonhat)
            {
                channhonhat = a[i];
                vt = i;
            }
        }
    }
    return vt;

}


float bai16(float a[], int n, float x)
{
    if (n <= 0)
    {   
        printf("Mang ronngn\n");
        return 0;
    }
    int vt = -1;
    float giatri = 0;
    float xanhat = 0;

    for (int i = 0; i < n; i++)
    {
        float tuongduong = fabsf(a[i] - x);

        if (tuongduong > xanhat)
        {
            xanhat = tuongduong;
            vt = i;
            giatri = a[i];
        }
    }

    return giatri;
}

float bai17(float a[], int n, float x)
{
    if (n <= 0)
    {
        printf("Mang rong\n");
        return -1;
    }

    float gannhat = FLT_MAX;
    /*int vt = -1;*/
    float kq = 0;
    for (int i = 0; i < n; i++)
    {
        float tuongduong = fabsf(a[i] - x);

        if (tuongduong < gannhat)
        {
            gannhat = tuongduong;
            kq = a[i];
        }
    }
    return kq;
}

void bai18(float a[], int n, float *b, float *c)
{
    if (n <= 0)
    {
        printf("Mang rong\n");
        *b = 0;
        *c = 0;
    }

    *b = a[0];
    *c = a[0];

    for (int i = 0; i < n; i++)
    {
        if (a[i] < *b)
        {
            *b = a[i];
        }

        if (a[i] > *c)
        {
            *c = a[i];
        }
    }


}


int bai19(int a[], int n)
{
    if (n <= 0)
    {
        printf("Mang rong\n");
        return 0;
    }
    
    int x = abs(a[0]);

    for (int i = 0; i < n; i++)
    {
        if (abs(a[i]) > x)
        {
            x = a[i];
        }
    }

    return x;
}

int bai20(int a[], int n, int *x, int *y)
{
    if(n <= 0)
    {
        printf("Mang rong\n");
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] > *x && a[i] < *y)
        {
            return a[i];
        }
    }

    return *x;
}


// hàm xuất mảng 1 chiều
void xuatMang1Chieu(float a[], int n)
{
    printf("\nCac gia tri trong mang la");
    for (int i = 0; i < n; i++)
    {
        printf(" %.1f", a[i]);
    }

}

void xuatMang1Chieu_songuyen(int a[], int n)
{
    printf("\nCac gia tri trong mang la");
    for (int i = 0; i < n; i++)
    {
        printf(" %d", a[i]);
    }

}

int main()
{
    //int i;
    /*float a[10];*/
    int a[10];
    int n;
    /*nhapMang1Chieu(a, n);*/
    //lk_sochan(a, n);
    //lk_soam(a, n);
    //lk_giatriam(a, n);
    ////float max = GTLN(a, n);
    //printf("Bai4: %f",timsoduongdautien(a, n));
    //printf("Bai5: %d", timsochancuoicung(a, n));
    /*printf("bai6: %f", GTNN(a, n));*/
    /*printf("bai7: %d", bai7(a, n));*/
    //printf("bai8: %d", bai8(a, n)); 
    //printf("bai9: %f", bai9(a, n)); 
    //printf("bai10: %d", bai10(a, n));
    /*printf("bai11: %d", bai11(a, n));*/
    /*printf("bai12: %f", bai12(a, n));*/
    //printf("bai13: %d", bai13(a, n));
    //printf("bai14: a[%d]",Bai14(a, n));
    /*printf("bai15: a[%d]",Bai15(a, n));*/
    /*printf("bai16: %f", bai16(a, n, 5));*/
    /*printf("bai17: %f", bai17(a, n, 5));*/
    /*float b, c;*/
    /*bai18(a, n, &b, &c);
    printf("bai18: [%.1f, %.1f]",b ,c);*/
    /*int x = bai19(a, n);
    printf("[-%d, %d]", x, x);*/
    int x, y;
    printf("Nhap gia tri x: ");
    scanf_s("%d", &x);
    printf("Nhap gia tri y: ");
    scanf_s("%d", &y);
    nhapMang1Chieu_songuyen(a, n);
    printf("bai20: %d", bai20(a, n, &x, &y));
    xuatMang1Chieu_songuyen(a, n);

    /*xuatMang1Chieu(a, n);*/

}


