变量

前面我们了解了C语言中的基本类型 那么我们如何使用呢? 

变量的使用

变量就像我们在数学中学习的 x, y一样 我们可以直接声明应该变量 并利用这些变量进行基本运算 声明变量的格式为:

					数据类型 变量名称 = 初始值; // 其中初始值可以不用在定义变量时设定
					// = 是赋值操作 可以将等号后面的值赋值给前面的变量 等号后面可以直接写一个数字(常量) 变量名称 算式

比如我们现在想要声明一个整数类型的变量:

					int a = 10; // 变量类型为int(常用) 变量名称为a 变量的初始值为10
					
					int a = 10, b = 20; // 多个变量可以另起一行编写 也可以像这样用逗号隔开 注意类型必须是一样

其中 变量的名称并不是随便什么都可以的 它有以下规则:
	
	> 不能重复使用其他变量使用过的名字
	> 只能包含英文字母或是下划线 数字 并且严格区分大小写 比如a和A不算同一个变量
	> 虽然可以包含数字 但是不能以数字开头
	> 不能是关键字(比如我们上面提到的所有基本数据类型 当然还有一些关键字我们会在后面认识)
	> (建议)使用英文单词 不要使用拼音 多个词可以使用驼峰命名法或是通过下划线连接

初始值可以是一个常量数据(比如直接写10, 0.5这样的数字)也可以是其他变量 或是运算表达式的结果 这样会将其他变量的值作为初始值

我们可以使用变量来做一些基本的运算:
					
					#include <stdio.h>

					int main() {
						int a = 10; // 将10作为a的值
						int b = 20;
						int c = a + b; // 注意变量一定要先声明再使用 这里是计算a + b的结果(算式) 并作为c的初始值
					}

这里使用到了+运算符(之后我们还会介绍其他类型的运算符) 这个运算符其实就是我们数字中学的加法运算
会将左右两边的变量值加起来 得到结果 我们可以将运算结果作为其他变量的初始值 还是很好理解的

但是现在虽然做了运算 我们还不知道运算的具体结果是什么 所以这里我们通过前面认识的printf函数来将结果打印到控制台:

					#include <stdio.h>

					int main() {
						int a = 10;
						int b = 20;
						int c = a + b;

						printf(c);
					}

但是我们发现这样似乎运行不出来结果 不对啊 前面你不是说把要打印到控制台的内容写到printf中吗
怎么这里不行呢? 实际上printf是用于格式化打印的 我们来看看如何进行格式化打印 输出我们的变量值:

					printf("c的结果是: %d", c); // 使用%d来代表一个整数型的数据(占位符) 在打印时会自动将c的值替换

我们来看看效果:
					
					c的结果是: 30
					进程已结束,退出代码0

这样 我们就知道该如何打印我们的变量值了 当然 除了使用%d打印有符号整数之外 还有其他的:

					格式控制符															说明

					   %c														  输出一个单一的字符

				   %hd %d %ld										以十进制 有符号的形式输出short int long类型的整数

				   %hu $u %lu										以十进制 无符号的形式输出short int long类型的整数

				   %ho %o %lo									 以八进制 不带前缀 无符号的形式输出sort int long类型的整数

				  %#ho %#o %#lo									 以八进制 带前缀 无符号的形式输出short int long类型的整数

				   %hx %x %lx								  以十六进制 不带前缀 无符号的形式输出short int long类型的整数 如果x小写
				   %hx %X %lX								  那么输出的十六进制数字也小写 如果X大写 那么输出的十六进制数字也大写

				  %#hx %#x %#lx								  以十六进制 带前缀 无符号的形式输出short int long类型的整数 如果x小写
				  %#hX %#X %#lX								  那么输出的十六进制数字和前缀都小写 如果X大写 那么输出的十六进制数字和前缀都大写

					 %f %lf											   以十六进制的形式输出float double类型的小数

				  %e %le %E %lE								以指数的形式输出float double类型的小数 如果e小写 那么输出结果中的e也小写

				  %g %lg %G %lG							 以十进制和指数中较短的形式输出float double类型的小数 并且小数部分最后不会添加多余的0
														 如果g小写 那么当以指数形式输出时e也小写 如果G大写 那么当以指数形式输出时E也大写

					   %s															输出一个字符串

比如现在我们要进行小数的运算 还记得我们前面介绍的小数类型有哪些吗?
					
					#include <stdio.h>

					int main() {
						double a = 0.5;
						float b = 2.5f; // 注意直接写2.5默认表示的是一个double类型的值 我们需要再后面加一个f或是F表示是float类型值

						printf("a + b的结果是: %f", a + b); // 根据上表得到 小数类型需要使用%f表示 这里我们可以直接将a + b放入其中
					}

