#include <iostream>
#include <chrono>
#include <thread>

using namespace std;
using namespace chrono;
using namespace this_thread;

int main()
{
    char input1, input2;
    
    cout << "Would you like to replace BloonsTD6's tower selection with BloonsTD5's tower selection? Yes or No (y or n)\n";
    
    while(cin >> input1)
    {
        if (input1 == 'y' && input1 == 'y')
        {
            cout << "Ok. Deleting...\n";
            sleep_for(milliseconds(625));
            cout << "Deleted!\n";
            sleep_for(milliseconds(230));
            cout << "Downloading...\n";
            sleep_for(milliseconds(625));
            cout << "Downloaded!\n";
            sleep_for(milliseconds(230));
            cout << "Installing...\n";
            sleep_for(milliseconds(625));
            cout << "Installed!\n";
            
            return 0;
        }
        
        if (input1 == 'n' && input1 == 'n')
        {
            cout << "Ok.\n";
            
            break;
        }
        
        break;
    }
    
    cout << "Do you want to reverse the tower selection?\n";
    
    while (cin >> input2)
    {
        if (input2 == 'y' && input2 == 'y')
        {
            cout << "Ok. Deleting...\n";
            sleep_for(milliseconds(625));
            cout << "Deleted!\n";
            sleep_for(milliseconds(230));
            cout << "Downloading...\n";
            sleep_for(milliseconds(625));
            cout << "Downloaded!\n";
            sleep_for(milliseconds(230));
            cout << "Installing...\n";
            sleep_for(milliseconds(625));
            cout << "Installed!\n";
            
            return 0;
        }
        
        if (input2 == 'n' && input2 == 'n')
        {
            cout << "Ok.\n";
            
            return 0;
        }
    }
}
