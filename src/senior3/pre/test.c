#include <stdio.h>
#include "preprocessing.h"

void test1() {

    int c = sum(10 ,20);
    printf("%d", c);

}

void test2() {

    Student s = {1, 18, "ะกร๗"};
    modifyAge(&s, 19);
    print(&s);

}

int main() {

    // test1();
    test2();

}