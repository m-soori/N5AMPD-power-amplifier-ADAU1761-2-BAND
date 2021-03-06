/*
********************************************************************************
* COPYRIGHT(c) ��� ���� � ��ϻ, 2019
* 
* ����������� ����������� ��������������� �� �������� ���� ����� (as is).
* ��� ��������������� �������� ������ �����������.
********************************************************************************
*/


#ifndef __ADAU_PARAM_DATA_H
#define __ADAU_PARAM_DATA_H

#define   ADAU_PARAM_DATA_SIZE             4
#define   ADAU_PROGRAM_DATA_SIZE           5
#define   ADAU_EQ_PARAMS_COUNT             5

#define   ADAU_VOLUME_0dB_INDEX            29

const uint8_t ADAU_VOLUME[] = 
{
0x00, 0x00, 0x29, 0x41, //-58 ��
0x00, 0x00, 0x33, 0xEF,
0x00, 0x00, 0x41, 0x61,
0x00, 0x00, 0x52, 0x4F,
0x00, 0x00, 0x67, 0x9F,
0x00, 0x00, 0x82, 0x74, //-48 ��
0x00, 0x00, 0xA4, 0x3B,
0x00, 0x00, 0xCE, 0xC1,
0x00, 0x01, 0x04, 0x49,
0x00, 0x01, 0x47, 0xAE,
0x00, 0x01, 0x9C, 0x86, //-38 �� - mute
0x00, 0x02, 0x07, 0x56,
0x00, 0x02, 0x8D, 0xC8,
0x00, 0x03, 0x37, 0x18,
0x00, 0x04, 0x0C, 0x37,
0x00, 0x05, 0x18, 0x84,
0x00, 0x06, 0x6A, 0x4A,
0x00, 0x08, 0x13, 0x85,
0x00, 0x0A, 0x2A, 0xDB,
0x00, 0x0C, 0xCC, 0xCD,
0x00, 0x10, 0x1D, 0x3F,
0x00, 0x14, 0x49, 0x61,
0x00, 0x19, 0x8A, 0x13,
0x00, 0x20, 0x26, 0xF3,
0x00, 0x28, 0x7A, 0x27,
0x00, 0x32, 0xF5, 0x2D,
0x00, 0x40, 0x26, 0xE7,
0x00, 0x50, 0xC3, 0x36,
0x00, 0x65, 0xAC, 0x8C,
0x00, 0x80, 0x00, 0x00, //0 ��
};

const uint8_t ADAU_VOLUME_STEP[] = 
{
  0x00, 0x00, 0x20, 0x00,
};

const uint8_t ADAU_VALUE_ONE[] = 
{
  0x00, 0x80, 0x00, 0x00,
};

const uint8_t ADAU_VALUE_ZERO[] = 
{
  0x00, 0x00, 0x00, 0x00,
};

const uint8_t ADAU_EQ_SHELF_120Hz[] = 
{//-10 dB
0x00 ,	0x7F ,	0x2C ,	0x48 ,	
0xFF ,	0x03 ,	0xC5 ,	0xC5 ,	
0x00 ,	0x7D ,	0x12 ,	0x6E ,	
0x00 ,	0xFC ,	0x35 ,	0x63 ,	
0xFF ,	0x83 ,	0xBC ,	0x73 ,	

0x00 ,	0x7F ,	0x41 ,	0xE3 ,	
0xFF ,	0x03 ,	0xAA ,	0xC4 ,	
0x00 ,	0x7D ,	0x18 ,	0x19 ,	
0x00 ,	0xFC ,	0x50 ,	0xEB ,	
0xFF ,	0x83 ,	0xA1 ,	0xB4 ,	

0x00 ,	0x7F ,	0x57 ,	0x59 ,	
0xFF ,	0x03 ,	0x90 ,	0x87 ,	
0x00 ,	0x7D ,	0x1D ,	0x28 ,	
0x00 ,	0xFC ,	0x6B ,	0xAC ,	
0xFF ,	0x83 ,	0x87 ,	0xB1 ,	

0x00 ,	0x7F ,	0x6C ,	0xAF ,	
0xFF ,	0x03 ,	0x77 ,	0x09 ,	
0x00 ,	0x7D ,	0x21 ,	0x9C ,	
0x00 ,	0xFC ,	0x85 ,	0xAA ,	
0xFF ,	0x83 ,	0x6E ,	0x67 ,	

0x00 ,	0x7F ,	0x81 ,	0xEA ,	
0xFF ,	0x03 ,	0x5E ,	0x45 ,	
0x00 ,	0x7D ,	0x25 ,	0x77 ,	
0x00 ,	0xFC ,	0x9E ,	0xEB ,	
0xFF ,	0x83 ,	0x55 ,	0xCF ,	

0x00 ,	0x7F ,	0x97 ,	0x0E ,	
0xFF ,	0x03 ,	0x46 ,	0x36 ,	
0x00 ,	0x7D ,	0x28 ,	0xB9 ,	
0x00 ,	0xFC ,	0xB7 ,	0x76 ,	
0xFF ,	0x83 ,	0x3D ,	0xE5 ,	

0x00 ,	0x7F ,	0xAC ,	0x1F ,	
0xFF ,	0x03 ,	0x2E ,	0xD7 ,	
0x00 ,	0x7D ,	0x2B ,	0x62 ,	
0x00 ,	0xFC ,	0xCF ,	0x4E ,	
0xFF ,	0x83 ,	0x26 ,	0xA5 ,	

0x00 ,	0x7F ,	0xC1 ,	0x22 ,	
0xFF ,	0x03 ,	0x18 ,	0x24 ,	
0x00 ,	0x7D ,	0x2D ,	0x73 ,	
0x00 ,	0xFC ,	0xE6 ,	0x79 ,	
0xFF ,	0x83 ,	0x10 ,	0x09 ,	

0x00 ,	0x7F ,	0xD6 ,	0x1A ,	
0xFF ,	0x03 ,	0x02 ,	0x18 ,	
0x00 ,	0x7D ,	0x2E ,	0xED ,	
0x00 ,	0xFC ,	0xFC ,	0xFC ,	
0xFF ,	0x82 ,	0xFA ,	0x0D ,	

0x00 ,	0x7F ,	0xEB ,	0x0E ,	
0xFF ,	0x02 ,	0xEC ,	0xAF ,	
0x00 ,	0x7D ,	0x2F ,	0xCF ,	
0x00 ,	0xFD ,	0x12 ,	0xDB ,	
0xFF ,	0x82 ,	0xE4 ,	0xAD ,	

0x00 ,	0x80 ,	0x00 ,	0x00 ,	
0xFF ,	0x02 ,	0xD7 ,	0xE4 ,	
0x00 ,	0x7D ,	0x30 ,	0x1B ,	
0x00 ,	0xFD ,	0x28 ,	0x1C ,	
0xFF ,	0x82 ,	0xCF ,	0xE5 ,	

0x00 ,	0x80 ,	0x14 ,	0xF6 ,	
0xFF ,	0x02 ,	0xC3 ,	0xB4 ,	
0x00 ,	0x7D ,	0x2F ,	0xCF ,	
0x00 ,	0xFD ,	0x3C ,	0xC2 ,	
0xFF ,	0x82 ,	0xBB ,	0xB1 ,	

0x00 ,	0x80 ,	0x29 ,	0xF3 ,	
0xFF ,	0x02 ,	0xB0 ,	0x1A ,	
0x00 ,	0x7D ,	0x2E ,	0xED ,	
0x00 ,	0xFD ,	0x50 ,	0xD2 ,	
0xFF ,	0x82 ,	0xA8 ,	0x0C ,	

0x00 ,	0x80 ,	0x3E ,	0xFD ,	
0xFF ,	0x02 ,	0x9D ,	0x13 ,	
0x00 ,	0x7D ,	0x2D ,	0x73 ,	
0x00 ,	0xFD ,	0x64 ,	0x51 ,	
0xFF ,	0x82 ,	0x94 ,	0xF3 ,	

0x00 ,	0x80 ,	0x54 ,	0x18 ,	
0xFF ,	0x02 ,	0x8A ,	0x9A ,	
0x00 ,	0x7D ,	0x2B ,	0x62 ,	
0x00 ,	0xFD ,	0x77 ,	0x42 ,	
0xFF ,	0x82 ,	0x82 ,	0x62 ,	

0x00 ,	0x80 ,	0x69 ,	0x48 ,	
0xFF ,	0x02 ,	0x78 ,	0xAD ,	
0x00 ,	0x7D ,	0x28 ,	0xB9 ,	
0x00 ,	0xFD ,	0x89 ,	0xA9 ,	
0xFF ,	0x82 ,	0x70 ,	0x55 ,	

0x00 ,	0x80 ,	0x7E ,	0x92 ,	
0xFF ,	0x02 ,	0x67 ,	0x47 ,	
0x00 ,	0x7D ,	0x25 ,	0x77 ,	
0x00 ,	0xFD ,	0x9B ,	0x8B ,	
0xFF ,	0x82 ,	0x5E ,	0xC9 ,	

0x00 ,	0x80 ,	0x93 ,	0xFB ,	
0xFF ,	0x02 ,	0x56 ,	0x66 ,	
0x00 ,	0x7D ,	0x21 ,	0x9C ,	
0x00 ,	0xFD ,	0xAC ,	0xEB ,	
0xFF ,	0x82 ,	0x4D ,	0xBA ,	

0x00 ,	0x80 ,	0xA9 ,	0x86 ,	
0xFF ,	0x02 ,	0x46 ,	0x05 ,	
0x00 ,	0x7D ,	0x1D ,	0x28 ,	
0x00 ,	0xFD ,	0xBD ,	0xCD ,	
0xFF ,	0x82 ,	0x3D ,	0x24 ,	

0x00 ,	0x80 ,	0xBF ,	0x39 ,	
0xFF ,	0x02 ,	0x36 ,	0x23 ,	
0x00 ,	0x7D ,	0x18 ,	0x19 ,	
0x00 ,	0xFD ,	0xCE ,	0x34 ,	
0xFF ,	0x82 ,	0x2D ,	0x05 ,	

0x00 ,	0x80 ,	0xD5 ,	0x19 ,	
0xFF ,	0x02 ,	0x26 ,	0xBB ,	
0x00 ,	0x7D ,	0x12 ,	0x6E ,	
0x00 ,	0xFD ,	0xDE ,	0x25 ,	
0xFF ,	0x82 ,	0x1D ,	0x59 ,	

0x00 ,	0x80 ,	0xEB ,	0x29 ,	
0xFF ,	0x02 ,	0x17 ,	0xCC ,	
0x00 ,	0x7D ,	0x0C ,	0x26 ,	
0x00 ,	0xFD ,	0xED ,	0xA1 ,	
0xFF ,	0x82 ,	0x0E ,	0x1D ,	
//12 dB
0x00 ,	0x81 ,	0x01 ,	0x70 ,	
0xFF ,	0x02 ,	0x09 ,	0x51 ,	
0x00 ,	0x7D ,	0x05 ,	0x41 ,	
0x00 ,	0xFD ,	0xFC ,	0xAD ,	
0xFF ,	0x81 ,	0xFF ,	0x4E ,	
};

