# include <iostream>
using namespace std;
struct years{
    int year;
};

int main(){
    years s01, s02, s03;
    s01.year = 1998; // s1是结构
    years * pa = &s02; // pa是指向结构s02的指针
    pa->year =1999; // 等效于s02.year = 1999
    years year_array[3]; //创建一个结构数组，里面的三个成员都是结构变量
    year_array[0].year = 2003;  //结构数组第一个元素的成员year的值为2003
    cout << year_array->year << endl; //结构数组的数组名是指向第一个数组对象的指针，等效于year_array[0] = 2003
    const years * arp[3] = {&s01, &s02, &s03}; //创建一个指针数组，该数组里面的三个元素都是指针
    cout << arp[0]->year << endl; //arp[0]是一个指针，其等于 &01
    const years ** ppa = arp; //指向指针数组的指针，ppa是一个指针，其指向了arp数组的第一个元素的地址。而arp是一个数组
    cout << (*ppa)->year << endl; // *(ppa)等于 arp[0],其为一个指针
    cout << (*(ppa+1))->year << endl; //*(ppa+1)等于arp[1]，其也为一个指针
    cout << (**(ppa+1)).year << endl; //**ppa即为第二个元素的对象，即为 *arp[1]
    // int a[2] = {1,2};
    // int * b = a;
    return 0;
}
