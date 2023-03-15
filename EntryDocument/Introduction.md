计算机思维导论

计算机自1946年问世以来 几乎改变了整个世界

现在我们可以通过电脑来做很多事情 比如我们常常听到的什么人工智能 电子竞技 大数据等等 都和计算机息息相关 包括我们现在的手机 平板等智能设备 也是计算机转变而来的 
各位可以看看最顶上的这张图片 如果你在小时候接触过计算机，那么一定对这张图片（照片拍摄于1996年，在美国加利福尼亚州加利福尼亚州的锁诺玛县）印象深刻 
这张壁纸作为WindowsXP系统的默认壁纸 曾经展示在千家万户的电脑屏幕上 

也许你没有接触过计算机 也许你唯一接触计算机就是用来打游戏 也有可能你曾经捣鼓过计算机 在学习C语言之前 先让我们来了解一下计算机的世界

计算机的世界

计算机虽然名字听着很高级 不过它也是由一个个简单电路组成的

这是我们在初中就学习过的电路图 不过这种电路太过简单 只能完成一些很基础的的操作，比如点亮小灯泡等

很明显想要实现计算机怎么高级的运算机器 肯定是做不到的 这时我们就需要引入更加强大的数字电路了

	用数字信号完成对数字量进行算术运算和逻辑运算的电路称为数字电路 或数字系统 由于它具有逻辑运算和逻辑处理功能 所以又称数字逻辑电路
	现代的数字电路由半导体工艺制成的若干数字集成器件构造而成 逻辑门是数字逻辑电路的基本单元 计算机专业一般会在大一开放《数字电路》这门课程 会对计算机底层的数字电路实现原理进行详细介绍

数字电路引入了逻辑判断 我们来看看简单的数字电路

数字电路中 用电压的高低来区分出两种信号 低电压表示0 高电压表示1 由于只能通过这种方式表示出两种类型的信号 所以计算机采用的是二进制

	二进制是计算技术中广泛采用的一种数制 二进制数据是用0和1两个数码来表示的数 它的基数为2 进位规则是“逢二进一” 借位规则是“借一当二” 比如我们一般采用的都是十进制表示
	比如9再继续加1的话 就需要进位了 变成10 在二进制中 因为只有0和1 所以当1继续加1时 就需要进位了 就变成10了(注意这不是十 读成一零就行了)

当然 仅仅有两种信号还不够 我们还需要逻辑门来辅助我们完成更多的计算 最基本的逻辑关系是与、或、非，而逻辑门就有相应的是与门、或门和非门，可以用电阻、电容、二极管、三极管等分立原件构成(具体咋构成的咱这里就不说了)

比如与操作 因为只有两种类型 我们一般将1表示为真 0表示为假 与操作(用&表示) 要求两个数参与进来 比如:
	
	> 1 & 1 = 1 必须两边都是真 结果才为真
	> 1 & 0 = 0 两边任意一个或者都不是真 结果为假

或运算(用 | 表示):
	
	> 1 | 0 = 1 两边只要有一个为真 结果就为真
	> 0 | 0 = 0 两边同时为假 结果才是假

非运算实际上就是取反操作(可以是 ! 表示):
	
	> !1 = 0
	> !0 = 1 非运算会将真变成假 假变成真

有了这些运算之后 我们的电路不仅仅可以实现计算 也可以实现各种各样的逻辑判断 最终才能发展成我们的计算机

前面我们大概介绍一下计算机的底层操作原理 接着我们来看看计算机的基本组成

相信各位熟知的计算机都是一个屏幕 + 一个主机的形式 然后配上我们的键盘鼠标 就可以开始使用了 但是实际上标准的计算机结构并没有这么简单 我们来看看:

	https://img-blog.csdnimg.cn/img_convert/bd64b7261b9d54339b788b88883afa67.png


