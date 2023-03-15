#include <stdio.h>
#include "preprocessing.h"

void print(Student *s) {
    printf("ID: %d, ĞÕÃû: %s, ÄêÁä: %dËê\n", s->id, s->name, s->age);
}
void modifyAge(Student *s, int newAge) {
    s->age = newAge;
}
void modifyId(Student *s, int newId) {
    s->id = newId;
}

int sum(int a, int b) {
    return a + b;
}