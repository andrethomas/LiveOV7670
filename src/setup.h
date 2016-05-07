//
// Created by indrek on 1.05.2016.
//

#ifndef LIVEOV7670_SETUP_H
#define LIVEOV7670_SETUP_H




/*
 *  EXAMPLE = 1
 *  Use camera class that reads line into buffer and
 *  sends data to TFT over SPI during blank lines.
 *
 *  EXAMPLE = 2
 *  Use camera class that processes data pixel by pixel
 *  sends data to TFT during each pixel reading loop.
 *  VGA can not be used with line buffer since there is no
 *  time (no blank lines) to do something useful with a buffered line
 *
 *  EXAMPLE = 3
 *  Reads data from camera and send it over UART to computer
 *  Java application for receiving picture from UART
 *  https://github.com/indrekluuk/ArduinoImageCapture/tree/master/ArduinoImageCapture
 *
 */
#define EXAMPLE 1



void initializeScreenAndCamera();
void processFrame();



#endif //LIVEOV7670_SETUP_H