const uint8_t ADAU_EQ_SHELF_5000Hz[] = 
{//-12dB
0x00 ,	0x34 ,	0x6A ,	0xCC ,	
0xFF ,	0xD2 ,	0xD3 ,	0x07 ,	
0x00 ,	0x10 ,	0x0B ,	0x32 ,	
0x00 ,	0xA8 ,	0x08 ,	0x59 ,	
0xFF ,	0xC0 ,	0xAE ,	0xA2 ,	

0x00 ,	0x39 ,	0x4A ,	0xA8 ,	
0xFF ,	0xCD ,	0x18 ,	0x15 ,	
0x00 ,	0x12 ,	0x08 ,	0x87 ,	
0x00 ,	0xA5 ,	0xAC ,	0x88 ,	
0xFF ,	0xC1 ,	0xE8 ,	0x34 ,	

0x00 ,	0x3E ,	0xA0 ,	0x5F ,	
0xFF ,	0xC6 ,	0xB5 ,	0x7A ,	
0x00 ,	0x14 ,	0x44 ,	0x0B ,	
0x00 ,	0xA3 ,	0x43 ,	0x03 ,	
0xFF ,	0xC3 ,	0x23 ,	0x1A ,	

0x00 ,	0x44 ,	0x77 ,	0x04 ,	
0xFF ,	0xBF ,	0x99 ,	0x50 ,	
0x00 ,	0x16 ,	0xC4 ,	0xF1 ,	
0x00 ,	0xA0 ,	0xCB ,	0xA6 ,	
0xFF ,	0xC4 ,	0x5F ,	0x14 ,	

0x00 ,	0x4A ,	0xDA ,	0xB3 ,	
0xFF ,	0xB7 ,	0xAF ,	0xEB ,	
0x00 ,	0x19 ,	0x93 ,	0x33 ,	
0x00 ,	0x9E ,	0x46 ,	0x51 ,	
0xFF ,	0xC5 ,	0x9B ,	0xDE ,	

0x00 ,	0x51 ,	0xD8 ,	0x9E ,	
0xFF ,	0xAE ,	0xE3 ,	0xA6 ,	
0x00 ,	0x1C ,	0xB7 ,	0xA5 ,	
0x00 ,	0x9B ,	0xB2 ,	0xE5 ,	
0xFF ,	0xC6 ,	0xD9 ,	0x31 ,	

0x00 ,	0x59 ,	0x7F ,	0x2F ,	
0xFF ,	0xA5 ,	0x1C ,	0xBC ,	
0x00 ,	0x20 ,	0x3C ,	0x0B ,	
0x00 ,	0x99 ,	0x11 ,	0x47 ,	
0xFF ,	0xC8 ,	0x16 ,	0xC4 ,	

0x00 ,	0x61 ,	0xDE ,	0x19 ,	
0xFF ,	0x9A ,	0x41 ,	0x0F ,	
0x00 ,	0x24 ,	0x2B ,	0x30 ,	
0x00 ,	0x96 ,	0x61 ,	0x5F ,	
0xFF ,	0xC9 ,	0x54 ,	0x49 ,	

0x00 ,	0x6B ,	0x06 ,	0x7D ,	
0xFF ,	0x8E ,	0x33 ,	0xF7 ,	
0x00 ,	0x28 ,	0x91 ,	0x02 ,	
0x00 ,	0x93 ,	0xA3 ,	0x1A ,	
0xFF ,	0xCA ,	0x91 ,	0x71 ,	

0x00 ,	0x75 ,	0x0B ,	0x04 ,	
0xFF ,	0x80 ,	0xD6 ,	0x07 ,	
0x00 ,	0x2D ,	0x7A ,	0xA9 ,	
0x00 ,	0x90 ,	0xD6 ,	0x65 ,	
0xFF ,	0xCB ,	0xCD ,	0xE8 ,	

0x00 ,	0x80 ,	0x00 ,	0x00 ,	
0xFF ,	0x72 ,	0x04 ,	0xCA ,	
0x00 ,	0x32 ,	0xF6 ,	0xA8 ,	
0x00 ,	0x8D ,	0xFB ,	0x36 ,	
0xFF ,	0xCD ,	0x09 ,	0x58 ,	

0x00 ,	0x8B ,	0xFB ,	0x93 ,	
0xFF ,	0x61 ,	0x9A ,	0x83 ,	
0x00 ,	0x39 ,	0x14 ,	0xFD ,	
0x00 ,	0x8B ,	0x11 ,	0x83 ,	
0xFF ,	0xCE ,	0x43 ,	0x6A ,	

0x00 ,	0x99 ,	0x15 ,	0xD2 ,	
0xFF ,	0x4F ,	0x6D ,	0xE0 ,	
0x00 ,	0x3F ,	0xE7 ,	0x43 ,	
0x00 ,	0x88 ,	0x19 ,	0x49 ,	
0xFF ,	0xCF ,	0x7B ,	0xC2 ,	

0x00 ,	0xA7 ,	0x68 ,	0xEF ,	
0xFF ,	0x3B ,	0x51 ,	0xAD ,	
0x00 ,	0x47 ,	0x80 ,	0xDB ,	
0x00 ,	0x85 ,	0x12 ,	0x88 ,	
0xFF ,	0xD0 ,	0xB2 ,	0x00 ,	

0x00 ,	0xB7 ,	0x11 ,	0x68 ,	
0xFF ,	0x25 ,	0x14 ,	0x7C ,	
0x00 ,	0x4F ,	0xF7 ,	0x0E ,	
0x00 ,	0x81 ,	0xFD ,	0x47 ,	
0xFF ,	0xD1 ,	0xE5 ,	0xC7 ,	

0x00 ,	0xC8 ,	0x2E ,	0x30 ,	
0xFF ,	0x0C ,	0x80 ,	0x4B ,	
0x00 ,	0x59 ,	0x61 ,	0x43 ,	
0x00 ,	0x7E ,	0xD9 ,	0x91 ,	
0xFF ,	0xD3 ,	0x16 ,	0xB2 ,	

0x00 ,	0xDA ,	0xE0 ,	0xEA ,	
0xFE ,	0xF1 ,	0x5A ,	0x22 ,	
0x00 ,	0x63 ,	0xD9 ,	0x24 ,	
0x00 ,	0x7B ,	0xA7 ,	0x74 ,	
0xFF ,	0xD4 ,	0x44 ,	0x5D ,	

0x00 ,	0xEF ,	0x4E ,	0x19 ,	
0xFE ,	0xD3 ,	0x61 ,	0xA4 ,	
0x00 ,	0x6F ,	0x7A ,	0xDA ,	
0x00 ,	0x78 ,	0x67 ,	0x07 ,	
0xFF ,	0xD5 ,	0x6E ,	0x62 ,	

0x01 ,	0x05 ,	0x9D ,	0x5E ,	
0xFE ,	0xB2 ,	0x50 ,	0xA3 ,	
0x00 ,	0x7C ,	0x65 ,	0x41 ,	
0x00 ,	0x75 ,	0x18 ,	0x66 ,	
0xFF ,	0xD6 ,	0x94 ,	0x58 ,	

0x01 ,	0x1D ,	0xF9 ,	0xB7 ,	
0xFE ,	0x8D ,	0xDA ,	0xA4 ,	
0x00 ,	0x8A ,	0xBA ,	0x1F ,	
0x00 ,	0x71 ,	0xBB ,	0xB0 ,	
0xFF ,	0xD7 ,	0xB5 ,	0xD6 ,	

0x01 ,	0x38 ,	0x91 ,	0xBB ,	
0xFE ,	0x65 ,	0xAC ,	0x58 ,	
0x00 ,	0x9A ,	0x9E ,	0x6D ,	
0x00 ,	0x6E ,	0x51 ,	0x0E ,	
0xFF ,	0xD8 ,	0xD2 ,	0x72 ,	

0x01 ,	0x55 ,	0x97 ,	0xED ,	
0xFE ,	0x39 ,	0x6B ,	0x16 ,	
0x00 ,	0xAC ,	0x3A ,	0x92 ,	
0x00 ,	0x6A ,	0xD8 ,	0xAD ,	
0xFF ,	0xD9 ,	0xE9 ,	0xBF ,	
//12 dB
0x01 ,	0x75 ,	0x42 ,	0xFC ,	
0xFE ,	0x08 ,	0xB4 ,	0x42 ,	
0x00 ,	0xBF ,	0xBA ,	0xB1 ,	
0x00 ,	0x67 ,	0x52 ,	0xBF ,	
0xFF ,	0xDA ,	0xFB ,	0x52 ,	
};

