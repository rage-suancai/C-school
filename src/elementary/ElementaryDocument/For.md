ѭ�����-for

ͨ��ǰ���ѧϰ �����˽������ʹ�÷�֧��������ݲ�ͬ������ִ�в�ͬ�Ĵ��� ���ǽ��������ڶ�����Ҫ�����̿������ ѭ�����

������ĳЩʱ�� ������Ҫ����ִ��ĳЩ����:

                    #include <stdio.h>

                    int main() {
                        printf("ɡ��һ��¬��ΰ׼��������");   // ����仰���Ҵ�ӡ����
                        printf("ɡ��һ��¬��ΰ׼��������");
                        printf("ɡ��һ��¬��ΰ׼��������");
                    }

����������һ��:
    
    > ����ʽ1: ��ѭ����ʼʱ��ִ��һ��
    > ����ʽ2: ÿ��ѭ����ʼǰ��ִ��һ�� Ҫ��Ϊ�ж���� �����ж��Ƿ���Խ���ѭ�� �����Ϊ�� ��ô����ѭ�� �������ѭ��
    > ����ʽ3: ÿ��ѭ����ɺ��ִ��һ�Ρ�
    > ѭ����: ÿ��ѭ������ִ��ѭ������������� ֱ��ѭ������

һ����׼��forѭ�����д������: 

                    // ������������ϣ��ѭ��4��
                    for (int i = 0; i < 4; ++i) {
                        // ���ȶ���һ������i���ڿ���ѭ������
                        // ����ʽ2��ѭ����ʼ֮ǰ�ж��Ƿ�С��4
                        // ����ʽ3ÿ��ѭ����������i����һ�� ����������4��֮������������ ѭ���ͻ���� ����4��ѭ��
                    }

������������˳���ӡ�Ľ��:

                    #include <stdio.h>

                    int main() {
                        // ������������ϣ��ѭ��4��
                        for (int i = 0; i < 4; ++i) {
                            printf("%d, ", i);
                        }
                    }

                    0, 1, 2, 3
                    �����ѽ���,�˳�����0

���� ����ѭ�����ǾͿ�������ִ�и��ֲ�����           

ע�� �������ʽ2����ʲô����д ��ô��Ĭ���ж�Ϊ��: 

                   #include <stdio.h>

                    int main() {
                        for (int i = 0; ; ++i) {   // ����ʽ2����д�κ����� Ĭ��Ϊ�� �����Ļ�ѭ����Զ���������
                            printf("%d, ", i);
                        }
                    }
 
                    https://img-blog.csdnimg.cn/img_convert/a80e273c747bac80ae2c626a3ff22c38.png

���� ���������Ҫ��дһ������ѭ�� ��ʵʲô������д������:

                    #include <stdio.h>

                    int main() {
                        for (;;) {   // ʲô����дֱ������ѭ�� ����ע�� �����ֺŻ���Ҫд��
                            printf("Hello World!\n");   // �����õ���\n��ʾ����
                        }
                    }

��Ȼ ����Ҳ������ѭ����������ǰ��ֹ���Ǽ���ѭ���Ľ��� ����������Ҫ��ʶ�����µĹؼ���: 

                    for (int i = 0; i < 10; ++i) {
                        if(i == 5) break;   // ������������ϣ��������ĳ����������ǰ��ֹѭ�� ����ʹ��break�ؼ���������ѭ��
                        printf("%d", i);
                    }

                    01234
                    �����ѽ���,�˳�����0

���Կ���������������ʱ����ֱ��ͨ��break����ѭ����ѭ�����ټ�����ȥ��ֱ�ӽ�����

����Ҳ���Լ���ѭ��:

                    for (int i = 0; i < 10; ++i) {
                        if(i == 5) continue;   // ʹ��continue�ؼ��ֻ����ѭ�� ���ۺ�����û��δִ����Ĵ��� ����ֱ�ӿ�����һ��ѭ��
                        printf("%d", i);
                    }

                    0123456789
                    �����ѽ���,�˳�����0

��Ȼʹ��break��continue�ؼ����ܹ�������Ŀ���ѭ�� ����ע���ڶ���ѭ��Ƕ���� ��ֻ�����������ѭ����Ч(�ͽ�ԭ��): 

                    for (int i = 1; i < 4; ++i) {
                        for (int j = 1; j < 4; ++j) {
                            if(i == j) continue;    // ��i == jʱ����ѭ��
                            printf("%d, %d\n", i, j);
                        }
                    }

                    1, 2
                    1, 3
                    2, 1
                    2, 3
                    3, 1
                    3, 2

���Կ��� continue�������ٵ����ڲ�ѭ�� �������ѭ��û���κ�Ч�� ͬ���� breakҲֻ���ս����������:

                    for (int i = 1; i < 4; ++i) {
                        for (int j = 1; j < 4; ++j) {
                            if(i == j) break;    // ��i == jʱ��ֹѭ��
                            printf("%d, %d\n", i, j);
                        }
                    }

                    2, 1
                    3, 1
                    3, 2