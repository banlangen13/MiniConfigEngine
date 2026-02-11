#ifndef INI_PARSER_H 
#define INI_PARSER_H

#include "base_parser.h"
#include <stdlib.h>  // malloc, free
#include <stdio.h>   // printf
typedef struct IniParser{
    BaseParser base;
    // 这里可以添加INI解析器特有的数据成员
    int data;
} IniParser;
BaseParser* create_ini_parser();
#endif
