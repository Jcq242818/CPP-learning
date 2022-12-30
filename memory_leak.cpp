#include <iostream>
using namespace std;


int main(){
    int* pArray = NULL;
    pArray = new int[10];
    if (pArray  == NULL)
    {
        cout << "Error:\n";
        exit(0);
    }
    for (int i = 0; i < 10; i++){
        pArray[i] = 100+i;
    }
    cout<< "Display the results" << endl;
    for(int i = 1; i < 10; i++,pArray++)
    {
        cout << *pArray << endl;
    }
    delete[] pArray;
    return 0;
}
