This project was developed on an STM32 NUCLEO-F070RB Board, but it can be adapted to work on any STM32 Nucleo Board

![Project ioc file](https://github.com/user-attachments/assets/4d7659a4-434d-498d-88a5-55434d264960)

**Project Features:**
The project toggles LED1 (on-board LED) using the on-board push button in interrupt mode, and over Bluetooth in UART Interrupt mode
The second LED2 is controlled by a Light Dependent Resistor (LDR) usind ADC in DMA mode.

Project Structure (Auto-generated files are not included)
This project clearly separates Hardware, Middleware, and Logic layer as follows:

- App
  - Inc
    - app.h
  - Src
    - app.c
- BSP (Board Support Package)
  - Inc
    - bsp_ble.h
    - bsp_button.h
    - bsp_ldr.h
    - bsp_led1.h
    - bsp_led2.h
    - bsp_serial_debug.h
  - Src
    - bsp_ble.h
    - bsp_button.h
    - bsp_ldr.h
    - bsp_led1.h
    - bsp_led2.h
    - bsp_serial_debug.h
- Drivers
  - ADC_Driver
    - Inc
      - ldr_driver.h
    - Src
      - ldr_driver.c
  - GPIO_Driver
    - Inc
      - button_driver.h
      - gpio_map.h
      - led1_driver.h
      - led2_driver.h
    - Src
      - button_driver.c
      - led1_driver.c
      - led2_driver.c
  - USART_Driver
    - Inc
      - ble_driver.h
      - serial_debug_driver.h
    - Src
      - ble_driver.h
      - serial_debug_driver.h
- RTOS
  - Inc
    - LED1_Thread.h
    - LED2_Thread.h
    - thread_handles.h
    - thread_notification_flags.h
  - Src
    - LED1_Thread.c
    - LED2_Thread.c
- Services
  - Inc
    - ble_service.h
    - button_service.h
    - ldr_service.h
    - led1_service.h
    - led2_service.h
  - Src
    - ble_service.c
    - button_service.c
    - ldr_service.c
    - led1_service.c
    - led2_service.c
