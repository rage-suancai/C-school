������

������Ҳ�������ڲ�����ܶ������͵ı��� ��������ṹ�岻ͬ���� ���еı�������һ���ռ� ????ɶ��˼?

                    union Object { // ����һ������������Ψһ��ͬ�ľ���ǰ���union��
                        int a;
                        char b;
                        float c;
                    }

����������һ�����������:

                    #include <stdio.h>

                    union Object {
                        int a;
                        char b;
                        float c;
                    };

                    int main() {
                        union Object object;
                        object.a = 66; // �ȸ�a��ֵ66
                        printf("%d". object.b); // ����b
                    }

        https://smms.app/image/y6gXHTaeBODFsYP

? ? ? ?

���޸ĵ���a�� ��ôbҲ���66��? ������Ϊ���ǹ������ڴ�ռ� ʵ���������Ƚ�a�޸�Ϊ66 ��ô�ͽ�����ڴ�ռ��ϵ�ֵ�޸�Ϊ��66
��Ϊ�ڴ�ռ乲�� ���Ե���ȡbʱ Ҳ�������ڴ�ռ��ж�ȡһ��char���ȵ����ݳ��� ���Եõ���Ҳ��66

                    int main() {
                        union Object object;
                        object.a = 128;
                        printf();
                    }

        https://smms.app/image/hGDKQgMclqrZwIY

��Ϊ: 128 = 10000000 ������char��ȡ�� ���ڵ�һλ�Ƿ���λ ���Ǿͱ����-128

��ô������Ĵ�С������ξ�������?

                    union Object {
                        int a;
                        char b;
                        float c;
                    };

                    int main() {
                        printf("%lu", sizeof(union Object));
                    }

        https://smms.app/image/ehHpAXPfYwZ7yBN

ʵ���� ������Ĵ�С���������ڲ�������͵Ĵ�С ������int���Ծ���4 ��Ȼ ������Ա��С����������������������ʱ�� ��Ҫ���뵽����������������

��Ȼ�����������ʹ�û�����ṹ���� ����Ͳ�����