系统库介绍

前面我们了解了如何使用#include引入其他文件 我们接着来了解一下系统为我们提供的一些常用库 实际上我们已经用过不少官方库提供的内容了:

                    #include <stdio.h>

                    int main() {
                        int a;
                        scanf("%d", &a);
                        printf("%d", a);
                        getchar();
                        putchar('A');
                        ...
                    }

包括前面我们在实战中用到了一次string.h中提供的计算字符串长度的函数:

                    #include <stdio.h>
                    #include <string.h>

                    int main() {
                        char * c = "Hello World";
                        printf("%lu", strlen(c)); // 使用strlen计算长度 注意返回值类型是size_t(别名而已 本质上就是unsigned long)
                    }

当然除了这个函数之外 实际上还有很多实用的字符串处理函数 都在这里定义了:

                    #include <stdio.h>
                    #include <string.h>

                    int main() {
                        char a[20] = "Hello", *b = "World"; // 现在有两个字符串 但是我们希望把它们拼接到一起
                        // 注意不能这样写 char *a = "Hello", *b = "World" 如果直接用指针指向字符串常量 是无法进行拼接的 因为大小已经固定了
                        // 这里需要两个参数 第一个是目标字符串 一会将第二个参数的字符串拼接到第一个字符串中(注意要装得下才行)
                        strcat(a, b);
                        printf("%s", a);
                    }

                    int main() {
                        char str[10], *c = "Hello";
                        strcpy(str, c); // 使用cpy会直接将后面的字符串拷贝到前面的字符串数组中(同样需要前面装的下才行)
                        printf("%s", str);
                    }

                    int main() {
                        char *a = "AAA", *b = "AAB";
                        int value = strcmp(a, b); // strcmp会比较两个字符串 并返回结果
                        printf("%d", value);
                    }

这里需要说一下比较规则: 把字符串str1和str2从首字符开始逐个字符的进行比较 直到某个字符不相同或者其中一个字符串比较完毕才停止比较 字符的比较按照ASCII码的大小进行判断

比较完成后 会返回不匹配的两个字符的ASCII码之差:

        https://smms.app/image/3QXnw4jCflyziR5

我们接着来看用于处理数学问题的相关库:

                    #include <math.h>

这里要用到math.h 它提供了我们场景的教学计算函数 比如求算术平方根 三角函数 对数等

                    #include <stdio.h>
                    #include <math.h>

                    int main() {
                        int a = 2;
                        double d = sqrt(a); // 使用sqrt可以求出非负数的算术平方根(底层采用牛顿逼近法计算)
                        printf("%lf", d);
                    }

        https://smms.app/image/m6HWZqA4XCDvf3j

当然能够开根 也可以做乘方:

                    int main() {
                        int a = 2;
                        double d = pow(a, 3); // 使用pow可以快速计算乘方 这里求的是a的3次方
                        printf("%lf", d);
                    }

有了这个函数 写个水仙花数更简单了:

                    int main() {
                        for (int i = 0; i < 1000; ++i) {
                            int a = i % 10, b = i / 10 % 10, c = i / 10 / 10;
                            if (pow(a, 3) + pow(b, 3) + pow(c, 3) == i) {
                                printf("%d 是水仙花数\n", i);
                            }
                        }
                    }

当然也可以计算三角函数:

                    int main() {
                        printf("%f", tan(M_PI)); // 这里我们使用正切函数计算tan180度的值 注意要填入的是弧度值
                        // M_PI也是预先定义好的π的值 非常精确
                    }

当然某些没有不存在的数可能算出来会得到一个比较奇怪的结果:

                    int main() {
                        printf("%f", tan(M_PI / 2)); // 这里计算tan90° 我们知道tan90° = sin90° / cos90° = 1/0 不存在
                    }

当然还有两个比较常用的函数:

                    int main() {
                        double x = 3.14;
                        printf("不小于x的最小整数: %f\n", ceil(x));
                        printf("不大于x的最大整数: %f\n", floor(x));
                    }

当然也有快速求绝对值的函数:

                    int main() {
                        double x = -3.14;
                        printf("x的绝对值是: %f", fabs(x));
                    }

