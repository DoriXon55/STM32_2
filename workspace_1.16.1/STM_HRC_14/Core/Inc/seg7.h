#pragma once
#include <stdint.h>
#include <stdbool.h>
/*
 * value - cyfra do wyświetlania
 */
void seg7_show_digit(uint32_t value, bool show_g_only);
void seg7_show(uint32_t value);
void seg7_update(void);