const uint8_t ADAU_EQ_125HZ[] = 
{
  //-15 dB
  0x00, 0x7E, 0x92, 0x5B, //B0
  0x0F, 0x03, 0x82, 0x1D, //B1
  0x00, 0x7D, 0xF4, 0x30, //B2
  0x00, 0xFC, 0x7D, 0xE3, //A1
  0x0F, 0x83, 0x79, 0x75, //A2
  //-14 dB
  0x00, 0x7E, 0xAF, 0xAA,
  0x0F, 0x03, 0x51, 0x00,
  0x00, 0x7E, 0x07, 0xFF,
  0x00, 0xFC, 0xAF, 0x00,
  0x0F, 0x83, 0x48, 0x57,
  
  0x00, 0x7E, 0xCB, 0xEA,
  0x0F, 0x03, 0x22, 0x92,
  0x00, 0x7E, 0x1A, 0x2F,
  0x00, 0xFC, 0xDD, 0x6E,
  0x0F, 0x83, 0x19, 0xE7,
  
  0x00, 0x7E, 0xE7, 0x32,
  0x0F, 0x02, 0xF6, 0xAC,
  0x00, 0x7E, 0x2A, 0xCE,
  0x00, 0xFD, 0x09, 0x54,
  0x0F, 0x82, 0xEE, 0x00,
  
  0x00, 0x7F, 0x01, 0x97,
  0x0F, 0x02, 0xCD, 0x2D,
  0x00, 0x7E, 0x39, 0xE9,
  0x00, 0xFD, 0x32, 0xD3,
  0x0F, 0x82, 0xC4, 0x80,
  
  0x00, 0x7F, 0x1B, 0x2F,
  0x0F, 0x02, 0xA5, 0xF4,
  0x00, 0x7E, 0x47, 0x8B,
  0x00, 0xFD, 0x5A, 0x0C,
  0x0F, 0x82, 0x9D, 0x45,
  
  0x00, 0x7F, 0x34, 0x0F,
  0x0F, 0x02, 0x80, 0xE2,
  0x00, 0x7E, 0x53, 0xBF,
  0x00, 0xFD, 0x7F, 0x1E,
  0x0F, 0x82, 0x78, 0x32,
  
  0x00, 0x7F, 0x4C, 0x4A,
  0x0F, 0x02, 0x5D, 0xD8,
  0x00, 0x7E, 0x5E, 0x8F,
  0x00, 0xFD, 0xA2, 0x28,
  0x0F, 0x82, 0x55, 0x27,
  
  0x00, 0x7F, 0x63, 0xF4,
  0x0F, 0x02, 0x3C, 0xBB,
  0x00, 0x7E, 0x68, 0x03,
  0x00, 0xFD, 0xC3, 0x45,
  0x0F, 0x82, 0x34, 0x09,
  
  0x00, 0x7F, 0x7B, 0x22,
  0x0F, 0x02, 0x1D, 0x71,
  0x00, 0x7E, 0x70, 0x21,
  0x00, 0xFD, 0xE2, 0x8F,
  0x0F, 0x82, 0x14, 0xBD,
  
  0x00, 0x7F, 0x91, 0xE4,
  0x0F, 0x01, 0xFF, 0xE0,
  0x00, 0x7E, 0x76, 0xF1,
  0x00, 0xFE, 0x00, 0x20,
  0x0F, 0x81, 0xF7, 0x2B,
  
  0x00, 0x7F, 0xA8, 0x50,
  0x0F, 0x01, 0xE3, 0xEF,
  0x00, 0x7E, 0x7C, 0x77,
  0x00, 0xFE, 0x1C, 0x11,
  0x0F, 0x81, 0xDB, 0x3A,
  
  0x00, 0x7F, 0xBE, 0x76,
  0x0F, 0x01, 0xC9, 0x89,
  0x00, 0x7E, 0x80, 0xB8,
  0x00, 0xFE, 0x36, 0x77,
  0x0F, 0x81, 0xC0, 0xD3,
  
  0x00, 0x7F, 0xD4, 0x69,
  0x0F, 0x01, 0xB0, 0x98,
  0x00, 0x7E, 0x83, 0xB6,
  0x00, 0xFE, 0x4F, 0x68,
  0x0F, 0x81, 0xA7, 0xE1,
  
  //-1 dB
  0x00, 0x7F, 0xEA, 0x3C,
  0x0F, 0x01, 0x99, 0x08,
  0x00, 0x7E, 0x85, 0x74,
  0x00, 0xFE, 0x66, 0xF8,
  0x0F, 0x81, 0x90, 0x50,
  
  // 0 dB
  0x00, 0x80, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  
  // 1 dB
  0x00, 0x80, 0x15, 0xC8,
  0x0F, 0x01, 0x6D, 0xBE,
  0x00, 0x7E, 0x85, 0x34,
  0x00, 0xFE, 0x92, 0x42,
  0x0F, 0x81, 0x65, 0x04,
  
  0x00, 0x80, 0x2B, 0xA6,
  0x0F, 0x01, 0x59, 0xE0,
  0x00, 0x7E, 0x83, 0x34,
  0x00, 0xFE, 0xA6, 0x20,
  0x0F, 0x81, 0x51, 0x26,
  
  0x00, 0x80, 0x41, 0xAC,
  0x0F, 0x01, 0x47, 0x1C,
  0x00, 0x7E, 0x7F, 0xF3,
  0x00, 0xFE, 0xB8, 0xE4,
  0x0F, 0x81, 0x3E, 0x61,
  
  0x00, 0x80, 0x57, 0xED,
  0x0F, 0x01, 0x35, 0x62,
  0x00, 0x7E, 0x7B, 0x6D,
  0x00, 0xFE, 0xCA, 0x9E,
  0x0F, 0x81, 0x2C, 0xA7,
  
  0x00, 0x80, 0x6E, 0x7B,
  0x0F, 0x01, 0x24, 0xA4,
  0x00, 0x7E, 0x75, 0x9D,
  0x00, 0xFE, 0xDB, 0x5C,
  0x0F, 0x81, 0x1B, 0xE8,
  
  0x00, 0x80, 0x85, 0x69,
  0x0F, 0x01, 0x14, 0xD4,
  0x00, 0x7E, 0x6E, 0x80,
  0x00, 0xFE, 0xEB, 0x2C,
  0x0F, 0x81, 0x0C, 0x17,
  
  0x00, 0x80, 0x9C, 0xCB,
  0x0F, 0x01, 0x05, 0xE4,
  0x00, 0x7E, 0x66, 0x0F,
  0x00, 0xFE, 0xFA, 0x1C,
  0x0F, 0x80, 0xFD, 0x27,
  
  0x00, 0x80, 0xB4, 0xB4,
  0x0F, 0x00, 0xF7, 0xC8,
  0x00, 0x7E, 0x5C, 0x42,
  0x00, 0xFF, 0x08, 0x38,
  0x0F, 0x80, 0xEF, 0x0B,
  
  0x00, 0x80, 0xCD, 0x38,
  0x0F, 0x00, 0xEA, 0x75,
  0x00, 0x7E, 0x51, 0x11,
  0x00, 0xFF, 0x15, 0x8B,
  0x0F, 0x80, 0xE1, 0xB7,
  
  0x00, 0x80, 0xE6, 0x6C,
  0x0F, 0x00, 0xDD, 0xE0,
  0x00, 0x7E, 0x44, 0x72,
  0x00, 0xFF, 0x22, 0x20,
  0x0F, 0x80, 0xD5, 0x21,
  
  0x00, 0x81, 0x00, 0x66,
  0x0F, 0x00, 0xD1, 0xFE,
  0x00, 0x7E, 0x36, 0x5B,
  0x00, 0xFF, 0x2E, 0x02,
  0x0F, 0x80, 0xC9, 0x3F,
  
  0x00, 0x81, 0x1B, 0x3B,
  0x0F, 0x00, 0xC6, 0xC4,
  0x00, 0x7E, 0x26, 0xC0,
  0x00, 0xFF, 0x39, 0x3C,
  0x0F, 0x80, 0xBE, 0x05,
  
  0x00, 0x81, 0x37, 0x02,
  0x0F, 0x00, 0xBC, 0x2B,
  0x00, 0x7E, 0x15, 0x92,
  0x00, 0xFF, 0x43, 0xD5,
  0x0F, 0x80, 0xB3, 0x6B,
  
  0x00, 0x81, 0x53, 0xD3,
  0x0F, 0x00, 0xB2, 0x29,
  0x00, 0x7E, 0x02, 0xC5,
  0x00, 0xFF, 0x4D, 0xD7,
  0x0F, 0x80, 0xA9, 0x69,
  // 15dB
  0x00, 0x81, 0x71, 0xC5,
  0x0F, 0x00, 0xA8, 0xB5,
  0x00, 0x7D, 0xEE, 0x46,
  0x00, 0xFF, 0x57, 0x4B,
  0x0F, 0x80, 0x9F, 0xF5,
  
};

