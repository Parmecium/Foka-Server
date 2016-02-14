#include "main.h"

using namespace std;

void showUsage(string name);

int main(int argc, char *argv[])
{
    int i;
    string source, map_name = NULL;
    int port;

    if(argc < 2)
    {
        showUsage(argv[0]);
        return -1;
    }

    for(i = 1; i < argc; i++)
    {
        if(strcmp(argv[i], "-h") == 0 || strcmp(argv[i], "--help") == 0)
        {
            showUsage(argv[0]);
            return 0;
        } else if(strcmp(argv[i], "-c") == 0 || strcmp(argv[i], "--compile") == 0)
        {
        } else if(strcmp(argv[i], "-o") == 0 || strcmp(argv[i], "--output") == 0)
        {
        } else if(strcmp(argv[i], "-p") == 0 || strcmp(argv[i], "--port") == 0)
        {
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
