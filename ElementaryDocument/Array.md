����

����������һ���µ����� ������Ҫ�洢2022��ÿ���¶����� ��ô��ʱ Ϊ�˱�����12���µ����� ���Ǿ͵ô���12������

                    #include <stdio.h>

                    int main() {
                        int january = 31, february = 28, march = 31 ...
                    }

�����ǲ���̫���˵�? ��һ�����뱣��100����Ʒ���ۼ� �����ǵô���100������? ��϶����а�

����Ĵ�����ʹ��

Ϊ�˽���������� ���ǿ���ʹ������ ʲô��������? ����˵ ���Ǵ�����ݵ�һ���� ���е����ݶ�ͳһ�������һ������ һ���������ͬʱ��Ŷ������
�������������뱣��12���µ����� ��ô����ֻ��Ҫ����һ��int���͵�����Ϳ����� �����Ա���ܶ��int���͵����� ��Щ�����������е����� ��Ϊ"Ԫ��"

                    int arr[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};  // 12���µ�����ȫ����������һ��

���Կ��� ����Ķ��巽ʽҲ�Ƚϼ�: 

                    ���� ��������[�����С] = {����1, ����2...};  // ��������ݿ�����һ��ʼ��ʱ�򲻸�ֵ ���������С����������

ע������ֻ�ܴ��ָ�����͵����� һ��ȷ���ǲ��ܸ��ĵ� ��Ϊ���������� �����ڴ��п���һ������������ �������Щ���� �������ͺͳ��ȱ�����һ��ʼ����ȷ

                    [31] [28] [31] [...] [] [] [] [] [] []

��������ķ�ʽ�кܶ���:

                    int a[10];   // ֱ������int�������� ����Ϊ10

                    int b[10] = {1, 2, 4};   // ������ ���Ը�ֵ��ʼֵ ʹ��{}���� ��һ����Ҫ��10��λ�ö��г�ʼֵ �������������Ϊǰ�����趨�˳�ʼֵ ע�� ������һ�� ������趨��ʼֵ �����ڵ����ݲ���һ������0

                    int c[10] = {1, 2, [4] = 777, [9] = 666}; // ����Ҳ����ͨ�� [�±�] = ����ʽ��ָ��ĳһλ�ĳ�ʼֵ ע���±��Ǵ�0��ʼ�� ��һ��Ԫ�ؾ��ǵ�0���±�λ�� ����������������Ϊ10 ��ô��ൽ9

                    int c[] = {1, 2, 3};  // Ҳ���Ը��ݺ���ĸ�ֵ���������鳤��

�������Ͷ�������������: 

                    #include <stdio.h>

                    int main() {
                        char str[] = {'A', 'B', 'C'};   // ����ַ�
                    
                        char str2[] = "ABC";  // ʵ�����ַ������Ƕ���ַ���������ʽ �й��ַ������ǻ�����һ�ڽ��н���
                    }

��ô���鶨����� ���ȥʹ������? ��������������Ҫ��ӡ12���µ�����:

                    #include <stdio.h>

                    int main() {
                        int arr[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
                        for (int i = 0; i < 12; ++i) {
                            int days = arr[i];   // ֱ��ͨ������ ����[�±�] �����ʶ�Ӧ��Ԫ��ֵ �ٴ����� �±��Ǵ�0��ʼ�� ����1
                            printf("2022�� %d �µ������ǣ�%d ��\n", (i + 1), days);
                        }
                    }

                    2022��1�µ�������: 31��
                    2022��2�µ�������: 28��
                    2022��3�µ�������: 31��
                    2022��4�µ�������: 30��
                
��Ȼ����Ҳ���Զ������е�ֵ�����޸�:

                    #include <stdio.h>

                    int main() {
                        int arr[] = {666, 777, 888};
                        arr[1] = 999;   // ��������������Ҫ�õڶ���Ԫ�ص�ֵ���999
                        printf("%d", arr[1]);   // ��ӡһ�¿����ǲ��Ǳ����999
                    }

                    999
                    �����ѽ���,�˳�����0

ע�� �ͱ���һ�� ���ֻ�Ǵ������鵫�ǲ�����ʼֵ�Ļ� ��Ϊ�����ڴ�����������һ��ռ�
�п���֮ǰ�����ط�ʹ�ù� ������һЩ���� ���������ڲ���Ԫ��ֵ����һ������0

                    #include <stdio.h>

                    int main() {
                        int arr[10];
                        for (int i = 0; i < 10; ++i) {
                            printf("%d, ", arr[i]);
                        }
                    }

                    6422224, 6422280, 6422476, 1981205696, 595190879, -2, 6422280, 1981181741, 4201904, 6422352,
                    �����ѽ���,�˳�����0

��Ҫ����ȥ���ʳ������鳤��λ�õ����� ��Ȼ���Ա���ͨ�� ���ǻ������ ��Щ�����Ǻ��������:

                    #include <stdio.h>

                    int main() {
                        int arr[] = {111, 222, 333};
                        printf("%d", arr[3]);  // ����ȥ���ʳ������鳤�ȵ�Ԫ�� ���������������û�е��ĸ�Ԫ��
                    }

��ά����

���鲻����ֻ������һ��ά�� ���ǿ��Դ�����ά������ά������ ����˵���� ������������(������������):

                    int arr[][2] = {{20, 10}, {18, 9}};   // ���Կ��� ���������ŵľ�Ȼ������
                    // ��ŵ��ڲ�����ĳ�������Ҫȷ���� �������������֮ǰһ�� ���Ը��ݺ����ֵ����

������������Ҫ���2020-2022��ÿ���µ����� ��ô��ʱ��һά����϶��ǲ������� ���ǾͿ���ʹ�ö�ά����������:

                    int arr[3][12] = {{31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, // 2020�������� 2����29��
                                      {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                                      {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};

���� ���Ǿ�ͨ����ά���齫������ÿ���µ�����������������

��ô��ά�����ָ����ȥ������?

                    #include <stdio.h>

                    int main() {
                        int arr[3][12] = {{31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, // 2020�������� 2����29��
                                          {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                                          {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
                        printf("%d", arr[0][1]);   // ��������������Ҫ��ȡ2020��2�µ����� ���ȵ�һ����[0]��ʾ��ŵĵ�һ������ �ڶ���[1]��ʾ�����еĵڶ���Ԫ��
                    }

��Ȼ���˶�ά��������������ά ��ά:

                    int arr[2][2][2] = {{{1, 2}, {1, 2}}, {{1, 2}, {1, 2}}};

�йض�ά���� ��ʱ�Ƚ��ܵ�����