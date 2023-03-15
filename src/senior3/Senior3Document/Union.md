联合体

联合体也可以在内部定义很多种类型的变量 但是它与结构体不同的是 所有的变量共用一个空间 ????啥意思?

                    union Object { // 定义一个联合体类型唯一不同的就是前面的union了
                        int a;
                        char b;
                        float c;
                    }

我们来看看一个神奇的现象:

                    #include <stdio.h>

                    union Object {
                        int a;
                        char b;
                        float c;
                    };

                    int main() {
                        union Object object;
                        object.a = 66; // 先给a赋值66
                        printf("%d". object.b); // 访问b
                    }

        https://smms.app/image/y6gXHTaeBODFsYP

? ? ? ?

我修改的是a啊 怎么b也变成66了? 这是因为它们共用了内存空间 实际上我们先将a修改为66 那么就将这段内存空间上的值修改为了66
因为内存空间共用 所以当读取b时 也会从这段内存空间中读取一个char长度的数据出来 所以得到的也是66

                    int main() {
                        union Object object;
                        object.a = 128;
                        printf();
                    }

        https://smms.app/image/hGDKQgMclqrZwIY

因为: 128 = 10000000 所以用char读取后 由于第一位是符号位 于是就变成了-128

那么联合体的大小又是如何决定的呢?

                    union Object {
                        int a;
                        char b;
                        float c;
                    };

                    int main() {
                        printf("%lu", sizeof(union Object));
                    }

        https://smms.app/image/ehHpAXPfYwZ7yBN

实际上 联合体的大小至少是其内部最大类型的大小 这里是int所以就是4 当然 当最大成员大小不是最大对齐数的整数倍的时候 就要对齐到最大对齐数的整数倍

当然联合体的其他使用基本与结构体差不多 这里就不提了