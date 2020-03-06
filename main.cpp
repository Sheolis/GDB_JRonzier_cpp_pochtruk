#include "moteur.h"

using namespace std;

int main()
{
    Moteur train("vapeurbleue");
    train.setName("vapeurrouge");
    cout << train.getName() << endl ;
}