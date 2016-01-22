#include "main.h"

using namespace std;

void showUsage(string name);

int main(int argc, char *argv[])
{
    int i;

    if(argc < 2)
    {
        showUsage(argv[0]);
        return -1;
    }

    /*
    for(i = 0; i < argc; i++)
        cout << "[" << i << "]: " << argv[i] << endl;
    return 0;
    */

    for(i = 1; i < argc; i++)
    {
        if(strcmp(argv[i], "-h") == 0 || strcmp(argv[i], "--help") == 0)
        {
            showUsage(argv[0]);
            return 0;
        }
    }

    return 0;
}

void showUsage(string name)
{
    cerr << "Usage: " << name << endl
         << "Options:" << endl
         << "\t-h --help\tshow this dialog" << endl
         << "\t-c --compile\t <SOURCE>\tsource file for map" << endl
         << "\t-o --output\t <MAP_NAME>\tname of the map" << endl
         << "\t-p --port\t <PORT>\tstart server on <PORT>" << endl;
}
