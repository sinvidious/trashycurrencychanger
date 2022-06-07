#include <iostream>

using namespace std;

void printTheCurrencyBoard(){
    cout << "Convert dollars to different currencies! \n\n\n" 
         << "Saudi Riyal - 1 \n"
         << "Euro - 2\n" 
         << "Hong Kong Pound - 3\n" 
         
         
         ;
}

int main()
{
    while (true){
        // Declaration of vars
        int currency;
        int value;
        string something;
        
        // Initilization of vars
        
        printTheCurrencyBoard();
        cin >> currency;
        cout << "Add the value \n";
        cin >> value;
        
        switch(currency){
            case 1: // the currency is Saudi Riyal
                cout << value * 3.5 << "\n";
            break;
            
            case 2: // the currency is euro
                cout << value * 0.93 << "\n";
            break;
            
            case 3: // the currency is hong kong
                cout << value * 7.85 << "\n";
            break;
            
            default:
                cout << "The currency is not supported \n";
            break;
        }
        
        cout << "Do you want to try again?";
        cin >> something;
    }

    return 0;
}