const uint8_t ADAU_EQ_500HZ[] = 
{
  //-15 dB
  0x00, 0x7A, 0x83, 0x89, //B0
  0x0F, 0x0D, 0xDD, 0x79, //B1
  0x00, 0x78, 0x23, 0xFE, //B2
  0x00, 0xF2, 0x22, 0x87, //A1
  0x0F, 0x8D, 0x58, 0x78, //A2
  //-14 dB
  0x00, 0x7A, 0xF1, 0x51,
  0x0F, 0x0D, 0x28, 0x2E,
  0x00, 0x78, 0x6B, 0xE5, 
  0x00, 0xF2, 0xD7, 0xD2, 
  0x0F, 0x8C, 0xA2, 0xCA,  
  
  0x00, 0x7B, 0x5B, 0xA2,
  0x0F, 0x0C, 0x7C, 0x0E,
  0x00, 0x78, 0xAE, 0x13,
  0x00, 0xF3, 0x83, 0xF2,
  0x0F, 0x8B, 0xF6, 0x4B,
  
  0x00, 0x7B, 0xC2, 0xC3,
  0x0F, 0x0B, 0xD8, 0xAE,
  0x00, 0x78, 0xEA, 0xAC,
  0x00, 0xF4, 0x27, 0x52,
  0x0F, 0x8B, 0x52, 0x91,
  
  0x00, 0x7C, 0x26, 0xF7,
  0x0F, 0x0B, 0x3D, 0xA8,
  0x00, 0x79, 0x21, 0xD3,
  0x00, 0xF4, 0xC2, 0x58,
  0x0F, 0x8A, 0xB7, 0x36,
  
  0x00, 0x7C, 0x88, 0x85,
  0x0F, 0x0A, 0xAA, 0x99,
  0x00, 0x79, 0x53, 0xA5,
  0x00, 0xF5, 0x55, 0x67,
  0x0F, 0x8A, 0x23, 0xD6,
  
  0x00, 0x7C, 0xE7, 0xB0,
  0x0F, 0x0A, 0x1F, 0x21,
  0x00, 0x79, 0x80, 0x3E,
  0x00, 0xF5, 0xE0, 0xDF,
  0x0F, 0x89, 0x98, 0x12,
  
  0x00, 0x7D, 0x44, 0xBC,
  0x0F, 0x09, 0x9A, 0xE5,
  0x00, 0x79, 0xA7, 0xB7,
  0x00, 0xF6, 0x65, 0x1B,
  0x0F, 0x89, 0x13, 0x8D,
  
  0x00, 0x7D, 0x9F, 0xED,
  0x0F, 0x09, 0x1D, 0x8B,
  0x00, 0x79, 0xCA, 0x25,
  0x00, 0xF6, 0xE2, 0x75,
  0x0F, 0x88, 0x95, 0xEF,
  
  0x00, 0x7D, 0xF9, 0x83,
  0x0F, 0x08, 0xA6, 0xC0,
  0x00, 0x79, 0xE7, 0x9B,
  0x00, 0xF7, 0x59, 0x40,
  0x0F, 0x88, 0x1E, 0xE2,
  
  0x00, 0x7E, 0x51, 0xC4,
  0x0F, 0x08, 0x36, 0x30,
  0x00, 0x7A, 0x00, 0x28,
  0x00, 0xF7, 0xC9, 0xD0,
  0x0F, 0x87, 0xAE, 0x14,
  
  0x00, 0x7E, 0xA8, 0xEF,
  0x0F, 0x07, 0xCB, 0x8E,
  0x00, 0x7A, 0x13, 0xD9,
  0x00, 0xF8, 0x34, 0x72,
  0x0F, 0x87, 0x43, 0x38,
  
  0x00, 0x7E, 0xFF, 0x49,
  0x0F, 0x07, 0x66, 0x8F,
  0x00, 0x7A, 0x22, 0xB6,
  0x00, 0xF8, 0x99, 0x71,
  0x0F, 0x86, 0xDE, 0x01,
  
  0x00, 0x7F, 0x55, 0x12,
  0x0F, 0x07, 0x06, 0xEB,
  0x00, 0x7A, 0x2C, 0xC5,
  0x00, 0xF8, 0xF9, 0x15,
  0x0F, 0x86, 0x7E, 0x29,
  //-1 dB
  0x00, 0x7F, 0xAA, 0x8E,
  0x0F, 0x06, 0xAC, 0x5D,
  0x00, 0x7A, 0x32, 0x09,
  0x00, 0xF9, 0x53, 0xA3,
  0x0F, 0x86, 0x23, 0x69,
  //0 dB
  0x00, 0x80, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  //1 dB
  0x00, 0x80, 0x55, 0xAB,
  0x0F, 0x06, 0x05, 0x7E,
  0x00, 0x7A, 0x2E, 0x27,
  0x00, 0xF9, 0xFA, 0x82,
  0x0F, 0x85, 0x7C, 0x2E,
  
  0x00, 0x80, 0xAB, 0xD3,
  0x0F, 0x05, 0xB8, 0xB3,
  0x00, 0x7A, 0x24, 0xF4,
  0x00, 0xFA, 0x47, 0x4D,
  0x0F, 0x85, 0x2F, 0x39,
  
  0x00, 0x81, 0x02, 0xBE,
  0x0F, 0x05, 0x70, 0x08,
  0x00, 0x7A, 0x16, 0xDB,
  0x00, 0xFA, 0x8F, 0xF8,
  0x0F, 0x84, 0xE6, 0x66,
  
  0x00, 0x81, 0x5A, 0xB2,
  0x0F, 0x05, 0x2B, 0x47,
  0x00, 0x7A, 0x03, 0xCE,
  0x00, 0xFA, 0xD4, 0xB9,
  0x0F, 0x84, 0xA1, 0x80,
  
  0x00, 0x81, 0xB3, 0xF6,
  0x0F, 0x04, 0xEA, 0x3C,
  0x00, 0x79, 0xEB, 0xB9,
  0x00, 0xFB, 0x15, 0xC4,
  0x0F, 0x84, 0x60, 0x51,
  
  0x00, 0x82, 0x0E, 0xD2,
  0x0F, 0x04, 0xAC, 0xB6,
  0x00, 0x79, 0xCE, 0x85,
  0x00, 0xFB, 0x53, 0x4A,
  0x0F, 0x84, 0x22, 0xA9,
  
  0x00, 0x82, 0x6B, 0x93,
  0x0F, 0x04, 0x72, 0x85,
  0x00, 0x79, 0xAC, 0x15,
  0x00, 0xFB, 0x8D, 0x7B,
  0x0F, 0x83, 0xE8, 0x58,
  
  0x00, 0x82, 0xCA, 0x83,
  0x0F, 0x04, 0x3B, 0x7C,
  0x00, 0x79, 0x84, 0x4C,
  0x00, 0xFB, 0xC4, 0x84,
  0x0F, 0x83, 0xB1, 0x31,
  
  0x00, 0x83, 0x2B, 0xF2,
  0x0F, 0x04, 0x07, 0x72,
  0x00, 0x79, 0x57, 0x04,
  0x00, 0xFB, 0xF8, 0x8E,
  0x0F, 0x83, 0x7D, 0x0A,
  
  0x00, 0x83, 0x90, 0x30,
  0x0F, 0x03, 0xD6, 0x3D,
  0x00, 0x79, 0x24, 0x16,
  0x00, 0xFC, 0x29, 0xC3,
  0x0F, 0x83, 0x4B, 0xBA,
  
  0x00, 0x83, 0xF7, 0x90,
  0x0F, 0x03, 0xA7, 0xB7,
  0x00, 0x78, 0xEB, 0x55,
  0x00, 0xFC, 0x58, 0x49,
  0x0F, 0x83, 0x1D, 0x1A,

  0x00, 0x84, 0x62, 0x6A,
  0x0F, 0x03, 0x7B, 0xBB,
  0x00, 0x78, 0xAC, 0x8F,
  0x00, 0xFC, 0x84, 0x45,
  0x0F, 0x82, 0xF1, 0x07,
  
  0x00, 0x84, 0xD1, 0x16,
  0x0F, 0x03, 0x52, 0x28,
  0x00, 0x78, 0x67, 0x8E,
  0x00, 0xFC, 0xAD, 0xD8,
  0x0F, 0x82, 0xC7, 0x5C,
  
  0x00, 0x85, 0x43, 0xF1,
  0x0F, 0x03, 0x2A, 0xDB,
  0x00, 0x78, 0x1C, 0x16,
  0x00, 0xFC, 0xD5, 0x25,
  0x0F, 0x82, 0x9F, 0xFA,
  // 15 dB
  0x00, 0x85, 0xBB, 0x5B,
  0x0F, 0x03, 0x05, 0xB5,
  0x00, 0x77, 0xC9, 0xE5,
  0x00, 0xFC, 0xFA, 0x4B,
  0x0F, 0x82, 0x7A, 0xC0,
};

