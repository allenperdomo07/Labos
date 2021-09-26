#include <iostream>

using namespace std;

void contarIter(int n);
void contarRec(int);

int main(void)
{
    int n;

    cout << endl;
    cout << " Conteo de numeros " << endl << endl;
    cout << "Hasta que numero contar? ";
    cin >> n;

    contarIter(n);
    contarRec(n);

    cout << endl;
    return 0;

}

void contarRec(int n)
{
    if(n >= 1){
        cout << n << endl;
        n = n- 1;
        contarRec(n);
    }
}

void contarIter(int n)
{
    int i;

    i = 1;
    while(i <= n){
        cout << i << endl;
        i = i + 1;
    }
}
