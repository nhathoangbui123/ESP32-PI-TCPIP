#ifndef __CONFIG__
#define __CONFIG__
#include "stdint.h"
#include "stdbool.h"
#include "esp_log.h"

#define DEVICE_1    GPIO_NUM_26
#define DEVICE_2    GPIO_NUM_27
#define DEVICE_3    GPIO_NUM_14
#define DEVICE_4    GPIO_NUM_13

#define OFF           1
#define ON            0

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    char* WN;
    char* WP;
} param_t; 

param_t param;

#ifdef __cplusplus
}
#endif

#endif