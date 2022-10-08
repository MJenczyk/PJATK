
#include <iostream>

using namespace std;

//pierwszy sposobik
int pier;
int dru;
int trze;
int main()
{
    
    cout << "Podaj pierwszą liczbe: " <<  endl;
    cin >> pier;
    cout << "Podaj drugą liczbe: " <<  endl;
    cin >> dru;
    cout << "Podaj trzecią liczbe: " <<  endl;
    cin >> trze;

    if(pier > dru && pier > trze){
        cout << pier << " jest najwiekszą liczbą" << endl;
    }
    else if (dru > pier && dru > trze){
        cout << dru << " jest najwiekszą liczbą" << endl;
    }
    else if(trze > dru && trze > pier){
        cout << trze << " jest najwiekszą liczbą" << endl;
    }
}    
//drugi sposob
int pier;
int dru;
int trze;
int main()
{
    
    cout << "Podaj pierwszą liczbe: " <<  endl;
    cin >> pier;
    cout << "Podaj drugą liczbe: " <<  endl;
    cin >> dru;
    cout << "Podaj trzecią liczbe: " <<  endl;
    cin >> trze;

    if(pier > dru > trze){
        cout << pier << " jest najwiekszą liczbą" << endl;
    }
    else if (dru > pier > trze){
        cout << dru << " jest najwiekszą liczbą" << endl;
    }
    else if(trze > dru > pier){
        cout << trze << " jest najwiekszą liczbą" << endl;
    }
}   
//trzeci sposob
int pier;
int dru;
int trze;
int main()
{
    
    cout << "Podaj pierwszą liczbe: " <<  endl;
    cin >> pier;
    cout << "Podaj drugą liczbe: " <<  endl;
    cin >> dru;
    cout << "Podaj trzecią liczbe: " <<  endl;
    cin >> trze;

    if(pier > dru){ 
    if(pier > trze){
        cout << pier << " jest najwiekszą liczbą" << endl;
    }}
    else if (dru > pier){  
    if(dru > trze){
        cout << dru << " jest najwiekszą liczbą" << endl;
    }}
    else if(trze > dru){  
    if(trze > pier){
        cout << pier << " jest najwiekszą liczbą" << endl;
    }}

    
    return 0;
}