可以看到 结果也是正确的:
					
					a + b的结果是: 3.000000
					进程已结束,退出代码0

当然 我们也可以一次性打印多个 只需要填写多个占位符表示即可:

					#include <stdio.h>

					int main() {
						double a = 0.5;
						float b = 2.5f; // 整数类型默认是int 如果要表示为long类型的值 也是需要在最后添加一个l或L

						printf("a = %f, b = %f", a, b); // 后面可以一直添加(逗号隔开) 但是注意要和前面的占位符对应
					}

结果也是正常的:

					a = 0.500000, b = 2.500000
					进程已结束,退出代码0

我们再来看看字符类型:
					char c = 'A'; // 字符需要使用单引号囊括 且只能有一个字符 不能写成'AA' 这就不是单个字符
					// 注意这里的A代表的是A这个字符 对应的ASCII码是65 实际上c存储的是65这个数字

我们也可以通过格式化打印来查看它的值:
					
					#include <stdio.h>

					int main() {
						char c = 'A';
						printf("变量c的值为: %c 对应的ASCII码为: %d", c, c); // 这里我们使用%c来以字符形式输出 %d输出的是变量数据的整数形式 其实就是对应的ASCII码
					}

					变量c的值为: A 对应的ASCII码为: 65
					进程已结束,退出代码0

当然 我们也可以直接让char存储一个数字(ASCII码) 同样也可以打印出对应的字符:
					
					#include <stdio.h>
					
					int main() {
						char c = 66;
						printf("变量c的值为: %c 对应的ASCII码为: %d", c, c);
					}

					变量c的值为: B 对应的ASCII码为: 66
					进程已结束,退出代码0

那么现在请各位小伙伴看看下面这段代码会输出什么:

					#include <stdio.h>

					int main() {
						int a = 10;
						char c = 'a'
						printf("变量c的ASCII码为: %d", c);
					}

没错 这里得到的结果就是字符a的ASCII码值 注意千万不要认为c得到的是变量a的值 这里使用的是字符a 跟上面的变量a半毛钱关系都没有:

					变量c的ASCII码为: 97
					进程已结束,退出代码0

但是如果我们去掉引号 就相当于把变量a的值给了c c现在的ASCII码就是10了 所以这里一定要清楚

对于某些无法表示的字符 比如换行这类字符 我们没办法直接敲出来 只能使用转义符进行表示(详细的转义字符表参见前面的基本数据类型章节):

					char c = '\n';

变量除了有初始值之外 也可以在后续的过程中得到型的值:

					#include <stdio.h>

					int main() {
						short s = 10;
						s = 20; // 重新赋值为20 注意这里就不要再指定类型了 指定类型只有在声明变量时才需要
						printf("%d", s); // 打印结果
					}

可以看到 得到的是我们最后一次对变量修改的结果:

					20
					进程已结束,退出代码0

那要是我们不对变量设定初始值呢? 那么变量会不会有默认值:

					#include <stdio.h>

					int main() {
						int a, b, c, d;
						printf("%d,%d,%d,%d". a, b, c, d);
					}

可以看到 虽然定义变量但是我们没有为其设定初始值 那么它的值就是不确定的了(千万注意并不是不设定值默认就是0):

					1,46645344,1,46612292
					进程已结束,退出代码0

所以各位小伙伴以后在使用时一定要注意这个问题 至于为什么不是0 这是因为内存分配机制 我们在后面阶段高级篇再进行讲解

我们再来看一个例子:

					#include <stdio.h>

					int main() {
						char c = 127; // 已经到达c的最大值了
						c = c + 1; // 我不管 我就要再加
						printf("%d", c); // 这时会得到声明结果?
					}

					-128
					进程已结束,退出代码0

怎么127加上还变成-128了呢? 这是由于位数不够 导致运算结果值溢出:

	> 127 + 1 = 01111111 + 1
	> 由于现在是二进制 满2进1 所以最后变成
	> 10000000 = 补码形式的-128

所以 了解上面这些计算机底层原理是很重要的 我们能够轻松地知道为什么会这样

在我们的运算中 可能也会存在一些一成不变的值 比如π的值永远都是3.1415.... 在我们的程序中 也可以使用这样不可变的变量 我们称为常量:

定义常量和变量比较类似 但是需要在前面添加一个const关键字 表示这是一个常量:
					
					#include <stdio.h>

					int main() {
						const int i = 10;
						i = 20;
					}

可以看到 常量在一开始设定初始值后 后续是不允许进行修改的