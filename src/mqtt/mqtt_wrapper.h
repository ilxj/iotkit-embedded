#include "infra_types.h"
#include "infra_defs.h"

int8_t HAL_GetPartnerID(char *pid_str);
int8_t HAL_GetModuleID(char *mid_str);
int8_t HAL_GetProductKey(char product_key[IOTX_PRODUCT_KEY_LEN]);
int8_t HAL_GetDeviceName(char device_name[IOTX_DEVICE_NAME_LEN]);
int8_t HAL_GetDeviceSecret(char device_secret[IOTX_DEVICE_SECRET_LEN]);

void *HAL_Malloc(uint32_t size);
void HAL_Free(void *ptr);
void HAL_Printf(const char *fmt, ...);
int8_t HAL_Snprintf(char *str, const int len, const char *fmt, ...);
uint64_t HAL_UptimeMs(void);
void HAL_Srandom(uint32_t seed);
uint8_t algo_sha256_wrapper(uint8_t *input, uint16_t input_len, uint8_t output[32]);