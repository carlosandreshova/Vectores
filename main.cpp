#include <bits/stdc++.h>

using namespace std;

int main()
{
    int codi, cant;
    cin >> codi>> cant;
    switch( codi )
    {
        case 1: cout <<fixed<<setprecision(2)<<"TOTAL: R$ "<< cant*4.00; break;
        case 2: cout <<fixed<<setprecision(2)<<"TOTAL: R$ "<< cant*4.50; break;
        case 3: cout <<fixed<<setprecision(2)<<"TOTAL: R$ "<< cant*5.00; break;
        case 4: cout <<fixed<<setprecision(2)<<"TOTAL: R$ "<< cant*2.00; break;
        case 5: cout <<fixed<<setprecision(2)<<"TOTAL: R$ "<< cant*1.50; break;
    }

    return 0;
}
