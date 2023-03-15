#include <stdio.h>

struct Student1;
struct Object1;
struct Student2;
union Object2;
enum status;
void transfer1(struct Student2 s);
void transfer2(struct Student2 *s);

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

    /*struct Student1 s = {1, 18, "С��"};
    printf("id=%d, age=%d, name=%s", s.id, s.age, s.name);*/

    struct Student1 s = {1, 18, "С��"};
    s.id = 8;
    s.age = 19;
    s.name = "С��";
    printf("id=%d, age=%d, name=%s", s.id, s.age, s.name);

}

void test2() {

    // printf("int���͵Ĵ�С��: %lu", sizeof(int));

    /*int arr[10];
    printf("int arr[10]ռ�ݵĴ�С��: %lu", sizeof(arr));*/

    printf("%lu", sizeof(struct Object1));

}

void test3() {

    /*struct Student2 arr[3] = {{1, 18, "С��"},
                              {2, 17, "С��"},
                              {3, 18, "С��"}};
    printf("%s", arr[1].name);*/

    /*struct Student2 s = {1, 18, "С��"};
    struct Student2 *p = &s;
    //printf("%s", (*p).name);
    printf("%s", p->name);*/

    /*struct Student2 s = {1, 18, "С��"};
    test(s);
    printf("%d", s.age);*/

    struct Student2 s = {1, 18, "С��"};
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
        printf("�͵���");
    } else if (a == high) {
        printf("�ߵ���");
    } else {
        printf("�е���");
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

    Student3 s = {18, "С��"};
    printf("%s", s.name);

}

int main() {

    // test1();
    // test2();
    // test3();
    // test4();
    //test5();
    //test6();

}

void transfer1(struct Student2 s) {
    s.age = 19;
}
void transfer2(struct Student2 *s) {
    s->age = 19;
}