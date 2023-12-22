#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <math.h>
#include <conio.h>

int dizi[4][4] = {0}, ic_deger, sayac = 0, sira, sutun=0,satir=0;

char yon;

void baslangıc()
{

    printf("\n\n\t\t\t\t------2048-GAME------");
    

    srand((int)(time(0)));

    for (int i = 1; i <= 2; i++)
    {
        sutun = rand() % 4 ;
        satir = rand() % 4 ;
        
        if (dizi[sutun][satir]==0)
        {
            dizi[sutun][satir] = 2;
        }
        
    }


    for (int x = 0; x < 4; x++)
    {
        printf("\n\t\t\t\t|");

        for (int y = 0; y < 4; y++)
        {
            if (dizi[x][y]==0)
            {
                printf("    ");
            }
            else
            {
                printf("%4d", dizi[x][y]);
                
            }
            printf("|");
        }

        printf("\n\t\t\t\t---------------------");
    }

}




void veri()
{
    printf("\n\t\t  Yukarı->W      Aşağı->S      Sol->A      Sağ->D\n\n\t\t  Lütfen yön seçiniz: ");

    yon = _getch();

    sayac = 0;

}



void sol()
{
    for (int x = 0; x < 4; x++)
    {
        sira = 1;
        while (sira != 4)
        {
            if (dizi[x][sira] != 0 && dizi[x][sira - 1] == 0)
            {
                dizi[x][sira - 1] = dizi[x][sira];
                dizi[x][sira] = 0;
                sira = 1;
            }
            else
            {
                sira++;
            }
        }
    }


    for (int x = 0; x < 4; x++)
    {
        sira = 0;
        while (sira != 4)
        {
            if (dizi[x][sira] == dizi[x][sira+1])
            {
                dizi[x][sira] += dizi[x][sira+1];
                dizi[x][sira + 1] = 0;
            }
            sira++;
        }
    }

    for (int x = 0; x < 4; x++)
    {
        sira = 1;
        while (sira != 4)
        {
            if (dizi[x][sira] != 0 && dizi[x][sira - 1] == 0)
            {
                dizi[x][sira - 1] = dizi[x][sira];
                dizi[x][sira] = 0;
                sira = 1;
            }
            else
            {
                sira++;
            }
        }
    }


}


void sag()
{
    for (int x = 0; x < 4; x++)
    {
        sira = 2;
        while (sira != -1)
        {
            if (dizi[x][sira] != 0 && dizi[x][sira + 1] == 0)
            {
                dizi[x][sira + 1] = dizi[x][sira];
                dizi[x][sira] = 0;
                sira = 2;
            }
            else
            {
                sira--;
            }
        }
    }


    for (int x = 0; x < 4; x++)
    {
        sira = 3;
        while (sira != -1)
        {
            if (dizi[x][sira] == dizi[x][sira - 1])
            {
                dizi[x][sira] += dizi[x][sira - 1];
                dizi[x][sira - 1] = 0;
            }
            sira--;
        }
    }

    for (int x = 0; x < 4; x++)
    {
        sira = 2;
        while (sira != -1)
        {
            if (dizi[x][sira] != 0 && dizi[x][sira + 1] == 0)
            {
                dizi[x][sira + 1] = dizi[x][sira];
                dizi[x][sira] = 0;
                sira = 2;
            }
            else
            {
                sira--;
            }
        }
    }


}


void ust()
{
    for (int x = 0; x < 4; x++)
    {
        sira = 1;

        while (sira != 4)
        {
            if (dizi[sira][x] != 0 && dizi[sira - 1][x] == 0)
            {
                dizi[sira - 1][x] = dizi[sira][x];
                dizi[sira][x] = 0;
                sira = 1;
            }
            else
            {
                sira++;
            }
        }
    }

    for (int x = 0; x < 4; x++)
    {
        sira = 0;
        while (sira != 4)
        {
            if (dizi[sira][x] == dizi[sira + 1][x])
            {
                dizi[sira][x] += dizi[sira + 1][x];
                dizi[sira + 1][x] = 0;
            }
            sira++;
        }
    }

    for (int x = 0; x < 4; x++)
    {
        sira = 1;

        while (sira != 4)
        {
            if (dizi[sira][x] != 0 && dizi[sira - 1][x] == 0)
            {
                dizi[sira - 1][x] = dizi[sira][x];
                dizi[sira][x] = 0;
                sira = 1;
            }
            else
            {
                sira++;
            }
        }
    }

}
void alt()
{
    for (int x = 0; x < 4; x++)
    {
        sira = 2;

        while (sira != -1)
        {
            if (dizi[sira][x] != 0 && dizi[sira + 1][x] == 0)
            {
                dizi[sira + 1][x] = dizi[sira][x];
                dizi[sira][x] = 0;
                sira = 2;
            }
            else
            {
                sira--;
            }
        }
    }

    for (int x = 0; x < 4; x++)
    {
        sira = 3;
        while (sira != -1)
        {
            if (dizi[sira][x] == dizi[sira - 1][x])
            {
                dizi[sira][x] += dizi[sira - 1][x];
                dizi[sira - 1][x] = 0;
            }
            sira--;
        }
    }

    for (int x = 0; x < 4; x++)
    {
        sira = 2;

        while (sira != -1)
        {
            if (dizi[sira][x] != 0 && dizi[sira + 1][x] == 0)
            {
                dizi[sira + 1][x] = dizi[sira][x];
                dizi[sira][x] = 0;
                sira = 2;
            }
            else
            {
                sira--;
            }
        }
    }

}
void yaz()
{
    printf("\n\n\t\t\t\t------2048-GAME------");

    for (int x = 0; x < 4; x++)
    {
        printf("\n\t\t\t\t|");
        for (int y = 0; y < 4; y++)
        {
            if (dizi[x][y] == 0)
            {
                printf("    ");
            }
            else
            {
                printf("%4d", dizi[x][y]);
            }
            printf("|");
            sayac++;
        }
        printf("\n\t\t\t\t---------------------");
    }
}
int rasgele()
{
    int rasgele_x,rasgele_y, a;

    srand((int)(time(0)));

    rasgele_x = rand() % 4 + 1;
    rasgele_y = rand() % 4 + 1;

    for (int x = 0; x <4; x++)
    {
        for (int y = 0; y < 4; y++)
        {
            if (dizi[x][y] == 0)
            {
                while (1)
                {
                    rasgele_x = rand() % 4 ;
                    rasgele_y = rand() % 4;

                    if (dizi[rasgele_x][rasgele_y] == 0)
                    {
                        a = rand() % 2 + 1;
                        dizi[rasgele_x][rasgele_y] = (int)(pow(2, a));
                        return 0;
                    }
                }
            }
        }
    }
    return 1;
}


int main()
{

    setlocale(LC_ALL, "Turkish");
    srand((int)(time(0)));


    baslangıc();

    while (1)
    {
        veri();

        if (yon == 'a' || yon == 'A')
            sol();
        else if (yon == 'd' || yon == 'D')
            sag();
        else if (yon == 'w' || yon == 'W')
            ust();
        else if (yon == 's' || yon == 'S')
            alt();

        system("cls");


        if (rasgele() == 0)
        {
            yaz();
            for (int x = 0; x < 4; x++)
            {
                for (int y = 0; y < 4; y++)
                {
                    if (dizi[x][y] == 2048)
                    {
                        system("cls");
                        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\tKAZANDINIZ. TEBRİKLER...\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                        return 0;
                    }
                }
            }
        }
        else
        {
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\tOYUN BİTTİ. KAYBETTİN.\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            return 0;
        }

    }
}