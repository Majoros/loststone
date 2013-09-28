/*
 * Generated by srom2header.py, 2012-07-10
 */
#ifndef _ADNS9500_FIRMWARE_H_
#define _ADNS9500_FIRMWARE_H_

#define ADNS9500_CRCHI (0xBE)
#define ADNS9500_CRCLO (0xEF)

#define ADNS9500_ID (0x56)

/*
 * SROM B1 is to be used for ADNS-9500 power save mode. It is the same as SROM
 * 91 except:
 *
 *  1.  Set sensor's defaut is able downshift to Rest Mode
 *  2.  Add Power Save Mode setting in SPI Address 0x47 to read/write the
 *      sensor mode. Bit0=1 is Power Save Mode (Default), Bit0=0 is Normal Mode
 *      (in SROM 91)
 *  3.  Disabled user setting of auto frame rate and shutter control when Power
 *      Save Mode is enabled.
 *          Configuration_II, SPI Address 0x10 - BIT3(FIXED_FR) & BIT4(NAGC)
 *          changed to RESERVED Frame_Period_Max_Bound_Lower & Upper, SPI
 *          Address 0x1a & 0x1b - Auto set in every frame, any manual setting
 *          will be override in next frame Frame_Period_Min_Bound_Lower &
 *          Upper, SPI Address 0x1c & 0x1d - Auto set in every frame, any
 *          manual setting will be override in next frame Shutter_Max_Bound
 *          Lower & Upper, SPI Address 0x1e & 0x1f- Auto set in every frame,
 *          any manual setting will be override in next frame
 *
 * Refer to ADNS-9500 Power Save Mode Application Note 5465
 */

#ifdef ADNS9500_SROM_B1

#define ADNS9500_CRCHI (0xBE)
#define ADNS9500_CRCLO (0xEF)
#define ADNS9500_ID (0x56)
#define ADNS6010_FIRMWARE_CRC (0xBEEF)
#define ADNS9500_FIRMWARE_LEN 3070

