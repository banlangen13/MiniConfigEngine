#include "config_engine.h"

// 初始化引擎
ConfigEngine* ce_init(const char* filename)
{
    printf("Initializing Config Engine with file: %s\n", filename);

    BaseParser* parser = create_parser_factory(filename);
    if(parser == NULL){
        printf("create parser failed\n");
        return NULL;
    }
    parser->vtable->parser(parser, filename);
    parser->vtable->destroy(parser);
    ConfigEngine* engine = (ConfigEngine*)malloc(sizeof(ConfigEngine));
    if(engine == NULL){
        printf("create engine failed\n");
        return NULL;
    }
    // 初始化引擎的成员变量
    snprintf(engine->filename, sizeof(engine->filename), "%s", filename);
    engine->storage = NULL;
    return engine;
}