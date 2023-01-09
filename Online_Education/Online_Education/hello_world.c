#include <stdio.h>

int main()
{
    int a = 5;
    if (a > 0) {
        a = 1;
        printf("Positive\n");
    }
    printf("Hello, world!\n");  

    int a1 = 1;
    // scanf("%d", &a1);
    
        printf("%d", a1);


        char ch;
        char* pc = &ch;

        int n;
        int* pn = &n;

        double d;
        double* pd = &d;

        int arr[3];
        int i;

        for (i = 0; i < 3; i++) {
            printf("pc+%d = %p\n", i, pc + i);
        }
        printf("-------------------\n");

        for (i = 0; i < 3; i++) {
            printf("pn+%d = %p\n", i, pn + i);
        }

        printf("-------------------\n");
        for (i = 0; i < 3; i++) {
            printf("pd+%d = %p\n", i, pd + i);
        }

        printf("-------------------\n");
        for (i = 0; i < 5; i++) {
            //printf("&arr[%d]-&arr[0] = %d\n", i, &arr[i] - arr[0]);
        }

        int arr1[5] = { 1, 2, 3, 4, 5 };
        int *parr1 = arr1;
        for (int a = 0; a < 5; a++) {
            printf(" %d\t", *(parr1+a));
        }
        printf("\n");

        printf("------------------\n");

        char* str[] = {"good", "normal", "bad"};

        printf("%s %s %s\n", str[0], str[1], str[2]);

        int ii, jj;
        int arr13[3][5] = {
            {1, 2, 3, 4, 5},
            {6, 7, 8, 9, 10},
            {11, 12, 13, 14, 15}
        };

        int (*pp)[5] = arr13;
        for (ii = 0; ii < 3; ii++)
        {
            for (jj = 0; jj < 5; jj++)
                printf("%d ", pp[ii][jj]);
            printf("\n");
        }


    return 0;



}