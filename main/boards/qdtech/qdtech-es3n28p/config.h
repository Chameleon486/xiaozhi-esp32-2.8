#pragma once

// QDtech ES3N28P board configuration
// 2.8 inch IPS display without touch, ESP32-S3

// Display pins (ILI9341 SPI)
#define BOARD_LCD_SPI_CLK   GPIO_NUM_12
#define BOARD_LCD_SPI_MOSI  GPIO_NUM_11
#define BOARD_LCD_SPI_MISO  GPIO_NUM_13
#define BOARD_LCD_CS        GPIO_NUM_10
#define BOARD_LCD_DC        GPIO_NUM_46
#define BOARD_LCD_RST       GPIO_NUM_0  // CHIP_PU shared with reset
#define BOARD_LCD_BL        GPIO_NUM_45

// Audio pins (ES8311 codec)
#define BOARD_AUDIO_I2C_SDA     GPIO_NUM_16
#define BOARD_AUDIO_I2C_SCL     GPIO_NUM_15
#define BOARD_AUDIO_I2S_MCLK    GPIO_NUM_4
#define BOARD_AUDIO_I2S_BCK     GPIO_NUM_5
#define BOARD_AUDIO_I2S_WS      GPIO_NUM_7
#define BOARD_AUDIO_I2S_DOUT    GPIO_NUM_6
#define BOARD_AUDIO_I2S_DIN     GPIO_NUM_8
#define BOARD_AUDIO_PWR_EN      GPIO_NUM_1

// SD card pins (SDIO)
#define BOARD_SD_CLK    GPIO_NUM_38
#define BOARD_SD_CMD    GPIO_NUM_40
#define BOARD_SD_D0     GPIO_NUM_39
#define BOARD_SD_D1     GPIO_NUM_41
#define BOARD_SD_D2     GPIO_NUM_48
#define BOARD_SD_D3     GPIO_NUM_47

// RGB LED (with built-in IC)
#define BOARD_RGB_LED_PIN   GPIO_NUM_42

// Battery ADC
#define BOARD_BATTERY_ADC_PIN   GPIO_NUM_9
#define BOARD_BATTERY_MULTIPLIER 2  // Voltage divider (1:1, so multiply by 2)

// Serial ports
#define BOARD_SERIAL_TX    GPIO_NUM_43
#define BOARD_SERIAL_RX    GPIO_NUM_44

// USB pins
#define BOARD_USB_DM   GPIO_NUM_19
#define BOARD_USB_DP   GPIO_NUM_20
