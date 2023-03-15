#include <stdio.h>
#include <string.h>

void test1_0() {

	/*int i = 21;
	if (i > 20) {
		printf("Fuck Wolrd");
	}
	printf("yes~ Fuck Wolrdd");*/

	/*int i = 0;
	if (i > 20) printf("Fuck World");
	printf("yes~ Fuck World");*/

	/*int i = 0;
	if (i > 20) {
		printf("Fuck Wolrd");
	} 
	else {
		printf("LBWNB");
	}*/

	/*int score = 88;
	if (score >= 90) {
		printf("优秀");
	}
	else if (score >= 70) {
		printf("良好");
	}
	else if (score >= 60) {
		printf("及格");
	}
	else {
		printf("不及格");
	}*/

	int score = 2;
	if (score < 60) {
		if (score > 30) {
			printf("学习C++");
		}
		else {
			printf("学习Java");
		}
	}

}

void test2_0() {

	/*char c = 'A';
	switch (c) {
	case 'A':
		printf("去尖子班 准备冲刺麻省理工");
		break;
	case 'B':
		printf("去平行班 准备冲刺一本");
		break;
	case 'C':
		printf("去职高深造");
		break;
	}*/

	/*char c = 'A';
	switch (c) {
	case 'A':
		printf("去麻省理工");
		break;
	case 'B':
		printf("去平行班");
		break;
	case 'C':
		printf("去差生班");
		break;
	default:
		printf("去读职高 分流");
	}*/

	char c = 'A';
	switch (c) {
	case 'A':
		if (c == 'A') {
			printf("去麻省理工");
		}
		break;
	case 'B':
		printf("去平行班");
		break;
	}

}

void test3_0() {

	/*for (int i = 1; i <= 5; ++i) {
		printf("Fuck World\n");
	}*/

	/*for (int i = 1; i <= 5; ++i) {
		printf("%d\n", i);
	}*/

	/*for (int i = 1; ; ++i) {
		printf("%d, ", i);
	}*/
	
	/*for (;;) {
		printf("This is an inflnite loop\n");
	}*/
	
	/*for (int i = 1; i <= 10; ++i) {
		if (i == 5) continue; 
		printf("%d\n", i);
	}*/
	
	/*for (int i = 1; i <= 4; ++i) {
		for (int j = 1; j <= 4; ++j) {
			if (i == j) continue;
			printf("%d, %d\n", i, j);
		}
	}*/
	
	for (int i = 1; i <= 4; ++i) {
		for (int j = 1; j <= 4; ++j) {
			if (i == j) break;
			printf("%d, %d\n", i, j);
		}
	}

}

void test4_0() {

	/*int i = 100;
	while (i > 0) {
		printf("%d, ", i);
		i /= 2;
	}*/

	/*int i = 100;
	while (i > 0) {
		if(i < 30) break;
		printf("%d, ", i);
		i /= 2;
	}*/

	do {
		printf("Fuck Wolrd");
	} while (0);

}

void test5_0() {

	/*int arr[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	for (int i = 0; i < 12; ++i) {
		int days = arr[i];
		printf("2023年 %d 月的天数是: %d 天\n", (i + 1), days);
	}*/

	/*int arr[] = {666, 777, 888};
	arr[1] = 999;
	printf("%d", arr[1]);*/

	int arr[10];
	for (int i = 0; i < 10; ++i) {
		printf("%d, ", arr[i]);
	}

	/*int arr[] = {111, 222, 333};
	printf("%d", arr[3]);*/

}

