// advanced searcher = SJX searcher

#include <iostream>

using namespace std;


void miniSJX(int j[10])
{
    int ur;
    cout << "enter number ::  (must between 0 -- 9) > ";
    cin >> ur;
    cout << "founded ===  " << j[ur];
}

void SJX(int jq[10])
{
    int de;
    cout << "enter number $$ (must between 0 -- 9) $ ";
    cin >> de;
    switch(de)
    {
    case 0:
        cout << "founded -->  " << jq[0];
        break;
    case 1:
        cout << "founded -->  " << jq[1];
        break;
    case 2:
        cout << "founded -->  " << jq[2];
        break;
    case 3:
        cout << "founded -->  " << jq[3];
        break;
    case 4:
        cout << "founded -->  " << jq[4];
        break;
    case 5:
        cout << "founded -->  " << jq[5];
        break;
    case 6:
        cout << "founded -->  " << jq[6];
        break;
    case 7:
        cout << "founded -->  " << jq[7];
        break;
    case 8:
        cout << "founded -->  " << jq[8];
        break;
    case 9:
        cout << "founded -->  " << jq[9];
        break;
    }
}

void advancedSJX(int ja[10])
{
    int hs;
    cout << "enter number #@# (must between 0 -- 9) # ";
    cin >> hs;
    if (hs > 5)
    {
        switch(hs)
        {
        case 5:
            cout << "founded :#: " << ja[5] << "    it is upper than 5";
            break;
        case 6:
            cout << "founded :#: " << ja[6] << "    it is upper than 5";
            break;
        case 7:
            cout << "founded :#: " << ja[7] << "    it is upper than 5";
            break;
        case 8:
            cout << "founded :#: " << ja[8] << "    it is upper than 5";
            break;
        case 9:
            cout << "founded :#: " << ja[9] << "    it is upper than 5";
            break;
        }
    }
    else if (hs < 5)
    {
        switch(hs)
        {
        case 4:
            cout << "founded :#: " << ja[4] << "    it is lower than 5";
            break;
        case 3:
            cout << "founded :#: " << ja[3] << "    it is lower than 5";
            break;
        case 2:
            cout << "founded :#: " << ja[2] << "    it is lower than 5";
            break;
        case 1:
            cout << "founded :#: " << ja[1] << "    it is lower than 5";
            break;
        case 0:
            cout << "founded :#: " << ja[0] << "    it is lower than 5";
            break;
        }
    }
}

int main()
{
    // example codes
    int a[10] = {2 , 4 , 7 , 19 , 18 , 33 , 12 , 8 , 90 , 102};
    int b[10] = {3 , 5 , 8 , 6 , 7 , 34 , 37 , 31 , 50 , 67};
    int c[10] = {55 , 52 , 1 , 6 , 77 , 73 , 72 , 97 , 88 , 28};
    miniSJX(a);
    //SJX(b);
    //advancedSJX(c);
    return 0;
}
