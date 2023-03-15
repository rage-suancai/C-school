实战: 合并两个有序数组

来源: 力扣No:88合并两个有序数组: https://leetcode.cn/problems/merge-sorted-array/

给你两个按非递减顺序排列的整树数组 nums1和nums2 另有两个整数m和n 分别表示nums1和nums2中的元素数目

请你合并nums2到nums1中 使合并后的数组同样按非递减顺序排列

注意: 最终 合并后数组不应该由函数返回 而是存储在数组nums1中 为了应对这种情况
nums1的初始长度为m+n 其中前m个元素表示应合并的元素 后n给元素为0 应忽略 nums2的长度为n

                    示例1: 
                    输入: nums1 = [1, 2, 3, 0, 0, 0], m = 3, nums2 = [2, 5, 6], n = 3
                    输出: [1, 2, 2, 3, 5, 6]
                    解释: 需要合并[1, 2, 3]和[2, 5, 6]

                    示例2:
                    输入: nums1 = [1], m = 1, nums2 = [], n = 0
                    输出: [1]
                    解释: 需要合并[1]和[]

                    示例3:
                    输出: [1]
                    解释: 需要合并的数组是[]和[1]
                    合并结果是[1]
                    注意: 因为m = 0 所以nums1中没有元素 nums1中仅存的0仅仅是为了确保合并结果可以顺利存放到nums1中

现在请你设计一个C语言程序 实现下面的函数(要求全程使用指针 不允许出现数组用法):

                    void merge(int *nums1, int numsSizze, int m, int *nums2, int nums2Size, int n) {



                    }

------------------------------------------------------------------------------------------------------------

实战: 二维数组中的查找

来源: 剑指Offer 04.二维数组中的查找: https://leetcode.cn/problems/er-wei-shu-zu-zhong-de-cha-zhao-lcof/

在一个n*m的二维数组中 每一行都按照从左到右递增的顺序排序 每一列都按照从上到下递增的顺序排序
请完成一个高效的函数 输入这样的一个二维数组和一个整数 判断数组中是否包含有该整数

                    示例:
                    现有矩阵matrix如下:
                    [
                        [1, 3, 7, 11, 15],
                        [2, 5, 8, 12, 19],
                        [3, 6, 9, 16, 22],
                        [10, 13, 14, 17, 24],
                        [18, 21, 23, 26, 30]
                    ]

                    给定 target = 5 返回true

                    给定 target = 20 返回false

现在请你设计一个C语言程序 实现下面的函数(要求全程使用指针 不允许出现数组用法):

                    /*
                     * 输入 **matrix是长度为matrixSize的数组指针的数组 其中每个元素(也是一个数组)
                     * 的长度组成 *matrixColSize 数组作为另一输入 *martixColSize 数组长度也为matrixSize
                     */
                    bool findNumberIn2DArray(int **matrix, int matrixSize, int *matrixColSize, int target) {
                        


                    }