我们电脑最核心的部件 当属CPU 因为几乎所有的运算都是依靠CPU进行(各种各样的计算电路已经在CPU中安排好了 我们只需要发送对应的指令就可以进行对应的运算)
它就像我们人的大脑一样 有了大脑才能进行思考 不过光有大脑还不行 还要有一些其他的部分来辅助工作 比如我们想向电脑里面打字 那么就需要连接一个键盘才能输入
我们想要点击桌面上的图标 那么就需要一个鼠标来操作光标 这些都是输入设备 我们的电脑开机之后显示器上会显示出画面 实际上显示器就是输出设备

当然除了这些内容之外 我们的电脑还需要内存来保存运行时的一些数据 以及外存来保存文件(比如硬盘)等 我们常说的iPhone13 512G 这个512G并不是指的内存 
而是指的外存 准确的说是用于存放文件硬盘大小 而真正的内存是我们常说的4G/6G/8G运行内存 内存的速度远高于外存的速度 所以1G内存的价格远超1G硬盘的价格


计算机包括五大部件: 运算器 控制器 存储器 输入和输出设备 有了这一套完整的硬件环境 我们的电脑才算是有了一个完整的身体

问题: 我们上面提到的这些硬件设备哪些是属于外设?

前面我们了解了一下计算机的大致原理和组成结构 但是光有这一套硬件可不行 如何让这一套硬件按照我们想要的方式运作起来 也是非常重要的 这时我们就需要介绍操作系统了

	操作系统(operating system 简称OS)是管理计算机硬件与软件资源的计算机程序 操作系统需要处理如管理与配置内存 决定系统资源供需的优先次序 控制输入设备与输出设备
	操作网络与管理文件系统等基本事务 操作系统也提供一个让用户与系统交互操作的界面 一般在计算机专业大二 会开放《操作系统》课程 会详细讲解操作系统的底层运作机制和调度

一般我们电脑上都安装了Windows操作系统(苹果笔记本安装的是MacOS操作系统) 现在主流的电脑都已经预装Windows11了

有了操作系统 我们的电脑才能真正运行起来 我们就可以轻松地通过键盘和鼠标来操作电脑了

不过操作系统最开始并不是图形化界面 它类似于Windows中的命令提示符

没有什么图标这些概念 只有一个简简单单的黑框让我们进行操作 通过输入命令来进行一些简单的使用 程序的运行结果也会在黑框框(命令行)中打印出来
不过虽然仅仅是一个黑框 但是能运行的程序可是非常非常多的 只需要运行我们编写好的程序 就能完成各种各样复杂的计算任务 并且计算机的计算速度远超我们的人脑

	中国超级计算机系统天河二号 计算速度达到每秒5.49亿亿次

当然 除了我们常见的Windows和MacOS系统之外 还有我们以后需要经常打交道的Linux操作系统，这种操作系统是开源的 意思是所有的人都可以拿到源代码进行修改 于是就出现了很多发行版:

	 Ubuntu		openSuse		fedora		debian		Mandriva
	 PCLinuxOS		MEPIS		KNOPPIX		slackware		gentoo linux


这些发行版有带图形化界面的 也有不带图形化界面的 不带图形化界面的Linux将是我们以后学习的重点

不同操作系统之间的软件并不是通用的 比如Windows下我们的软件一般是.exe后缀名称 而MacOS下则不是 并且也无法直接运行.exe文件
这是因为不同操作系统的具体实现会存在一些不同 程序编译(我们之后会介绍到)之后的格式也会不同 所以是无法做到软件通用的

正是因为有了操作系统 才能够组织我们计算机的底层硬件(包括CPU 内存 输入输出设备等)进行有序工作 没有操作系统电脑就如同一堆废铁 只有躯壳没有灵魂

计算机编程语言

现在我们大致了解了我们的电脑的运作原理 实际上是一套完整的硬件+一个成形的操作系统共同存在的 接着我们就可以开始了解一下计算机的编程语言了 我们前面介绍的操作系统也是由编程语言写出来的 操作系统本身也算是一个软件

