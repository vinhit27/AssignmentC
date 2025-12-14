#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

void bai3()
{
    printf("\n=== BAI 3: TINH TIEN GIO KARAOKE ===\n");

    float so_gio;
    float tong_tien = 150000.0;

    printf("NHAP SO GIO: ");

    do
    {
        scanf("%f", &so_gio);
    } while (so_gio <= 0);

    if (so_gio <= 3)
    {
        tong_tien = so_gio * tong_tien;
        printf("So gio hat: %.0f\n", so_gio);
        printf("Tong tien can thanh toan la: %.0fVND\n", tong_tien);
    }
    else
    {

        float gio_tiep_theo = so_gio - 3;

        float tien_gio_tiep_theo = gio_tiep_theo * 100000.0;

        tong_tien = tong_tien * 3 + tien_gio_tiep_theo;

        if (so_gio > 5)
        {
            float tien_3_gio_dau = 150000.0 * 3;
            tong_tien = (so_gio - 3) * 100000.0;
            float tien_giam_gia = (so_gio - 5) * 100000.0 * 0.2;
            tong_tien = tien_3_gio_dau + tong_tien - tien_giam_gia;

            printf("\nVi so gio hat (> 5) la %f gio, ban duoc **giam gia 20%%**.\n", so_gio);
            printf("So tien giam gia: %.0fVND\n", tien_giam_gia);
        }
        printf("So gio hat: %f gio\n", so_gio);
        printf("Tong tien can thanh toan: %.0fVND\n", tong_tien);
    }
}

void bai4()
{

    printf("\n=== BAI 4: TINH TIEN DIEN ===\n");

    float cong_suat;
    float tong_tien;

    printf("NHAP CONG SUAT DA SU DUNG: ");

    do
    {
        scanf("%f", &cong_suat);
    } while (cong_suat <= 0);

    if (cong_suat <= 50)
    {
        tong_tien = cong_suat * 1678.0;
        printf("CONG SUAT DA SU DUNG: %.lf\n", cong_suat);
        printf("TONG TIEN CAN THANH TOAN: %.00000fVND\n", tong_tien);
    }
    else
    {
        if (cong_suat <= 100)
        {
            tong_tien = cong_suat * 1763.0;
            printf("CONG SUAT DA SU DUNG: %.lf\n", cong_suat);
            printf("TONG TIEN CAN THANH TOAN: %.00000fVND\n", tong_tien);
        }
        else
        {
            if (cong_suat <= 200)
            {
                tong_tien = cong_suat * 2014.0;
                printf("CONG SUAT DA SU DUNG: %.lf\n", cong_suat);
                printf("TONG TIEN CAN THANH TOAN: %.00000fVND\n", tong_tien);
            }
            else
            {
                if (cong_suat <= 300)
                {
                    tong_tien = cong_suat * 2536.0;
                    printf("CONG SUAT DA SU DUNG: %.lf\n", cong_suat);
                    printf("TONG TIEN CAN THANH TOAN: %.00000fVND\n", tong_tien);
                }
                else
                {
                    if (cong_suat > 300)
                    {
                        tong_tien = cong_suat * 2834.0;
                        printf("CONG SUAT DA SU DUNG: %.lf\n", cong_suat);
                        printf("TONG TIEN CAN THANH TOAN: %.00000fVND\n", tong_tien);
                    }
                }
            }
        }
    }
}

int soto(int menh_gia, int tien_doi)
{
    int so_to = tien_doi / menh_gia;
    if (so_to > 0)
    {
        printf(" SO TO %d : %d \n", menh_gia, so_to);
        return tien_doi % menh_gia;
    };
    return tien_doi;
}

void bai5a()
{
    printf("\n=== BAI 5: CHUC NANG DOI TIEN ===\n");

    int tien_doi;
    float so_to = 0;

    printf(" NHAP SO TIEN CAN DOI: ");

    do
    {
        scanf("%d", &tien_doi);
    } while (tien_doi <= 0);

    int arr[9] = {500, 200, 100, 50, 20, 10, 5, 2, 1};

    int result = tien_doi;

    for (size_t i = 0; i < 9; i++)
    {
        result = soto(arr[i], result);
    }
}

