#ifndef _COMPILER_H_
#define _COMPILER_H_

#define ERROR_FILE_NOT_OPENED           -1

class Compiler
{
    public:
        Compiler(void);
        ~Compiler(void);

        int parse(string path);
        int compile(string path);
};

#endif  // _COMPILER_H_
