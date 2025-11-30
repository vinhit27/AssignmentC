#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

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
                    if (cong_suat > 300){
                        tong_tien = cong_suat * 2834.0;
                        printf("CONG SUAT DA SU DUNG: %.lf\n", cong_suat);
                        printf("TONG TIEN CAN THANH TOAN: %.00000fVND\n", tong_tien);
                    }
                }
            }
        }
    }
}



int soto(int menh_gia, int tien_doi){
    int so_to = tien_doi/menh_gia;
    if ( so_to > 0) {
        printf(" SO TO %d : %d \n", menh_gia, so_to);
        return tien_doi%menh_gia;
    };
    return tien_doi;
}

void bai5a() {
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

int main()
{
    bai5a();
}
