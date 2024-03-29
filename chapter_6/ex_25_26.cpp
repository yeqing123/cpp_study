#include <iostream>
#include <string>
using namespace std;
/*
* main函数包含两个参数，argv是一个数组，它的元素是指向C风格字符串的指针；
* argc表示数组中字符串的数量。
*/
int main(int argc, char ** argv)
{
    // 本程序中argv中只有一个元素，它指向包含路径的程序名字   
    for (size_t i = 0; i != argc; ++ i) {
        cout << "argv[" << i << "] = \"" << argv[i] << "\"" << endl;
    }
    return 0;
}