void test6_0() {

	//int arr[][2] = {{20, 10}, {18, 9}};

	/*int arr[3][12] = {{31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
					  {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
					  {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};*/

	int arr[3][12] = {{31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
					  {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
					  {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
	printf("%d", arr[0][1]);

}

void test7_0() {

	/*char str[] = {'F', 'U', 'C', 'K', '\0'};
	printf("%s", str);*/

	/*char str[] = "Fuck";
	const char str[] = "Fuck";
	printf("%s", str);*/

	printf("你这瓜保熟吗");
	
}

void test8_0() {

	/*const char str[] = "Fuck World";
	printf(str);*/

	/*char str[10];
	scanf("%s", str);
	printf("输入的内容为: %s", str);*/

	/*int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	printf("a + b = %d", a+b);*/

	char str[10];
	gets(str);
	puts(str);

}

void combat1_0() {

	// 水仙花数
	/*for (int Nb = 100; Nb < 1000; ++Nb) {

		int a = Nb % 10, b = Nb / 10 % 10, c = Nb / 10 / 10;
		if (a*a*a + b*b*b + c*c*c == Nb) {
			printf("水仙花数: %d\n", Nb);
		}

	}*/

	// 九九乘法表
	/*for (int i = 1; i <= 9; ++i) {

		for (int j = 1; j <= 9; ++j) {
			if (i < j) break;
			printf("%d x %d = %2d ", i, j, i*j);
		}
		printf("\n");

	}*/
	
	// 斐波那契数列解法其一
	int target = 20, result, a = 1, b = 1, c;

	for (int i = 2; i < target; ++i) {
		c = a + b;
		a = b;
		b = c;
	}
	result = c;
	
	printf("%d", result);
	
}
void combat2_0() {

	// 冒泡排序
	/*int arr[] = {3, 5, 7, 2, 9, 0, 6, 1, 8, 4};

	for (int i = 0; i < 9; ++i) {
		_Bool flag = 0;
		for (int j = 1; j < 10 - i; ++j) {
			if (arr[j] < arr[j - 1]) {
				int temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
				flag = 1;
			}
		}
		if (flag == 0) break;
	}

	for( int i = 0; i < 10; ++i) {
		printf("%d ", arr[i]);
	}*/

	// (扩展)插入排序
	/*int arr[] = {54, 78, 23, 45, 66, 11, 99, 100};

	for (int i = 0; i < 7; ++i) {
		int temp = arr[i], j = i - 1;
		while (i >= 0 && temp < arr[j]) {
			arr[j + 1] = arr[j]; j--;
		}
		arr[j + 1] = temp;
	}

	for (int i = 0; i < 8; ++i) {
		printf("%d ", arr[i]);
	}*/

	// (扩展)选择排序
	/*int arr[] = {54, 78, 23, 45, 66, 11, 99, 100};

	for (int i = 0; i < 7 - 1; ++i) {
		int min = arr[i], pos = i;
		for (int j = i+1; j < 7; ++j) {
			if (arr[j] < min) {
				min = arr[j];
				pos = j;
			}
		}
		int tmp = arr[i];
		arr[i] = arr[pos];
		arr[pos] = tmp;
	}

	for (int i = 0; i < 8; ++i) {
		printf("%d ", arr[i]);
	}*/

	//斐波那契数列解法其二
	/*int target = 20; int dp[target];
	dp[1] = dp[0] = 1;

	for (int i = 2; i < target; ++i) 
		dp[i] = dp[i - 1] + dp[i - 2];

	printf("%d", dp[target - 1]);*/

	// 打家劫舍
	int arr[] = {2, 7, 9, 3, 1}, size = 5, result;
	int dp[size];
	dp[0] = arr[0];
	dp[1] = arr[1] > arr[0] ? arr[1] : arr[0];

	for (int i = 2; i < size; ++i) 
		dp[i] = dp[i - 1] > dp[i - 2] + arr[i] ? dp[i - 1] : dp[i - 2] + arr[i];
	result = dp[size - 1];

	printf("偷到了: %d 元", result);

}
void combat3_0() {

	// 回文串判断
	/*char str[64];
	scanf("%s", str);
	int len = strlen(str), left = 0, rigit = len-1;

	_Bool flag = 1;
	while (left < rigit) {
		if (str[left] != str[rigit]) {
			flag = 0;
			break;
		}
		left++; rigit--;
	}

	puts(flag ? "是回文串" : "不是回文串");*/

	// 字符串匹配算法(暴力)
	/*char str1[64], str2[64];
	scanf("%s", str1); scanf("%s", str2);
	unsigned long len1 = strlen(str1), len2 = strlen(str2);

	_Bool flag = 0;
	for (int i = 0; i < len1; ++i) {
		flag = 0;
		for (int j = 0; j < len2; ++j) {
			if (str1[i + j] != str2[j]) {
				flag = 1;
				break;
			}
		}
		if (!flag) break;
	}

	puts(flag ? "不包含" : "包含");*/

	// 字符串匹配KMP算法(KMP)
	char str1[] = "abababcabb";
	char str2[] = "ababc";

	int len1 = strlen(str1), len2 = strlen(str2);
	int next[len2]; next[0] = 0;

	for (int i = 1; i < len2; ++i) {
		int j = i - 1;
		while (1) {
			if(next[j] == 0 || str2[i - 1] == str2[next[j] - 1]) {
				next[i] = next[j] + 1;
				break;
			}
			j = next[j] - 1;
		}
	}

	// for (int i = 0; i < len2; ++i) {
	// 	printf("%d ", next[i]);
	// }

	int i = 0, j = 0;
	while (i < len1) {
		if (str1[i] == str2[j]) {
			i++; j++;
		} else {
			if (j == 0) {
				i++;
			} else {
				j = next[j] - 1;
			}
		}
		if (j == len2) break;
	}

	printf(j == len2 ? "匹配成功" : "匹配失败");

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

	//combat1_0();

	//combat2_0();

	combat3_0();

}