#define _CRT_SECURE_NO_WARNINGS
#include  <stdio.h>
#include  <math.h>

int  main(void)
{
    double  a, b, c, d, e;

    printf("���������� ax^2+bx+c=0\n");
    printf("a: ");
    scanf("%lf", &a);

    printf("b: ");
    scanf("%lf", &b);

    printf("c: ");
    scanf("%lf", &c);

    if (a == 0)
    {
        printf("x = %f \n", -c / b);
    }
    else
    {
        d = b * b - 4.0 * a * c;
        if (d > 0)
        {
            e = sqrt(d);
            printf("�� ���� ��: %f, %f \n", (-b + e) / (2.0 * a), (-b - e) / (2.0 * a));
        }
        else
        {
            if (d == 0)
            {
                printf("�� ���� ��: %f \n", (-b) / (2.0 * a));
            }
            else
            {
                printf("���� �����ϴ�.(���)\n");
            }
        }
    }

    return  0;
}