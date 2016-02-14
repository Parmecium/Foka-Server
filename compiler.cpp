#include "main.h"
#include "compiler.h"

Compiler::Compiler(void)
{
}

Compiler::~Compiler(void)
{
}


int Compiler::parse(string path)
{
    ifstream file(path);
    if(file.is_open())
    {
        // Parse file
    } else
    {
        return ERROR_FILE_NOT_OPENED;
    }
}

int Compiler::compile(string path)
{
}
