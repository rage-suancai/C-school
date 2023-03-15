#include <stdio.h>

void test1_0() {

	printf("Fuck World!\n");

}

void test2_0() {

	//int a = 8;
	//int b = 87;
	//int c = a + b;
	//printf("c的结果是: %d\n", c);
	//printf("a = %d, b = %d, c = %d", a, b, c);

	//double a = 0.5;
	//float b = 2.5f;
	//printf("a + b的结果是: %f", a + b);

	//double a = 0.5;
	//float b = 2.5f;
	//printf("a = %f, b = %f", a, b);

	//char c = 'A';
	//printf("变量c的值为: %c 对应的ASCII码为: %d", c, c);
	//char c = 66;
	//printf("变量c的值为: %c 对应的ASCII码为: %d", c, c);

	//int a = 10;
	//char c = 'a';
	//printf("变量的ASCII码为: %d", c);

	//short s = 10;
	//s = 20;
	//printf("%d", s);

	//int a, b, c, d;
	//printf("%d,%d,%d,%d", a, b, c, d);

	char c = 127;
	c = c + 1;
	printf("%d", c);

	//const int i = 10;
	//i = 20;

}

void test3_0() {

	//unsigned char c = -65;
	//printf("%u", c);

	int i = -1;
	printf("%u", i);

}

void test4_0() {

	//short s = 10;
	//int i = s;

	//int a = 511;
	//char b = a;
	//printf("%d", b);

	//int a = 99;
	//double d = a;
	//printf("%f", d);

	//double a = 99.000000;
	//int d = a;
	//printf("%d", d);

	//float a = 2;
	//int b = 3;
	//double c = b / a;
	//printf("%f", c);

	//int a = (int) 2.5;
	//printf("%d", a);

	//double a = 3.14;
	//int b = (int)(a + 2.8);
	//printf("%d", b);

	int a = 10, b = 4;
	double c = a / b;
	double d = (double) a / b;
	printf("不进行类型转换: %f, 进行类型转换: %f", c, d);

}

void test5_0() {

	//int a, b;
	//a = b = 20;
	//printf("%d %d", a, b);

	//int a = 20, b = 10;
	//printf("%d", a + b);

	//int a = 10, b = 5;
	//printf("%d", a - b);

	//int a = 20, b = 10;
	//printf("%d %d", a * b, a / b);

	int a = 20, b = 8;
	printf("%d", a % b);

}

void test6_0() {

	//int a = 20, b = 10;
	//printf("%d", a + a * b);

	//int a = 20, b = 10;
	//printf("%d", (a + a) * b);

	//printf("%d", 1 - (3 + 4) * (-2 / 1));

	//int c;
	//int a = (3 + (c = 2)) * 6;
	int b, c;
	int a = (b = 5, c = b + 8);
	printf("%d", a);

}

void test7_0() {

	//int a = 10;
	//a = a + 1;
	//printf("%d", a);

	//int a = 10;
	//++a;
	//printf("%d", a);

	//int a = 10;
	//int b = a = a + 1;
	//int b = ++a;
	//printf("%d", b);

	//int a = 10;
	//a = a + 5;
	//printf("%d", a);

	//int a = 10;
	//a += 5;
	//printf("%d", a);

	//int a = 10;
	//int b = a += 5;
	//printf("a = %d", b);

	//int a = 10;
	//a %= 3;
	//printf("a = %d", a);

	int a = 10;
	int b = 5 * --a;
	printf("b = %d", b);

}

void test8_0() {

	//int a = 10;
	//a *= 2;
	//printf("%d", a);

	//int a = 10;
	//a = a << 1;
	//a <<= 1;
	//printf("%d", a);

	//int a = 6;
	//a = a >> 1;
	//printf("a = %d", a);

	//int a = 6, b = 4;
	//int c = a & b;
	//printf("c = %d", c);

	//int a = 6, b = 4;
	//int c = a | b;
	//printf("c = %d", c);

	int a = 6, b = 4;
	int c = a ^ b;
	a = ~a;
	printf("a = %d", a);

}

void test9_0() {

	//int a = 10;
	//_Bool c = a < 0;
	//printf("c = %d", c);

	//char c = 'D';
	//printf("c是否为大写字母: %d", c >= 'A');

	//char c = 'D';
	//printf("c是否为大写字母: %d", c >= 'A' && c <= 'Z');

	//char c = 'D';
	//printf("c是否不为大写字母: %d", c < 'A' || c > 'Z');

	//char c = 'D';
	//printf("c是否为字母A: %d\n", c == 'A');
	//printf("c是否不为字母A: %d", c != 'A');

	//int i = 20;
	//printf("i是否不小于20: %d", !(i < 20));

	int i = 0;
	char c = i > 10 ? 'A' : 'B';
	printf("%d", c);

}

int main() {

	//test1_0();
	 
	//test2_0(); 

	//test3_0();

	//test4_0();

	//test5_0();

	//test6_0();

	//test7_0();

	//test8_0();

	test9_0();

}