#include <avr/pgmspace.h>


const uint8_t pacman1[]PROGMEM = {
 0x03,0xC0,
 0x0f,0xf0,
 0x3f,0xfC,
 0x3f,0xf8,
 0x7f,0xE0,
 0x7f,0xC0,
 0xff,0x80,
 0xfe,0x00,
 0xfe,0x00,
 0xff,0x80,
 0x7f,0xC0,
 0x7f,0xe0,
 0x3f,0xf8,
 0x3f,0xfc,
 0x0f,0xf0,
 0x03,0xC0
};

const uint8_t pacman2[]PROGMEM = {
 0x03,0xC0,
 0x0f,0xf0,
 0x3f,0xf8,
 0x3f,0xfe,
 0x7f,0xfe,
 0x7f,0xf8,
 0xff,0xc0,
 0xfc,0x00, //8
 0xfc,0x00,
 0xff,0xc0,
 0x7f,0xf8,
 0x7f,0xfe,
 0x3f,0xfe,
 0x3f,0xf8,
 0x0f,0xf0,
 0x03,0xC0
};

const uint8_t pacman3[]PROGMEM = {
 0x03,0xC0,
 0x0f,0xf0,
 0x3f,0xfC,
 0x3f,0xfC,
 0x7f,0xfe,
 0x7f,0xfe,
 0xff,0xff,
 0xff,0xff, //8
 0xff,0xff,
 0xff,0xff,
 0x7f,0xfe,
 0x7f,0xfe,
 0x3f,0xfC,
 0x3f,0xfC,
 0x0f,0xf0,
 0x03,0xC0
};
const uint8_t pacmanMap[30][40] = {                         //ent
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},//0 +
    {0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,1,1,0,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0},//1 +
    {0,0,0,0,1,2,2,3,2,2,2,2,2,1,1,0,1,1,0,1,1,0,1,1,2,2,2,3,1,1,2,2,2,2,1,0,0,0,0,0},//2 +
    {0,0,0,0,1,2,1,1,1,2,1,1,2,1,1,0,1,1,0,1,1,0,1,1,2,1,1,2,1,1,2,1,1,2,1,0,0,0,0,0},//3 +
    {0,0,0,0,1,2,1,1,1,2,1,1,2,1,1,0,1,1,0,1,1,0,1,1,2,1,1,2,2,2,2,1,1,2,1,0,0,0,0,0},//4 +
    {0,0,0,0,1,2,1,1,1,2,1,1,2,1,1,0,1,1,0,1,1,0,1,1,2,1,1,1,1,1,2,1,1,2,1,0,0,0,0,0},//5 +
    {0,0,0,0,1,2,1,1,1,2,1,1,2,1,1,1,1,1,0,1,1,1,1,1,2,1,1,1,1,1,2,1,1,2,1,0,0,0,0,0},//6 +
    {0,0,0,0,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,2,1,0,0,0,0,0},//7 +
    {0,0,0,0,1,2,1,1,1,2,1,1,1,1,1,1,1,1,0,1,1,1,1,1,2,1,1,2,1,1,1,1,1,2,1,0,0,0,0,0},//8 +
    {0,0,0,0,1,2,1,1,1,2,1,1,1,1,1,1,1,1,0,1,1,1,1,1,2,1,1,2,1,1,1,1,1,2,1,0,0,0,0,0},//9 +
    {0,0,0,0,1,2,1,1,1,2,2,2,2,1,1,0,0,0,0,0,0,0,0,0,2,1,1,2,2,2,2,1,1,2,1,0,0,0,0,0},//10 +
    {0,0,0,0,1,2,1,1,1,2,1,1,2,1,1,0,4,4,4,4,4,0,1,1,2,1,1,2,1,1,2,1,1,2,1,0,0,0,0,0},//11 +
    {0,0,0,0,1,2,1,1,1,2,1,1,2,1,1,0,4,0,0,0,4,0,1,1,2,1,1,2,1,1,2,1,1,2,1,0,0,0,0,0},//12 +
    {0,0,0,0,1,2,2,2,2,2,1,1,2,0,0,0,4,0,0,0,4,0,1,1,2,2,2,2,1,1,2,2,2,2,1,0,0,0,0,0},//13 +
    {0,0,0,0,1,1,1,1,1,2,1,1,1,1,1,0,4,0,0,0,4,0,1,1,1,1,1,0,1,1,1,1,1,2,1,0,0,0,0,0},//14 +
    {0,0,0,0,1,1,1,1,1,2,1,1,1,1,1,0,4,0,0,0,4,0,1,1,1,1,1,0,1,1,1,1,1,2,1,0,0,0,0,0 },//14 +
    {0,0,0,0,1,2,2,2,2,2,1,1,2,0,0,0,4,0,0,0,4,0,1,1,2,2,2,2,1,1,2,2,2,2,1,0,0,0,0,0 },//13 +
    {0,0,0,0,1,2,1,1,1,2,1,1,2,1,1,0,4,0,0,0,4,0,1,1,2,1,1,2,1,1,2,1,1,2,1,0,0,0,0,0 },//12 +
    {0,0,0,0,1,2,1,1,1,2,1,1,2,1,1,0,4,4,4,4,4,0,1,1,2,1,1,2,1,1,2,1,1,2,1,0,0,0,0,0 },//11 +
    {0,0,0,0,1,2,1,1,1,2,2,2,2,1,1,0,0,0,0,0,0,0,0,0,2,1,1,2,2,2,2,1,1,2,1,0,0,0,0,0 },//10 +
    {0,0,0,0,1,2,1,1,1,2,1,1,1,1,1,1,1,1,0,1,1,1,1,1,2,1,1,2,1,1,1,1,1,2,1,0,0,0,0,0 },//9 +
    {0,0,0,0,1,2,1,1,1,2,1,1,1,1,1,1,1,1,0,1,1,1,1,1,2,1,1,2,1,1,1,1,1,2,1,0,0,0,0,0 },//8 +
    {0,0,0,0,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,2,1,0,0,0,0,0 },//7 +
    {0,0,0,0,1,2,1,1,1,2,1,1,2,1,1,1,1,1,0,1,1,1,1,1,2,1,1,1,1,1,2,1,1,2,1,0,0,0,0,0 },//6 +
    {0,0,0,0,1,2,1,1,1,2,1,1,2,1,1,0,1,1,0,1,1,0,1,1,2,1,1,1,1,1,2,1,1,2,1,0,0,0,0,0 },//5 +
    {0,0,0,0,1,2,1,1,1,2,1,1,2,1,1,0,1,1,0,1,1,0,1,1,2,1,1,2,2,2,2,1,1,2,1,0,0,0,0,0 },//4 +
    {0,0,0,0,1,2,1,1,1,2,1,1,2,1,1,0,1,1,0,1,1,0,1,1,2,1,1,2,1,1,2,1,1,2,1,0,0,0,0,0 },//3 +
    {0,0,0,0,1,2,2,3,2,2,2,2,2,1,1,0,1,1,0,1,1,0,1,1,2,2,2,3,1,1,2,2,2,2,1,0,0,0,0,0 },//2 +
    {0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,1,1,0,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0},//1 +
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},//0 +
  };