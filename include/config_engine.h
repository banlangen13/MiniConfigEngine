#ifndef CONFIG_ENGINE_H
#define CONFIG_ENGINE_H

#include <stdio.h>

// 结构体定义
typedef struct ConfigEngine {
    char filename[256]; // 数据源标识
    void* storage; // 数据存储结构
} ConfigEngine;
// Engine生命周期的函数声明
ConfigEngine* ce_init(const char* filename); // 初始化引擎
int ce_load(ConfigEngine* engine);          // 加载配置数据
int ce_reload(ConfigEngine* engine);        // 重新加载配置数据
int ce_save(ConfigEngine* engine);          // 保存配置数据
void ce_free(ConfigEngine* engine);           // 释放引擎资源
#endif