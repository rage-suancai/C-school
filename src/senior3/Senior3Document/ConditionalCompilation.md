条件编译

我们来看看条件编译 我们还可以根据条件 选择性地对某些内容进行忽略

我们来认识一下#ifdef, #else, #endif这三种条件编译指令:

                    #include <stdio.h>

                    #ifdef PI // ifdef用于判断是否定义了符号PI 如果没有的话则处理以下的指令
                        #define M 666
                    #else // 如果定义了符号PI 那么就处理这个分支的语句
                        #define M 777
                    #endif // 最后需要以endif指令结束整个判断

                    int main() {
                        printf("%d", M); // 最后打印M
                    }

        https://smms.app/image/U7r6g5pB21fISVh

可以看到 在外面没有定义PI的情况下 执行的是#define M 777 那要是现在定义了呢? 我们编写一个新的头文件:

                    #define PI 3.1415

现在我们引入这个头文件 那么对应的预编译指令也会跟着包含进来:

                    #include <stdio.h>
                    #include "test.h"

                    #ifdef PI
                        #define M 666
                    #else
                        #define M 777
                    #endif

                    int main() {
                        printf("%d", M);
                    }

        https://smms.app/image/ojZNauDIb4ckylC

可以看到此时得到的结果就是666了 因为现在PI在引入的头文件中定义了(当然在当前源文件中定义也是一样的)

那如果我现在希望判断某个符号没定义呢? 没错 还有#ifndef表示判断是否未定义某个符号

                    #include <stdio.h>

                    #ifndef PI   // ifndef 就是 if not define 跟ifdef反着的
                        #define M 666
                    #else
                        #define M 777
                    #endif

                    int main() {
                        printf("%d", M);
                    }

        https://smms.app/image/br2lo1vj5GPIZig

当然 除了判断某个符号是否存在之外 我们也可以像条件语句那样直接进行逻辑判断 这里需要使用到#if和#elif指令

                    #define M 666

                    #if M == 666   // 若M等于666那么定义K = 999
                        #define K 999
                    #elif M == 777   // 等同于else if语句
                        #define K 888
                    #else    // else语句
                        #define K 000
                    #endif

并且这些分支还支持嵌套使用:

                    #define M 666

                    #if M == 666
                        #ifdef L
                            #include "test.h"
                        #endif
                    #elif M == 777
                        #define K = 888
                    #else
                        #define K = 000
                    #endif