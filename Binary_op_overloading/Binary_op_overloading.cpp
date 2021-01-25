// Binary_op_overloading.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "Coordinate.h"
using namespace std;

int main()
{
    Coordinate coor1(1, 3);
    Coordinate coor2(2, 4);
    Coordinate coor3(0, 0);

    coor3 = coor1 + coor2;

    //cout << coor3.getX() << "," << coor3.getY() << endl;

    cout << coor3 << endl;

    cout << coor3[0] << endl;
    cout << coor3[1] << endl;

    system("pause");
    return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
