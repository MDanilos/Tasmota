#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

// Włączenie obsługi IRHVAC oraz DS18B20
#ifndef USE_IR_REMOTE_FULL
#define USE_IR_REMOTE_FULL
#endif

#ifndef USE_DS18X20
#define USE_DS18X20
#endif

// Wyłączenie problematycznego modułu InfBridge (xdrv_05_infbridge.ino)
#ifdef USE_INFBRIDGE
#undef USE_INFBRIDGE
#endif

#endif // _USER_CONFIG_OVERRIDE_H_
