typedef关键字

这里最后还要提一下typedef关键字 这个关键字用于给指定的类型起别名 怎么个玩法呢?

                    typedef int lbwnb; // 食用方式: typedef 类型名称 自定义类型别名

比如这里我们给int起了一个别名 那么现在我们不仅可以使用int来表示一个int整数 而且也可以使用别名作为类型名称了:

                    #include <stdio.h>

                    typedef int lbwnb;

                    int main() {
                        lbwnb i = 666; // 类型名称直接写成别名 实际上本质还是int
                        printf("%d", i);
                    }

                    typedef const char *String; // const char * 我们就起个名称为String表示字符串

                    int main() {
                        String str = "Hello World"; // 是不是有Java那味了
                        printf(str);
                    }

当然除了这种基本类型之外 包括指针 结构体 联合体 枚举等等都可以使用这个关键字来完全起别名操作:

                    #include <stdio.h>

                    typedef struct test {
                        int age;
                        char name[10];
                    } Student; // 为了方便可以直接写到后面 当然也可以像上面一样单独声明

                    int main() {
                        Student s = {18, "小明"}; // 直接使用别名 甚至struct关键字都不用加了
                    }

在数据结构的学习中 typedef使用会更加地频繁