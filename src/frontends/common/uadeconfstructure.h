#ifndef _UADECONF_STRUCTURE_H_
#define _UADECONF_STRUCTURE_H_

enum uade_option {
  UC_ACTION_KEYS = 0x1000,
  UC_BUFFER_TIME,
  UC_DISABLE_TIMEOUTS,
  UC_ENABLE_TIMEOUTS,
  UC_FILTER_TYPE,
  UC_FORCE_LED_OFF,
  UC_FORCE_LED_ON,
  UC_FORCE_LED,
  UC_GAIN,
  UC_HEADPHONES,
  UC_IGNORE_PLAYER_CHECK,
  UC_INTERPOLATOR,
  UC_MAGIC_DETECTION,
  UC_NO_FILTER,
  UC_NO_SONG_END,
  UC_NTSC,
  UC_ONE_SUBSONG,
  UC_PAL,
  UC_PANNING_VALUE,
  UC_RANDOM_PLAY,
  UC_RECURSIVE_MODE,
  UC_SILENCE_TIMEOUT_VALUE,
  UC_SONG_TITLE,
  UC_SPEED_HACK,
  UC_SUBSONG_TIMEOUT_VALUE,
  UC_TIMEOUT_VALUE,
  UC_VERBOSE
};

struct uade_config {
  int action_keys;
  int action_keys_set;
  int buffer_time;
  int buffer_time_set;
  int filter_type;
  int filter_type_set;
  int led_forced;
  int led_forced_set;
  int led_state;
  int gain_enable;
  int gain_enable_set;
  float gain; /* should be removed of uade_effect integrated */
  int gain_set;
  int headphones;
  int headphones_set;
  int ignore_player_check;
  int ignore_player_check_set;
  char *interpolator;
  int interpolator_set;
  int magic_detection;
  int magic_detection_set;
  int no_filter;
  int no_filter_set;
  int no_song_end;
  int no_song_end_set;
  int one_subsong;
  int one_subsong_set;
  float panning; /* should be removed */
  int panning_set;
  int panning_enable;
  int panning_enable_set;
  int random_play;
  int random_play_set;
  int recursive_mode;
  int recursive_mode_set;
  int silence_timeout;
  int silence_timeout_set;
  char *song_title;
  int song_title_set;
  int speed_hack;
  int speed_hack_set;
  int subsong_timeout;
  int subsong_timeout_set;
  int timeout;
  int timeout_set;
  int use_timeouts;
  int use_timeouts_set;
  int use_ntsc;
  int use_ntsc_set;
  int verbose;
  int verbose_set;
};

#endif