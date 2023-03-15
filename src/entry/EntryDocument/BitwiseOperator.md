位运算符

前面我们学习了乘法运算符* 当我们想要让一个变量的值变成2倍 只需要做一次乘法运算即可:

					int a = 10;
					a *= 2; // 很明显算完了之后a就是20了

但是我们现在可以利用位运算来快速进行计算:

					int a = 10;
					a = a << 1; // 也可以写成复合形式 a <<= 1

我们会发现这样运算之后得到的结果居然也是20 这是咋算出来的呢? 实际上<<是让所有的bit位进行左移操作 上面计算左移1位 我们可以来看看:

	> 10 = 00001010 现在所有bit位上的数据左移一位00010100 = 20

是不是感觉特别神奇? 就像我们在十进制中 做乘法以10的操作一样: 22乘以10那么就直接左移了一位
变成220 而二进制也是一样的 如果让这些二进制数据左移的话 那么相当于在进行乘2的操作 比如:

					#include <stdio.h>

					int main() {
						int a = 6;
						a = a << 2; // 让a左移2位 实际上就是 a * 2 * 2, a * 2的平方(类比十进制 其实还是很好理解的)
						printf("a = %d", a);
					}

当然能左移那肯定也可以右移:

					#include <stdio.h>

					int main() {
						int a = 6;
						a = a >> 1; // 右移其实就是除以2的操作
						printf("c = %d", a);
					}

当然除了移动操作之外 我们也可以进行按位比较操作 先来看看按位与操作:

					#include <stdio.h> 

					int main() {
						int a = 6, b = 4;
						int c = a & b; // 按位与操作
						printf("c = %d", c);
					}


按位与实际上也是根据每个bit位来进行计算的:

	> 4 = 00000100
	> 6 = 00000110
	> 按位与实际上就是让两个数的每一位都进行比较 如果两个数对应的bit位都是1 那么结果的对应bit位上就是1 其他情况一律为0
	> 所以计算结果为: 00000100 = 4

还有异或和按位非(按位否定):

					int a = 6, b = 4;
					int c = a ^ b; // 注意^不是指数运算 表示按位异或运算 让两个数的每一位都进行比较 如果两个数对应bit位上不同时为1或是同时为0 那么结果就是1 否则结果就是0 所以这里的结果就是2
					a = -a; // 按位否定针对某个数进行操作 它会减这个数的每一个bit位都置反 0变成1 1变成0 猜猜会变成几

按位运算都是操作数据底层的二进制位来进行的