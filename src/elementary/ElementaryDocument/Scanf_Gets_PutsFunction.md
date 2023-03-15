scanf gets puts函数

函数我们会在下一章详细介绍 不过这里还是要再提到一个比较重要的函数

前面我们认识了printf函数 实际上这个函数就是用于打印字符串到控制台 我们只需要填入一个字符串和后续的参数即可

                    #include <stdio.h>

                    int main() {
                        const char str[] = "Hello World!";   // 注意printf需要填写一个const char数组进去 也就是字符串
                        printf(str);
                    }

现在我们知道该如何输出 那么输入该如何实现呢 比如我们现在希望将我们想要说的话告诉程序 让程序从控制台读取我们输入的内容 这时我们就需要使用到scanf函数了:

                    #include <stdio.h>

                    int main() {
                        char str[10];
                        scanf("%s", str);   // 使用scanf函数来接受控制台输入 并将输入的结果按照格式 分配给后续的变量
                        // 比如这里我们想要输入一个字符串 那么依然是使用%s(和输出是一样的占位符) 后面跟上我们要赋值的数组(存放输入的内容)
                        printf("输入的内容为：%s", str);
                    }

可以看到 成功接收到用户输入:

                    cpdd
                    输入的内容为: cpdd
                    进程已结束,退出代码0

当然除了能够扫描成字符串之外 我们也可以直接扫描为一个数字:

                    #include <stdio.h>

                    int main() {
                        int a, b;
                        scanf("%d", &a);   // 连续扫描两个int数字
                        scanf("%d", &b);   // 注意 如果不是数组类型 那么这里在填写变量时一定要在前面添加一个&符号(至于为什么 下一章在指针小节中会详细介绍)这里的&不是做与运算 而是取地址操作

                        printf("a + b = %d", a + b);   // 扫描成功后 我们来计算a + b的结果
                    }

除了使用scanf之外 我们也可以使用字符串专用的函数来接受字符串类型的输入和输出:

                    #include <stdio.h>

                    int main() {
                        char str[10];
                        gets(str);   // gets也是接收控制台输入 然后将结果丢给str数组中
                        puts(str);   // puts其实就是直接打印字符串到控制台
                    }

当然也有专门用于字符输入输出的函数:

                    #include <stdio.h>

                    int main() {
                        int c = getchar();
                        putchar(c);
                    }

由于我们目前还没有学习函数 所以这里稍微提及一下即可