const uint8_t ADAU_EQ_1080HZ[] = 
{
  //-15 dB
  0x00, 0x74, 0xDA, 0x0A, //B0
  0x0F, 0x1D, 0x67, 0x0A, //B1
  0x00, 0x70, 0x07, 0x79, //B2
  0x00, 0xE2, 0x98, 0xF6, //A1
  0x0F, 0x9B, 0x1E, 0x7D, //A2
  //-14 dB
  0x00, 0x75, 0xB1, 0x28,
  0x0F, 0x1C, 0x0D, 0x3C,
  0x00, 0x70, 0x8D, 0xA4,
  0x00, 0xE3, 0xF2, 0xC4,
  0x0F, 0x99, 0xC1, 0x34,
  
  0x00, 0x76, 0x82, 0xDF,
  0x0F, 0x1A, 0xC2, 0xF9,
  0x00, 0x71, 0x09, 0x85,
  0x00, 0xE5, 0x3D, 0x07,
  0x0F, 0x98, 0x73, 0x9D,
  
  0x00, 0x77, 0x4F, 0x95,
  0x0F, 0x19, 0x87, 0xBD,
  0x00, 0x71, 0x7B, 0x38,
  0x00, 0xE6, 0x78, 0x43,
  0x0F, 0x97, 0x35, 0x33,
  
  0x00, 0x78, 0x17, 0xB4,
  0x0F, 0x18, 0x5B, 0x03,
  0x00, 0x71, 0xE2, 0xDB,
  0x00, 0xE7, 0xA4, 0xFD,
  0x0F, 0x96, 0x05, 0x71,
  
  0x00, 0x78, 0xDB, 0xA7,
  0x0F, 0x17, 0x3C, 0x47,
  0x00, 0x72, 0x40, 0x86,
  0x00, 0xE8, 0xC3, 0xB9,
  0x0F, 0x94, 0xE3, 0xD2,
  
  0x00, 0x79, 0x9B, 0xDD,
  0x0F, 0x16, 0x2B, 0x08,
  0x00, 0x72, 0x94, 0x51,
  0x00, 0xE9, 0xD4, 0xF8,
  0x0F, 0x93, 0xCF, 0xD2,
  
  0x00, 0x7A, 0x58, 0xC5,
  0x0F, 0x15, 0x26, 0xC2,
  0x00, 0x72, 0xDE, 0x4E,
  0x00, 0xEA, 0xD9, 0x3E,
  0x0F, 0x92, 0xC8, 0xED,
  
  0x00, 0x7B, 0x12, 0xD1,
  0x0F, 0x14, 0x2E, 0xF6,
  0x00, 0x73, 0x1E, 0x8D,
  0x00, 0xEB, 0xD1, 0x0A,
  0x0F, 0x91, 0xCE, 0xA1,
  
  0x00, 0x7B, 0xCA, 0x75,
  0x0F, 0x13, 0x43, 0x25,
  0x00, 0x73, 0x55, 0x1C,
  0x00, 0xEC, 0xBC, 0xDB,
  0x0F, 0x90, 0xE0, 0x70,
  
  0x00, 0x7C, 0x80, 0x25,
  0x0F, 0x12, 0x62, 0xD2,
  0x00, 0x73, 0x82, 0x01,
  0x00, 0xED, 0x9D, 0x2E,
  0x0F, 0x8F, 0xFD, 0xDA,
  
  0x00, 0x7D, 0x34, 0x5A,
  0x0F, 0x11, 0x8D, 0x84,
  0x00, 0x73, 0xA5, 0x40,
  0x00, 0xEE, 0x72, 0x7C,
  0x0F, 0x8F, 0x26, 0x66,
  
  0x00, 0x7D, 0xE7, 0x8E,
  0x0F, 0x10, 0xC2, 0xC4,
  0x00, 0x73, 0xBE, 0xD7,
  0x00, 0xEF, 0x3D, 0x3C,
  0x0F, 0x8E, 0x59, 0x9B,
  
  0x00, 0x7E, 0x9A, 0x3B,
  0x0F, 0x10, 0x02, 0x1E,
  0x00, 0x73, 0xCE, 0xC1,
  0x00, 0xEF, 0xFD, 0xE2,
  0x0F, 0x8D, 0x97, 0x04,
  
  0x00, 0x7F, 0x4C, 0xE1,
  0x0F, 0x0F, 0x4B, 0x21,
  0x00, 0x73, 0xD4, 0xEF,
  0x00, 0xF0, 0xB4, 0xDF,
  0x0F, 0x8C, 0xDE, 0x2F,
  // 0 dB
  0x00, 0x80, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  // 1 dB
  0x00, 0x80, 0xB4, 0x1B,
  0x0F, 0x0D, 0xF8, 0x71,
  0x00, 0x73, 0xC3, 0xD0,
  0x00, 0xF2, 0x07, 0x8F,
  0x0F, 0x8B, 0x88, 0x15,
  
  0x00, 0x81, 0x69, 0xB8,
  0x0F, 0x0D, 0x5B, 0xEC,
  0x00, 0x73, 0xAC, 0x4C,
  0x00, 0xF2, 0xA4, 0x14,
  0x0F, 0x8A, 0xE9, 0xFC,
  
  0x00, 0x82, 0x21, 0x60,
  0x0F, 0x0C, 0xC7, 0x6E,
  0x00, 0x73, 0x8A, 0xA1,
  0x00, 0xF3, 0x38, 0x92,
  0x0F, 0x8A, 0x53, 0xFF,
  
  0x00, 0x82, 0xDB, 0xA0,
  0x0F, 0x0C, 0x3A, 0x98,
  0x00, 0x73, 0x5E, 0xA2,
  0x00, 0xF3, 0xC5, 0x68,
  0x0F, 0x89, 0xC5, 0xBE,
  
  0x00, 0x83, 0x99, 0x09,
  0x0F, 0x0B, 0xB5, 0x0C,
  0x00, 0x73, 0x28, 0x1D,
  0x00, 0xF4, 0x4A, 0xF4,
  0x0F, 0x89, 0x3E, 0xDA,
  
  0x00, 0x84, 0x5A, 0x2F,
  0x0F, 0x0B, 0x36, 0x72,
  0x00, 0x72, 0xE6, 0xD8,
  0x00, 0xF4, 0xC9, 0x8E,
  0x0F, 0x88, 0xBE, 0xF9,
  
  0x00, 0x85, 0x1F, 0xAB,
  0x0F, 0x0A, 0xBE, 0x75,
  0x00, 0x72, 0x9A, 0x8F,
  0x00, 0xF5, 0x41, 0x8B,
  0x0F, 0x88, 0x45, 0xC6,
  
  0x00, 0x85, 0xEA, 0x1A,
  0x0F, 0x0A, 0x4C, 0xC2,
  0x00, 0x72, 0x42, 0xF8,
  0x00, 0xF5, 0xB3, 0x3E,
  0x0F, 0x87, 0xD2, 0xEE,
  
  0x00, 0x86, 0xBA, 0x1F,
  0x0F, 0x09, 0xE1, 0x0A,
  0x00, 0x71, 0xDF, 0xC1,
  0x00, 0xF6, 0x1E, 0xF6,
  0x0F, 0x87, 0x66, 0x20,
  
  0x00, 0x87, 0x90, 0x64,
  0x0F, 0x09, 0x7B, 0x02,
  0x00, 0x71, 0x70, 0x8C,
  0x00, 0xF6, 0x84, 0xFE,
  0x0F, 0x86, 0xFF, 0x11,
  
  0x00, 0x88, 0x6D, 0x96,
  0x0F, 0x09, 0x1A, 0x61,
  0x00, 0x70, 0xF4, 0xF3,
  0x00, 0xF6, 0xE5, 0x9F,
  0x0F, 0x86, 0x9D, 0x77,
  
  0x00, 0x89, 0x52, 0x6B,
  0x0F, 0x08, 0xBE, 0xE2,
  0x00, 0x70, 0x6C, 0x89,
  0x00, 0xF7, 0x41, 0x1E,
  0x0F, 0x86, 0x41, 0x0C,
  
  0x00, 0x8A, 0x3F, 0x9F,
  0x0F, 0x08, 0x68, 0x44,
  0x00, 0x6F, 0xD6, 0xD3,
  0x00, 0xF7, 0x97, 0xBC,
  0x0F, 0x85, 0xE9, 0x8E,
  
  0x00, 0x8B, 0x35, 0xF7,
  0x0F, 0x08, 0x16, 0x46,
  0x00, 0x6F, 0x33, 0x4D,
  0x00, 0xF7, 0xE9, 0xBA,
  0x0F, 0x85, 0x96, 0xBC,
  //15 dB
  0x00, 0x8C, 0x36, 0x3E,
  0x0F, 0x07, 0xC8, 0xAC,
  0x00, 0x6E, 0x81, 0x67,
  0x00, 0xF8, 0x37, 0x54,
  0x0F, 0x85, 0x48, 0x5A,  
};

const uint8_t ADAU_EQ_2000HZ[] = 
{
  //-15 dB
  0x00, 0x6D, 0x30, 0x86, //B0
  0x0F, 0x34, 0xEB, 0xFA, //B1
  0x00, 0x65, 0x0D, 0x70, //B2
  0x00, 0xCB, 0x14, 0x06, //A1
  0x0F, 0xAD, 0xC2, 0x0A, //A2
  //-14 dB
  0x00, 0x6E, 0x89, 0x2C,
  0x0F, 0x32, 0xDE, 0xEB,
  0x00, 0x65, 0xD4, 0x5F,
  0x00, 0xCD, 0x21, 0x15,
  0x0F, 0xAB, 0xA2, 0x75,
  
  0x00, 0x6F, 0xDC, 0x3E,
  0x0F, 0x30, 0xE5, 0x66,
  0x00, 0x66, 0x8C, 0xA7,
  0x00, 0xCF, 0x1A, 0x9A,
  0x0F, 0xA9, 0x97, 0x1B,
  
  0x00, 0x71, 0x2A, 0x24,
  0x0F, 0x2E, 0xFF, 0x26,
  0x00, 0x67, 0x36, 0x28,
  0x00, 0xD1, 0x00, 0xDA,
  0x0F, 0xA7, 0x9F, 0xB4,
  
  0x00, 0x72, 0x73, 0x50,
  0x0F, 0x2D, 0x2B, 0xD8,
  0x00, 0x67, 0xD0, 0xC7,
  0x00, 0xD2, 0xD4, 0x28,
  0x0F, 0xA5, 0xBB, 0xE9,
  
  0x00, 0x73, 0xB8, 0x3C,
  0x0F, 0x2B, 0x6B, 0x20,
  0x00, 0x68, 0x5C, 0x67,
  0x00, 0xD4, 0x94, 0xE0,
  0x0F, 0xA3, 0xEB, 0x5D,
  
  0x00, 0x74, 0xF9, 0x6B,
  0x0F, 0x29, 0xBC, 0x9B,
  0x00, 0x68, 0xD8, 0xED,
  0x00, 0xD6, 0x43, 0x65,
  0x0F, 0xA2, 0x2D, 0xA8,
  
  0x00, 0x76, 0x37, 0x6A,
  0x0F, 0x28, 0x1F, 0xDF,
  0x00, 0x69, 0x46, 0x39,
  0x00, 0xD7, 0xE0, 0x21,
  0x0F, 0xA0, 0x82, 0x5D,
  
  0x00, 0x77, 0x72, 0xCC,
  0x0F, 0x26, 0x94, 0x7C,
  0x00, 0x69, 0xA4, 0x2D,
  0x00, 0xD9, 0x6B, 0x84,
  0x0F, 0x9E, 0xE9, 0x07,
  
  0x00, 0x78, 0xAC, 0x2B,
  0x0F, 0x25, 0x19, 0xFD,
  0x00, 0x69, 0xF2, 0xA6,
  0x00, 0xDA, 0xE6, 0x03,
  0x0F, 0x9D, 0x61, 0x2E,
  
  0x00, 0x79, 0xE4, 0x2C,
  0x0F, 0x23, 0xAF, 0xE9,
  0x00, 0x6A, 0x31, 0x7F,
  0x00, 0xDC, 0x50, 0x17,
  0x0F, 0x9B, 0xEA, 0x55,
  
  0x00, 0x7B, 0x1B, 0x79,
  0x0F, 0x22, 0x55, 0xC4,
  0x00, 0x6A, 0x60, 0x8D,
  0x00, 0xDD, 0xAA, 0x3C,
  0x0F, 0x9A, 0x83, 0xFA,
  
  0x00, 0x7C, 0x52, 0xC4,
  0x0F, 0x21, 0x0B, 0x11,
  0x00, 0x6A, 0x7F, 0xA0,
  0x00, 0xDE, 0xF4, 0xEF,
  0x0F, 0x99, 0x2D, 0x9C,
  
  0x00, 0x7D, 0x8A, 0xC7,
  0x0F, 0x1F, 0xCF, 0x4E,
  0x00, 0x6A, 0x8E, 0x83,
  0x00, 0xE0, 0x30, 0xB2,
  0x0F, 0x97, 0xE6, 0xB6,
  // -1 dB
  0x00, 0x7E, 0xC4, 0x43,
  0x0F, 0x1E, 0xA1, 0xFD,
  0x00, 0x6A, 0x8C, 0xFA,
  0x00, 0xE1, 0x5E, 0x03,
  0x0F, 0x96, 0xAE, 0xC3,
  // 0 dB
  0x00, 0x80, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  // 1 dB
  0x00, 0x81, 0x3E, 0xD0,
  0x0F, 0x1C, 0x70, 0xA9,
  0x00, 0x6A, 0x57, 0x8E,
  0x00, 0xE3, 0x8F, 0x57,
  0x0F, 0x94, 0x69, 0xA3,
  
  0x00, 0x82, 0x81, 0x8B,
  0x0F, 0x1B, 0x6B, 0xA7,
  0x00, 0x6A, 0x23, 0x09,
  0x00, 0xE4, 0x94, 0x59,
  0x0F, 0x93, 0x5B, 0x6C,
  
  0x00, 0x83, 0xC9, 0x12,
  0x0F, 0x1A, 0x73, 0x18,
  0x00, 0x69, 0xDC, 0xD7,
  0x00, 0xE5, 0x8C, 0xE8,
  0x0F, 0x92, 0x5A, 0x17,
  
  0x00, 0x85, 0x16, 0x4E,
  0x0F, 0x19, 0x86, 0x7D,
  0x00, 0x69, 0x84, 0x8D,
  0x00, 0xE6, 0x79, 0x83,
  0x0F, 0x91, 0x65, 0x24,
  
  0x00, 0x86, 0x6A, 0x33,
  0x0F, 0x18, 0xA5, 0x5E,
  0x00, 0x69, 0x19, 0xB9,
  0x00, 0xE7, 0x5A, 0xA2,
  0x0F, 0x90, 0x7C, 0x14,
  
  0x00, 0x87, 0xC5, 0xBC,
  0x0F, 0x17, 0xCF, 0x41,
  0x00, 0x68, 0x9B, 0xDA,
  0x00, 0xE8, 0x30, 0xBF,
  0x0F, 0x8F, 0x9E, 0x6A,
  
  0x00, 0x89, 0x29, 0xEF,
  0x0F, 0x17, 0x03, 0xB2,
  0x00, 0x68, 0x0A, 0x65,
  0x00, 0xE8, 0xFC, 0x4E,
  0x0F, 0x8E, 0xCB, 0xAC,
  
  0x00, 0x8A, 0x97, 0xDD,
  0x0F, 0x16, 0x42, 0x3D,
  0x00, 0x67, 0x64, 0xBF,
  0x00, 0xE9, 0xBD, 0xC3,
  0x0F, 0x8E, 0x03, 0x64,
  
  0x00, 0x8C, 0x10, 0xA1,
  0x0F, 0x15, 0x8A, 0x73,
  0x00, 0x66, 0xAA, 0x41,
  0x00, 0xEA, 0x75, 0x8D,
  0x0F, 0x8D, 0x45, 0x1E,
  
  0x00, 0x8D, 0x95, 0x63,
  0x0F, 0x14, 0xDB, 0xE7,
  0x00, 0x65, 0xDA, 0x33,
  0x00, 0xEB, 0x24, 0x19,
  0x0F, 0x8C, 0x90, 0x6A,
  
  0x00, 0x8F, 0x27, 0x57,
  0x0F, 0x14, 0x36, 0x2F,
  0x00, 0x64, 0xF3, 0xD0,
  0x00, 0xEB, 0xC9, 0xD1,
  0x0F, 0x8B, 0xE4, 0xD9,
  
  0x00, 0x90, 0xC7, 0xBE,
  0x0F, 0x13, 0x98, 0xE5,
  0x00, 0x63, 0xF6, 0x3F,
  0x00, 0xEC, 0x67, 0x1B,
  0x0F, 0x8B, 0x42, 0x03,
  
  0x00, 0x92, 0x77, 0xE8,
  0x0F, 0x13, 0x03, 0xA7,
  0x00, 0x62, 0xE0, 0x97,
  0x00, 0xEC, 0xFC, 0x59,
  0x0F, 0x8A, 0xA7, 0x81,
  
  0x00, 0x94, 0x39, 0x33,
  0x0F, 0x12, 0x76, 0x15,
  0x00, 0x61, 0xB1, 0xDD,
  0x00, 0xED, 0x89, 0xEB,
  0x0F, 0x8A, 0x14, 0xF0,
  
  0x00, 0x96, 0x0D, 0x0E,
  0x0F, 0x11, 0xEF, 0xD2,
  0x00, 0x60, 0x69, 0x00,
  0x00, 0xEE, 0x10, 0x2E,
  0x0F, 0x89, 0x89, 0xF1,
};

