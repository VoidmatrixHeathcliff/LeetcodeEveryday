# 54. spiral-matrix

[原题链接](https://leetcode-cn.com/problems/spiral-matrix/)

乍一看这不就是游戏中 AI 的寻路实现嘛，碰墙就拐弯  
二话不说就写了个状态机，结果访问越界了（应该是这个问题）  
今天写 [Lua 的 JSON](https://github.com/VoidmatrixHeathcliff/LuaLibs/tree/main/LuaJsonLib
) 库写的我头晕脑胀，也懒得 Debug 了  
把出错的半成品代码搁这里留念一下吧，解题还得看大佬们的答案  

```c++
#define DIRECTION_NONE 0
#define DIRECTION_UP 1
#define DIRECTION_DOWN 2
#define DIRECTION_LEFT 3
#define DIRECTION_RIGHT 4

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> vResult;
        int iLimitUp = 0, iLimitDown = matrix.size(), iLimitLeft = 0, iLimitRight = matrix[0].size();
        int x = 0, y = 0, direction = DIRECTION_RIGHT;
        while (direction != DIRECTION_NONE) {
            switch (direction) {
                case DIRECTION_RIGHT:
                    if (x < iLimitRight)
                        vResult.push_back(matrix[y][x]), x++;
                    else
                        direction = DIRECTION_DOWN, iLimitRight--;
                    break;
                case DIRECTION_DOWN:
                    if (y < iLimitDown)
                        vResult.push_back(matrix[y][x]), y++;
                    else
                        direction = DIRECTION_LEFT, iLimitDown--;
                    break;
                case DIRECTION_LEFT:
                    if (x > iLimitLeft)
                        vResult.push_back(matrix[y][x]), x--;
                    else
                        direction = DIRECTION_UP, iLimitLeft++;
                    break;
                case DIRECTION_UP:
                    if (y < iLimitUp)
                        vResult.push_back(matrix[y][x]), y--;
                    else
                        direction = DIRECTION_RIGHT, iLimitUp++;
                    break;
            }
            if (iLimitLeft >= iLimitRight || iLimitDown <= iLimitUp) direction = DIRECTION_NONE;
        }
        return vResult;
    }
};
```

```
Line 1034: Char 9: runtime error: reference binding to misaligned address 0xbebebebebebebeca for type 'int', which requires 4 byte alignment (stl_vector.h)
0xbebebebebebebeca: note: pointer points here
<memory cannot be printed>
SUMMARY: UndefinedBehaviorSanitizer: undefined-behavior /usr/bin/../lib/gcc/x86_64-linux-gnu/9/../../../../include/c++/9/bits/stl_vector.h:1043:9
```

> 2021 - 03 - 15
