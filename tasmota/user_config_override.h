/*
  user_config_override.h - custom firmware configuration
*/

#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

// Wymuszenie definicji
#ifndef USER_CONFIG_OVERRIDE
#define USER_CONFIG_OVERRIDE
#endif

// --- Aktywacja czujników DS18B20 ---
#ifndef USE_DS18X20
#define USE_DS18X20
#endif

// --- Aktywacja pełnej biblioteki sterowników IR / Klimatyzacji (IRHVAC) ---
#ifndef USE_IR_REMOTE_FULL
#define USE_IR_REMOTE_FULL
#endif

#endif  // _USER_CONFIG_OVERRIDE_H_
