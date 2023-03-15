枚举

最后我们来看一下枚举类型 枚举类型一般用于表示一些预设好的整数常量 比如我们风扇有低 中 高三个档位
我们总是希望别人使用我们预设好的这三个档位 而不希望使用其他的档位 因为我们风扇就只设计了这个三个档位

这时我们就可以告诉别人 我们的风扇有哪几个档位 这种情况使用枚举就非常适合 在我们的程序中
只能使用基本数据类型对这三种档位进行区分这样显然可读性不够 别人怎么知道哪个代表哪个挡位呢? 而使用枚举就没有这些问题了:

                    /**
                     * 比如现在我们设计
                     * 1 = 低档位
                     * 2 = 中档位
                     * 3 = 高档位
                     */
                    enum status {low = 1, middle = 2, high = 3}; // enum 枚举类型名称 {枚举 = 初始值, 枚举...}

我们可以创建多个自定义名称的枚举 命名规则合和变量差不多 我们可以当每一个枚举对应一个整数值 这样的话
我们就不需要去记忆每个数值代表的是上面档位了 我们可以直接根据枚举的名称来进行分辨 是不是很方便?

使用枚举也非常地方便:

                    enum status {low = 1, middle = 2, high = 3};

                    int main() {
                        enum status a= low; // 和之前一样 直接定义即可 类型为enum + 枚举名称 后面是变量名称 值可以直接写对应的枚举
                        printf("%d", a);
                    }

                    int main() {
                        enum status a = high;
                        if (a == low) { // 判断起来就方便多了
                            printf("低档次");
                        } else if (a == high) {
                            printf("高档次");
                        } else {
                            printf("中档次");
                        }
                    }

当然也可以直接加入到switch语句中:

                    int main() {
                        enum status a = high;
                        switch (a) {
                            case low:
                            case high:
                            case middle:
                            default: ;
                        }
                    }
                        
不过在枚举变量定义时需要注意:

                    enum status {low, middle, high}; // 如果不给初始值的话 那么会从第一个枚举开始 默认值为0 后续依次+1

所以这里的low就是0 middle就是1 high就是2了

如果中途设定呢?

                    enum status {low, middle = 6, high};; // 这里我们给middle设定为6

这时low由于是第一个 所以还是从0开始 不过middle这里指定为6了 所以紧跟着的high初始值就是middle的值+1了 因此low现在是0 middle就是6 high就是7了