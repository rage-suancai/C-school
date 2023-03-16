#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct Student1;
struct Object1;
struct Student2;
union Object2;
enum status;
void transfer1(struct Student2 s);
void transfer2(struct Student2 *s);
int compare(const void *a, const void *b);

struct Student1 {

    int id; int age; char *name;

};
struct Object1 {

    char a; int b; short c;

};

struct Student2 {

    int id; int age; char *name;

};

union Object2 {

    int a; char b; float c;

};

enum Status {low = 1, middle = 2, high = 3};

typedef struct test {

    int age;
    char name[10];

} Student3;

void test1() {

    /*struct Student1 s = {1, 18, "小明"};
    printf("id=%d, age=%d, name=%s", s.id, s.age, s.name);*/

    struct Student1 s = {1, 18, "小明"};
    s.id = 8;
    s.age = 19;
    s.name = "小红";
    printf("id=%d, age=%d, name=%s", s.id, s.age, s.name);

}

void test2() {

    // printf("int类型的大小是: %lu", sizeof(int));

    /*int arr[10];
    printf("int arr[10]占据的大小是: %lu", sizeof(arr));*/

    printf("%lu", sizeof(struct Object1));

}

void test3() {

    /*struct Student2 arr[3] = {{1, 18, "小明"},
                              {2, 17, "小红"},
                              {3, 18, "小刚"}};
    printf("%s", arr[1].name);*/

    /*struct Student2 s = {1, 18, "小明"};
    struct Student2 *p = &s;
    //printf("%s", (*p).name);
    printf("%s", p->name);*/

    /*struct Student2 s = {1, 18, "小明"};
    test(s);
    printf("%d", s.age);*/

    struct Student2 s = {1, 18, "小明"};
    transfer2(&s);
    printf("%d", s.age);

}

void test4() {

    /*union Object2 o2;
    o2.a = 88;
    printf("%d", o2.b);*/

    /*union Object2 o2;
    o2.a = 128;
    printf("%d", o2.b);*/

    printf("%lu", sizeof(union Object2));

}

void test5() {

    /*enum Status a = low;
    printf("%d", a);*/

    /*enum Status a = high;
    if (a == low) {
        printf("低档次");
    } else if (a == high) {
        printf("高档次");
    } else {
        printf("中档次");
    }*/

    enum Status a = high;
    switch (a) {
        case low:
        case high:
        case middle:
        default: ;
    }

}

void test6() {

    /*typedef int lbwnb;
    lbwnb i = 666;
    printf("%d", i);*/

    /*typedef const char *String;
    String str = "Hello World";
    str = "Fuck World";
    printf(str);*/

    Student3 s = {18, "小明"};
    printf("%s", s.name);

}

void test7() {

    /*int a;
    scanf("%d", &a);
    printf("%d", a);
    getchar();
    putchar('A');*/

    /*char *c = "Hello World";
    printf("%lu", strlen(c));*/

    /*char a[20] = "Hello", *b = "World";
    strcat(a, b);
    printf("%s", a);*/

    /*char str[10], *c = "Hello";
    strcpy(str, c);
    printf("%s", str);*/

    /*char *a = "AAA", *b = "AAB";
    int value = strcmp(a, b);
    printf("%d", value);*/

    /*int a = 2;
    double d = sqrt(a);
    printf("%lf", d);*/

    /*int a = 2;
    double d = pow(a, 3);
    printf("%lf", d);*/

    /*for (int i = 0; i < 1000; ++i) {
        
        int a = i % 10, b = i / 10 % 10, c = i / 10 / 10;
        if (pow(a, 3) + pow(b, 3) + pow(c, 3) == i) {
            printf("%d 是水仙花数\n", i);
        }

    }*/

    /*double x = 3.14;
    printf("不小于x的最小整数: %f\n", ceil(x));
    printf("不大于x的最大整数: %f\n", floor(x));*/
    
    /*double x = -3.14;
    printf("x的绝对值是: %f", fabs(x));*/

    /*int arr[] = {5, 2, 4, 0, 7, 3, 8, 1, 9, 6};
    qsort(arr, 10, sizeof(int), compare);
    for (int i = 0; i < 10; ++i) {
        printf("%d ", arr[i]);
    }*/

    /*int *p = (int *) malloc(sizeof(int));
    *p = 128;
    printf("%d", *p);*/

    int *p = malloc(sizeof(int));
    *p = 128;
    printf("%d", *p);
    free(p);
    p = NULL;

}

int main() {

    // test1();
    // test2();
    // test3();
    // test4();
    // test5();
    // test6();
    test7();

}

void transfer1(struct Student2 s) {
    s.age = 19;
}
void transfer2(struct Student2 *s) {
    s->age = 19;
}

int compare(const void *a, const void *b) {

    int *x = (int *) a, *y = (int *) b;
    return *x - *y;

}