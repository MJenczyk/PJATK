
#include <iostream>

using namespace std;
int x;
int main()
{
    
    cout << "Podaj liczbe: " <<  endl;
    cin >> x;
    if(x == 0){
        cout << "Podana liczba to 0" << endl;
    }
    else if (x % 2 ==0){
        cout << "Podana liczba jest parzysta" << endl;
    }
    else{
        cout << "Podana liczba jest nieparzysta" << endl;
    }
    return 0;
}
