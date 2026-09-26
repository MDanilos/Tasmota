#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

#ifndef USE_IR_REMOTE_FULL
#define USE_IR_REMOTE_FULL
#endif

#ifndef USE_DS18X20
#define USE_DS18X20
#endif
// Wymuszenie włączenia obsługi plików IHX dla modułów MCU / IR
#ifndef USE_USEC
#define USE_USEC
#endif

#ifndef USE_UNISHOCKS_DEPRESS
#define USE_UNISHOCKS_DEPRESS
#endif

#endif // _USER_CONFIG_OVERRIDE_H_
