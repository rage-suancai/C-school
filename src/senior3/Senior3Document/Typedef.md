typedef�ؼ���

�������Ҫ��һ��typedef�ؼ��� ����ؼ������ڸ�ָ������������� ��ô���淨��?

                    typedef int lbwnb; // ʳ�÷�ʽ: typedef �������� �Զ������ͱ���

�����������Ǹ�int����һ������ ��ô�������ǲ�������ʹ��int����ʾһ��int���� ����Ҳ����ʹ�ñ�����Ϊ����������:

                    #include <stdio.h>

                    typedef int lbwnb;

                    int main() {
                        lbwnb i = 666; // ��������ֱ��д�ɱ��� ʵ���ϱ��ʻ���int
                        printf("%d", i);
                    }

                    typedef const char *String; // const char * ���Ǿ��������ΪString��ʾ�ַ���

                    int main() {
                        String str = "Hello World"; // �ǲ�����Java��ζ��
                        printf(str);
                    }

��Ȼ�������ֻ�������֮�� ����ָ�� �ṹ�� ������ ö�ٵȵȶ�����ʹ������ؼ�������ȫ���������:

                    #include <stdio.h>

                    typedef struct test {
                        int age;
                        char name[10];
                    } Student; // Ϊ�˷������ֱ��д������ ��ȻҲ����������һ����������

                    int main() {
                        Student s = {18, "С��"}; // ֱ��ʹ�ñ��� ����struct�ؼ��ֶ����ü���
                    }

�����ݽṹ��ѧϰ�� typedefʹ�û���ӵ�Ƶ��