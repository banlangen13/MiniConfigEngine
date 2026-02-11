#ifndef JSON_PARSER_H
#define JSON_PARSER_H
#include <stdlib.h>  // malloc, free
#include <stdio.h>   // printf
#include "base_parser.h"
typedef struct JsonParser{
    BaseParser base;
    // 这里可以添加JSON解析器特有的数据成员
    int data;
} JsonParser;
BaseParser* create_json_parser();
#endif