��������

������������������ ���ǻ����Ը������� ѡ���Եض�ĳЩ���ݽ��к���

��������ʶһ��#ifdef, #else, #endif��������������ָ��:

                    #include <stdio.h>

                    #ifdef PI // ifdef�����ж��Ƿ����˷���PI ���û�еĻ��������µ�ָ��
                        #define M 666
                    #else // ��������˷���PI ��ô�ʹ��������֧�����
                        #define M 777
                    #endif // �����Ҫ��endifָ����������ж�

                    int main() {
                        printf("%d", M); // ����ӡM
                    }

        https://smms.app/image/U7r6g5pB21fISVh

���Կ��� ������û�ж���PI������� ִ�е���#define M 777 ��Ҫ�����ڶ�������? ���Ǳ�дһ���µ�ͷ�ļ�:

                    #define PI 3.1415

���������������ͷ�ļ� ��ô��Ӧ��Ԥ����ָ��Ҳ����Ű�������:

                    #include <stdio.h>
                    #include "test.h"

                    #ifdef PI
                        #define M 666
                    #else
                        #define M 777
                    #endif

                    int main() {
                        printf("%d", M);
                    }

        https://smms.app/image/ojZNauDIb4ckylC

���Կ�����ʱ�õ��Ľ������666�� ��Ϊ����PI�������ͷ�ļ��ж�����(��Ȼ�ڵ�ǰԴ�ļ��ж���Ҳ��һ����)

�����������ϣ���ж�ĳ������û������? û�� ����#ifndef��ʾ�ж��Ƿ�δ����ĳ������

                    #include <stdio.h>

                    #ifndef PI   // ifndef ���� if not define ��ifdef���ŵ�
                        #define M 666
                    #else
                        #define M 777
                    #endif

                    int main() {
                        printf("%d", M);
                    }

        https://smms.app/image/br2lo1vj5GPIZig

��Ȼ �����ж�ĳ�������Ƿ����֮�� ����Ҳ�����������������ֱ�ӽ����߼��ж� ������Ҫʹ�õ�#if��#elifָ��

                    #define M 666

                    #if M == 666   // ��M����666��ô����K = 999
                        #define K 999
                    #elif M == 777   // ��ͬ��else if���
                        #define K 888
                    #else    // else���
                        #define K 000
                    #endif

������Щ��֧��֧��Ƕ��ʹ��:

                    #define M 666

                    #if M == 666
                        #ifdef L
                            #include "test.h"
                        #endif
                    #elif M == 777
                        #define K = 888
                    #else
                        #define K = 000
                    #endif