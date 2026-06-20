#include <stdio.h>
#include <math.h>

double derivative1(double x);
double derivative2(void);
double derivative3(double x);
double derivative4(void);
double derivative5(void);
double derivative6(double x);
double derivative7(void);
double derivative8(double x);
double derivative9(double x);
double derivative10(void);
double f5(double x);


// 1. SORU
double derivative1(double x) {
    double term1 = (2.0/3.0) * pow(x, -1.0/3.0);
    double term2 = (1.0/2.0) * pow(x, -3.0/2.0);
    return term1 + term2;
}

// 2. SORU — Parametrik
double derivative2(void) {
    double t = 2;
    double dx = 2*t;
    double dy = 3*t*t - 1;
    return dy / dx;
}

// 3. SORU — x^(cos x)
double derivative3(double x) {
    return pow(x, cos(x)) * (-sin(x)*log(x) + cos(x)/x);
}

// 4. SORU — Apsis çarpımı
double derivative4(void) {
    double x1 = 2;
    double x2 = -2.0/3.0;
    return x1 * x2;
}

// 5. SORU — Maksimum değer
double f5(double x) {
    return 2*x*x*x - 3*x*x - 12*x + 5;
}

double derivative5(void) {
    double v[4] = { f5(-2), f5(-1), f5(2), f5(3) };
    double max = v[0];

    for (int i = 1; i < 4; i++)
        if (v[i] > max) max = v[i];

    return max;
}

// 6. SORU — (x^2+1)/(x-2)
double derivative6(double x) {
    return (x*x - 4*x - 1) / pow(x - 2, 2);
}

// 7. SORU — Parametrik
double derivative7(void) {
    double t = 2;
    double dx = 2*t;
    double dy = 3*t*t - 3;
    return dy / dx;
}

// 8. SORU — x^(sin x)
double derivative8(double x) {
    return pow(x, sin(x)) * (cos(x)*log(x) + sin(x)/x);
}

// 9. SORU — 4. türev
double derivative9(double x) {
    return 720*x - 192;
}

// 10. SORU — f'(0)
double derivative10(void) {
    double x = 0;
    return (exp(x)*x) / ((x+1)*(x+1));
}


int main(void) {

    int secim;
    double x;

    printf("===== 10 SORU TUREV HESAPLAMA PROGRAMI =====\n");
    printf("1 - Soru 1 (x girilir)\n");
    printf("2 - Soru 2 (girdi yok)\n");
    printf("3 - Soru 3 (x girilir)\n");
    printf("4 - Soru 4 (girdi yok)\n");
    printf("5 - Soru 5 (girdi yok)\n");
    printf("6 - Soru 6 (x girilir)\n");
    printf("7 - Soru 7 (girdi yok)\n");
    printf("8 - Soru 8 (x girilir)\n");
    printf("9 - Soru 9 (x girilir)\n");
    printf("10 - Soru 10 (girdi yok)\n");

    printf("\nSeçiminiz: ");
    scanf("%d", &secim);

    printf("\n----------------------------------\n");

    switch(secim) {

        case 1:
            printf("x giriniz: ");
            scanf("%lf", &x);
            printf("f'(x) = %lf\n", derivative1(x));
            break;

        case 2:
            printf("dy/dx (t=2) = %lf\n", derivative2());
            break;

        case 3:
            printf("x giriniz: ");
            scanf("%lf", &x);
            printf("f'(x) = %lf\n", derivative3(x));
            break;

        case 4:
            printf("Apsis çarpımı = %lf\n", derivative4());
            break;

        case 5:
            printf("Maksimum değer = %lf\n", derivative5());
            break;

        case 6:
            printf("x giriniz: ");
            scanf("%lf", &x);
            printf("f'(x) = %lf\n", derivative6(x));
            break;

        case 7:
            printf("dy/dx (t=2) = %lf\n", derivative7());
            break;

        case 8:
            printf("x giriniz: ");
            scanf("%lf", &x);
            printf("f'(x) = %lf\n", derivative8(x));
            break;

        case 9:
            printf("x giriniz: ");
            scanf("%lf", &x);
            printf("4. türev = %lf\n", derivative9(x));
            break;

        case 10:
            printf("f'(0) = %lf\n", derivative10());
            break;

        default:
            printf("Geçersiz seçim yaptınız!\n");
    }

    printf("----------------------------------\n");
    return 0;
}

