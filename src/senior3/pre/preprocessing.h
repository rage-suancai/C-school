struct stu {

    int id;
    int age;
    char name[20];

} typedef Student;

void print(Student *s);
void modifyAge(Student *s, int newAge);
void modifyId(Student *s, int newId);

int sum(int a, int b);