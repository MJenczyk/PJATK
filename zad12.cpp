
#include <iostream>

using namespace std;
int x;
int main()
{
    
    cout << "Podaj liczbe całkowitą: " <<  endl;
    cin >> x;
    if(x > 0){
        cout << "Liczba podana jest dodania" << endl;

    }
    else if (x < 0){
        cout << "Liczba podana jest ujemna" << endl;
    }
    else{
        cout << "Liczba podana to 0" << endl;
    }




    return 0;
}
