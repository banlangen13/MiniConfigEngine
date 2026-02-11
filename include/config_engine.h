#ifndef CONFIG_ENGINE_H
#define CONFIG_ENGINE_H


#include <stdlib.h>  // malloc, free
#include <stdio.h>   // printf
#include "base_parser.h"
#include "factory.h"

// 结构体定义
typedef struct ConfigEngine {
    char filename[256]; // 数据源标识
    void* storage; // 数据存储结构
} ConfigEngine;
// Engine生命周期的函数声明
ConfigEngine* ce_init(const char* filename); // 初始化引擎
#endif