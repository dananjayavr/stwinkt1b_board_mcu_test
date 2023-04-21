# board_mcu_test


### TO-DO

- Abstract away environmental sensor code to its own task (env_sensor_task) and copy data to a struct. 

- Create a heartbeat task with two LEDs. Green if OK orange if KO (for example). 

- Implement a basic state machine architecture, for easy porting to a RTOS later on.

- Figure out USB CDC (used in BSP) to send data to a computer, rather than using VCOM/USART over the debugger.

- Figure out how battery charging code through BSP works. Also, getting the PWR button to turn off the device would be neat.
- Figure out a way to get battery status (V, A). To know when to charge and when to stop charging. 

- Test low power modes. Experiment how long battery can last (for example. one measurement every 1-5 minutes and go to low power mode). A periodic signal (LPTIMER or RTC) will then wake up the device.

- Create a task for accelerometer, gyroscope, etc. 

- High-level abstraction layer for sensor tasks, with simulated sensor values for unit testing / CICD.

- SD card and write env data periodically to a CSV file. Associate a timestamp using RTC for these measurements. 

- Push button to start or stop data saving to SD card. 

- Integrate RTOS.

---

- Bluetooth Support
- Wifi Support
- Microphone / Ultrasound Support 
- STSAFE Support

