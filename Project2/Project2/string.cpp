#include "String.h"
#include <string.h>

string::string(void) :
    str(nullptr),
    strlength(0)
{

}

string::string(const char* _str)
{
    strlength = strlen(_str);
    str = new char[strlength + 1]; // NULL문자까지
    memcpy(str, _str, sizeof(char) * strlength + 1);
}

string::~string()
{
}