const uint8_t ADAU_EQ_4000HZ[] = 
{
  //-15 dB
  0x00, 0x60, 0xD9, 0x76, //B0
  0x0F, 0x63, 0xEB, 0xF0, //B1
  0x00, 0x53, 0x5F, 0xD4, //B2
  0x00, 0x9C, 0x14, 0x10, //A1
  0x0F, 0xCB, 0xC6, 0xB7, //A2
  //-14 dB
  0x00, 0x62, 0xE2, 0xD3,
  0x0F, 0x61, 0x4B, 0x35,
  0x00, 0x54, 0x5F, 0x44,
  0x00, 0x9E, 0xB4, 0xCB,
  0x0F, 0xC8, 0xBD, 0xE9,
  
  0x00, 0x64, 0xEB, 0x90,
  0x0F, 0x5E, 0xBA, 0xFB,
  0x00, 0x55, 0x4C, 0x46,
  0x00, 0xA1, 0x45, 0x05,
  0x0F, 0xC5, 0xC8, 0x2B,
  
  0x00, 0x66, 0xF3, 0xEE,
  0x0F, 0x5C, 0x3B, 0xB6,
  0x00, 0x56, 0x26, 0x12,
  0x00, 0xA3, 0xC4, 0x4A,
  0x0F, 0xC2, 0xE6, 0x00,
  
  0x00, 0x68, 0xFC, 0x42,
  0x0F, 0x59, 0xCD, 0xC4,
  0x00, 0x56, 0xEB, 0xE7,
  0x00, 0xA6, 0x32, 0x3C,
  0x0F, 0xC0, 0x17, 0xD7,
  
  0x00, 0x6B, 0x04, 0xF6,
  0x0F, 0x57, 0x71, 0x70,
  0x00, 0x57, 0x9D, 0x05,
  0x00, 0xA8, 0x8E, 0x90,
  0x0F, 0xBD, 0x5E, 0x05,
  
  0x00, 0x6D, 0x0E, 0x85,
  0x0F, 0x55, 0x26, 0xF2,
  0x00, 0x58, 0x38, 0xAF,
  0x00, 0xAA, 0xD9, 0x0E,
  0x0F, 0xBA, 0xB8, 0xCC,
  
  0x00, 0x6F, 0x19, 0x7E,
  0x0F, 0x52, 0xEE, 0x71,
  0x00, 0x58, 0xBE, 0x2A,
  0x00, 0xAD, 0x11, 0x8F,
  0x0F, 0xB8, 0x28, 0x58,
  
  0x00, 0x71, 0x26, 0x82,
  0x0F, 0x50, 0xC8, 0x02,
  0x00, 0x59, 0x2C, 0xBC,
  0x00, 0xAF, 0x37, 0xFE,
  0x0F, 0xB5, 0xAC, 0xC3,
  
  0x00, 0x73, 0x36, 0x47,
  0x0F, 0x4E, 0xB3, 0xAA,
  0x00, 0x59, 0x83, 0xA9,
  0x00, 0xB1, 0x4C, 0x56,
  0x0F, 0xB3, 0x46, 0x10,
  
  0x00, 0x75, 0x49, 0x96,
  0x0F, 0x4C, 0xB1, 0x60,
  0x00, 0x59, 0xC2, 0x34,
  0x00, 0xB3, 0x4E, 0xA0,
  0x0F, 0xB0, 0xF4, 0x37,
  
  0x00, 0x77, 0x61, 0x4B,
  0x0F, 0x4A, 0xC1, 0x0B,
  0x00, 0x59, 0xE7, 0x9C,
  0x00, 0xB5, 0x3E, 0xF5,
  0x0F, 0xAE, 0xB7, 0x19,
  
  0x00, 0x79, 0x7E, 0x55,
  0x0F, 0x48, 0xE2, 0x86,
  0x00, 0x59, 0xF3, 0x1D,
  0x00, 0xB7, 0x1D, 0x7A,
  0x0F, 0xAC, 0x8E, 0x8E,
  
  0x00, 0x7B, 0xA1, 0xBA,
  0x0F, 0x47, 0x15, 0xA1,
  0x00, 0x59, 0xE3, 0xEB,
  0x00, 0xB8, 0xEA, 0x5F,
  0x0F, 0xAA, 0x7A, 0x5B,
  // -1 dB
  0x00, 0x7D, 0xCC, 0x8F,
  0x0F, 0x45, 0x5A, 0x1F,
  0x00, 0x59, 0xB9, 0x35,
  0x00, 0xBA, 0xA5, 0xE1,
  0x0F, 0xA8, 0x7A, 0x3D,
  // 0 dB
  0x00, 0x80, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  // 1 dB
  0x00, 0x82, 0x3D, 0x4D,
  0x0F, 0x42, 0x16, 0x24,
  0x00, 0x59, 0x0D, 0xC5,
  0x00, 0xBD, 0xE9, 0xDC,
  0x0F, 0xA4, 0xB4, 0xEF,
  
  0x00, 0x84, 0x85, 0xC9,
  0x0F, 0x40, 0x8D, 0x08,
  0x00, 0x58, 0x8B, 0x35,
  0x00, 0xBF, 0x72, 0xF8,
  0x0F, 0xA2, 0xEF, 0x02,
  
  0x00, 0x86, 0xDA, 0xDF,
  0x0F, 0x3F, 0x14, 0x08,
  0x00, 0x57, 0xE9, 0x72,
  0x00, 0xC0, 0xEB, 0xF8,
  0x0F, 0xA1, 0x3B, 0xB0,
  
  0x00, 0x89, 0x3E, 0x0C,
  0x0F, 0x3D, 0xAA, 0xC2,
  0x00, 0x57, 0x27, 0x6E,
  0x00, 0xC2, 0x55, 0x3E,
  0x0F, 0x9F, 0x9A, 0x86,
  
  0x00, 0x8B, 0xB0, 0xE6,
  0x0F, 0x3C, 0x50, 0xD0,
  0x00, 0x56, 0x44, 0x0B,
  0x00, 0xC3, 0xAF, 0x30,
  0x0F, 0x9E, 0x0B, 0x10,
  
  0x00, 0x8E, 0x35, 0x18,
  0x0F, 0x3B, 0x05, 0xC6,
  0x00, 0x55, 0x3E, 0x19,
  0x00, 0xC4, 0xFA, 0x3A,
  0x0F, 0x9C, 0x8C, 0xD0,
  
  0x00, 0x90, 0xCC, 0x65,
  0x0F, 0x39, 0xC9, 0x37,
  0x00, 0x54, 0x14, 0x54,
  0x00, 0xC6, 0x36, 0xC9,
  0x0F, 0x9B, 0x1F, 0x47,
  
  0x00, 0x93, 0x78, 0xA8,
  0x0F, 0x38, 0x9A, 0xB1,
  0x00, 0x52, 0xC5, 0x63,
  0x00, 0xC7, 0x65, 0x4F,
  0x0F, 0x99, 0xC1, 0xF5,
  
  0x00, 0x96, 0x3B, 0xD7,
  0x0F, 0x37, 0x79, 0xC4,
  0x00, 0x51, 0x4F, 0xD4,
  0x00, 0xC8, 0x86, 0x3C,
  0x0F, 0x98, 0x74, 0x55,
  
  0x00, 0x99, 0x18, 0x01,
  0x0F, 0x36, 0x65, 0xFC,
  0x00, 0x4F, 0xB2, 0x1D,
  0x00, 0xC9, 0x9A, 0x04,
  0x0F, 0x97, 0x35, 0xE3,
  
  0x00, 0x9C, 0x0F, 0x50,
  0x0F, 0x35, 0x5E, 0xE5,
  0x00, 0x4D, 0xEA, 0x97,
  0x00, 0xCA, 0xA1, 0x1B,
  0x0F, 0x96, 0x06, 0x19,
  
  0x00, 0x9F, 0x24, 0x0D,
  0x0F, 0x34, 0x64, 0x0D,
  0x00, 0x4B, 0xF7, 0x81,
  0x00, 0xCB, 0x9B, 0xF3,
  0x0F, 0x94, 0xE4, 0x72,
  
  0x00, 0xA2, 0x58, 0x9E,
  0x0F, 0x33, 0x75, 0x00,
  0x00, 0x49, 0xD6, 0xF8,
  0x00, 0xCC, 0x8B, 0x00,
  0x0F, 0x93, 0xD0, 0x6A,
  
  0x00, 0xA5, 0xAF, 0x89,
  0x0F, 0x32, 0x91, 0x4D,
  0x00, 0x47, 0x86, 0xF9,
  0x00, 0xCD, 0x6E, 0xB3,
  0x0F, 0x92, 0xC9, 0x7E,
  // 15 dB
  0x00, 0xA9, 0x2B, 0x76,
  0x0F, 0x31, 0xB8, 0x84,
  0x00, 0x45, 0x05, 0x5E,
  0x00, 0xCE, 0x47, 0x7C,
  0x0F, 0x91, 0xCF, 0x2B,
};

