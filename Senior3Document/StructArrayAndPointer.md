结构体数组和指针

前面我们介绍了结构体 现在我们可以将各种类型的数据全部安排到结构体中一起存放了

不过仅仅只是使用结构体 还不够 我们可能需要保存很多个学生的信息 所以我们需要使用结构体类型的数组来进行保存:

                    #include <stdio.h>

                    struct Student {
                        int id;
                        int age;
                        char *name;
                    }

                    int main() {
                        struct Student arr[3] = {{1, 18, "小明"}, // 声明一个结构体类型的数组 其实和基本类型声明数组是一样的
                                                 {2, 17, "小红"}, // 多个结构体数组用逗号隔开
                                                 {3, 18, "小刚"}};
                    }

那么现在如果我们想要访问数组中第二个结构体的名称属性 该怎么做呢?

                    int main() {
                        struct Student arr[3] = {{1, 18, "小明"},
                                                 {2, 17, "小红"},
                                                 {3, 18, "小刚"}};

                        printf("%s", arr[1].name); // 先通过arr[1]拿到第二个结构体 然后再通过同样的方式 .数据名称 就可以拿到对应的值了
                    }

当然 除了数组之外 我们可以创建一个指向结构体的指针:

                    int main() {
                        struct Student student = {1, 18, "小明"};
                        struct Student *p = $student; // 同样的 类型后面加上*就是一个结构体类型的指针了
                    }

我们拿到结构体类型的指针后 实际上指向的就是结构体对应的内存地址 和之前一样 我们也可以通过地址去访问结构体中的数据:

                    int main() {
                        struct Student student = {1, 18, "小明"};
                        struct Student *p = &student;

                        printf("%s", (*p).name); // 由于.运算符优先级更高 所以需要先使用*p得到地址上的值 然后再去访问对应数据
                    }

不过这样写起来太累了 我们可以使用简便写法:

                    printf("%s", p->name); // 使用 -> 运算符来快速将指针所指结构体的对应数据取出

我们来看看结构体作为参数在函数之间进行传递时会经历什么:

                    void test(struct Student student) {
                        student.age = 19; // 我们对传入的结构体中的年龄进行修改
                    }

                    int main() {
                        struct Student student = {1, 18, "小明"};
                        test(student);
                        printf("%d", student.age); // 最后会是修改后的值吗? 
                    }

        https://smms.app/image/bAghYZQ9JtEfIud

可以看到在其他函数中对结构体内容的修改并没有对外面的结构体生效 因此 实际上结构体也是值传递 外面修改的只要另一个函数中的局部变量而已

所以如果我们需要再另一个函数中处理外部的结构体 需要传递指针:

                    void test(struct Student *student) { // 这里使用指针 那么现在就可以指向外部的结构体了
                        student->age = 19; // 别忘了指针怎么访问结构体内部数据的
                    }

                    int main() {
                        struct Student student = {1, 18, "小明"};
                        test(&student); // 传递结构体的地址过去
                        printf("%d", student.age);
                    }

        https://smms.app/image/km5Ov62CUJa7ITM

当然一般情况下推荐传递结构体的指针 而不是直接进行值传递 因为如果结构体非常大的话 光是数据拷贝就需要花费很大的精力
并且某些情况下我们可能根本用不到结构体中的所有数据 所以完全没必要浪费空间 使用指针反而是一种更好的方式