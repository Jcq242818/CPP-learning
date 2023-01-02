# include<iostream>
using namespace std;

int main(){
int a = 9;
const int & b = a;
cout << a << " " << b << endl;
a = 10;
cout << a << " " << b << endl;
// b = 11;
// cout << a << " " << b << endl;
}