void bai6()
{

    printf("\n=== BAI 6: VAY LAI SUAT NGAN HANG ===\n");

    int tien_vay, so_thang_vay;
    float lai_suat, tien_phai_tra;

    printf(" NHAP SO TIEN VAY: ");
    do
    {
        scanf("%d", &tien_vay);
    } while (tien_vay <= 0);

    printf(" NHAP SO THANG VAY: ");
    do
    {
        scanf("%d", &so_thang_vay);
    } while (so_thang_vay <= 0);

    printf(" NHAP SO LAI SUAT: ");
    do
    {
        scanf("%f", &lai_suat);
    } while (lai_suat <= 0);

    tien_phai_tra = tien_vay * (lai_suat * pow((lai_suat + 1), so_thang_vay)) / (pow((1 + lai_suat), so_thang_vay) - 1);
    printf(" SO TIEN PHAI TRA: %f ", tien_phai_tra);
}

struct SinhVien
{
    char ten[50];
    char maSV[10];
    float diemTB;
};

void bai8()
{
    int n;
    printf("Nhap so sinh vien: ");
    scanf("%d", &n);
    getchar();

    struct SinhVien sv[n];

    for (int i = 0; i < n; i++)
    {
        printf("\nNhap thong tin sinh vien thu %d\n", i + 1);

        printf("Ten: ");
        fgets(sv[i].ten, sizeof(sv[i].ten), stdin);
        sv[i].ten[strcspn(sv[i].ten, "\n")] = '\0';

        printf("Ma SV: ");
        fgets(sv[i].maSV, sizeof(sv[i].maSV), stdin);
        sv[i].maSV[strcspn(sv[i].maSV, "\n")] = '\0';

        printf("Diem TB: ");
        scanf("%f", &sv[i].diemTB);
        getchar();

    }
    for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (sv[i].diemTB < sv[j].diemTB)
                {
                    struct SinhVien temp = sv[i];
                    sv[i] = sv[j];
                    sv[j] = temp;
                }
            }
        }
        printf("\nDanh sach sinh vien sau khi sap xep (diem giam dan):\n");
        for (int i = 0; i < n; i++)
        {
            printf("%d. %-20s | MaSV: %-10s | Diem: %.2f\n", i + 1, sv[i].ten, sv[i].maSV, sv[i].diemTB);
        }
}



void bai9() {
    srand(time(NULL));
    printf("\n=== BAI 9: GAME FPT-LOTT ===\n");
    printf("SO DUOC CHON PHAI TU 1-45\n");
    int a[6],b[6];
    int dung, hople;
    int trung = 0;

    for (int i =0; i<6; i++ ){
        do{
            dung=1;
            printf("Nhap so thu %d: ", i+1);
            scanf("%d", &a[i]);
            if ( a[i] < 1 || a[i] > 45){
                printf("KHONG HOP LE\n");
                dung=0;
            }

            for ( int j = 0 ; j < i; j++){
                if (a[i] == a[j]){
                    printf("SO BI TRUNG\n");
                    dung=0;
                    break;
                }
            }

        } while (!dung);
    }

    printf("6 so da nhap: ");
    for ( int i = 0; i < 6; i++) {
        printf("%d ", a[i]);
    };

    for (int i = 0; i < 6; i++) {
        do {
            hople = 1;
            b[i] = rand() % 45 + 1;

            for (int j = 0; j < i; j++) {
                if (b[i] == b[j]) {
                    hople = 0;
                    break;
                }
            }
        } while (!hople);
    
    }

    printf("\n6 so may random: ");
    for (int i = 0; i < 6; i++){
        printf("%d ", b[i]);
    }

    for ( int i = 0; i < 6 ; i++){
        for (int j = 0; j < 6 ; j++){
            if ( a[i] == b[j] ){
                trung++;
                break;
            }
        }
    }

    float tien_thuong = 0;
    float c[] = {0,0.1,0.2,0.4,0.6,0.8,1};
    if (trung > 0){
        tien_thuong = 120000 * c[trung];
    }

    printf("\nSo trung: %d", trung);
    printf("\nTien thuong: %.2f VND", tien_thuong);


}


int main()
{
    bai9();
}
