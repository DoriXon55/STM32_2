#pragma once
#include "stm32l4xx.h"
/*
 * inicjalizacja czujnika LPS25HB
 * obudzenie i automatyczne pomiary
 * reutnr - HAL_OK v HAL_ERROR
 */
HAL_StatusTypeDef lps25hb_init(void);
/*
 * odczyt temperatury
 */
float lps25hb_read_temp(void);

/*
 * odczyt ciśnienia
 */
float lps25hb_read_pressure(void);

/*
 * kalibracja czujnika
 * value - 16 bitowa korekcja pomiaru
 */
void lps25hb_set_calib(uint16_t value);
