#ifndef _BOARD_CONFIG_H_
#define _BOARD_CONFIG_H_

#include <driver/gpio.h>
#include <driver/spi_master.h>

#define AUDIO_INPUT_SAMPLE_RATE 24000
#define AUDIO_OUTPUT_SAMPLE_RATE 24000

// I2S pins for audio (ES8311)
#define AUDIO_I2S_GPIO_MCLK GPIO_NUM_4
#define AUDIO_I2S_GPIO_WS GPIO_NUM_7
#define AUDIO_I2S_GPIO_BCLK GPIO_NUM_5
#define AUDIO_I2S_GPIO_DIN GPIO_NUM_8
#define AUDIO_I2S_GPIO_DOUT GPIO_NUM_6

#define AUDIO_CODEC_PA_PIN      GPIO_NUM_1
#define AUDIO_CODEC_I2C_SDA_PIN GPIO_NUM_16
#define AUDIO_CODEC_I2C_SCL_PIN GPIO_NUM_15
#define AUDIO_CODEC_ES8311_ADDR ES8311_CODEC_DEFAULT_ADDR

#define BUILTIN_LED_GPIO        GPIO_NUM_42  // RGB LED
#define BOOT_BUTTON_GPIO        GPIO_NUM_0
#define VOLUME_UP_BUTTON_GPIO   GPIO_NUM_NC
#define VOLUME_DOWN_BUTTON_GPIO GPIO_NUM_NC

// SPI LCD pins (ILI9341)
#define DISPLAY_SPI_MODE        0
#define DISPLAY_CS_PIN          GPIO_NUM_10
#define DISPLAY_MOSI_PIN        GPIO_NUM_11
#define DISPLAY_MISO_PIN        GPIO_NUM_13
#define DISPLAY_CLK_PIN         GPIO_NUM_12
#define DISPLAY_DC_PIN          GPIO_NUM_46
#define DISPLAY_RST_PIN         GPIO_NUM_NC  // Reset is shared with system reset

#define DISPLAY_WIDTH           320
#define DISPLAY_HEIGHT          240
#define DISPLAY_MIRROR_X        false
#define DISPLAY_MIRROR_Y        false
#define DISPLAY_SWAP_XY         false
#define DISPLAY_RGB_ORDER       LCD_RGB_ELEMENT_ORDER_RGB
#define DISPLAY_INVERT_COLOR    false

#define DISPLAY_OFFSET_X        0
#define DISPLAY_OFFSET_Y        0

#define DISPLAY_BACKLIGHT_PIN   GPIO_NUM_45
#define DISPLAY_BACKLIGHT_OUTPUT_INVERT false

// SD card pins (SDIO)
#define SD_CLK_PIN              GPIO_NUM_38
#define SD_CMD_PIN              GPIO_NUM_40
#define SD_D0_PIN               GPIO_NUM_39
#define SD_D1_PIN               GPIO_NUM_41
#define SD_D2_PIN               GPIO_NUM_48
#define SD_D3_PIN               GPIO_NUM_47

#endif // _BOARD_CONFIG_H_