我们最后再来介绍一下通用工具库stdlib 这个库里面为我们提供了大量的工具函数:

                    #include <stdio.h>
                    #include <stdlib.h>

                    int main() {
                        int arr[] = {5, 2, 4, 0, 7, 3, 8, 1, 9, 6};
                        // 工具库已经为我们提供好了快速排序的实现函数 直接用就完事
                        // 参数有点多 第一个是待排序数组 第二个是待排序的数量(一开始就是数组长度) 第三个是元素大小 第四个是排序规则(我们提供函数实现)
                        qsort();
                    }

当然在开始使用之前我们还要先补充一点知识 我们发现qsort的原型定义 使用的是void类型的指针

怎么void还有指针呢? void不是空吗?

        void指针是一种特殊的指针 表示为"无类型指针" 由于void指针没有特定的类型 因此它可以指向任何类型的数据
        也就是说 任何类型的指针都可以直接赋值给void指针 而无需进行其他相关的强制类型转换

所以这里之所以需要void指针 其实就是为了可以填入任何类型的数组 而我们发现第三个参数实际上就是因为是void指针不知道具体给进来的类型是什么 所以需要我们来告诉函数我们使用的类型所占大小是多少

而最后一个参数实际上就是我们前面介绍的函数回调了 因为函数不知道你的比较规则是什么 是从小到大还是从大到小呢? 所以我们需要编写一个函数来对两个待比较的元素进行大小判断

好了 现在了解了之后 我们就可以开始填入参数了:

                    #include <stdio.h>
                    #include <stdlib.h>

                    int compare(const void *a, const void *b) { // 参数为两个待比较的元素 返回值负数表示a比b小 正数表示a比b大 0表示相等
                        int *x = (int *) a, int *y = (int *) b; // 这里因为判断的是int所以需要先强制类型转换为int *指针
                        return *x - *y; // 其实直接返回a - b就完事了 因为如果a比b大的话算出来一定是正数 反之同理
                    }

                    int main() {
                        int arr[] = {5, 2, 4, 0, 7, 3, 8, 1, 9, 6};
                        qsort(arr, 10, sizeof(int), compare);
                        for (int i = 0; i < 10; ++i) {
                            printf("%d ", arr[i]);
                        }
                    }

这样 我们就可以对数组进行快速排序了

当然工具库中还提供了exit函数用于终止程序:

                    #include <stdlib.h>

                    int main() {
                        exit(EXIT_SUCCESS); // 直接终止程序 其中参数是传递给父进程的(但是现在我们只是简单程序)
                    }

不过乍一看 貌似和我直接在main里面return没啥区别 反正都会结束

当然还有两个我们会在后续学习数据结构中用的较多的函数:

                    int main() {
                        int *p = (int *) malloc(sizeof(int)); // 我们可以使用malloc函数来动态申请一段内存空间
                        // 申请后会返回申请到的内存空间的首地址
                        *p = 128;
                        printf("%d", *p);
                    }

        malloc用于向系统申请分配指定size个字节的内存空间 返回类型是void *类型
        如果申请成功返回首地址 如果失败返回NULL空地址(比如系统内存不足了就可能会申请失败)

申请到一段内存空间后 这段内存空间我们就可以往上面随便读写数据了 实际上就是和变量一样
只不过这个内存空间是我们自主申请的 并不是通过创建变量的到的 但是使用上其实没啥大的区别

不过要注意 这段内存使用完之后记得清理 就像函数执行完会自动销毁其中的局部变量一样 如果清理那么这段内存会被一直占用:

                    int main() {
                        int *p = (int *) malloc(sizeof(int));
                        *p = 128;
                        printf("%d", *p);

                        free(p); // 使用free函数对内存空间进行释放 归还给系统 这样这段内存又可以被系统分配给别人用了
                        p = NULL; // 指针也不能再指向那个地址了 因此它已经被释放了
                    }

内存资源是很宝贵的(不像硬盘几个T随便用 我们的电脑可能32G的内存都算高配了)
不能随便浪费 所以一般情况下malloc和free都是一一对应的 这样才能安全合理地使用内存