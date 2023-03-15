#include <stdio.h>
#include <stdbool.h>

int * Pointer1(int *a);
int sum1(int a, int b);
int sum2(int (*p)(int, int), int a, int b);
int sum2Impl(int a, int b);

void test1_0() {

    /*int a = 888; int *p = &a;
    printf("a在内存中的地址为: %p", p);*/

    /*int a = 888; int *p = &a;
    printf("内存%p上存储的值为: %d", p, *p);*/

    /*int a = 888; int *p = &a;
    *p = 999;
    printf("a的值为: %d", a);*/

    /*int a = 888, b = 999;
    GodSwap(&a, &b);
    printf("a = %d, b = %d", a, b);*/

    int a;
    scanf("%d", &a);
    printf("%d", a);

    /*int a = 9, b = 10;
    const int *p = &a;
    *p = 20;
    p = &b;*/

    /*int a = 9, b = 10;
    int *const p = &a;
    *p = 20;
    p = &b;*/

}

void test2_0() {

    /*char str[] = "Fuck World!";
    char *p = str;
    printf("%c", *p);*/

    /*char str[] = "Fuck World!";
    char *p = str;
    printf("%c", p[1]);*/

    /*char str[] = "Fuck World!";
    printf("%c", str[0]);*/

    /*char str[] = "Fuck World!";
    char *p = str;*/

    /*char str[] = "Fuck World!";
    char *p = str;
    printf("第一个元素值为: %c, 第二个元素值为: %c", *p, *(p+1));*/

    /*char str[] = "Fuck World!";
    char *p = str;
    p++;
    printf("%c", *p);*/

    int arr[][3] = {{1, 2, 3}, {4, 5, 6}};
    int *p = arr[0];
    printf("%d = %d", *(p+4), arr[1][1]);

}

void test3_0() {

    /*int a = 20;
    int *p = &a;
    int **pp = &p;
    int ***ppp = &pp;
    printf("a地址为: %p, 指针p地址为: %p, 指针pp地址为: %p", p, pp, ppp);*/

    int a = 20;
    int *p = &a;
    int **pp = &p;
    printf("p = %p, a = %d", *pp, **pp);

}

void test4_0() {

    /*int a, b, c;
    int *arr[3] = {&a, &b, &c};*/

    /*int a, b, c;
    int *arr[3] = {&a, &b, &c};
    *arr[0] = 888;
    printf("%d", a);*/

    /*int *p[3];
    int **pp = p;*/

    /*int arr[3] = {111, 222, 333};
    int (*p)[3] = &arr;
    printf("%d %d %d", *(*p+0), *(*p+1), *(*p+2));*/

    int arr[][3] = {{111, 222, 333}, {444, 555, 666}};
    int (*p)[3] = arr;
    printf("%d\n", *(*p+1));
    printf("%d \n", *(*(p+1)+2));
    printf("%d", p[1][2]);

}

int test5_0() {

    /*int a = 10;
    int *p = Pointer1(&a);
    printf("%d\n", *p);
    printf("%d", *Pointer1(&a));*/

    /*int (*p)(int, int) = sum;
    int result = (*p)(1, 2);
    //int result = p(1, 2);
    printf("%d", result);*/

    int (*p)(int, int) = sum2Impl;
    printf("%d", sum2(p, 10, 20));

}

// ---------------------------------------------------------------------------------------

int merge(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n) {

    // 指针版
    int i = m - 1, j = n - 1;
    for (int k = m+n-1; k >= 0; --k) {
        
        if (i < 0) {
            *(nums1 + k) = *(nums2 + j--);
        } else if (j < 0) {
            *(nums1 + k) = *(nums1 + i--);
        } else {
            if(*(nums1 + i) > *(nums2 + j)) {
                *(nums1 + k) = *(nums1 + i--);
            } else {
                *(nums1 + k) = *(nums2 + j--);
            }
        }

    }

    /*// 数组版
    int i = m - 1, j = n - 1;
    for (int k = m+n-1; k >= 0; --k) {

        if (i < 0) {
            nums1[k] = nums2[j--];
        } else if(j < 0) {
            nums1[k] = nums1[i--];
        } else {
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i--];
            } else {
                nums1[k] = nums2[j--];
            }
        }

    }*/

}

bool findNumberIn2DArray(int **matrix, int matrixSize, int *matrixColSize, int target) {

    // 指针版
    if (matrixSize == 0 || *matrixColSize == 0) return 0;

    int x = *matrixColSize - 1, y = 0;
    while (x >= 0 && y < matrixSize) {
        if ((*(*(matrix + y) + x)) > target) x--;
        else if ((*(*(matrix + y) + x)) < target) y++;
        else return 1;
    }
    return 0;

    /*// 数组版
    if(matrixSize == 0 || *matrixColSize == 0) return 0;

    int x = *matrixColSize - 1, y = 0;
    while (x >= 0 && y < matrixSize) {
        if (matrix[y][x] > target) x--;
        else if (matrix[y][x] < target) y++;
        else return 1;
    }
    return 0;*/

}

int main() {

    // test1_0();

    // test2_0();

    // test3_0();

    // test4_0();

    test5_0();

}

void GodSwap(int *a, int *b) {

    int tmp = *a;
    *a = *b;
    *b = tmp;

}

int * Pointer1(int *a) {

    return a;

}

int sum1(int a, int b) {
    return a + b;
}

int sum2(int (*p)(int, int), int a, int b) {
    return p(a, b);
}
int sum2Impl(int a, int b) {
    return a + b;
}