那么操作系统是如何让底层硬件进行工作的呢? 实际上就是通过向CPU发送指令来完成的

	计算机指令就是指挥机器工作的指示和命令 程序就是一系列按一定顺序排列的指令 执行程序的过程就是计算机的工作过程 指令集 就是CPU中用来计算和控制计算机系统的一套指令的集合
	而每一种新型的CPU在设计时就规定了一系列与其他硬件电路相配合的指令系统 而指令集的先进与否 也关系到CPU的性能发挥 它也是CPU性能体现的一个重要标志

我们电脑中的CPU有多种多样的 不同的CPU之间可能也会存在不同的架构 比如现在最常用的是x86架构 还有我们手机平板这样的移动设备使用的arm架构 不同的架构指令集也会有不同

我们知道 计算机底层硬件都是采用的0和1这样的二进制表示 所以指令也是一样的 比如(这里随便写的):
	
	> 000001 - 代表开机
	> 000010 - 代表关机
	> 000011 - 代表进行加法运算

当我们通过电路发送给CPU这样的二进制指令 CPU就能够根据我们的指令执行对应的任务 而我们编写的程序保存在硬盘中也是这样的二进制形式
我们只需要将这些指令组织好 按照我们的思路一条一条执行对应的命令 就能够让计算机计算任何我们需要的内容了 这其实就是机器语言

不过随着时代的进步 指令集越来越大 CPU支持的运算类型也越来越多 这样的纯二进制编写实在是太累了
并且越来越多的命令我们根本记不住 于是就有了汇编语言 汇编语言将这些二进制的操作码通过助记符来替换:

	> MOV 传送字或字节
	> MOVSX 先符号扩展 再传送
	> MOVZX 先零扩展 再传送
	> PUSH 把字压入堆栈

把这些原有的二进制命令通过一个单词来代替 这样是不是就好记多了 在程序编写完成后 我们只需要最后将这些单词转换回二进制指令就可以了 这也是早期出现的低级编程语言

不过虽然通过这些助记符就能够很轻松地记住命令 但是还是不够方便 因为可能我们的程序需要完成一个很庞大的任务 但是如果还是这样一条一条指令进行编写
是不是太慢了点 有时候可能做一个简单的计算 都需要好几条指令来完成 于是 高级编程语言——C语言 终于诞生了

	C语言诞生于美国的贝尔实验室 由丹尼斯·里奇(Dennis MacAlistair Ritchie)以肯尼斯·蓝·汤普森(Kenneth Lane Thompson)设计的B语言为基础发展而来
	在它的主体设计完成后 汤普森和里奇用它完全重写了UNIX操作系统 且随着UNIX操作系统的发展 C语言也得到了不断的完善

高级语言不同于低级语言 低级语言的主要操作对象是指令本身 而高级语言却更加符合我们人脑的认知
更像是通过我们人的思维 去告诉计算机你需要做什么包括语法也会更加的简单易懂 下面是一段简单的C语言代码:
					
					int main() {
						int a = 10; // 定义一个a等于10
						int b = 10; // 定义一个b等于10
						int c = a + b; // 语义非常明确 c就是a加上b计算出来的结果
						return 0;
					}

不过现在看不懂没关系 我们后面慢慢学

C语言虽然支持按照我们更容易理解的方式去进行编程 但是最后还是会编译成汇编指令最后变成计算机可以直接执行的指令 不过具体的编译过程 我们不需要再关心了 我们只需要去写就可以了 而对我们代码进行编译的东西 称为编译器:

	https://img-blog.csdnimg.cn/img_convert/3120b7e4aaee009cdde7ce1b250557c3.png

当然 除了C语言之外 还有很多其他的高级语言 比如Java Python C# PHP等等，相比其他编程语言 C算是比较古老的一种了 但是时隔多年直至今日 其他编程语言也依然无法撼动它的王者地位

在2021年9月 依然排在编程语言排行榜的第一名(Python和Java紧随其后)可见这门语言是多么的不可撼动 很多操作系统 高级编程语言底层实现 几乎都是依靠C语言去编写的
(包括Java的底层也是C/C++实现的)所以学习这一门语言 对于理工科尤其是计算机专业极为重要 学好C语言你甚至可以融汇贯通到其他语言 学起来也会轻松很多

那么从接下来开始 我们就先做好一些环境上的准备