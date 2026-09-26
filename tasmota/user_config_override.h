#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

#ifndef USE_IR_REMOTE_FULL
#define USE_IR_REMOTE_FULL
#endif

#ifndef USE_DS18X20
#define USE_DS18X20
#endif

// Wyłączenie modułu MCU, który generuje błąd z ihx.h
#ifdef USE_TUYA_MCU
#undef USE_TUYA_MCU
#endif

#endif // _USER_CONFIG_OVERRIDE_H_
