#include "Service.h"
#include "SnowCannon.h"
#include <iostream>
using namespace std;

Service::Service(){}

void Service::Test(SnowCannon * snowcannon, float x){
    cout << "#############################################################" << endl;
    cout << "### Test serwisowy ###" << endl << endl;
    cout << "1. Uzupelnij zbiornik do pelna:" << endl;
    snowcannon->Reload(snowcannon->GetCapacity());
    
    cout << "2. Przebieg testowy:" << endl;
    snowcannon->Start();
    snowcannon->Make(x);
    snowcannon->Stop();

    cout << "### Koniec testu serwisowego ###" << endl;
    cout << "#############################################################" << endl << endl;
}

void Service::TestCopy(SnowCannon snowcannon, float x){
    cout << "#############################################################" << endl;
    cout << "### Test serwisowy na egzemplarzu fabrycznym o identycznych parametrach ###" << endl << endl;
    cout << "1. Uzupelnij zbiornik do pelna:" << endl;
    snowcannon.Reload(snowcannon.GetCapacity());
    
    cout << "2. Przebieg testowy: 100 metrow szesciennych:" << endl;
    snowcannon.Start();
    snowcannon.Make(x);
    snowcannon.Stop();

    cout << "### Koniec testu serwisowego ###" << endl;
    cout << "#############################################################" << endl << endl;
}

