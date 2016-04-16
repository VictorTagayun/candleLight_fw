#pragma once


#define CAN_QUEUE_SIZE 64

#define USBD_VID                     0x1d50
#define USBD_PID_FS                  0x606f
#define USBD_LANGID_STRING           1033
#define USBD_MANUFACTURER_STRING     (uint8_t*) "bytewerk"
#define USBD_PRODUCT_STRING_FS       (uint8_t*) "candleLight gs_usb"
#define USBD_CONFIGURATION_STRING_FS (uint8_t*) "gs_usb config"
#define USBD_INTERFACE_STRING_FS     (uint8_t*) "gs_usb interface"
#define USBD_SERIALNUMBER_STRING_FS  (uint8_t*) "000000000001"

#ifndef BOARD
#define BOARD candleLight
#endif

#if BOARD == candleLight

	#define CAN_S_Pin GPIO_PIN_13
	#define CAN_S_GPIO_Port GPIOC

	#define LED1_GPIO_Port GPIOA
	#define LED1_Pin GPIO_PIN_0
	#define LED1_Mode GPIO_MODE_OUTPUT_OD
	#define LED1_Active_Low

	#define LED2_GPIO_Port GPIOA
	#define LED2_Pin GPIO_PIN_1
	#define LED2_Mode GPIO_MODE_OUTPUT_OD
	#define LED2_Active_Low

#elif BOARD == cantact

	// SILENT pin not connected

	#define LED1_GPIO_Port GPIOB
	#define LED1_Pin GPIO_PIN_0
	#define LED1_Mode GPIO_MODE_OUTPUT_PP

	#define LED2_GPIO_Port GPIOB
	#define LED2_Pin GPIO_PIN_1
	#define LED2_Mode GPIO_MODE_OUTPUT_PP

#endif
