#include <iostream>
#include <chrono>
#include <thread>
#include <string>
#include <cstdlib>

using namespace std;
using namespace chrono;
using namespace this_thread;

int main()
{
    //Strings, Ints, and Chars
    
    string input;
    string help = "help";
    string toli = "tool-list_1";
    string moli = "mod-list_1";
    string prev = "preview";
    string exit = "exit";
    string inbj = "install_BTD6.Jet";
    string arcm = "archive-list_mods_1";
    string arct = "archive-list_tools_1";
    string ij31 = "install-archive_BTD6.Jet_1.3.1";
    string iap1 = "install-archive_BTD6.Py_1";
    string inbp = "install_BTD6.Py";
    
    //Title
    
    cout << "Tool/Mod Navigator -- Made by EpicGamer -- Case Sensitive -- Please use help\n";
    
    //Commands
    
    while (cin >> input)
    {
        if (input.find(inbp) != string::npos)
        {
            sleep_for(milliseconds(325));
            cout << "You can install this mod at:\n";
            sleep_for(milliseconds(325));
            cout << "https://cdn.discordapp.com/attachments/758559499044126740/763815786212753418/BTD6.py.dll";
        }
        if (input.find(iap1) != string::npos)
        {
            sleep_for(milliseconds(325));
            cout << "You can install this archive at:\n";
            sleep_for(milliseconds(325));
            cout << "https://cdn.discordapp.com/attachments/763854279844429846/763856192417562634/BTD6.py.dll";
        }
        
        if (input.find(ij31) != string::npos)
        {
            sleep_for(milliseconds(325));
            cout << "You can install this archive at:\n";
            sleep_for(milliseconds(325));
            cout << "https://cdn.discordapp.com/attachments/763854279844429846/763854323075252224/BTD6.Jet.dll\n";
        }
        
        if (input.find(arct) != string::npos)
        {
            sleep_for(milliseconds(325));
            cout << "-----ARCHIVED TOOLS-----\n";
            sleep_for(milliseconds(325));
            cout << "none\n";
            sleep_for(milliseconds(325));
            cout << "-----ARCHIVED TOOLS-----\n";
        }
        
        if (input.find(arcm) != string::npos)
        {
            sleep_for(milliseconds(325));
            cout << "-----ARCHIVED MODS-----\n";
            sleep_for(milliseconds(325));
            cout << "BTD6.Jet -- Version: 1.3.1\n";
            sleep_for(milliseconds(325));
            cout << "BTD6.Py -- Version: 1\n";
            sleep_for(milliseconds(325));
            cout << "-----ARCHIVED MODS-----\n";
        }
        
        if (input.find(exit) != string::npos)
        {
            return 0;
        }
        
        if (input.find(toli) != string::npos)
        {
            sleep_for(milliseconds(325));
            cout << "-----TOOLS-----\n";
            sleep_for(milliseconds(325));
            cout << "none\n";
            sleep_for(milliseconds(325));
            cout << "-----TOOLS-----\n";
        }
        
        if (input.find(moli) != string::npos)
        {
            sleep_for(milliseconds(325));
            cout << "-----MODS-----\n";
            sleep_for(milliseconds(325));
            cout << "BTD6.Jet\n";
            sleep_for(milliseconds(325));
            cout << "BTD6.Py\n";
            sleep_for(milliseconds(325));
            cout << "-----MODS-----\n";
        }
        
        if (input.find(help) != string::npos)
        {
            sleep_for(milliseconds(325));
            cout << "-----HELP-----\n";
            sleep_for(milliseconds(325));
            cout << "tool-list_<page> -- Lists all the tools, 5 tools / per page, you have to put the ""_"" there\n";
            sleep_for(milliseconds(325));
            cout << "mod-list_<page> -- Lists all the mods, 5 mods / per page, you have to put the ""_"" there\n";
            sleep_for(milliseconds(325));
            cout << "archive-list_<mods or tools>_<page> -- This is the list of archived mods or tools, <mods or tools> yu put mods or tools where that is, 5 mods/tools / per page, you have to put the ""_"" there\n";
            sleep_for(milliseconds(325));
            cout << "install_<mod or tool> -- Gives you a link to the download of that mod or tool, <mod or tool> means that you need to put that mod or tool's name there, you have to put the ""_"" there\n";
            sleep_for(milliseconds(325));
            cout << "install-archive_<mod or tool>_<version> -- Gives you a link to the download of that archive, <mod or tool> means that you need to put that mod or tool's name there, <version> is whree you put that mod or tool's version there, you have to put the ""_"" there\n";
            sleep_for(milliseconds(325));
            cout << "preview -- Shows a preview and a description for the next update\n";
            sleep_for(milliseconds(325));
            cout << "exit -- Exits the tool\n";
            sleep_for(milliseconds(325));
            cout << "help -- Makes this list show up\n";
            sleep_for(milliseconds(325));
            cout << "-----HELP-----\n";
        }
        
        if (input.find(prev) != string::npos)
        {
            sleep_for(milliseconds(325));
            cout << "Description:\n\n";
            sleep_for(milliseconds(325));
            cout << "The next update will include downloading...\n";
            sleep_for(milliseconds(325));
            cout << "\nPreview:\n\n";
            sleep_for(milliseconds(325));
            cout << "Downloading BTD6.Jet...\n";
            sleep_for(milliseconds(325));
            cout << "Downloaded BTD6.Jet!\n";
            sleep_for(milliseconds(325));
            cout << "Installing BTD6.Jet...\n";
            sleep_for(milliseconds(325));
            cout << "Installed BTD6.Jet!\n\n";
            
        }
        
        if (input.find(inbj) != string::npos)
        {
            sleep_for(milliseconds(325));
            cout << "You can install this mod at:\n";
            sleep_for(milliseconds(325));
            cout << "https://cdn.discordapp.com/attachments/758559499044126740/763250070639607838/BTD6.Jet.dll\n";
        }
    }
}
