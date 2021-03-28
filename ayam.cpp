#include <iostream>
using namespace std;
int main(){
    int a;
    for (a = 10; a > 0; a--)
    {
        if (a>1)
        {
            cout << "Anak ayam turun " << a << " tinggal " << a-1 <<endl;
        }
        else if (a <= 1)
        {
            cout << "Anak ayam turun " << a << " tinggal induknya "<< endl;
        }
    }
    return 0;
}
