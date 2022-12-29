# include <iostream>
using namespace std;

int hello(void); //函数原型

int main(){
    hello();  //函数调用
    return 0;
}

int hello(){ //函数定义
    cout << "Hello" << endl;
    return 0;
}
