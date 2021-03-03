# 304. range-sum-query-2d-immutable

[原题链接](https://leetcode-cn.com/problems/range-sum-query-2d-immutable/)

**NMD 为什么？！**

我大意了，没有闪，303题也确实没有想象中的那么简单，304让我看到了残酷的现实  
刷个题还要考虑 OJ 机制，难道说初始化对象的过程不计入总时间？  
用思路最简单清晰明了的算法（如下）彻底被这个该死的机制打败了……  
去学个🔨的前缀和算法 ~~（不过学还是要学的，虽然还想再骂一句）~~

```c++
class NumMatrix {
public:
    NumMatrix(vector<vector<int>>& matrix) {
        _vvMatrix = matrix;
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int iResult = 0;
        for(int i = row1; i <= row2; i++) {
            for(int j = col1; j <= col2; j++) {
                iResult += _vvMatrix[i][j];
            }
        }
        return iResult;
    }
private:
    vector<vector<int>> _vvMatrix;
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
```

~~等会……虽然但是——你这官方题解用的是什么语法？  
为什么一个 vector 的 resize 成员函数第二个参数可以是 vector ？  
这么说函数原型可以是：`void std::vector<T>::resize(size_t Newsize, vector<T>& val)`  
难不成是我 VS2019 都不支持的 C++17 的新语法？  
可是查了文档和各位大佬的博客都愣是没看到这种用法……  
不管了，反正算法大概懂了，明天自己实现吧，不爆肝了，晚安晚安，狗命要紧……~~

果然不能在晚上写代码，看了昨晚写的鬼东西简直无地自容  
嵌套 vector 的时候 resize 函数的第二个参数不就是应该是一个 vector ？  

###### 我是智障
##### 我是智障
#### 我是智障  
### 我是智障

不是吧阿sir，这样的代码都超时吗（见下）？  
看来只能去用官方答案那种让人头大的前缀和算法了  
罪过，罪过……

```c++
class NumMatrix {
public:
    NumMatrix(vector<vector<int>>& matrix) {
        if (matrix.size() > 0) {
            _vvSumMatrix.resize(matrix.size(), vector<int>(matrix[0].size(), 0));
            for(int i = 0; i < matrix.size(); i++)
            {
                for(int j = 0; j < matrix[0].size(); j++)
                {
                    for(int row = 0; row <= i; row++)
                    {
                        for(int column = 0; column <= j; column++)
                        {
                            _vvSumMatrix[i][j] += matrix[row][column];
                        }
                    }
                }
            }
        }
        
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        return _vvSumMatrix[row2][col2] 
            - (row1 > 0 ? _vvSumMatrix[row1 - 1][col2] : 0)
            - (col1 > 0 ? _vvSumMatrix[row2][col1 - 1] : 0) 
            + (row1 > 0 && col1 > 0 ? _vvSumMatrix[row1 - 1][col1 - 1] : 0);
    }
private:
    vector<vector<int>> _vvSumMatrix;
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
```

附：最后，不得不说，前缀和算法是真滴妙~

> 2021 - 03 - 02 ~ 2021 - 03 - 03