const uint8_t adns9500FWArray[ADNS9500_FIRMWARE_LEN] = {
  0x03, 0xb1, 0x51, 0x42, 0xc6, 0x2f, 0x9e, 0xbe, 0xd0, 0x1c, 0xb8, 0xf2, 0x47,
  0xed, 0x58, 0x32, 0xc7, 0xed, 0x39, 0xf0, 0x4f, 0xe6, 0x23, 0xd0, 0x29, 0xc6,
  0xef, 0x3d, 0xd9, 0x11, 0x81, 0x61, 0x40, 0xe3, 0x25, 0xc8, 0xf3, 0x64, 0x4c,
  0xf0, 0x45, 0xf0, 0x54, 0x01, 0x80, 0x63, 0x44, 0x0a, 0x96, 0xae, 0xde, 0x3e,
  0xdf, 0x19, 0x99, 0x91, 0x81, 0x80, 0x82, 0x67, 0x2d, 0xd8, 0x32, 0xc7, 0xed,
  0x58, 0x13, 0xa4, 0xca, 0xf7, 0x4d, 0x18, 0xb2, 0xc7, 0x0c, 0x7b, 0x74, 0x67,
  0x39, 0xcd, 0xf9, 0x51, 0x01, 0x61, 0x40, 0x02, 0x65, 0x85, 0xcb, 0xbd, 0x7d,
  0xec, 0x7b, 0x49, 0xc1, 0x66, 0xa0, 0x10, 0x89, 0xda, 0x1a, 0x52, 0x11, 0xbc,
  0xa8, 0x77, 0xda, 0x14, 0x55, 0x8c, 0x65, 0xf6, 0x06, 0xda, 0x69, 0x49, 0x3b,
  0x01, 0x7f, 0x05, 0xe1, 0x45, 0xef, 0x5e, 0x3b, 0xfa, 0x91, 0x44, 0x58, 0x7b,
  0x1d, 0xe6, 0x2d, 0xd2, 0x42, 0x20, 0x41, 0x0a, 0x69, 0x3b, 0x2a, 0x5a, 0x83,
  0x6b, 0x4f, 0xd8, 0x32, 0x52, 0xac, 0x78, 0x7c, 0xf0, 0x03, 0x24, 0xc6, 0xe1,
  0x78, 0x68, 0x52, 0xe6, 0xe5, 0x23, 0x68, 0xb9, 0x7f, 0x4a, 0xea, 0x1c, 0xb4,
  0x95, 0x42, 0x51, 0x39, 0xd7, 0x5b, 0xa7, 0x59, 0x0c, 0x18, 0x22, 0xe6, 0xab,
  0x3d, 0x58, 0x14, 0xb3, 0xa5, 0xa8, 0xa2, 0x66, 0x69, 0xee, 0x7b, 0x2c, 0x79,
  0x6e, 0xbf, 0x6d, 0xd9, 0x18, 0x02, 0x02, 0x2e, 0x8f, 0x09, 0x83, 0x1b, 0x19,
  0xf1, 0x4b, 0xe0, 0x37, 0x7b, 0x1b, 0x40, 0xd0, 0x0f, 0x91, 0x8e, 0x34, 0x96,
  0xa3, 0x14, 0xa5, 0x5b, 0x09, 0xeb, 0x22, 0x9f, 0x7f, 0x83, 0xae, 0x75, 0x73,
  0x92, 0xa9, 0xea, 0x56, 0xee, 0xf5, 0xd4, 0xda, 0x58, 0x73, 0x13, 0xe8, 0x6d,
  0x96, 0x2b, 0x15, 0xcb, 0xb3, 0x2b, 0x60, 0x3e, 0x2b, 0xb0, 0x82, 0x40, 0x7b,
  0x8c, 0xfa, 0xd6, 0x13, 0x3e, 0xe0, 0xe8, 0x01, 0x16, 0x41, 0x12, 0x1d, 0x91,
  0x71, 0x73, 0x45, 0x19, 0xb5, 0x48, 0x2f, 0x67, 0xd8, 0x04, 0xa5, 0x99, 0xf1,
  0x7c, 0x01, 0x14, 0x18, 0x34, 0x23, 0xa5, 0x49, 0x34, 0x63, 0xa4, 0x89, 0xf4,
  0xab, 0xd5, 0x24, 0xaf, 0x5c, 0xa0, 0xc1, 0x61, 0x3b, 0xb8, 0xab, 0x21, 0x93,
  0x9b, 0x01, 0xac, 0x80, 0xe5, 0xd6, 0x6c, 0x2f, 0x8c, 0x73, 0xb7, 0x9c, 0xfb,
  0x16, 0x3f, 0xc1, 0xb9, 0x52, 0x35, 0x21, 0x93, 0x3f, 0xdb, 0x29, 0xfe, 0x32,
  0xd1, 0xef, 0x4e, 0xaa, 0xac, 0xa8, 0xa6, 0xb7, 0x90, 0x51, 0xd5, 0x69, 0x32,
  0x56, 0xe6, 0xfe, 0x3d, 0xca, 0xb0, 0xaf, 0x47, 0x86, 0x68, 0x68, 0xcc, 0xe0,
  0xbb, 0x57, 0x39, 0x39, 0xff, 0x08, 0xea, 0xb6, 0x6c, 0xe0, 0xa6, 0x64, 0x8d,
  0xa4, 0x22, 0x6c, 0xd6, 0x13, 0x9b, 0xc8, 0x6d, 0x90, 0xb6, 0xb0, 0x64, 0xa1,
  0x9e, 0x46, 0x8f, 0x1f, 0x98, 0xa6, 0xb1, 0x2b, 0x72, 0x53, 0x7a, 0x1b, 0x89,
  0xef, 0x16, 0x2e, 0xb5, 0x9a, 0x32, 0x37, 0x2f, 0x5d, 0x5a, 0x86, 0x52, 0xdf,
  0x7f, 0x6f, 0x95, 0x3b, 0x6f, 0xbb, 0x08, 0xbc, 0xd7, 0x3a, 0xd8, 0x41, 0x82,
  0x50, 0x50, 0x41, 0xd5, 0x5c, 0xd9, 0xe4, 0xe9, 0x45, 0xef, 0xb8, 0x44, 0xa7,
  0x0f, 0x38, 0xf3, 0x46, 0xb8, 0x8f, 0x3f, 0xb9, 0x9b, 0x13, 0xf4, 0xb2, 0xac,
  0xcb, 0xab, 0x84, 0xf7, 0xf0, 0x05, 0x27, 0x89, 0x63, 0xf2, 0x3f, 0x9e, 0x12,
  0x18, 0xac, 0x30, 0x1e, 0x54, 0xf6, 0xc9, 0x1a, 0x4a, 0xfe, 0x21, 0x4d, 0x25,
  0x90, 0x00, 0x10, 0x8a, 0x2a, 0x8d, 0x3f, 0x1d, 0xd6, 0x8d, 0x89, 0x7f, 0xb2,
  0x48, 0x62, 0xc4, 0x1a, 0x9b, 0xaa, 0xca, 0x05, 0x9f, 0xbc, 0x17, 0x9f, 0x61,
  0x0d, 0xdb, 0xc1, 0xa3, 0xd5, 0x07, 0x79, 0x49, 0x90, 0x52, 0x00, 0x3f, 0xb5,
  0x3e, 0x90, 0x01, 0x71, 0xac, 0x35, 0x46, 0x0a, 0xaf, 0x7f, 0x4c, 0xe5, 0x09,
  0x7e, 0xd1, 0x62, 0x56, 0xe2, 0xa3, 0x79, 0xcd, 0x78, 0x74, 0xd7, 0x6e, 0x4e,
  0x46, 0x19, 0xbe, 0x6f, 0xde, 0x2e, 0x33, 0xe7, 0x3f, 0xcf, 0x99, 0x12, 0xc3,
  0xd7, 0xee, 0x5b, 0xfa, 0xab, 0x85, 0x2b, 0xa6, 0x04, 0x0f, 0x4a, 0x18, 0xa3,
  0x67, 0x3f, 0x55, 0xfd, 0xef, 0x52, 0x47, 0xbc, 0x18, 0x15, 0x0e, 0x4f, 0x20,
  0xcb, 0x95, 0xca, 0xa6, 0x41, 0x9d, 0xfb, 0x46, 0xea, 0xbe, 0x84, 0x46, 0x45,
  0x14, 0x38, 0xef, 0x08, 0x80, 0xd3, 0x66, 0x3d, 0xc5, 0xe6, 0xb2, 0xa5, 0xfa,
  0x48, 0x4e, 0xbd, 0xcf, 0x6e, 0x3d, 0xed, 0x0d, 0x38, 0x4a, 0x82, 0xbf, 0x5f,
  0x2d, 0x27, 0xbc, 0x38, 0xe2, 0xbb, 0x84, 0x08, 0x61, 0x98, 0x90, 0x90, 0x32,
  0x24, 0x08, 0xc2, 0x37, 0x52, 0x43, 0x15, 0xd7, 0xbc, 0xc7, 0x80, 0x24, 0xcc,
  0xdc, 0x99, 0x83, 0x4c, 0xaa, 0x15, 0x0f, 0x3a, 0x77, 0xa3, 0x4a, 0xb5, 0xfb,
  0xdf, 0xf9, 0xc7, 0x23, 0x95, 0x0b, 0x67, 0x84, 0x7e, 0xe9, 0x7f, 0x5f, 0xe8,
  0xf2, 0x04, 0x3a, 0x2a, 0x4e, 0x5d, 0x2b, 0x3c, 0x69, 0xea, 0xb1, 0x1c, 0xf5,
  0x45, 0x3f, 0xc2, 0x55, 0x58, 0x91, 0xb2, 0xdb, 0xda, 0xca, 0x55, 0x3b, 0x2b,
  0x88, 0x26, 0xde, 0x96, 0xe7, 0x5d, 0x47, 0xdc, 0x07, 0x55, 0x40, 0x03, 0x67,
  0xf9, 0x72, 0x63, 0xfd, 0xdb, 0x25, 0x16, 0xde, 0x7c, 0x4b, 0xc8, 0x43, 0x86,
  0x7d, 0xc1, 0x62, 0x74, 0x9b, 0x76, 0x3c, 0xed, 0xf4, 0xc6, 0x1a, 0x3d, 0x25,
  0x18, 0x83, 0x23, 0xb2, 0xd6, 0xb0, 0x72, 0x7a, 0xef, 0x34, 0x0a, 0x4a, 0xbe,
  0x3f, 0xbf, 0x4c, 0x95, 0xd4, 0x08, 0xa0, 0x26, 0x26, 0x74, 0x66, 0x05, 0xb5,
  0x5b, 0xc8, 0xc6, 0x1c, 0xca, 0x94, 0xb8, 0xae, 0x11, 0x7d, 0x3b, 0xe7, 0x72,
  0x3a, 0xd5, 0xa8, 0x54, 0xe6, 0xe7, 0xbf, 0x5f, 0x28, 0x06, 0xdf, 0x7d, 0x3b,
  0x50, 0xd5, 0x91, 0x1d, 0x20, 0x81, 0xb2, 0x2f, 0x6e, 0xc5, 0xce, 0x22, 0xc9,
  0x5c, 0x2c, 0x15, 0xdb, 0x97, 0xba, 0x84, 0xe9, 0x05, 0xdd, 0xdb, 0x41, 0x01,
  0x52, 0xe8, 0xc1, 0x40, 0x34, 0x67, 0x20, 0xd6, 0xc4, 0xf6, 0x19, 0x91, 0xda,
  0xf4, 0x2c, 0x58, 0xa6, 0x4c, 0xf2, 0xbc, 0xf1, 0x33, 0xe0, 0xfb, 0xd7, 0x3a,
  0x47, 0xbf, 0xa6, 0xc8, 0xed, 0xef, 0x78, 0x77, 0x13, 0xeb, 0xef, 0x98, 0xea,
  0xf5, 0x68, 0xcf, 0x7e, 0xe9, 0x01, 0x02, 0x88, 0x72, 0x25, 0x9f, 0xad, 0x7b,
  0x7c, 0xb7, 0x9c, 0x19, 0x93, 0xd8, 0x25, 0xe7, 0x2e, 0xec, 0x6b, 0x75, 0x8d,
  0xc0, 0x80, 0x84, 0x7a, 0xd4, 0x9c, 0xca, 0xb5, 0xec, 0x2a, 0x1c, 0x4c, 0x78,
  0x61, 0x61, 0x81, 0xa5, 0x71, 0xa2, 0xca, 0xf2, 0x25, 0x9f, 0xcc, 0xb9, 0xdb,
  0xfd, 0xda, 0xa1, 0xb0, 0x41, 0x17, 0x7e, 0x0a, 0xa9, 0x5a, 0x16, 0x5b, 0x75,
  0x5b, 0x64, 0x03, 0x36, 0x4c, 0x28, 0xfa, 0x06, 0xdf, 0x7d, 0x49, 0x44, 0x12,
  0xb6, 0x4c, 0x49, 0x19, 0xe1, 0x11, 0xe1, 0x2a, 0xd5, 0x90, 0xf2, 0x12, 0x7b,
  0x3b, 0x01, 0x73, 0x1e, 0x3a, 0x37, 0xe0, 0x4f, 0x15, 0xf9, 0x33, 0xf7, 0x3e,
  0xd9, 0x21, 0x60, 0x2d, 0xb0, 0xca, 0x66, 0x0d, 0xcb, 0x85, 0x8a, 0xb3, 0xf8,
  0x8e, 0x76, 0xb2, 0x8e, 0x34, 0x2f, 0xe2, 0x9d, 0xb1, 0x21, 0x3c, 0xb3, 0xb0,
  0x8b, 0x97, 0xf7, 0xd5, 0xa0, 0x0a, 0xe6, 0xb6, 0xf5, 0x95, 0xa1, 0x8b, 0x70,
  0x3e, 0x42, 0x4f, 0xfc, 0x86, 0x47, 0xf9, 0x19, 0x58, 0x1e, 0x9c, 0x13, 0xab,
  0x10, 0xbe, 0x56, 0xf2, 0x9f, 0xd1, 0xf9, 0xf4, 0xcb, 0x86, 0xf9, 0xc5, 0xa3,
  0x10, 0x6d, 0x4d, 0x25, 0x4c, 0xe3, 0xc5, 0xf7, 0x24, 0x20, 0x36, 0x0a, 0x62,
  0xd8, 0xa7, 0x3e, 0x2a, 0xc8, 0x49, 0x6a, 0xb3, 0xd7, 0xce, 0x8f, 0xdd, 0x91,
  0x77, 0x56, 0x87, 0x52, 0x3e, 0xb4, 0xbf, 0x3b, 0x5f, 0x76, 0x2d, 0x79, 0xb1,
  0x54, 0xc0, 0x81, 0x56, 0x96, 0x9e, 0x5c, 0x3f, 0xb7, 0xbe, 0xe9, 0x9b, 0x9e,
  0x1c, 0x1a, 0x64, 0x7c, 0x4a, 0xfb, 0x1d, 0xb5, 0x43, 0x85, 0x3f, 0xb0, 0x76,
  0x67, 0x33, 0x44, 0xf4, 0x69, 0x25, 0xe1, 0x59, 0xd3, 0xd4, 0x3a, 0x1d, 0xdc,
  0xe8, 0xc6, 0x8d, 0x5e, 0xef, 0x79, 0x9c, 0x91, 0xaf, 0x9a, 0x82, 0x25, 0xbd,
  0x5d, 0x6d, 0x10, 0x83, 0xb1, 0x1b, 0xa4, 0xfb, 0x45, 0x9e, 0x8b, 0xa4, 0x53,
  0x9b, 0xa8, 0x2a, 0xbe, 0x1e, 0x78, 0x9b, 0xea, 0x68, 0x9a, 0x16, 0x6b, 0xbb,
  0x8b, 0xce, 0x99, 0x41, 0x68, 0x62, 0xda, 0xe1, 0x9c, 0x70, 0x34, 0xa2, 0xd4,
  0x82, 0x77, 0xc3, 0x76, 0x7e, 0x4d, 0x76, 0x14, 0x58, 0xc2, 0x60, 0xe1, 0x54,
  0x0f, 0x1d, 0x18, 0x55, 0x56, 0xdb, 0xde, 0xc2, 0xf3, 0x5f, 0xac, 0x7b, 0x3e,
  0xad, 0x59, 0xc5, 0xc1, 0x91, 0x95, 0x08, 0x22, 0x74, 0x51, 0xe3, 0xc5, 0x16,
  0x07, 0x47, 0xf8, 0xd1, 0xbb, 0x6f, 0x7a, 0xcc, 0x4b, 0xa6, 0x76, 0x13, 0x43,
  0xf2, 0x4a, 0x83, 0xfd, 0xa0, 0x20, 0x43, 0xfb, 0xa8, 0xe7, 0x04, 0x3e, 0xa1,
  0x98, 0x1c, 0x91, 0x90, 0xec, 0x38, 0x23, 0x50, 0x17, 0xfd, 0xbc, 0xad, 0xc9,
  0x97, 0x1c, 0xeb, 0xf4, 0x56, 0x1e, 0xfe, 0x21, 0xd1, 0x18, 0xdf, 0x6d, 0x40,
  0x1d, 0xe0, 0xc0, 0x08, 0x9b, 0xf7, 0xfb, 0xe5, 0xeb, 0x39, 0x35, 0xab, 0x83,
  0xf4, 0xa8, 0xb5, 0x18, 0x90, 0x14, 0xbb, 0x36, 0xe6, 0xc3, 0x01, 0x8a, 0xe4,
  0xca, 0xd1, 0xcb, 0xe5, 0x5b, 0xbd, 0x66, 0x11, 0xa5, 0x46, 0x9e, 0x9c, 0xcd,
  0x59, 0x20, 0x86, 0x1d, 0x6f, 0x35, 0x69, 0xad, 0x62, 0x53, 0x59, 0xd2, 0x55,
  0xfb, 0xe4, 0xc8, 0x9e, 0x02, 0x20, 0x27, 0x7f, 0xaa, 0x8c, 0x58, 0xdb, 0x7c,
  0x41, 0xb7, 0x43, 0x58, 0x0a, 0xe6, 0x56, 0xf9, 0xb2, 0xe6, 0xd3, 0x06, 0x59,
  0x35, 0x3e, 0xa4, 0x8f, 0x5a, 0x5f, 0x07, 0x19, 0x78, 0x6e, 0x47, 0x7c, 0xa2,
  0xd1, 0x83, 0x8a, 0x76, 0x2d, 0x6e, 0xed, 0xc3, 0x99, 0xdf, 0x1e, 0xcd, 0x28,
  0x65, 0x0d, 0xca, 0x9e, 0x1d, 0xbb, 0x80, 0xf0, 0x55, 0x30, 0xdf, 0xea, 0x2d,
  0xe9, 0x28, 0x91, 0x2d, 0x66, 0x31, 0x4a, 0xaa, 0x1d, 0x45, 0x8e, 0x75, 0x94,
  0x82, 0x99, 0x1c, 0x66, 0x16, 0x0c, 0x08, 0x7a, 0xab, 0xae, 0x58, 0x09, 0xf1,
  0x20, 0x62, 0x11, 0x52, 0x50, 0x49, 0x79, 0x25, 0xda, 0x0a, 0xdb, 0x8f, 0x4d,
  0x98, 0x53, 0x7c, 0xfa, 0xba, 0x0b, 0x29, 0xf8, 0x5f, 0x14, 0xf8, 0xdb, 0x56,
  0x13, 0x65, 0x3d, 0xd2, 0xf4, 0xb6, 0x86, 0x87, 0x1e, 0x17, 0xaa, 0xb4, 0xb8,
  0xba, 0xae, 0xc5, 0x81, 0x24, 0xd8, 0x60, 0xd7, 0x98, 0xcf, 0x53, 0x2c, 0xd3,
  0x76, 0xc7, 0x1a, 0x16, 0xa7, 0x9d, 0x69, 0xf4, 0x91, 0x65, 0xc3, 0x93, 0x2c,
  0x18, 0x92, 0xcc, 0x7d, 0xf0, 0x14, 0x98, 0x9b, 0xf6, 0xec, 0x2a, 0xbe, 0xea,
  0xd4, 0x3e, 0x5b, 0xd4, 0x8a, 0xe2, 0x28, 0xbc, 0x82, 0xb4, 0xc2, 0x46, 0x6b,
  0x28, 0xbd, 0xf2, 0x8d, 0xae, 0x8b, 0xc1, 0x81, 0x45, 0x86, 0x90, 0xfd, 0xb0,
  0x52, 0xaa, 0x29, 0x5b, 0x75, 0x5a, 0x58, 0xea, 0xd1, 0xc9, 0x98, 0x52, 0xce,
  0x8d, 0x12, 0xc3, 0x86, 0x90, 0x07, 0x44, 0xf8, 0xe7, 0x34, 0xfd, 0xa9, 0x73,
  0x7b, 0xc2, 0x78, 0xea, 0x52, 0x1b, 0xea, 0x6a, 0x2e, 0x2a, 0x43, 0xa7, 0xb1,
  0x31, 0xbf, 0x85, 0x8c, 0xa7, 0xb3, 0x18, 0xeb, 0x87, 0x34, 0x28, 0xcf, 0xcf,
  0x03, 0x3d, 0xfc, 0x47, 0x73, 0x98, 0x62, 0x12, 0x34, 0x2b, 0xca, 0x7f, 0x77,
  0x98, 0x70, 0x51, 0x23, 0xf6, 0x1d, 0x30, 0xc0, 0xb8, 0x6f, 0x17, 0x16, 0xd4,
  0x4c, 0x43, 0x7c, 0x26, 0x66, 0xda, 0xf2, 0x5b, 0x9f, 0xea, 0xff, 0x6a, 0xd4,
  0x1f, 0x78, 0xa3, 0x44, 0xb2, 0x84, 0xa9, 0xf4, 0x32, 0x24, 0xba, 0x28, 0x83,
  0x06, 0x7f, 0xa0, 0x93, 0xe6, 0x3d, 0x41, 0x43, 0x57, 0xdd, 0xfa, 0x24, 0xfc,
  0x16, 0x23, 0xd0, 0xc8, 0x8f, 0xcc, 0x0b, 0x28, 0xd6, 0x74, 0xce, 0x5c, 0xb6,
  0xc4, 0x48, 0x66, 0xc3, 0x6c, 0x7a, 0x67, 0xf9, 0x45, 0xed, 0x9a, 0xf0, 0x59,
  0xf7, 0x28, 0x5e, 0x94, 0x89, 0xc5, 0xe4, 0x03, 0xa4, 0xfa, 0x72, 0xe4, 0xb2,
  0x9b, 0x4a, 0xed, 0x5d, 0x82, 0x3e, 0xe8, 0xc9, 0x05, 0x0a, 0xa7, 0x62, 0x03,
  0x95, 0x30, 0x7e, 0x62, 0x9f, 0xd4, 0xda, 0xcc, 0xcc, 0x79, 0xb3, 0x63, 0x44,
  0xf9, 0x91, 0xd0, 0x4b, 0x0d, 0x8d, 0x3b, 0x80, 0xca, 0x8e, 0xfe, 0xb6, 0xbf,
  0x67, 0x36, 0xbe, 0xce, 0xa9, 0x00, 0x93, 0xf6, 0x62, 0x4c, 0xb9, 0x1a, 0xe7,
  0xfa, 0x07, 0x9d, 0xe8, 0x2d, 0xe8, 0xdb, 0x79, 0xaa, 0x46, 0x87, 0x61, 0x2a,
  0xf5, 0x3d, 0x54, 0x82, 0xc7, 0x1d, 0xec, 0x2f, 0x58, 0xd1, 0xa2, 0x65, 0x48,
  0x1f, 0xa3, 0xba, 0x50, 0xc7, 0x4f, 0x1a, 0x34, 0x16, 0x47, 0x6e, 0xda, 0xd4,
  0x4f, 0x06, 0x19, 0xd6, 0x83, 0xcf, 0x3f, 0x48, 0xfe, 0x56, 0x0e, 0xae, 0x8a,
  0x61, 0xc0, 0xc2, 0x80, 0x21, 0xaf, 0x2c, 0xe4, 0x34, 0x6d, 0xbd, 0xb9, 0x32,
  0xe6, 0xb6, 0x26, 0xae, 0x5e, 0xde, 0xaf, 0xbf, 0x30, 0xbe, 0xfd, 0x97, 0x80,
  0xb2, 0xf2, 0x4b, 0x96, 0x18, 0xb2, 0x54, 0x8d, 0xec, 0x10, 0xe0, 0x23, 0x07,
  0xe2, 0x05, 0x21, 0x0f, 0xf9, 0x70, 0xaa, 0xca, 0x17, 0x47, 0xc1, 0x30, 0xf6,
  0x43, 0x86, 0xf8, 0x53, 0x77, 0xea, 0x03, 0xaf, 0x5e, 0x11, 0x7f, 0x33, 0xa7,
  0x84, 0xa4, 0x5f, 0x0c, 0x2c, 0x08, 0x82, 0x31, 0xf4, 0x5a, 0xa9, 0x63, 0x58,
  0x4f, 0xbb, 0x74, 0xf3, 0xde, 0x44, 0x7b, 0xa5, 0x5e, 0xbe, 0x72, 0xfb, 0xf3,
  0xe9, 0xc0, 0xf4, 0x61, 0x9d, 0x04, 0x29, 0xb1, 0x0c, 0xa4, 0xb4, 0x4c, 0x44,
  0x27, 0xfe, 0x37, 0x02, 0x5f, 0x74, 0xdf, 0x75, 0x28, 0x31, 0x64, 0x24, 0x25,
  0x4a, 0xf7, 0xa1, 0x1f, 0x82, 0x20, 0xfd, 0x45, 0x8b, 0xc3, 0xe4, 0x71, 0x17,
  0x8f, 0xec, 0x16, 0xfe, 0x86, 0xbc, 0xd2, 0x65, 0x9c, 0xfa, 0x7f, 0xbe, 0x9a,
  0x0d, 0xea, 0xb7, 0x2e, 0xd0, 0xf3, 0x5a, 0x08, 0x55, 0x17, 0x81, 0xb2, 0xce,
  0x11, 0x39, 0x99, 0x05, 0x20, 0x82, 0xe5, 0xad, 0xb6, 0x60, 0xc0, 0x0c, 0x6a,
  0x68, 0x2c, 0x7c, 0x45, 0x35, 0xab, 0x62, 0xa6, 0xd4, 0x5d, 0xfa, 0x59, 0x98,
  0xf1, 0xb4, 0xaa, 0xbe, 0x5d, 0x7d, 0xe2, 0x0d, 0xec, 0x4b, 0x86, 0x43, 0xc4,
  0x31, 0xd3, 0xa6, 0xe3, 0xb1, 0x9a, 0xe6, 0xce, 0xbc, 0x89, 0x43, 0x55, 0xc9,
  0x82, 0xc1, 0x69, 0x9a, 0xb6, 0xc7, 0xe1, 0xcc, 0x52, 0xd3, 0xc9, 0x3a, 0x80,
  0x79, 0x90, 0x71, 0xf0, 0xf4, 0xca, 0xe9, 0x39, 0xfb, 0xa1, 0xd5, 0x9d, 0xe6,
  0xf4, 0x1a, 0x26, 0xfb, 0xfb, 0x80, 0x8e, 0x6e, 0x49, 0xc3, 0x53, 0xbc, 0x59,
  0x0f, 0x4c, 0xdb, 0xc8, 0xed, 0x81, 0x15, 0xf1, 0x16, 0x1e, 0x1d, 0xa7, 0x1e,
  0x8b, 0xeb, 0x68, 0x2a, 0x83, 0x30, 0x41, 0x1c, 0x8f, 0xc8, 0x6d, 0x45, 0x70,
  0x10, 0x1a, 0xf4, 0x56, 0x19, 0x85, 0xf7, 0x16, 0x7a, 0xce, 0xcf, 0xec, 0xbb,
  0x7f, 0x5a, 0x22, 0xc9, 0x9f, 0x98, 0x87, 0x6a, 0xae, 0xd7, 0x3a, 0xe2, 0x48,
  0xbf, 0x5c, 0x13, 0x37, 0x3d, 0x78, 0x94, 0x15, 0x08, 0x42, 0xa5, 0x38, 0x93,
  0x0b, 0x79, 0xb1, 0xf4, 0xe0, 0x96, 0x9f, 0x7b, 0xb5, 0xce, 0xb2, 0xd9, 0xcf,
  0xd8, 0x65, 0x95, 0x09, 0x79, 0xd1, 0x80, 0xd0, 0x87, 0xb2, 0x58, 0x94, 0x95,
  0xd8, 0x13, 0xf2, 0x44, 0x94, 0x9d, 0xbd, 0xc5, 0x1f, 0xbb, 0x58, 0x63, 0xdb,
  0x74, 0x99, 0x88, 0x94, 0x7e, 0xb2, 0x68, 0xd3, 0x22, 0x89, 0xaf, 0x63, 0x80,
  0x15, 0x54, 0xaa, 0xbf, 0x5d, 0x98, 0xc1, 0x44, 0x34, 0xb5, 0x4e, 0x21, 0x91,
  0x81, 0x37, 0xef, 0xe3, 0x52, 0x23, 0xd8, 0x25, 0x2e, 0x13, 0x94, 0x15, 0x1f,
  0xce, 0xec, 0x4b, 0x8d, 0x61, 0x40, 0x02, 0x86, 0xff, 0xbd, 0xcd, 0x92, 0x93,
  0x95, 0x8e, 0x3e, 0xd8, 0x9e, 0xa0, 0x5c, 0xdf, 0x6b, 0x89, 0xf1, 0x68, 0xb3,
  0x25, 0x9a, 0x13, 0x9a, 0x88, 0x34, 0xd5, 0x39, 0xf0, 0xd5, 0x2b, 0x4a, 0x00,
  0x47, 0x10, 0xb5, 0x0e, 0x72, 0x56, 0x10, 0xe2, 0xb5, 0xb1, 0xe6, 0x7b, 0xb8,
  0x5d, 0x98, 0xb4, 0x44, 0x54, 0xb4, 0x0f, 0x0b, 0x68, 0xb3, 0xec, 0xda, 0x77,
  0x1f, 0xf8, 0x6d, 0x07, 0x2a, 0x08, 0xc3, 0x04, 0x3d, 0xfb, 0xcb, 0x02, 0x62,
  0x7b, 0x42, 0xc1, 0xec, 0x6a, 0x69, 0x52, 0xb4, 0xb3, 0xe2, 0x52, 0x8b, 0x6f,
  0xa1, 0x5f, 0x69, 0x24, 0xd9, 0x60, 0x4d, 0x76, 0xce, 0x3b, 0x5e, 0x8b, 0x43,
  0xb5, 0x86, 0x4c, 0xbb, 0x26, 0xb9, 0x64, 0xd0, 0x87, 0xe1, 0x38, 0x2a, 0x17,
  0x0f, 0x6b, 0x94, 0x2f, 0x15, 0xfb, 0x88, 0x4f, 0x72, 0xdc, 0xbd, 0x00, 0x48,
  0x2a, 0x43, 0x12, 0x31, 0xfc, 0x5b, 0x34, 0xcb, 0x14, 0x8b, 0x94, 0xaa, 0x33,
  0xdf, 0xfe, 0xdc, 0x24, 0xd8, 0x0f, 0x4f, 0xee, 0x43, 0x6a, 0x5c, 0x38, 0x87,
  0x87, 0xad, 0x1b, 0xf3, 0xc6, 0x79, 0x52, 0xe3, 0x5f, 0x7e, 0x49, 0x44, 0xe3,
  0xb6, 0x6f, 0x55, 0xfe, 0x8e, 0xef, 0x0b, 0x39, 0x13, 0x91, 0x6a, 0x97, 0xf1,
  0x57, 0xd9, 0xb5, 0xa8, 0x92, 0xd0, 0xc8, 0xcf, 0x81, 0x01, 0xbd, 0x83, 0xe1,
  0xfd, 0x90, 0x41, 0x92, 0x0f, 0x61, 0x9f, 0x19, 0xa7, 0xab, 0xc6, 0xcf, 0xee,
  0x95, 0x31, 0x87, 0x1e, 0xad, 0x59, 0x0d, 0x02, 0x63, 0xc6, 0xea, 0x87, 0xb6,
  0xbb, 0xb4, 0x8b, 0x22, 0x6c, 0xa6, 0x53, 0x84, 0x56, 0xb4, 0xf4, 0x50, 0xfe,
  0x96, 0x4d, 0x6b, 0xdc, 0x26, 0x16, 0x25, 0xdb, 0x79, 0xe4, 0xcb, 0x31, 0x6b,
  0x21, 0xc8, 0x0e, 0x90, 0xc6, 0x04, 0x0b, 0xe0, 0x30, 0x42, 0xb8, 0xbd, 0x19,
  0x8f, 0x87, 0xd1, 0x5a, 0x6f, 0xa3, 0xf6, 0xdf, 0x71, 0x82, 0x95, 0x47, 0xff,
  0xbd, 0xef, 0xd0, 0x3c, 0xf0, 0xdf, 0x3b, 0x0c, 0x39, 0x7b, 0x07, 0xf1, 0xc7,
  0x47, 0x3e, 0xee, 0x4f, 0x99, 0xcf, 0xba, 0x56, 0xde, 0x39, 0x1b, 0x13, 0x6d,
  0xbb, 0x87, 0x0b, 0x0d, 0x98, 0xaa, 0x9b, 0xce, 0x9f, 0x8a, 0x3b, 0xea, 0x7d,
  0xc5, 0xee, 0xc7, 0xaf, 0x57, 0x7e, 0x03, 0x02, 0xcd, 0x2a, 0xe7, 0x5d, 0xbd,
  0x87, 0x0b, 0x34, 0xfb, 0x52, 0xec, 0x3d, 0x31, 0xe2, 0x35, 0x4e, 0x66, 0x2f,
  0xa5, 0x37, 0xb0, 0x20, 0xaa, 0x28, 0x06, 0xb6, 0x2a, 0xe3, 0xc6, 0x07, 0x96,
  0x28, 0xdb, 0x44, 0xa9, 0xb8, 0x2d, 0x28, 0x73, 0xa7, 0x3f, 0x36, 0x6f, 0xfd,
  0x50, 0x71, 0x3d, 0x50, 0xb4, 0x4a, 0x1c, 0x6e, 0x76, 0xb0, 0x8c, 0x39, 0xf9,
  0xaf, 0xe2, 0xee, 0x57, 0x62, 0x19, 0x52, 0x8f, 0x41, 0xa0, 0x16, 0x0d, 0x91,
  0x7f, 0xd9, 0xb9, 0x26, 0xe5, 0xe8, 0x93, 0xe2, 0x7d, 0x5d, 0xe8, 0x56, 0x68,
  0x68, 0x54, 0xc0, 0x90, 0x05, 0xb5, 0x62, 0xd6, 0x04, 0x6b, 0x97, 0x9b, 0x17,
  0x99, 0x95, 0xf8, 0xb3, 0xcc, 0x1b, 0x55, 0xee, 0xb2, 0x72, 0x29, 0x0a, 0x8f,
  0x58, 0x96, 0x9b, 0xad, 0x3d, 0x78, 0xf4, 0xf3, 0xc1, 0xd9, 0x45, 0x1b, 0x48,
  0x18, 0x8f, 0x6d, 0x59, 0x82, 0xf7, 0x08, 0xcb, 0x69, 0xa3, 0x46, 0x19, 0x96,
  0x56, 0x2f, 0xaa, 0x49, 0x92, 0xb1, 0x22, 0x87, 0x5d, 0x1f, 0xa5, 0xfc, 0x30,
  0xb4, 0x43, 0x77, 0x25, 0x39, 0x5f, 0x8e, 0xce, 0xcc, 0x74, 0x31, 0xf3, 0xf5,
  0x0e, 0x3e, 0xf7, 0xf8, 0xd5, 0x61, 0x11, 0xe2, 0x33, 0x41, 0xe0, 0xe2, 0x74,
  0xa9, 0xab, 0xe2, 0x00, 0xe9, 0xac, 0x47, 0xac, 0x93, 0x35, 0x5d, 0x69, 0x45,
  0xc3, 0xe7, 0xbf, 0x34, 0xf6, 0xf3, 0xb4, 0xf9, 0x64, 0xe4, 0xcb, 0xdd, 0x88,
  0xad, 0x53, 0x4c, 0x85, 0x96, 0x3b, 0xf1, 0x70, 0xe7, 0x53, 0x86, 0x44, 0x67,
  0xec, 0x7d, 0xf7, 0x1d, 0x18, 0xb5, 0x75, 0x1c, 0xeb, 0xf1, 0x56, 0x1e, 0xff,
  0x56, 0x37, 0x94, 0xbe, 0x3f, 0xf2, 0xf9, 0x90, 0x02, 0x1e, 0xe9, 0xb8, 0x00,
  0xa6, 0x6f, 0x7d, 0x71, 0x15, 0x54, 0xc3, 0xed, 0xb8, 0x20, 0xc2, 0x8e, 0x7e,
  0xb7, 0xfb, 0xdd, 0xe9, 0xa7, 0xb6, 0x56, 0x5c, 0x92, 0xae, 0xbb, 0xad, 0xac,
  0x5f, 0x3f, 0x8f, 0xe4, 0x1d, 0x08, 0x32, 0xea, 0x08, 0x8d, 0x00, 0x86, 0xb3,
  0x1c, 0x7e, 0x6e, 0x07, 0xc8, 0x65, 0xe8, 0x1e, 0x20, 0x5d, 0xa0, 0x86, 0xd1,
  0xbb, 0xd1, 0xd5, 0x88, 0xbd, 0x67, 0x39, 0xa6, 0xe3, 0x86, 0xbf, 0xc7, 0xbf,
  0x71, 0xec, 0x11, 0x83, 0xf0, 0xef, 0x15, 0xa9, 0xc1, 0x54, 0x1f, 0x78, 0x70,
  0x05, 0xb3, 0x54, 0xa1, 0x4c, 0x51, 0x03, 0xf0, 0xce, 0x76, 0x6f, 0x6c, 0xef,
  0x4a, 0x16, 0x4f, 0x7b, 0xd7, 0x00, 0x95, 0x6c, 0xf8, 0xb1, 0x90, 0xe0, 0x2f,
  0x49, 0x84, 0xc9, 0xf0, 0x12, 0x05, 0x62, 0xdd, 0xdd, 0x58, 0xf5, 0x18, 0xf0,
  0x49, 0xe8, 0x46, 0x6e, 0xba, 0x67, 0xef, 0x50, 0xf7, 0x59, 0x06, 0xb4, 0x6d,
  0x80, 0xa4, 0xfc, 0xb7, 0x3d, 0xac, 0x5d, 0xcf, 0xb8, 0x4f, 0x2b, 0x50, 0x88,
  0x10, 0x89, 0x89, 0xce, 0x15, 0xff, 0x67, 0xea, 0x89, 0x99, 0x86, 0x43, 0x15,
  0x7c, 0xdc, 0xcd, 0x9f, 0x05, 0x5e, 0x99, 0x1e, 0xfc, 0x78, 0xbb, 0xc8, 0x49,
  0xb6, 0xd3, 0x5a, 0xe0, 0x26, 0x8c, 0xaa, 0xe0, 0x04, 0x7a, 0x92, 0x4c, 0x0a,
  0x42, 0x66, 0x2b, 0xe8, 0x66, 0x0c, 0x6c, 0xc3, 0xed, 0x58, 0x70, 0x6a, 0xcb,
  0xd5, 0xc2, 0xc2, 0x84, 0x86, 0x7a, 0x62, 0x51, 0x11, 0x6e, 0xb2, 0xd6, 0xb9,
  0xf1, 0x97, 0xe3, 0x1d, 0x83, 0x16, 0xe8, 0xe5, 0x22, 0xe7, 0x31, 0x7e, 0x57,
  0xcf, 0x0b, 0x54, 0x06, 0x9f, 0x2b, 0xd5, 0xdf, 0x92, 0xff, 0xa6, 0x7e, 0xdf,
  0xcb, 0x5f, 0x1d, 0x85, 0x56, 0x6c, 0x02, 0x25, 0xa3, 0x2c, 0x99, 0x27, 0x9d,
  0x1b, 0xb8, 0x16, 0x8c, 0x2c, 0x8b, 0x37, 0xcb, 0x05, 0xcb, 0xa2, 0x97, 0xee,
  0x37, 0x21, 0x23, 0x10, 0xe0, 0x4a, 0x0b, 0x45, 0xc7, 0x61, 0xe3, 0x43, 0xe6,
  0x8a, 0x6e, 0xce, 0xf8, 0xee, 0xfd, 0x5f, 0xfd, 0x9d, 0x40, 0x72, 0xc5, 0xed,
  0xbc, 0xe5, 0x36, 0x48, 0x2d, 0xf5, 0x5e, 0x7c, 0x5c, 0xf9, 0x2f, 0x72, 0xc5,
  0x0e, 0x9f, 0xc3, 0x78, 0xff, 0x32, 0xd6, 0xf7, 0x01, 0x91, 0x78, 0xf8, 0xd1,
  0x28, 0xba, 0xfe, 0x8c, 0x58, 0xb3, 0xbc, 0x38, 0xd9, 0xf9, 0x33, 0x73, 0x14,
  0xe8, 0x5e, 0xda, 0x14, 0x3d, 0xdb, 0xc1, 0x82, 0x92, 0x62, 0xd2, 0x8f, 0x8a,
  0xae, 0x1a, 0x77, 0x9f, 0xff, 0xb8, 0x12, 0xe0, 0x02, 0x35, 0x8d, 0x79, 0x51,
  0x01, 0x61, 0x40, 0xe3, 0x44, 0xeb, 0x54, 0x0b, 0x75, 0x68, 0x33, 0xce, 0xf3,
  0x4a, 0xe7
};

