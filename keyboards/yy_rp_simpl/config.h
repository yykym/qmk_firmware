#pragma once

/* serial driver setting */
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_DRIVER SIOD0
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1

/* I2C driver setting */ 
//#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP18
#define I2C1_SCL_PIN GP19

// USB connection
#define USB_VBUS_PIN GP24
#define SPLIT_HAND_PIN GP21