const uint8_t ADAU_EQ_7800HZ[] = 
{
  //-15 dB
  0x00, 0x54, 0x0D, 0xCE, //B0
  0x0F, 0xB2, 0x18, 0xC2, //B1
  0x00, 0x41, 0x0B, 0x30, //B2
  0x00, 0x4D, 0xE7, 0x3E, //A1
  0x0F, 0xEA, 0xE7, 0x03, //A2
  //-14 dB
  0x00, 0x56, 0xA4, 0x1A,
  0x0F, 0xB0, 0x3B, 0xC0,
  0x00, 0x42, 0x05, 0xD2,
  0x00, 0x4F, 0xC4, 0x40,
  0x0F, 0xE7, 0x56, 0x14,
  
  0x00, 0x59, 0x44, 0x7F,
  0x0F, 0xAE, 0x64, 0x01,
  0x00, 0x42, 0xEC, 0x4B,
  0x00, 0x51, 0x9B, 0xFF,
  0x0F, 0xE3, 0xCF, 0x36,
  
  0x00, 0x5B, 0xEF, 0x43,
  0x0F, 0xAC, 0x92, 0x33,
  0x00, 0x43, 0xBD, 0x05,
  0x00, 0x53, 0x6D, 0xCD,
  0x0F, 0xE0, 0x53, 0xB7,
  
  0x00, 0x5E, 0xA4, 0xC3,
  0x0F, 0xAA, 0xC6, 0xFB,
  0x00, 0x44, 0x76, 0x6A,
  0x00, 0x55, 0x39, 0x05,
  0x0F, 0xDC, 0xE4, 0xD4,
  
  0x00, 0x61, 0x65, 0x71,
  0x0F, 0xA9, 0x02, 0xF5,
  0x00, 0x45, 0x16, 0xDC,
  0x00, 0x56, 0xFD, 0x0B,
  0x0F, 0xD9, 0x83, 0xB4,
  
  0x00, 0x64, 0x31, 0xD8,
  0x0F, 0xA7, 0x46, 0xAF,
  0x00, 0x45, 0x9C, 0xBD,
  0x00, 0x58, 0xB9, 0x51,
  0x0F, 0xD6, 0x31, 0x6B,
  
  0x00, 0x67, 0x0A, 0x9E,
  0x0F, 0xA5, 0x92, 0xAF,
  0x00, 0x46, 0x06, 0x6B,
  0x00, 0x5A, 0x6D, 0x51,
  0x0F, 0xD2, 0xEE, 0xF7,
  
  0x00, 0x69, 0xF0, 0x82,
  0x0F, 0xA3, 0xE7, 0x6E,
  0x00, 0x46, 0x52, 0x3E,
  0x00, 0x5C, 0x18, 0x92,
  0x0F, 0xCF, 0xBD, 0x41,
  
  0x00, 0x6C, 0xE4, 0x5F,
  0x0F, 0xA2, 0x45, 0x59,
  0x00, 0x46, 0x7E, 0x8A,
  0x00, 0x5D, 0xBA, 0xA7,
  0x0F, 0xCC, 0x9D, 0x18,
  
  0x00, 0x6F, 0xE7, 0x2E,
  0x0F, 0xA0, 0xAC, 0xD0,
  0x00, 0x46, 0x89, 0x9D,
  0x00, 0x5F, 0x53, 0x30,
  0x0F, 0xC9, 0x8F, 0x35,
  
  0x00, 0x72, 0xFA, 0x07,
  0x0F, 0x9F, 0x1E, 0x28,
  0x00, 0x46, 0x71, 0xBF,
  0x00, 0x60, 0xE1, 0xD8,
  0x0F, 0xC6, 0x94, 0x3A,
  
  0x00, 0x76, 0x1E, 0x20,
  0x0F, 0x9D, 0x99, 0xA9,
  0x00, 0x46, 0x35, 0x2E,
  0x00, 0x62, 0x66, 0x57,
  0x0F, 0xC3, 0xAC, 0xB2,
  
  0x00, 0x79, 0x54, 0xD1,
  0x0F, 0x9C, 0x1F, 0x90,
  0x00, 0x45, 0xD2, 0x20,
  0x00, 0x63, 0xE0, 0x70,
  0x0F, 0xC0, 0xD9, 0x0F,
  // -1 dB
  0x00, 0x7C, 0x9F, 0x92,
  0x0F, 0x9A, 0xB0, 0x0D,
  0x00, 0x45, 0x46, 0xC0,
  0x00, 0x65, 0x4F, 0xF3,
  0x0F, 0xBE, 0x19, 0xAE,
  // 0 dB
  0x00, 0x80, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  // 1 dB
  0x00, 0x83, 0x77, 0xDA,
  0x0F, 0x97, 0xF1, 0x50,
  0x00, 0x43, 0xAF, 0x6C,
  0x00, 0x68, 0x0E, 0xB0,
  0x0F, 0xB8, 0xD8, 0xBA,
  
  0x00, 0x87, 0x09, 0x04,
  0x0F, 0x96, 0xA2, 0x41,
  0x00, 0x42, 0x9F, 0x85,
  0x00, 0x69, 0x5D, 0xBF,
  0x0F, 0xB6, 0x57, 0x77,
  
  0x00, 0x8A, 0xB5, 0x8A,
  0x0F, 0x95, 0x5E, 0x1C,
  0x00, 0x41, 0x5F, 0x5F,
  0x00, 0x6A, 0xA1, 0xE4,
  0x0F, 0xB3, 0xEB, 0x17,
  
  0x00, 0x8E, 0x7F, 0x9C,
  0x0F, 0x94, 0x24, 0xDE,
  0x00, 0x3F, 0xEC, 0xCF,
  0x00, 0x6B, 0xDB, 0x22,
  0x0F, 0xB1, 0x93, 0x95,
  
  0x00, 0x92, 0x69, 0x97,
  0x0F, 0x92, 0xF6, 0x7B,
  0x00, 0x3E, 0x45, 0x91,
  0x00, 0x6D, 0x09, 0x85,
  0x0F, 0xAF, 0x50, 0xD9,
  
  0x00, 0x96, 0x75, 0xFE,
  0x0F, 0x91, 0xD2, 0xDD,
  0x00, 0x3C, 0x67, 0x47,
  0x00, 0x6E, 0x2D, 0x23,
  0x0F, 0xAD, 0x22, 0xBB,
  
  0x00, 0x9A, 0xA7, 0x83,
  0x0F, 0x90, 0xB9, 0xEA,
  0x00, 0x3A, 0x4F, 0x77,
  0x00, 0x6F, 0x46, 0x16,
  0x0F, 0xAB, 0x09, 0x07,
  
  0x00, 0x9F, 0x01, 0x02,
  0x0F, 0x8F, 0xAB, 0x7F,
  0x00, 0x37, 0xFB, 0x84,
  0x00, 0x70, 0x54, 0x81,
  0x0F, 0xA9, 0x03, 0x7A,
  
  0x00, 0xA3, 0x85, 0x89,
  0x0F, 0x8E, 0xA7, 0x73,
  0x00, 0x35, 0x68, 0xAF,
  0x00, 0x71, 0x58, 0x8D,
  0x0F, 0xA7, 0x11, 0xC8,
  
  0x00, 0xA8, 0x38, 0x54,
  0x0F, 0x8D, 0xAD, 0x99,
  0x00, 0x32, 0x94, 0x14,
  0x00, 0x72, 0x52, 0x67,
  0x0F, 0xA5, 0x33, 0x98,
  
  0x00, 0xAD, 0x1C, 0xD4,
  0x0F, 0x8C, 0xBD, 0xBE,
  0x00, 0x2F, 0x7A, 0xA2,
  0x00, 0x73, 0x42, 0x42,
  0x0F, 0xA3, 0x68, 0x8A,
  
  0x00, 0xB2, 0x36, 0xAF,
  0x0F, 0x8B, 0xD7, 0xAB,
  0x00, 0x2C, 0x19, 0x1D,
  0x00, 0x74, 0x28, 0x55,
  0x0F, 0xA1, 0xB0, 0x34,
  
  0x00, 0xB7, 0x89, 0xC2,
  0x0F, 0x8A, 0xFB, 0x25,
  0x00, 0x28, 0x6C, 0x18,
  0x00, 0x75, 0x04, 0xDB,
  0x0F, 0xA0, 0x0A, 0x27,
  
  0x00, 0xBD, 0x1A, 0x23,
  0x0F, 0x8A, 0x27, 0xF0,
  0x00, 0x24, 0x6F, 0xF0,
  0x00, 0x75, 0xD8, 0x10,
  0x0F, 0x9E, 0x75, 0xEC,
  // 15 dB
  0x00, 0xC2, 0xEC, 0x28,
  0x0F, 0x89, 0x5D, 0xCB,
  0x00, 0x20, 0x20, 0xCD,
  0x00, 0x76, 0xA2, 0x35,
  0x0F, 0x9C, 0xF3, 0x0B,
};

