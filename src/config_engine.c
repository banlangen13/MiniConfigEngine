#include "config_engine.h"

// 初始化引擎
ConfigEngine* ce_init(const char* filename)
{
    ConfigEngine* ce = malloc(sizeof(ConfigEngine));
    
    if(ce == NULL){
        printf("malloc failed\n");
        return -1;
    }
}

// 加载数据
int ce_load(){
    
}