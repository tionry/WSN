
#ifndef SENSEMOTE_H
#define SENSEMOTE_H

enum {
  AM_RADIO_MSG = 6,
  AM_TIME_MSG = 7
};

typedef nx_struct RADIO_MSG {
  nx_uint16_t nodeid;
  nx_uint32_t counter;
  nx_uint16_t time_period;
  nx_uint16_t temperature;
  nx_uint16_t humidity;
  nx_uint16_t light;
  nx_uint32_t total_time;
} RADIO_MSG;

typedef nx_struct ACK_MSG{
  nx_uint16_t nodeid;
  nx_uint32_t counter;
}ACK_MSG;

typedef nx_struct TIME_MSG {
  nx_uint16_t nodeid;
  nx_uint16_t time_period;
} TIME_MSG;

#endif