const uint8_t ADAU_EQ_9800HZ[] = 
{
  //-15 dB
  0x00, 0x51, 0x06, 0x2F, //B0
  0x0F, 0xD7, 0xBF, 0x4A, //B1
  0x00, 0x3C, 0xB4, 0x0C, //B2
  0x00, 0x28, 0x40, 0xB6, //A1
  0x0F, 0xF2, 0x45, 0xC5, //A2
  //-14 dB
  0x00, 0x53, 0xB7, 0x73,
  0x0F, 0xD6, 0xB7, 0x64,
  0x00, 0x3D, 0xA3, 0xF3,
  0x00, 0x29, 0x48, 0x9C,
  0x0F, 0xEE, 0xA4, 0x9A,
  
  0x00, 0x56, 0x76, 0x04,
  0x0F, 0xD5, 0xB1, 0x8C,
  0x00, 0x3E, 0x7F, 0x53,
  0x00, 0x2A, 0x4E, 0x74,
  0x0F, 0xEB, 0x0A, 0xA9,
  
  0x00, 0x59, 0x42, 0x3B,
  0x0F, 0xD4, 0xAE, 0x28,
  0x00, 0x3F, 0x44, 0x68,
  0x00, 0x2B, 0x51, 0xD8,
  0x0F, 0xE7, 0x79, 0x5D,
  
  0x00, 0x5C, 0x1C, 0x87,
  0x0F, 0xD3, 0xAD, 0x9C,
  0x00, 0x3F, 0xF1, 0x64,
  0x00, 0x2C, 0x52, 0x64,
  0x0F, 0xE3, 0xF2, 0x15,
  
  0x00, 0x5F, 0x05, 0x6C,
  0x0F, 0xD2, 0xB0, 0x48,
  0x00, 0x40, 0x84, 0x75,
  0x00, 0x2D, 0x4F, 0xB8,
  0x0F, 0xE0, 0x76, 0x1F,
  
  0x00, 0x61, 0xFD, 0x88,
  0x0F, 0xD1, 0xB6, 0x84,
  0x00, 0x40, 0xFB, 0xC0,
  0x00, 0x2E, 0x49, 0x7C,
  0x0F, 0xDD, 0x06, 0xB8,
  
  0x00, 0x65, 0x05, 0x92,
  0x0F, 0xD0, 0xC0, 0xA6,
  0x00, 0x41, 0x55, 0x64,
  0x00, 0x2F, 0x3F, 0x5A,
  0x0F, 0xD9, 0xA5, 0x0A,
  
  0x00, 0x68, 0x1E, 0x5D,
  0x0F, 0xCF, 0xCE, 0xFD,
  0x00, 0x41, 0x8F, 0x7A,
  0x00, 0x30, 0x31, 0x03,
  0x0F, 0xD6, 0x52, 0x29,
  
  0x00, 0x6B, 0x48, 0xDA,
  0x0F, 0xCE, 0xE1, 0xCF,
  0x00, 0x41, 0xA8, 0x12,
  0x00, 0x31, 0x1E, 0x31,
  0x0F, 0xD3, 0x0F, 0x13,
  
  0x00, 0x6E, 0x86, 0x1A,
  0x0F, 0xCD, 0xF9, 0x61,
  0x00, 0x41, 0x9D, 0x34,
  0x00, 0x32, 0x06, 0x9F,
  0x0F, 0xCF, 0xDC, 0xB2,
  
  0x00, 0x71, 0xD7, 0x4B,
  0x0F, 0xCD, 0x15, 0xEC,
  0x00, 0x41, 0x6C, 0xDE,
  0x00, 0x32, 0xEA, 0x14,
  0x0F, 0xCC, 0xBB, 0xD7,
  
  0x00, 0x75, 0x3D, 0xC0,
  0x0F, 0xCC, 0x37, 0xA6,
  0x00, 0x41, 0x15, 0x05,
  0x00, 0x33, 0xC8, 0x5A,
  0x0F, 0xC9, 0xAD, 0x3B,
  
  0x00, 0x78, 0xBA, 0xED,
  0x0F, 0xCB, 0x5E, 0xBD,
  0x00, 0x40, 0x93, 0x91,
  0x00, 0x34, 0xA1, 0x43,
  0x0F, 0xC6, 0xB1, 0x82,
  // -1 dB
  0x00, 0x7C, 0x50, 0x6D,
  0x0F, 0xCA, 0x8B, 0x59,
  0x00, 0x3F, 0xE6, 0x5D,
  0x00, 0x35, 0x74, 0xA7,
  0x0F, 0xC3, 0xC9, 0x36,
  // 0 dB
  0x00, 0x80, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  // 1 dB
  0x00, 0x83, 0xCB, 0x8D,
  0x0F, 0xC8, 0xF5, 0x9C,
  0x00, 0x3D, 0xFF, 0xD4,
  0x00, 0x37, 0x0A, 0x64,
  0x0F, 0xBE, 0x34, 0x9F,
  
  0x00, 0x87, 0xB5, 0x23,
  0x0F, 0xC8, 0x33, 0x71,
  0x00, 0x3C, 0xC1, 0xE2,
  0x00, 0x37, 0xCC, 0x8F,
  0x0F, 0xBB, 0x88, 0xFB,
  
  0x00, 0x8B, 0xBF, 0x00,
  0x0F, 0xC7, 0x77, 0x2A,
  0x00, 0x3B, 0x4E, 0xF1,
  0x00, 0x38, 0x88, 0xD6,
  0x0F, 0xB8, 0xF2, 0x0F,
  
  0x00, 0x8F, 0xEB, 0x88,
  0x0F, 0xC6, 0xC0, 0xCE,
  0x00, 0x39, 0xA4, 0x7C,
  0x00, 0x39, 0x3F, 0x32,
  0x0F, 0xB6, 0x6F, 0xFC,
  
  0x00, 0x94, 0x3D, 0x51,
  0x0F, 0xC6, 0x10, 0x61,
  0x00, 0x37, 0xBF, 0xE1,
  0x00, 0x39, 0xEF, 0x9F,
  0x0F, 0xB4, 0x02, 0xCD,
  
  0x00, 0x98, 0xB7, 0x20,
  0x0F, 0xC5, 0x65, 0xE1,
  0x00, 0x35, 0x9E, 0x65,
  0x00, 0x3A, 0x9A, 0x1F,
  0x0F, 0xB1, 0xAA, 0x7C,
  
  0x00, 0x9D, 0x5B, 0xE8,
  0x0F, 0xC4, 0xC1, 0x48,
  0x00, 0x33, 0x3D, 0x27,
  0x00, 0x3B, 0x3E, 0xB8,
  0x0F, 0xAF, 0x66, 0xF1,
  
  0x00, 0xA2, 0x2E, 0xD2,
  0x0F, 0xC4, 0x22, 0x8A,
  0x00, 0x30, 0x99, 0x27,
  0x00, 0x3B, 0xDD, 0x76,
  0x0F, 0xAD, 0x38, 0x07,
  
  0x00, 0xA7, 0x33, 0x3C,
  0x0F, 0xC3, 0x89, 0x9A,
  0x00, 0x2D, 0xAF, 0x3B,
  0x00, 0x3C, 0x76, 0x66,
  0x0F, 0xAB, 0x1D, 0x89,
  
  0x00, 0xAC, 0x6C, 0xBA,
  0x0F, 0xC2, 0xF6, 0x63,
  0x00, 0x2A, 0x7C, 0x11,
  0x00, 0x3D, 0x09, 0x9D,
  0x0F, 0xA9, 0x17, 0x36,
  
  0x00, 0xB1, 0xDF, 0x1B,
  0x0F, 0xC2, 0x68, 0xD1,
  0x00, 0x26, 0xFC, 0x26,
  0x00, 0x3D, 0x97, 0x2F,
  0x0F, 0xA7, 0x24, 0xC0,
  
  0x00, 0xB7, 0x8E, 0x69,
  0x0F, 0xC1, 0xE0, 0xCB,
  0x00, 0x23, 0x2B, 0xC7,
  0x00, 0x3E, 0x1F, 0x35,
  0x0F, 0xA5, 0x45, 0xD0,
  
  0x00, 0xBD, 0x7E, 0xF0,
  0x0F, 0xC1, 0x5E, 0x34,
  0x00, 0x1F, 0x07, 0x0C,
  0x00, 0x3E, 0xA1, 0xCC,
  0x0F, 0xA3, 0x7A, 0x05,
  
  0x00, 0xC3, 0xB5, 0x39,
  0x0F, 0xC0, 0xE0, 0xF0,
  0x00, 0x1A, 0x89, 0xD0,
  0x00, 0x3F, 0x1F, 0x10,
  0x0F, 0xA1, 0xC0, 0xF7,
  // 15 dB
  0x00, 0xCA, 0x36, 0x18,
  0x0F, 0xC0, 0x68, 0xDE,
  0x00, 0x15, 0xAF, 0xB2,
  0x00, 0x3F, 0x97, 0x22,
  0x0F, 0xA0, 0x1A, 0x36,
};

#endif //__ADAU_PARAM_DATA_H