/*
 * SROM 91 is to be used for ADNS-9500. It is the same as SROM 8E except:
 *
 *   a. Optimized laser driving functionality for both old and new VCSEL die sources as per PCN V00-001-476012-1A.
 *
 */

#elif defined ADNS9500_SROM_91
 
#define ADNS9500_CRCHI (0xBE)
#define ADNS9500_CRCLO (0xEF)
#define ADNS9500_ID (0x56)
#define ADNS6010_FIRMWARE_CRC (0xBEEF)
#define ADNS9500_FIRMWARE_LEN 3070

const uint8_t adns9500FWArray[ADNS9500_FIRMWARE_LEN] = {
  0x03, 0x91, 0x31, 0xc2, 0xc2, 0xd1, 0x9e, 0xbe, 0xdf, 0x1c, 0xb8, 0xf2, 0x66,
  0x2f, 0xdc, 0x3a, 0xd7, 0x0d, 0x79, 0x70, 0x4d, 0x07, 0x67, 0x35, 0xc4, 0x10,
  0x83, 0x84, 0x6b, 0x54, 0x0b, 0x75, 0x68, 0x33, 0xe4, 0x2b, 0xd4, 0x2a, 0xb1,
  0xca, 0x10, 0xbb, 0xc2, 0xed, 0x39, 0xd1, 0x20, 0xa3, 0xc4, 0xeb, 0x35, 0xc9,
  0x10, 0xa6, 0xa7, 0xcc, 0x1a, 0x97, 0xac, 0xda, 0x3c, 0xcf, 0xf6, 0x78, 0x53,
  0x24, 0xca, 0x16, 0x8f, 0x9c, 0xba, 0xd7, 0x2c, 0xbb, 0xd5, 0x09, 0x90, 0xa2,
  0xc6, 0xef, 0x3d, 0xf8, 0x53, 0x05, 0x69, 0x50, 0x20, 0x6f, 0x55, 0xd2, 0x29,
  0xd6, 0xee, 0x63, 0x95, 0xae, 0xc8, 0xd7, 0x95, 0x84, 0x47, 0xc9, 0x27, 0xd0,
  0x11, 0x8a, 0x69, 0x3b, 0x0b, 0xc2, 0x12, 0xef, 0xa3, 0x42, 0x57, 0xaf, 0xc2,
  0x5e, 0x97, 0xa8, 0xe5, 0x0c, 0x03, 0x74, 0xac, 0x1f, 0x1e, 0xb4, 0x34, 0x9a,
  0x66, 0x62, 0x93, 0x0e, 0x61, 0xc6, 0xc8, 0x52, 0xe8, 0xce, 0xe1, 0x0a, 0x08,
  0x1c, 0x2a, 0x57, 0x9d, 0x04, 0x01, 0x4c, 0xf7, 0x62, 0x7e, 0xb3, 0x8f, 0xee,
  0xdf, 0xe9, 0xba, 0x06, 0xfb, 0xf5, 0x9b, 0x63, 0x53, 0xf5, 0x12, 0x06, 0x71,
  0x28, 0x19, 0x44, 0xa9, 0x0b, 0xcf, 0xba, 0x4c, 0x6a, 0x05, 0xd1, 0x3c, 0x1d,
  0x4e, 0x32, 0x52, 0x9f, 0x4b, 0x89, 0x11, 0x9f, 0x81, 0x54, 0x62, 0x8f, 0x9a,
  0x0f, 0x70, 0x2e, 0xcf, 0x92, 0x04, 0x9b, 0xc1, 0x35, 0xd8, 0xeb, 0x58, 0x63,
  0x7d, 0x87, 0x86, 0x9d, 0x38, 0x14, 0x60, 0xb3, 0xd6, 0xa7, 0x92, 0xd8, 0x16,
  0x41, 0xf1, 0x42, 0x50, 0x63, 0x35, 0xcd, 0x8b, 0x03, 0xcc, 0xba, 0x0b, 0x0f,
  0x68, 0x4e, 0xbc, 0x89, 0x62, 0x16, 0x6c, 0x37, 0x71, 0xe7, 0xa9, 0x82, 0x71,
  0xdb, 0xb6, 0x26, 0xa7, 0xd6, 0x78, 0xbc, 0xc7, 0x34, 0xbb, 0xcd, 0x2e, 0x7d,
  0x78, 0xaf, 0xbe, 0x69, 0x55, 0xfe, 0xc5, 0xac, 0xfd, 0x30, 0x38, 0x46, 0xc6,
  0x52, 0x1e, 0xef, 0x44, 0x1d, 0xfa, 0x59, 0xd0, 0x61, 0xf6, 0x3c, 0x00, 0x1f,
  0xf2, 0x65, 0x5a, 0x67, 0xda, 0x52, 0x74, 0xa2, 0x25, 0xcb, 0xa0, 0xb0, 0xd5,
  0x51, 0x3c, 0xcd, 0x63, 0xe5, 0xbb, 0x43, 0xd0, 0xa8, 0x06, 0x60, 0xb6, 0xf2,
  0xeb, 0x5e, 0x7f, 0x62, 0x0e, 0x74, 0x9e, 0xbb, 0x00, 0x3d, 0x6d, 0x8b, 0x61,
  0x5e, 0xa5, 0x93, 0x01, 0x5d, 0xc4, 0xfa, 0xf7, 0x45, 0xb4, 0xc4, 0x42, 0xee,
  0x2a, 0x7d, 0x2d, 0x08, 0x17, 0xc7, 0x6e, 0x1e, 0x76, 0x48, 0xea, 0xf2, 0x7c,
  0x53, 0xc4, 0x5b, 0x0c, 0x1c, 0x7e, 0x6c, 0x42, 0xc1, 0x7c, 0x4f, 0xf3, 0x4c,
  0x0c, 0xf0, 0xc0, 0xc3, 0xd1, 0x70, 0x82, 0xd7, 0x5b, 0xcf, 0x18, 0xa0, 0x01,
  0x8c, 0xf3, 0xa5, 0x9e, 0xf2, 0xf2, 0x0e, 0x00, 0xe2, 0xb8, 0xf0, 0x76, 0xe1,
  0x9e, 0x4e, 0x2f, 0x16, 0xca, 0xde, 0x3f, 0x43, 0xfa, 0x86, 0x8a, 0x55, 0x7c,
  0xca, 0x90, 0xb2, 0x37, 0x31, 0xa4, 0xf1, 0xc4, 0x48, 0x9e, 0x14, 0xa8, 0x87,
  0x01, 0xc9, 0x51, 0x31, 0xb4, 0xdf, 0xf8, 0x70, 0x24, 0xd0, 0xe5, 0x2d, 0xb5,
  0xc2, 0x25, 0xbc, 0x56, 0x67, 0x8d, 0xa8, 0xf7, 0x0f, 0x64, 0x37, 0x12, 0x9d,
  0x9c, 0x00, 0x3a, 0xc1, 0x9b, 0xa1, 0xa3, 0xf5, 0xc6, 0x6a, 0x66, 0xf7, 0xd1,
  0x1d, 0x40, 0x6a, 0xc7, 0xd7, 0x3a, 0xb4, 0x08, 0x15, 0x89, 0x82, 0x27, 0xdd,
  0x51, 0xd8, 0x27, 0xef, 0x49, 0x58, 0x8b, 0xf4, 0xa2, 0x97, 0x37, 0x96, 0xfe,
  0xaf, 0x6b, 0x84, 0x9b, 0xe6, 0x42, 0x0c, 0x39, 0x1e, 0x1e, 0xca, 0x7d, 0x66,
  0x04, 0x43, 0xed, 0xd8, 0x92, 0xde, 0x19, 0x3a, 0x00, 0xc3, 0x1c, 0x84, 0xe0,
  0x0f, 0x9c, 0x1b, 0x14, 0xf3, 0xa2, 0x0e, 0x6c, 0x3a, 0xdb, 0xe2, 0x4b, 0x26,
  0xe5, 0x6f, 0xbb, 0x68, 0xd3, 0x5c, 0x1d, 0x54, 0xf3, 0x14, 0x0a, 0x2e, 0x8c,
  0x1f, 0x28, 0x48, 0xfe, 0x03, 0x1d, 0x6f, 0x47, 0x1d, 0x17, 0x0e, 0xae, 0x4a,
  0x42, 0x36, 0xd6, 0x43, 0x15, 0x70, 0x0d, 0xa8, 0x6f, 0x5a, 0x67, 0xf7, 0x07,
  0xbc, 0x3e, 0xa9, 0xe0, 0xc5, 0x59, 0x00, 0x03, 0xd9, 0x00, 0x02, 0xf8, 0x42,
  0x3d, 0xb2, 0x37, 0x3a, 0xa4, 0xfa, 0xc3, 0x86, 0x80, 0xef, 0xdd, 0x32, 0x12,
  0x32, 0xd1, 0x4d, 0x82, 0x7b, 0x1f, 0x9f, 0xaf, 0xd8, 0x20, 0xa2, 0xcf, 0xcc,
  0x39, 0x21, 0x76, 0x3e, 0x2f, 0x4c, 0x65, 0x78, 0xda, 0x9a, 0xec, 0xeb, 0xfc,
  0xd7, 0x86, 0xcc, 0x4f, 0xf0, 0x2b, 0xf4, 0x7b, 0x01, 0x75, 0x8d, 0x5a, 0x95,
  0xea, 0x37, 0x00, 0xbc, 0xa5, 0x6e, 0x5a, 0x54, 0xec, 0xb9, 0x2d, 0xd0, 0x40,
  0xe7, 0xae, 0xda, 0x0d, 0x0f, 0x3a, 0x7a, 0x3d, 0xfa, 0xc2, 0xea, 0x3e, 0xde,
  0x2f, 0x88, 0x65, 0xa9, 0x10, 0x05, 0x2b, 0xda, 0xe7, 0x93, 0x9a, 0x10, 0x66,
  0x0f, 0x7f, 0x7c, 0x82, 0x0e, 0xdf, 0xdd, 0xd8, 0xa3, 0xc6, 0xc2, 0x3b, 0xd6,
  0xe0, 0x8f, 0x8d, 0xed, 0x14, 0x28, 0xa4, 0x0a, 0xe4, 0xcc, 0x4f, 0x56, 0x8d,
  0x98, 0x50, 0x6d, 0x3a, 0x7e, 0x71, 0x05, 0x88, 0xbb, 0xa8, 0xb2, 0x0d, 0x74,
  0xbb, 0x81, 0x4c, 0x98, 0x04, 0xca, 0x45, 0x8e, 0xcb, 0x3f, 0x3e, 0xf0, 0x9c,
  0xf5, 0xca, 0xde, 0x10, 0x37, 0x3d, 0x0e, 0xad, 0xc8, 0xa5, 0xfd, 0xa9, 0x6e,
  0xed, 0x44, 0x96, 0x28, 0x73, 0xdc, 0x80, 0xf8, 0x22, 0xd7, 0xba, 0x57, 0x81,
  0x3c, 0x7d, 0xf5, 0xf8, 0xa5, 0xe2, 0xba, 0x2b, 0x77, 0x4d, 0x15, 0x96, 0xf1,
  0xe7, 0x92, 0xea, 0x64, 0x43, 0x0b, 0x4d, 0x50, 0x97, 0xe5, 0x69, 0xd2, 0xa2,
  0xc9, 0x9e, 0x1d, 0xb8, 0x3f, 0xc2, 0x78, 0xd4, 0x34, 0xd7, 0x6f, 0x0b, 0x74,
  0x91, 0xf6, 0xcd, 0x49, 0x3d, 0xa8, 0x0b, 0x47, 0x45, 0x4b, 0xc0, 0x23, 0x8d,
  0x1a, 0xd2, 0xbc, 0x88, 0x12, 0xe4, 0x25, 0x38, 0xcc, 0x45, 0xcf, 0x23, 0xc8,
  0x20, 0xea, 0xd9, 0x88, 0xbb, 0x41, 0x89, 0x31, 0x43, 0x61, 0x4f, 0x92, 0x05,
  0x67, 0xbc, 0xe5, 0x17, 0x2b, 0x0a, 0xab, 0xb6, 0xb9, 0x31, 0xfa, 0x01, 0x63,
  0x6b, 0x1d, 0xda, 0x03, 0xa5, 0x81, 0x23, 0xe0, 0xf9, 0xfb, 0x21, 0xf0, 0xd1,
  0x0c, 0xca, 0x2d, 0x6b, 0xd9, 0xbc, 0xd0, 0x20, 0xb6, 0x63, 0x0d, 0xd9, 0x21,
  0x94, 0x9f, 0x59, 0xb2, 0xa0, 0xf9, 0xa1, 0x6a, 0x3b, 0xbf, 0xdf, 0x08, 0x7e,
  0x56, 0x0e, 0xae, 0x8a, 0x61, 0xa1, 0x21, 0x27, 0x4e, 0xf2, 0x90, 0x47, 0x2e,
  0x3c, 0x8a, 0x35, 0xc5, 0xfc, 0xae, 0xbc, 0x1a, 0xa7, 0x6f, 0x36, 0x35, 0x2c,
  0x9b, 0x52, 0x37, 0x4f, 0x16, 0x56, 0xdb, 0x35, 0x2d, 0xa8, 0x50, 0x2e, 0x2a,
  0x02, 0x91, 0xbb, 0x52, 0x3e, 0xf9, 0x46, 0xe2, 0x76, 0x3a, 0x50, 0xd5, 0x6d,
  0xe5, 0xff, 0xb8, 0x39, 0x53, 0x2e, 0x26, 0x10, 0xa9, 0xc7, 0x17, 0x2b, 0xea,
  0x5f, 0x6b, 0x99, 0xe1, 0x75, 0xce, 0x29, 0x76, 0xb6, 0x19, 0x17, 0xe3, 0xc6,
  0xed, 0xd1, 0x3d, 0x42, 0xa0, 0x1e, 0xc0, 0xb5, 0x8c, 0xd8, 0x23, 0x13, 0x22,
  0x36, 0x0a, 0x7c, 0x8b, 0x40, 0x43, 0x61, 0x7c, 0xaf, 0xbf, 0x0a, 0x6e, 0xd6,
  0x0f, 0x3f, 0xd5, 0xd4, 0x8a, 0x7c, 0x9f, 0xfe, 0x53, 0xd0, 0x36, 0xd8, 0xe2,
  0xe9, 0xbc, 0x2b, 0x83, 0x85, 0x5e, 0x71, 0x58, 0x68, 0xe1, 0xc6, 0xd8, 0x58,
  0x13, 0xb8, 0x6c, 0x73, 0xa6, 0xd9, 0xd1, 0x0c, 0xaa, 0xa0, 0xa2, 0x10, 0xed,
  0x20, 0xd8, 0x63, 0xe5, 0x9e, 0xd4, 0xea, 0x2b, 0x2b, 0xb7, 0x95, 0x0b, 0x9e,
  0x56, 0x0c, 0x4d, 0x68, 0xf1, 0x6c, 0xdf, 0x7f, 0xca, 0x47, 0x8e, 0x98, 0x63,
  0x07, 0x3a, 0x67, 0xce, 0x16, 0x63, 0xa7, 0xf9, 0xd3, 0x2c, 0x47, 0xbc, 0x14,
  0x07, 0x2f, 0xdb, 0xd6, 0xea, 0xae, 0x4e, 0xd9, 0xac, 0x79, 0x76, 0x8e, 0x3b,
  0x2d, 0xa8, 0x71, 0x64, 0xcf, 0x43, 0x5b, 0xb3, 0xdb, 0x19, 0x67, 0xce, 0xf8,
  0x90, 0xfd, 0xb7, 0x2e, 0xb9, 0x10, 0xdd, 0xa5, 0x24, 0xa5, 0xd9, 0x08, 0x1e,
  0x8e, 0x86, 0x04, 0x29, 0xd8, 0x5a, 0xdf, 0xce, 0xdc, 0x9a, 0xcf, 0xbf, 0xf6,
  0x86, 0xec, 0xec, 0x0b, 0x16, 0xa2, 0x43, 0x66, 0x19, 0x13, 0xb3, 0xc5, 0x08,
  0xfd, 0xc8, 0xba, 0x48, 0xb9, 0x55, 0x88, 0x79, 0xa5, 0x5c, 0x6c, 0x56, 0xcc,
  0xf6, 0xbc, 0x4a, 0x37, 0x2c, 0x90, 0xc9, 0xdd, 0xf2, 0x08, 0x85, 0x55, 0x22,
  0x29, 0x4b, 0x15, 0x92, 0x6c, 0xad, 0xc6, 0xac, 0x2a, 0xd2, 0x15, 0x7b, 0x90,
  0x3e, 0x6e, 0xc8, 0xeb, 0x30, 0x42, 0xed, 0xcd, 0xed, 0xcf, 0xb3, 0x71, 0x72,
  0x4b, 0x71, 0x9e, 0xd3, 0xe8, 0xfe, 0x5b, 0x26, 0x6e, 0x53, 0xd5, 0x27, 0x5f,
  0x01, 0xda, 0x61, 0x19, 0x92, 0x59, 0xda, 0xbc, 0x00, 0x95, 0xc6, 0x55, 0xe8,
  0xb3, 0x4f, 0x41, 0xb0, 0x6d, 0xf8, 0x24, 0x86, 0x1f, 0x58, 0xd6, 0x45, 0x8e,
  0x91, 0x35, 0xb5, 0xdc, 0x57, 0xfd, 0x4b, 0x4b, 0x1e, 0x9b, 0x87, 0x4f, 0xe8,
  0x0b, 0x15, 0x95, 0x32, 0xf8, 0xd8, 0x80, 0x35, 0x3a, 0x5c, 0xa0, 0xab, 0x24,
  0x50, 0xd3, 0x76, 0x66, 0xa8, 0xf7, 0x7e, 0x6d, 0xf8, 0x6e, 0xe5, 0x3d, 0x2f,
  0xd2, 0x37, 0x2d, 0x84, 0x31, 0x55, 0x9a, 0x30, 0xc3, 0xf7, 0xcc, 0x3e, 0x56,
  0xce, 0xdd, 0x46, 0x39, 0xf1, 0x4d, 0xfd, 0xd9, 0x84, 0xb9, 0xe2, 0x50, 0x55,
  0x11, 0x85, 0xbb, 0xec, 0xaa, 0xa7, 0x91, 0x8f, 0x98, 0xa0, 0x30, 0x42, 0x20,
  0x1b, 0x14, 0xca, 0x47, 0x8d, 0xbf, 0x42, 0xe5, 0x97, 0x5d, 0x4b, 0x04, 0x3d,
  0xbc, 0xc9, 0x29, 0x24, 0xd2, 0xdf, 0x38, 0xd7, 0x1f, 0xfc, 0x3c, 0x78, 0xe6,
  0xed, 0x51, 0xfa, 0x5c, 0x48, 0x16, 0xd7, 0x8f, 0x8a, 0x46, 0x9c, 0xe0, 0x44,
  0xd4, 0x0c, 0x7a, 0x49, 0xa0, 0x83, 0x76, 0x8f, 0xa6, 0x1d, 0x44, 0xb6, 0x8e,
  0x6f, 0x7b, 0x0e, 0x4d, 0xc4, 0x77, 0x2c, 0x5a, 0x2c, 0x06, 0xe7, 0x45, 0x0b,
  0x30, 0x0d, 0x24, 0x71, 0x16, 0x53, 0x7c, 0x84, 0x49, 0x2b, 0x2a, 0xf4, 0x5b,
  0x34, 0xf0, 0x2e, 0xa6, 0x1a, 0x04, 0xf5, 0x5d, 0x35, 0x50, 0xc2, 0x9e, 0x81,
  0x28, 0x27, 0xb3, 0xd1, 0x9f, 0x81, 0xff, 0x80, 0xfd, 0x51, 0x34, 0xb4, 0x8d,
  0x73, 0x3a, 0x0a, 0xe9, 0x39, 0xe4, 0x35, 0x2f, 0xb5, 0x57, 0x31, 0x59, 0x3d,
  0x9d, 0x83, 0xc2, 0x1c, 0x80, 0xe3, 0x7a, 0x85, 0xff, 0x14, 0x8c, 0x9e, 0x8d,
  0x80, 0x75, 0x36, 0x2c, 0xa8, 0xf7, 0x7e, 0x69, 0x1f, 0xc7, 0xc8, 0x2b, 0x56,
  0x2e, 0x43, 0x66, 0x19, 0xa1, 0x42, 0x08, 0x93, 0x86, 0x38, 0x63, 0xc6, 0x06,
  0x62, 0x17, 0xee, 0x5c, 0x67, 0x7a, 0x78, 0x31, 0xd2, 0x36, 0xee, 0x5a, 0x4f,
  0xbf, 0xfa, 0x86, 0xcd, 0xae, 0xae, 0x5c, 0x1f, 0xcc, 0xd0, 0xf5, 0x2b, 0xe6,
  0x4e, 0x3e, 0x1b, 0xcd, 0x9a, 0x9b, 0x71, 0x23, 0x72, 0x16, 0xec, 0x50, 0xeb,
  0x17, 0x3b, 0x84, 0x29, 0xa6, 0x1c, 0x2f, 0xe3, 0xce, 0xdf, 0xe8, 0xd3, 0x17,
  0xfc, 0x02, 0x94, 0xe9, 0x62, 0x4b, 0x8d, 0xc9, 0xb0, 0xf2, 0x32, 0xa0, 0x6e,
  0x3c, 0xc8, 0x3e, 0xa7, 0x9d, 0x18, 0x98, 0xf1, 0x39, 0xa0, 0x76, 0xb3, 0xab,
  0x21, 0x12, 0xdc, 0xbe, 0x5e, 0x32, 0xab, 0xdd, 0x69, 0x32, 0xf5, 0xdb, 0x93,
  0xb5, 0x29, 0xde, 0x56, 0x67, 0x5d, 0x1a, 0x84, 0x34, 0xf4, 0x6e, 0x82, 0x7a,
  0xde, 0xc3, 0x2c, 0x70, 0x86, 0x55, 0xfb, 0x1c, 0x7b, 0x88, 0x1b, 0xe0, 0x2b,
  0x36, 0xb5, 0x51, 0xc9, 0xf9, 0xc0, 0xfa, 0x8c, 0x46, 0x26, 0x64, 0x4f, 0x21,
  0x1d, 0xb1, 0x21, 0x3c, 0xf3, 0x91, 0xc9, 0x19, 0x9c, 0xf9, 0xd9, 0x3f, 0x19,
  0x8d, 0x70, 0x9f, 0xc5, 0x65, 0x91, 0x24, 0x8a, 0xcc, 0xc8, 0x90, 0x6e, 0xab,
  0xae, 0x8e, 0x3f, 0x3f, 0xae, 0x0d, 0xc9, 0x10, 0x70, 0xe5, 0x21, 0xeb, 0x54,
  0x83, 0x6c, 0x1e, 0x17, 0x59, 0xdd, 0x52, 0x50, 0xb4, 0xd0, 0xf1, 0xf0, 0xd5,
  0x88, 0x8c, 0xd2, 0xcc, 0x0f, 0x89, 0x44, 0x14, 0x31, 0x71, 0xf0, 0x73, 0xa3,
  0xd1, 0x2c, 0x16, 0xe0, 0x91, 0xb7, 0x14, 0x63, 0xd4, 0xfb, 0xc5, 0xbe, 0x72,
  0x65, 0xfc, 0x0d, 0x8a, 0x73, 0x3f, 0x2b, 0x4e, 0x1a, 0xa4, 0x59, 0x90, 0x5c,
  0xbf, 0xc4, 0xf7, 0x13, 0xa1, 0xf3, 0x96, 0xef, 0x06, 0xfb, 0x6a, 0xb9, 0x91,
  0x41, 0xb3, 0x25, 0x9e, 0x87, 0x05, 0xf8, 0x7d, 0xf2, 0x51, 0x4c, 0xba, 0xac,
  0xbf, 0xb9, 0x5b, 0xc0, 0x53, 0x84, 0x3f, 0xb4, 0xd5, 0xe6, 0xc9, 0xda, 0x41,
  0xc0, 0xbc, 0xdb, 0x85, 0x09, 0xc8, 0x6c, 0x95, 0x6a, 0x63, 0xc5, 0x5e, 0x72,
  0xf2, 0x6f, 0x99, 0x99, 0x71, 0x8a, 0x45, 0xa1, 0xd1, 0xdd, 0x92, 0x06, 0xd6,
  0x9f, 0x5c, 0xbb, 0x22, 0x7a, 0xd6, 0x57, 0x9d, 0x1c, 0x32, 0x06, 0x21, 0x2d,
  0x59, 0x1b, 0x61, 0xd4, 0x7c, 0x76, 0x15, 0x34, 0x81, 0xc2, 0x74, 0x4f, 0x2f,
  0xe5, 0xb6, 0x83, 0xcc, 0x0f, 0x99, 0x83, 0x03, 0x77, 0x3a, 0x62, 0xdc, 0xb5,
  0x53, 0x5c, 0xe2, 0x87, 0x2f, 0xca, 0xd6, 0x8a, 0x3e, 0xad, 0x05, 0x74, 0x44,
  0xb0, 0x84, 0x53, 0xee, 0x87, 0x19, 0xa6, 0x19, 0x8d, 0x98, 0xb2, 0xe6, 0x2f,
  0xdc, 0x3a, 0xd7, 0xc9, 0x2b, 0x16, 0x0c, 0xc4, 0x39, 0xec, 0x89, 0x62, 0x0f,
  0xd8, 0x19, 0xb2, 0x93, 0xef, 0xfd, 0x9a, 0xf1, 0xe3, 0x33, 0x27, 0x09, 0xaa,
  0x75, 0x5f, 0x68, 0x9a, 0x44, 0x4b, 0xe1, 0x12, 0x52, 0x5f, 0xc3, 0x0c, 0xbf,
  0xee, 0xd9, 0xc0, 0x73, 0xf3, 0x09, 0x77, 0x39, 0xea, 0x50, 0x0f, 0x30, 0xa6,
  0x9c, 0xa2, 0x20, 0xbe, 0xdd, 0x3b, 0xd0, 0x11, 0x33, 0x44, 0xc2, 0xb4, 0x3b,
  0x74, 0xad, 0x27, 0x6c, 0x6b, 0xd6, 0xff, 0xfc, 0xc9, 0x24, 0x4b, 0x21, 0x6b,
  0x61, 0x71, 0x27, 0x6c, 0x7c, 0xf7, 0x72, 0xf8, 0xb6, 0x98, 0x2f, 0x5c, 0x13,
  0x05, 0x28, 0x80, 0xc6, 0x51, 0x7f, 0xda, 0x09, 0xe0, 0x42, 0xb1, 0xc2, 0xb9,
  0xe6, 0xaa, 0xca, 0xe0, 0xa4, 0x07, 0xbc, 0x44, 0x8a, 0x44, 0x32, 0xa9, 0x14,
  0xf1, 0x1d, 0xb4, 0xcf, 0x2f, 0x2e, 0x7e, 0x78, 0xfd, 0x47, 0x92, 0x62, 0x30,
  0xff, 0xdd, 0x30, 0x62, 0xc7, 0x5e, 0x7a, 0x69, 0x2e, 0x99, 0xae, 0xae, 0xde,
  0x89, 0x93, 0x1b, 0xa2, 0x22, 0xfb, 0x42, 0xc1, 0xcd, 0x09, 0x2f, 0x4a, 0x41,
  0xfa, 0xa7, 0x74, 0x53, 0x05, 0x88, 0x73, 0xd5, 0x69, 0x65, 0xc2, 0x52, 0x76,
  0x48, 0xb2, 0xc0, 0xcf, 0x42, 0x98, 0x76, 0x39, 0x0c, 0xfb, 0x7c, 0xfa, 0xd6,
  0x7c, 0x5f, 0x23, 0x9b, 0x33, 0xdb, 0x44, 0x0a, 0x21, 0xc3, 0x9a, 0x81, 0x64,
  0x77, 0x5a, 0xd0, 0x0e, 0x8f, 0xa2, 0xa7, 0x3f, 0xa5, 0xa6, 0x2b, 0xae, 0xa3,
  0xa9, 0xd4, 0x38, 0x00, 0x22, 0x80, 0x2c, 0x04, 0x14, 0x4f, 0x8b, 0x49, 0x90,
  0x8b, 0x14, 0x0a, 0x25, 0xad, 0xe6, 0x11, 0x06, 0xb1, 0x90, 0x83, 0x33, 0xe7,
  0xd2, 0x11, 0x44, 0x16, 0xb9, 0x16, 0x63, 0x55, 0x17, 0xcf, 0xce, 0x07, 0xe2,
  0xa3, 0xbe, 0x83, 0x88, 0xb7, 0xfe, 0x6d, 0xd9, 0x03, 0x23, 0x34, 0x8c, 0x3f,
  0x2b, 0x93, 0x6b, 0x06, 0x59, 0x5f, 0x58, 0x0d, 0x63, 0xe3, 0x8d, 0x41, 0x66,
  0x1e, 0x7f, 0x5e, 0xfb, 0x32, 0x97, 0x9c, 0x1a, 0x85, 0x0e, 0xc0, 0x1e, 0x29,
  0x77, 0x80, 0xb2, 0x90, 0x13, 0x74, 0x1c, 0x55, 0x99, 0xf7, 0xeb, 0x16, 0x61,
  0xc6, 0xa6, 0x51, 0xcc, 0xed, 0x07, 0x68, 0xc8, 0xb2, 0xd5, 0xcf, 0x23, 0xd8,
  0xc0, 0xf4, 0x6a, 0xb6, 0x14, 0xb4, 0xd1, 0xc7, 0xa6, 0x44, 0x54, 0x34, 0x06,
  0x78, 0x0e, 0x9c, 0x10, 0x2a, 0xf2, 0x6b, 0x6c, 0x07, 0x05, 0x0a, 0x36, 0xfc,
  0x1d, 0x7c, 0xc5, 0x33, 0x65, 0x3e, 0x40, 0x83, 0x56, 0xa8, 0x6d, 0xa6, 0x9f,
  0x3a, 0x38, 0x89, 0x6f, 0xd0, 0xa2, 0xa6, 0xf1, 0xa2, 0xbd, 0x26, 0xbd, 0x39,
  0xe2, 0xcf, 0x32, 0xe3, 0x58, 0x4c, 0x4f, 0x49, 0x03, 0xd4, 0x44, 0x45, 0xa8,
  0xf7, 0xc6, 0x9a, 0x80, 0x33, 0x8a, 0x75, 0xc9, 0x31, 0xa0, 0x74, 0xe1, 0x9d,
  0x04, 0x0b, 0xa9, 0x4a, 0x73, 0xb8, 0x1a, 0x74, 0xf8, 0xba, 0xea, 0x89, 0x75,
  0x7f, 0x1b, 0xe6, 0x8f, 0x6e, 0xb4, 0x52, 0xa0, 0xb1, 0x92, 0x06, 0x52, 0xbc,
  0x5f, 0x9f, 0x79, 0xea, 0xb5, 0xbf, 0xbd, 0x8c, 0x9e, 0x8d, 0x3e, 0xbe, 0xbe,
  0x69, 0xdb, 0xa9, 0x4d, 0xb8, 0xee, 0xc4, 0x54, 0x71, 0xbc, 0x12, 0x45, 0x7b,
  0xdd, 0x05, 0x50, 0xa9, 0xc3, 0x89, 0xe5, 0xc9, 0x26, 0x42, 0x58, 0x59, 0xec,
  0xbc, 0x23, 0x06, 0xe4, 0x79, 0x2c, 0xbd, 0x92, 0x75, 0x78, 0x42, 0x62, 0x58,
  0x94, 0x0a, 0x47, 0xea, 0xdc, 0xbc, 0x33, 0x07, 0x1e, 0x79, 0xe9, 0x31, 0xf8,
  0x3f, 0x86, 0x2e, 0x89, 0x1c, 0xa4, 0xe1, 0xdc, 0xdc, 0xe3, 0x67, 0xa6, 0xfd,
  0x05, 0x6f, 0x17, 0x7f, 0x6c, 0x6a, 0xb2, 0x99, 0x16, 0x2f, 0x0d, 0x9f, 0x76,
  0xe8, 0xba, 0x15, 0xfa, 0x31, 0x79, 0x70, 0x5b, 0xea, 0x0a, 0x14, 0x82, 0x78,
  0x47, 0x15, 0x6c, 0x6f, 0xde, 0x16, 0x74, 0xec, 0x32, 0x96, 0xec, 0x53, 0xda,
  0xe7, 0xcc, 0xd9, 0xc3, 0x0e, 0xdf, 0x9d, 0xb1, 0x92, 0xfb, 0x3d, 0x4f, 0xdd,
  0x32, 0x32, 0xaf, 0x42, 0x49, 0x92, 0x8e, 0x81, 0xdf, 0xf5, 0x21, 0xce, 0xa0,
  0x01, 0xe9, 0x8d, 0xd9, 0xe4, 0xc8, 0xfa, 0x88, 0x77, 0xe5, 0xde, 0x74, 0xeb,
  0x95, 0xcf, 0xa7, 0xa9, 0x00, 0xa7, 0x8a, 0x2c, 0xbd, 0x12, 0xd5, 0xae, 0x63,
  0xce, 0x0e, 0x95, 0xa8, 0x11, 0xb6, 0x2f, 0x92, 0x39, 0x64, 0xdc, 0x15, 0x0b,
  0x54, 0xac, 0x03, 0x40, 0xba, 0x83, 0xb6, 0x73, 0x6e, 0x82, 0x56, 0x2f, 0x2e,
  0xaf, 0xf8, 0xeb, 0x08, 0x00, 0x21, 0xd7, 0x0a, 0x8f, 0xdd, 0x0e, 0x01, 0x02,
  0x91, 0x62, 0x07, 0x3c, 0x5d, 0x21, 0xd5, 0xe2, 0x31, 0xa8, 0xa1, 0x49, 0xe1,
  0xce, 0x6c, 0x2b, 0xe7, 0x22, 0xfc, 0x08, 0x03, 0xe2, 0xe6, 0x66, 0xfb, 0xf2,
  0x0e, 0xba, 0x8d, 0xae, 0x98, 0xf8, 0x6f, 0xb1, 0xfe, 0xd4, 0x9a, 0x78, 0xab,
  0x9f, 0x1f, 0x0f, 0x35, 0xd5, 0xb5, 0xd9, 0xc2, 0xf3, 0xd4, 0xa0, 0x8b, 0x0a,
  0x8a, 0x03, 0xe0, 0x73, 0xee, 0x5f, 0xbf, 0x17, 0x01, 0x01, 0x46, 0xa0, 0x73,
  0xa5, 0x8f, 0x41, 0xb4, 0xda, 0x93, 0xf3, 0x54, 0x8a, 0xbc, 0xc2, 0x5f, 0x28,
  0x53, 0x0b, 0x2a, 0x36, 0x4e, 0x86, 0x99, 0x18, 0x61, 0x45, 0x29, 0xf1, 0x08,
  0xe7, 0xb0, 0xea, 0xde, 0xde, 0xcd, 0x39, 0x78, 0x92, 0x4e, 0x28, 0x5a, 0xe7,
  0x9a, 0x0c, 0xe2, 0x15, 0x00, 0x8a, 0xf3, 0x3d, 0x8c, 0x3e, 0xdc, 0x49, 0x68,
  0x24, 0x7a, 0xd6, 0x03, 0x3b, 0xab, 0x6d, 0x5c, 0x07, 0xb4, 0xcf, 0x2d, 0x81,
  0xe5, 0xde, 0x9e, 0x93, 0x3a, 0xa9, 0x48, 0x56, 0xb1, 0x7b, 0x51, 0xd5, 0x88,
  0xbd, 0x46, 0x9a, 0xe0, 0x4e, 0xdc, 0x7e, 0x5f, 0x1d, 0xb8, 0xf2, 0x66, 0x2f,
  0xdc, 0x1b, 0x95, 0xa8, 0xb3, 0xe4, 0x2b, 0xb5, 0xe8, 0x52, 0x26, 0xce, 0xff,
  0x5d, 0x38, 0xf2, 0x66, 0x4e, 0xff, 0x5d, 0x38, 0xd3, 0x05, 0x69, 0x31, 0xe0,
  0x42, 0x06, 0x8e, 0x7f, 0x7c, 0x5b, 0x34, 0xcb, 0xf5, 0x68, 0x52, 0x26, 0xce,
  0xff, 0x7c, 0x7a, 0x76, 0x6e, 0x3f, 0xdd, 0x19, 0xb0, 0xc3, 0x04, 0x8a, 0x96,
  0x8f, 0x9c, 0x9b, 0x95, 0x89, 0x90, 0x83, 0x84, 0x6b, 0x54, 0x0b, 0x75, 0x49,
  0x10, 0x83, 0x65, 0x48, 0x12, 0x87, 0x6d, 0x39, 0xf0, 0x43, 0x04, 0x8a, 0x96,
  0x8f, 0x9c, 0xba, 0xd7, 0x0d, 0x79, 0x51, 0x20, 0xa3, 0xc4, 0xeb, 0x54, 0x2a,
  0xb7, 0xcd, 0x18, 0xb2, 0xe6, 0x4e, 0xff, 0x7c, 0x7a, 0x57, 0x2c, 0xbb, 0xf4,
  0x6a, 0x37, 0xcd, 0x18, 0x93, 0xa4, 0xca, 0x16, 0x8f, 0x7d, 0x78, 0x53, 0x24,
  0xca, 0x16, 0x8f, 0x7d, 0x78, 0x72, 0x66, 0x2f, 0xbd, 0xd9, 0x11, 0xa0, 0xc2,
  0x06, 0x8e, 0x7f, 0x7c, 0x5b, 0x15, 0x89, 0x90, 0x83, 0x84, 0x8a, 0x96, 0x8f,
  0x7d, 0x78, 0x72, 0x47, 0x0c, 0x9a, 0x97, 0xac, 0xda, 0x36, 0xee, 0x5e, 0x1f,
  0x9d, 0x99, 0xb0, 0xe2, 0x46, 0xef, 0x3d, 0xd9, 0x30, 0xc3, 0x04, 0x8a, 0x77,
  0x6c, 0x5a, 0x36, 0xcf, 0x1c, 0x9b, 0xb4, 0xea, 0x56, 0x2e, 0xde, 0x3e, 0xdf,
  0x3c, 0xfa, 0x76, 0x6e, 0x3f, 0xdd, 0x19, 0xb0, 0xe2, 0x27, 0xad, 0xd8, 0x13,
  0xa4, 0xab, 0xb5, 0xc9, 0x10, 0xa2, 0xc6, 0xef, 0x3d, 0xd9, 0x11, 0x81, 0x80,
  0x63, 0x44, 0xeb, 0x54, 0x0b, 0x94, 0xaa, 0xd6, 0x0f, 0x7d, 0x59, 0x11, 0xa0,
  0xa3, 0xc4, 0xeb, 0x54, 0x0b, 0x75, 0x68, 0x33, 0xc5, 0x08, 0x92, 0x87, 0x6d,
  0x39, 0xf0, 0x43, 0x04, 0x6b, 0x54, 0x2a, 0xd6, 0x0f, 0x9c, 0xba, 0xf6, 0x6e,
  0x3f, 0xdd, 0x19, 0x91, 0x81, 0x80, 0x82, 0x67, 0x2d, 0xb9, 0xf0, 0x62, 0x27,
  0xcc, 0xfb, 0x74, 0x4b, 0x14, 0xaa, 0xb7, 0xec, 0x3b, 0xf4, 0x4b, 0x14, 0x8b,
  0x75, 0x49, 0xf1, 0x60, 0x42, 0x06, 0x8e, 0x7f, 0x7c, 0x7a, 0x57, 0x0d, 0x98,
  0xb2, 0xe6, 0x4e, 0x1e, 0xbe, 0xdf, 0x3c, 0xdb, 0x34, 0xea, 0x56, 0x0f, 0x7d,
  0x59, 0x11, 0xa0, 0xc2, 0xe7, 0x2d, 0xb9, 0xd1, 0x01, 0x80, 0x63, 0x44, 0xeb,
  0x54, 0x2a, 0xb7, 0xcd, 0xf9, 0x51, 0x01, 0x61, 0x21, 0xc0, 0x02, 0x67, 0x2d,
  0xd8, 0x13, 0x85, 0x88, 0x73, 0x45, 0xe9, 0x31, 0xe0, 0x42, 0x06, 0x6f, 0x5c,
  0x3a, 0xd7, 0x0d, 0x79, 0x51, 0x20, 0xa3, 0xc4, 0x0a, 0x77, 0x6c, 0x3b, 0xd5,
  0x28, 0xd2, 0x26, 0xaf, 0xbd, 0xf8, 0x53, 0x24, 0xca, 0xf7, 0x4d, 0x18, 0x93,
  0xa4, 0xab, 0xb5, 0xc9, 0xf1, 0x60, 0x42, 0x06, 0x8e, 0x7f, 0x5d, 0x19, 0xb0,
  0xc3, 0x04, 0x8a, 0x96, 0xae, 0xbf, 0xfc, 0x5b, 0x15, 0xa8, 0xb3, 0xe4, 0x4a,
  0xf7, 0x4d, 0x18, 0xb2, 0xc7, 0xed, 0x58, 0x32, 0xc7, 0xed, 0x39, 0xd1, 0x01,
  0x80, 0x63, 0x44, 0x0a, 0x77, 0x6c, 0x3b, 0xf4, 0x6a, 0x56, 0x2e, 0xde, 0x1f,
  0xbc, 0xfa, 0x57, 0x2c, 0xbb, 0xd5, 0x09, 0x71, 0x41, 0xe1, 0x40, 0x02, 0x67,
  0x4c, 0x1a, 0x97, 0xac, 0xbb, 0xd5, 0x28, 0xb3, 0xe4, 0x4a, 0x16, 0xae, 0xbf,
  0xdd, 0x19, 0xb0, 0xe2, 0x46, 0xef, 0x3d, 0xd9, 0x11, 0x81, 0x61, 0x40, 0xe3,
  0x44, 0x0a, 0x77, 0x6c, 0x5a, 0x17, 0x8d, 0x79, 0x51, 0x20, 0xa3, 0xc4, 0x0a,
  0x77, 0x4d, 0x18, 0x93, 0xa4, 0xca, 0x16, 0x8f, 0x7d, 0x59, 0x30, 0xe2, 0x46,
  0x0e, 0x7f, 0x5d, 0x38, 0xf2, 0x47, 0xed, 0x39, 0xf0, 0x43, 0x04, 0x17, 0x22,
  0xbf, 0xbb
};

#endif
#endif