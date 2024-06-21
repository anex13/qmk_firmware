/* Copyright 2023 Brian Low
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

// Enabling this option changes the startup behavior to listen for an
// active USB communication to delegate which part is master and which
// is slave. With this option enabled and theres’s USB communication,
// then that half assumes it is the master, otherwise it assumes it
// is the slave.
//
// I've found this helps with some ProMicros where the slave does not boot
#define SPLIT_USB_DETECT
#define RGB_MATRIX_SLEEP     // turn off effects when suspended
#define SPLIT_TRANSPORT_MIRROR             // If LED_MATRIX_KEYPRESSES or LED_MATRIX_KEYRELEASES is enabled, you also will want to enable SPLIT_TRANSPORT_MIRROR
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 100  // limits maximum brightness of LEDs (max 255). Higher may cause the controller to crash.
#define SPI_DRIVER SPID1
#define SPI_SCK_PIN GP14
#define SPI_MOSI_PIN GP15
#define SPI_MISO_PIN GP12
#define POINTING_DEVICE_CS_PIN GP13
#define CIRQUE_PINNACLE_DIAMETER_MM 40
#define SPLIT_POINTING_ENABLE
#define POINTING_DEVICE_RIGHT
#define MOUSE_EXTENDED_REPORT
#define POINTING_DEVICE_TASK_THROTTLE_MS 10
#define POINTING_DEVICE_ROTATION_90
#define CIRQUE_PINNACLE_CURVED_OVERLAY
#define POINTING_DEVICE_GESTURES_SCROLL_ENABLE 
#define I2C_DRIVER 	I2CD1
#define I2C1_SDA_PIN GP2
#define I2C1_SCL_PIN GP3