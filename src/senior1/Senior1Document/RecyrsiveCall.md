�ݹ����

���ǵĺ��������������ط�������֮�� Ҳ�����Լ������Լ�(�üһ� �����ǰ�) �����淨���ǳ�Ϊ�ݹ�

                    #include <stdio.h>

                    void test() {
                        printf("Fuck World\n");
                        test(); // �����Լ��ڵ����Լ� �����Ļ���һ���ֻ���뵽���������
                    }

                    int main() {
                        test();
                    }

���ǿ��Գ�������һ������ĳ��� �ᷢ�ֳ���ֱ�����޴�ӡFuck World����ַ��� ������Ϊ�����Լ��ڵ����Լ�
���ϵ��ظ����뵽������� ��������� ������Զ��������� �������޵�ִ���������������

                    void test() {                           void test() {                           void test() {
                        printf("Fuck World\n")                  printf("Fuck Wolrd\n");                 printf("Fuck Wolrd\n")
                        test() -------------------------->      test(); -------------------------->     test(); --------------------------> ����ֹ...
                    }                                       }                                       }

���ǵ�������ǵĳ�������ֹ�� ������Ϊ��������������������� ��Ϊ����������ܷ��κ������޵ؽ�����ȥ

    (ѡѧ) �����������˽�һ�º����ĵ��ù��� ʵ�����ڳ�������ʱ����һ���к�������ջ�Ķ��� �����ڿ��ƺ����ĵ���:

                    #include <stdio.h> // ����������ĵ��ù�ϵΪ��

                    void test2() {
                        printf("giao");
                    }

                    void test() {
                        test2(); // main -> test -> test2
                            printf("giao");
                    }

                    int main() {
                        test();
                            printf("giao);
                    }

    ��ʵ���ǿ��Ժ����ɵؿ����������ù�ϵ �����Ǵ�main�������� Ȼ�����test���� ��test�������ֵ�����test2���� ��ʱ���Ǿ���Ҫ�ȴ�test2����ִ�����
    test���ܼ��� ��main����Ҫ�ȴ�testִ����ϲ��ܼ��� ��ʵ��������������ɺ�������ջ�ڿ��Ƶ�:

    https://img-blog.csdnimg.cn/img_convert/d1d29af0ae11925eb5ff5740c703372f.png

    ����test2����ִ����Ϻ� ÿ��ջ֡�����δ�ջ�г�ȥ:

    https://img-blog.csdnimg.cn/img_convert/b920992411f40c4efa5eec2fe9cfd7b7.png

    �����е�ջȫ����ȥ֮�� �������
    ������Ҳ�Ͳ��ѽ���Ϊʲô���޵ݹ�ᵼ�³�����ִ��� ��Ϊջ�Ŀռ����� ��������һֱ�ڽ������ҵ���
    ���Ի᲻�ϵ����µ�ջ֡���� ���������ջ�Ŀռ� ��ը�� �����������ǳ�Ϊջ���(Stack Overflow)

��Ȼ ������Ǻúõذ��չ淶ʹ�õݹ���� �Ƿǳ������ ��������������Ҫ��ĳ�����Ľ׳�:

                    #include <stdio.h>

                    int test(int n);

                    int main() {
                        printf("%d", test(3))
                    }

                    int test(int n) {
                        if (n == 1) return 1; // ��Ϊ�������޵ݹ���ȥ ����������������һ���������� ��n = 1ʱ����
                        return test(n - 1) * n; // ÿ�ζ���n��������һ���ļ����� ��һ������n-1��
                    }

ͨ�����ݹ�����ʵ������ӽ������� �����Ͳ�������ѭ���� �������ǵĳ��������ޱȼ�� ��ô�������ִ�е���:

    https://img-blog.csdnimg.cn/img_convert/9472046eadea47ecbc060d9129c4c142.png

��������������һ�����ߵ��ײ� Ȼ���õ������Կ�׺��𲽷��ص�һ������ ���ڷ��ص�;�в��Ͻ��м������õ����(�)

���� ������ʹ�õݹ鷴����һ��������˼������