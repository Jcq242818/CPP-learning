# include <iostream>
using namespace std;

 int main(){
    const char * a[5] = { "aaa", "bbb","ccc", "ddd", "eee"};
    cout << a[0] << " " << a[1] << endl;
    int i[2] = {1,2};
    int * p = i;
    cout << p <<"\t"<< *(p+1) << endl;
 }
