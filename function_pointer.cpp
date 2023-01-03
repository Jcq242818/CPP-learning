# include <iostream>
using namespace std;

typedef int my_int;
void print_function(){
cout << "Hello function" << endl;

}

int main(){
    my_int a = 6;
    cout << a << endl;
    typedef void(*Function_print)(); //函数指针的typedef别名命名方法
    Function_print function = print_function;
    function();
    function();
    function();
    function();
}
