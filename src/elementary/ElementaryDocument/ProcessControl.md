流程控制

前面我们学习了运算符 知道该如何使用运算符来计算我们想要的内容 但是仅仅依靠计算我们的程序还没办法实现丰富多样的功能 我们还得加点额外的控制操作

分支语句-if

我们可能会有这样的一个需求 就是判断某个条件 当满足此条件时 才执行某些代码 那这个时候该怎么办呢? 我们可以使用if语句来实现:

                    #include <stdio.h>

                    int main() {
                        int i = 0;
                        if(i > 20) {    // 我们只希望i大于20的时候才执行下面的打印语句
                            printf("Hello World!");
                        }
                        printf("Hello World?");   // 后面的代码在if之外 无论是否满足if条件 都跟后面的代码无关 所以这里的代码任何情况下都会执行
                    }

if语句的标准格式如下:

                    if(判断条件) {
                        执行的代码
                    }

当然如果只需要执行一行代码的话，可以省略花括号

                    if(判断条件)
                        一行执行的代码   // 注意这样只有后一行代码生效 其他的算作if之外的代码了

现在我们需求升级了 我们需要判断某个条件 当满足此条件时 执行某些代码 而不满足时 我们想要执行另一段代码 我们就可以结合else语句来实现:

                    #include <stdio.h>

                    int main() {
                        int i = 0;
                        if(i > 20) {
                            printf("Hello World!");   // 满足if条件才执行
                        } else {
                            printf("LBWNB");   // 不满足if条件才执行
                        }
                    }

但是这样可能还是不够用 比如我们现在希望判断学生的成绩 不同分数段打印的等级不一样 比如90以上就是优秀 70以上就是良好
60以上是及格 其他的都是不及格 那么这种我们又该如何判断呢? 要像这样进行连续判断 我们需要使用else-if来完成:

                    #include <stdio.h>

                    int main() {
                        int score =  2;
                        if(score >= 90) {
                            printf("优秀");
                        } else if (score >= 70) {
                            printf("良好");
                        } else if (score >= 60){
                            printf("及格");
                        } else{
                            printf("不及格");
                        }
                    }

if这类的语句（包括我们下面还要介绍的三种）都是支持嵌套使用的，比如我们现在希望低于60分的同学需要补习
0-30分需要补Java，30-60分需要补C++，这时我们就需要用到嵌套：

                    #include <stdio.h>

                    int main() {
                        int score =  2;
                        if(score < 60) {   // 先判断不及格
                            if(score > 30) {   // 在内层再嵌套一个if语句进行进一步的判断
                                printf("学习C++");
                            } else{
                                printf("学习Java");
                            }
                        }
                    }

分支语句-switch

前面我们介绍了if语句 我们可以通过一个if语句轻松地进行条件判断 然后根据对应的条件 来执行不同的逻辑
当然除了这种方式之外 我们也可以使用switch语句来实现 它更适用于多分支的情况:

                    switch (目标) {   // 我们需要传入一个目标 比如变量 或是计算表达式等
                    case 匹配值:    // 如果目标的值等于我们这里给定的匹配值 那么就执行case后面的代码
                        代码...
                        break;    // 代码执行结束后需要使用break来结束 否则会继续溜到下一个case继续执行代码
                    }

比如现在我们要根据学生的等级进行分班 学生有ABC三个等级: 

                    #include <stdio.h>

                    int main() {
                        char c = 'A';
                        switch (c) {  // 这里目标就是变量c
                            case 'A':    // 分别指定ABC三个匹配值 并且执行不同的代码
                                printf("去尖子班 准备冲刺985大学 ");
                                break;   // 执行完之后一定记得break 否则会继续向下执行下一个case中的代码
                            case 'B':
                                printf("去平行班 准备冲刺一本 ");
                                break;
                            case 'C':
                                printf("去职高深造 ");
                                break;
                        }
                    }

switch可以精准匹配某个值 但是它不能进行范围判断 比如我们要判断分数段 这时用switch就很鸡肋了

当然除了精准匹配之外 其他的情况我们可以用default来表示:

                    switch (目标) {
                        case: ...
                        default:
                                其他情况下执行的代码
                    }

比如:

                    #include <stdio.h>

                    int main() {
                        char c = 'A';
                        switch (c) {
                            case 'A':
                                printf("去尖子班 ");
                                break;
                            case 'B':
                                printf("去平行班 ");
                                break;
                            case 'C':
                                printf("去差生班 ");
                                break;
                            default:   // 其他情况一律就是下面的代码了
                                printf("去读职高 分流");
                        }
                    }

当然switch中可以继续嵌套其他的流程控制语句 比如if:

                    #include <stdio.h>

                    int main() {
                        char c = 'A';
                        switch (c) {
                            case 'A':
                                if(c == 'A') {    // 嵌套一个if语句
                                    printf("去尖子班 ");   
                                }
                                break;
                            case 'B':
                                printf("去平行班 ");
                                break;
                        }
                    }