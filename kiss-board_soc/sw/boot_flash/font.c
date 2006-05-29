
#include "font.h"

const unsigned char fonts[256][12] = {
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /* 0, 00h */
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /* 1, 01h */
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /* 2, 02h */
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /* 3, 03h */
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /* 4, 04h */
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /* 5, 05h */
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /* 6, 06h */
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /* 7, 07h */
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /* 8, 08h */
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /* 9, 09h */
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /* 10, 0ah */
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /* 11, 0bh */
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /* 12, 0ch */
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /* 13, 0dh */
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /* 14, 0eh */
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /* 15, 0fh */
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /* 16, 10h */
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /* 17, 11h */
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /* 18, 12h */
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /* 19, 13h */
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /* 20, 14h */
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /* 21, 15h */
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /* 22, 16h */
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /* 23, 17h */
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /* 24, 18h */
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /* 25, 19h */
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /* 26, 1ah */
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /* 27, 1bh */
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /* 28, 1ch */
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /* 29, 1dh */
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /* 30, 1eh */
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /* 31, 1fh */
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /* 32, 20h, ' ' */
  {0x00, 0x0c, 0x1e, 0x1e, 0x1e, 0x0c, 0x0c, 0x00, 0x0c, 0x0c, 0x00, 0x00}, /* 33, 21h, '!' */
  {0x00, 0x66, 0x66, 0x66, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /* 34, 22h, '"' */
  {0x00, 0x36, 0x36, 0x7f, 0x36, 0x36, 0x36, 0x7f, 0x36, 0x36, 0x00, 0x00}, /* 35, 23h, '#' */
  {0x0c, 0x0c, 0x3e, 0x03, 0x03, 0x1e, 0x30, 0x30, 0x1f, 0x0c, 0x0c, 0x00}, /* 36, 24h, '$' */
  {0x00, 0x00, 0x00, 0x23, 0x33, 0x18, 0x0c, 0x06, 0x33, 0x31, 0x00, 0x00}, /* 37, 25h, '%' */
  {0x00, 0x0e, 0x1b, 0x1b, 0x0e, 0x5f, 0x7b, 0x33, 0x3b, 0x6e, 0x00, 0x00}, /* 38, 26h, '&' */
  {0x00, 0x0c, 0x0c, 0x0c, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /* 39, 27h, ''' */
  {0x00, 0x30, 0x18, 0x0c, 0x06, 0x06, 0x06, 0x0c, 0x18, 0x30, 0x00, 0x00}, /* 40, 28h, '(' */
  {0x00, 0x06, 0x0c, 0x18, 0x30, 0x30, 0x30, 0x18, 0x0c, 0x06, 0x00, 0x00}, /* 41, 29h, ')' */
  {0x00, 0x00, 0x00, 0x66, 0x3c, 0xff, 0x3c, 0x66, 0x00, 0x00, 0x00, 0x00}, /* 42, 2ah, '*' */
  {0x00, 0x00, 0x00, 0x18, 0x18, 0x7e, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00}, /* 43, 2bh, '+' */
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x1c, 0x06, 0x00}, /* 44, 2ch, ',' */
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /* 45, 2dh, '-' */
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x1c, 0x00, 0x00}, /* 46, 2eh, '.' */
  {0x00, 0x00, 0x40, 0x60, 0x30, 0x18, 0x0c, 0x06, 0x03, 0x01, 0x00, 0x00}, /* 47, 2fh, '/' */
  {0x00, 0x3e, 0x63, 0x73, 0x7b, 0x6b, 0x6f, 0x67, 0x63, 0x3e, 0x00, 0x00}, /* 48, 30h, '0' */
  {0x00, 0x08, 0x0c, 0x0f, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x3f, 0x00, 0x00}, /* 49, 31h, '1' */
  {0x00, 0x1e, 0x33, 0x33, 0x30, 0x18, 0x0c, 0x06, 0x33, 0x3f, 0x00, 0x00}, /* 50, 32h, '2' */
  {0x00, 0x1e, 0x33, 0x30, 0x30, 0x1c, 0x30, 0x30, 0x33, 0x1e, 0x00, 0x00}, /* 51, 33h, '3' */
  {0x00, 0x30, 0x38, 0x3c, 0x36, 0x33, 0x7f, 0x30, 0x30, 0x78, 0x00, 0x00}, /* 52, 34h, '4' */
  {0x00, 0x3f, 0x03, 0x03, 0x03, 0x1f, 0x30, 0x30, 0x33, 0x1e, 0x00, 0x00}, /* 53, 35h, '5' */
  {0x00, 0x1c, 0x06, 0x03, 0x03, 0x1f, 0x33, 0x33, 0x33, 0x1e, 0x00, 0x00}, /* 54, 36h, '6' */
  {0x00, 0x7f, 0x63, 0x63, 0x60, 0x30, 0x18, 0x0c, 0x0c, 0x0c, 0x00, 0x00}, /* 55, 37h, '7' */
  {0x00, 0x1e, 0x33, 0x33, 0x37, 0x1e, 0x3b, 0x33, 0x33, 0x1e, 0x00, 0x00}, /* 56, 38h, '8' */
  {0x00, 0x1e, 0x33, 0x33, 0x33, 0x3e, 0x18, 0x18, 0x0c, 0x0e, 0x00, 0x00}, /* 57, 39h, '9' */
  {0x00, 0x00, 0x00, 0x1c, 0x1c, 0x00, 0x00, 0x1c, 0x1c, 0x00, 0x00, 0x00}, /* 58, 3ah, ':' */
  {0x00, 0x00, 0x00, 0x1c, 0x1c, 0x00, 0x00, 0x1c, 0x1c, 0x18, 0x0c, 0x00}, /* 59, 3bh, ';' */
  {0x00, 0x30, 0x18, 0x0c, 0x06, 0x03, 0x06, 0x0c, 0x18, 0x30, 0x00, 0x00}, /* 60, 3ch, '<' */
  {0x00, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x00}, /* 61, 3dh, '=' */
  {0x00, 0x06, 0x0c, 0x18, 0x30, 0x60, 0x30, 0x18, 0x0c, 0x06, 0x00, 0x00}, /* 62, 3eh, '>' */
  {0x00, 0x1e, 0x33, 0x30, 0x18, 0x0c, 0x0c, 0x00, 0x0c, 0x0c, 0x00, 0x00}, /* 63, 3fh, '?' */
  {0x00, 0x3e, 0x63, 0x63, 0x7b, 0x7b, 0x7b, 0x03, 0x03, 0x3e, 0x00, 0x00}, /* 64, 40h, '@' */
  {0x00, 0x0c, 0x1e, 0x33, 0x33, 0x33, 0x3f, 0x33, 0x33, 0x33, 0x00, 0x00}, /* 65, 41h, 'A' */
  {0x00, 0x3f, 0x66, 0x66, 0x66, 0x3e, 0x66, 0x66, 0x66, 0x3f, 0x00, 0x00}, /* 66, 42h, 'B' */
  {0x00, 0x3c, 0x66, 0x63, 0x03, 0x03, 0x03, 0x63, 0x66, 0x3c, 0x00, 0x00}, /* 67, 43h, 'C' */
  {0x00, 0x1f, 0x36, 0x66, 0x66, 0x66, 0x66, 0x66, 0x36, 0x1f, 0x00, 0x00}, /* 68, 44h, 'D' */
  {0x00, 0x7f, 0x46, 0x06, 0x26, 0x3e, 0x26, 0x06, 0x46, 0x7f, 0x00, 0x00}, /* 69, 45h, 'E' */
  {0x00, 0x7f, 0x66, 0x46, 0x26, 0x3e, 0x26, 0x06, 0x06, 0x0f, 0x00, 0x00}, /* 70, 46h, 'F' */
  {0x00, 0x3c, 0x66, 0x63, 0x03, 0x03, 0x73, 0x63, 0x66, 0x7c, 0x00, 0x00}, /* 71, 47h, 'G' */
  {0x00, 0x33, 0x33, 0x33, 0x33, 0x3f, 0x33, 0x33, 0x33, 0x33, 0x00, 0x00}, /* 72, 48h, 'H' */
  {0x00, 0x1e, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x1e, 0x00, 0x00}, /* 73, 49h, 'I' */
  {0x00, 0x78, 0x30, 0x30, 0x30, 0x30, 0x33, 0x33, 0x33, 0x1e, 0x00, 0x00}, /* 74, 4ah, 'J' */
  {0x00, 0x67, 0x66, 0x36, 0x36, 0x1e, 0x36, 0x36, 0x66, 0x67, 0x00, 0x00}, /* 75, 4bh, 'K' */
  {0x00, 0x0f, 0x06, 0x06, 0x06, 0x06, 0x46, 0x66, 0x66, 0x7f, 0x00, 0x00}, /* 76, 4ch, 'L' */
  {0x00, 0x63, 0x77, 0x7f, 0x7f, 0x6b, 0x63, 0x63, 0x63, 0x63, 0x00, 0x00}, /* 77, 4dh, 'M' */
  {0x00, 0x63, 0x63, 0x67, 0x6f, 0x7f, 0x7b, 0x73, 0x63, 0x63, 0x00, 0x00}, /* 78, 4eh, 'N' */
  {0x00, 0x1c, 0x36, 0x63, 0x63, 0x63, 0x63, 0x63, 0x36, 0x1c, 0x00, 0x00}, /* 79, 4fh, 'O' */
  {0x00, 0x3f, 0x66, 0x66, 0x66, 0x3e, 0x06, 0x06, 0x06, 0x0f, 0x00, 0x00}, /* 80, 50h, 'P' */
  {0x00, 0x1c, 0x36, 0x63, 0x63, 0x63, 0x73, 0x7b, 0x3e, 0x30, 0x78, 0x00}, /* 81, 51h, 'Q' */
  {0x00, 0x3f, 0x66, 0x66, 0x66, 0x3e, 0x36, 0x66, 0x66, 0x67, 0x00, 0x00}, /* 82, 52h, 'R' */
  {0x00, 0x1e, 0x33, 0x33, 0x03, 0x0e, 0x18, 0x33, 0x33, 0x1e, 0x00, 0x00}, /* 83, 53h, 'S' */
  {0x00, 0x3f, 0x2d, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x1e, 0x00, 0x00}, /* 84, 54h, 'T' */
  {0x00, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x1e, 0x00, 0x00}, /* 85, 55h, 'U' */
  {0x00, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x1e, 0x0c, 0x00, 0x00}, /* 86, 56h, 'V' */
  {0x00, 0x63, 0x63, 0x63, 0x63, 0x6b, 0x6b, 0x36, 0x36, 0x36, 0x00, 0x00}, /* 87, 57h, 'W' */
  {0x00, 0x33, 0x33, 0x33, 0x1e, 0x0c, 0x1e, 0x33, 0x33, 0x33, 0x00, 0x00}, /* 88, 58h, 'X' */
  {0x00, 0x33, 0x33, 0x33, 0x33, 0x1e, 0x0c, 0x0c, 0x0c, 0x1e, 0x00, 0x00}, /* 89, 59h, 'Y' */
  {0x00, 0x7f, 0x73, 0x19, 0x18, 0x0c, 0x06, 0x46, 0x63, 0x7f, 0x00, 0x00}, /* 90, 5ah, 'Z' */
  {0x00, 0x3c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x3c, 0x00, 0x00}, /* 91, 5bh, '[' */
  {0x00, 0x00, 0x01, 0x03, 0x06, 0x0c, 0x18, 0x30, 0x60, 0x40, 0x00, 0x00}, /* 92, 5ch, '\' */
  {0x00, 0x3c, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x3c, 0x00, 0x00}, /* 93, 5dh, ']' */
  {0x08, 0x1c, 0x36, 0x63, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /* 94, 5eh, '^' */
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00}, /* 95, 5fh, '_' */
  {0x0c, 0x0c, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /* 96, 60h, '`' */
  {0x00, 0x00, 0x00, 0x00, 0x1e, 0x30, 0x3e, 0x33, 0x33, 0x6e, 0x00, 0x00}, /* 97, 61h, 'a' */
  {0x00, 0x07, 0x06, 0x06, 0x3e, 0x66, 0x66, 0x66, 0x66, 0x3b, 0x00, 0x00}, /* 98, 62h, 'b' */
  {0x00, 0x00, 0x00, 0x00, 0x1e, 0x33, 0x03, 0x03, 0x33, 0x1e, 0x00, 0x00}, /* 99, 63h, 'c' */
  {0x00, 0x38, 0x30, 0x30, 0x3e, 0x33, 0x33, 0x33, 0x33, 0x6e, 0x00, 0x00}, /* 100, 64h, 'd' */
  {0x00, 0x00, 0x00, 0x00, 0x1e, 0x33, 0x3f, 0x03, 0x33, 0x1e, 0x00, 0x00}, /* 101, 65h, 'e' */
  {0x00, 0x1c, 0x36, 0x06, 0x06, 0x1f, 0x06, 0x06, 0x06, 0x0f, 0x00, 0x00}, /* 102, 66h, 'f' */
  {0x00, 0x00, 0x00, 0x00, 0x6e, 0x33, 0x33, 0x33, 0x3e, 0x30, 0x33, 0x1e}, /* 103, 67h, 'g' */
  {0x00, 0x07, 0x06, 0x06, 0x36, 0x6e, 0x66, 0x66, 0x66, 0x67, 0x00, 0x00}, /* 104, 68h, 'h' */
  {0x00, 0x18, 0x18, 0x00, 0x1e, 0x18, 0x18, 0x18, 0x18, 0x7e, 0x00, 0x00}, /* 105, 69h, 'i' */
  {0x00, 0x30, 0x30, 0x00, 0x3c, 0x30, 0x30, 0x30, 0x30, 0x33, 0x33, 0x1e}, /* 106, 6ah, 'j' */
  {0x00, 0x07, 0x06, 0x06, 0x66, 0x36, 0x1e, 0x36, 0x66, 0x67, 0x00, 0x00}, /* 107, 6bh, 'k' */
  {0x00, 0x1e, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x7e, 0x00, 0x00}, /* 108, 6ch, 'l' */
  {0x00, 0x00, 0x00, 0x00, 0x3f, 0x6b, 0x6b, 0x6b, 0x6b, 0x63, 0x00, 0x00}, /* 109, 6dh, 'm' */
  {0x00, 0x00, 0x00, 0x00, 0x1f, 0x33, 0x33, 0x33, 0x33, 0x33, 0x00, 0x00}, /* 110, 6eh, 'n' */
  {0x00, 0x00, 0x00, 0x00, 0x1e, 0x33, 0x33, 0x33, 0x33, 0x1e, 0x00, 0x00}, /* 111, 6fh, 'o' */
  {0x00, 0x00, 0x00, 0x00, 0x3b, 0x66, 0x66, 0x66, 0x66, 0x3e, 0x06, 0x0f}, /* 112, 70h, 'p' */
  {0x00, 0x00, 0x00, 0x00, 0x6e, 0x33, 0x33, 0x33, 0x33, 0x3e, 0x30, 0x78}, /* 113, 71h, 'q' */
  {0x00, 0x00, 0x00, 0x00, 0x37, 0x76, 0x6e, 0x06, 0x06, 0x0f, 0x00, 0x00}, /* 114, 72h, 'r' */
  {0x00, 0x00, 0x00, 0x00, 0x1e, 0x33, 0x06, 0x18, 0x33, 0x1e, 0x00, 0x00}, /* 115, 73h, 's' */
  {0x00, 0x00, 0x04, 0x06, 0x3f, 0x06, 0x06, 0x06, 0x36, 0x1c, 0x00, 0x00}, /* 116, 74h, 't' */
  {0x00, 0x00, 0x00, 0x00, 0x33, 0x33, 0x33, 0x33, 0x33, 0x6e, 0x00, 0x00}, /* 117, 75h, 'u' */
  {0x00, 0x00, 0x00, 0x00, 0x33, 0x33, 0x33, 0x33, 0x1e, 0x0c, 0x00, 0x00}, /* 118, 76h, 'v' */
  {0x00, 0x00, 0x00, 0x00, 0x63, 0x63, 0x6b, 0x6b, 0x36, 0x36, 0x00, 0x00}, /* 119, 77h, 'w' */
  {0x00, 0x00, 0x00, 0x00, 0x63, 0x36, 0x1c, 0x1c, 0x36, 0x63, 0x00, 0x00}, /* 120, 78h, 'x' */
  {0x00, 0x00, 0x00, 0x00, 0x66, 0x66, 0x66, 0x66, 0x3c, 0x30, 0x18, 0x0f}, /* 121, 79h, 'y' */
  {0x00, 0x00, 0x00, 0x00, 0x3f, 0x31, 0x18, 0x06, 0x23, 0x3f, 0x00, 0x00}, /* 122, 7ah, 'z' */
  {0x00, 0x38, 0x0c, 0x0c, 0x06, 0x03, 0x06, 0x0c, 0x0c, 0x38, 0x00, 0x00}, /* 123, 7bh, '{' */
  {0x00, 0x18, 0x18, 0x18, 0x18, 0x00, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00}, /* 124, 7ch, '|' */
  {0x00, 0x07, 0x0c, 0x0c, 0x18, 0x30, 0x18, 0x0c, 0x0c, 0x07, 0x00, 0x00}, /* 125, 7dh, '}' */
  {0x00, 0xce, 0x5b, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /* 126, 7eh, '~' */
  {0x00, 0x00, 0x00, 0x08, 0x1c, 0x36, 0x63, 0x63, 0x7f, 0x00, 0x00, 0x00}, /* 127, 7fh, '' */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 128, 80h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 129, 81h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 130, 82h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 131, 83h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 132, 84h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 133, 85h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 134, 86h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 135, 87h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 136, 88h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 137, 89h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 138, 8ah */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 139, 8bh */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 140, 8ch */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 141, 8dh */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 142, 8eh */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 143, 8fh */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 144, 90h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 145, 91h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 146, 92h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 147, 93h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 148, 94h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 149, 95h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 150, 96h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 151, 97h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 152, 98h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 153, 99h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 154, 9ah */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 155, 9bh */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 156, 9ch */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 157, 9dh */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 158, 9eh */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 159, 9fh */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 160, a0h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 161, a1h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 162, a2h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 163, a3h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 164, a4h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 165, a5h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 166, a6h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 167, a7h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 168, a8h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 169, a9h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 170, aah */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 171, abh */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 172, ach */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 173, adh */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 174, aeh */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 175, afh */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 176, b0h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 177, b1h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 178, b2h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 179, b3h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 180, b4h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 181, b5h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 182, b6h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 183, b7h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 184, b8h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 185, b9h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 186, bah */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 187, bbh */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 188, bch */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 189, bdh */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 190, beh */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 191, bfh */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 192, c0h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 193, c1h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 194, c2h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 195, c3h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 196, c4h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 197, c5h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 198, c6h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 199, c7h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 200, c8h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 201, c9h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 202, cah */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 203, cbh */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 204, cch */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 205, cdh */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 206, ceh */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 207, cfh */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 208, d0h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 209, d1h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 210, d2h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 211, d3h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 212, d4h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 213, d5h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 214, d6h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 215, d7h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 216, d8h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 217, d9h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 218, dah */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 219, dbh */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 220, dch */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 221, ddh */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 222, deh */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 223, dfh */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 224, e0h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 225, e1h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 226, e2h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 227, e3h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 228, e4h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 229, e5h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 230, e6h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 231, e7h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 232, e8h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 233, e9h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 234, eah */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 235, ebh */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 236, ech */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 237, edh */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 238, eeh */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 239, efh */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 240, f0h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 241, f1h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 242, f2h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 243, f3h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 244, f4h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 245, f5h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 246, f6h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 247, f7h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 248, f8h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 249, f9h */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 250, fah */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 251, fbh */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 252, fch */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 253, fdh */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 254, feh */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};/* 255, ffh */

void font_init(FONT *font,unsigned short int fg,unsigned short int bg){
	unsigned char c;
	font->height	= FONT_HEIGHT;
	font->width	= FONT_WIDTH;
	for (c=0x20;c<0x80;c++) font_gen(font,c,fg,bg);
	return;
}
void font_gen(FONT *font,unsigned char c,unsigned short int fg,unsigned short int bg){
	int i,j;
	unsigned char t;
	unsigned short int *p;
	p = &(font->image[c][0]);
	for (i=0;i<FONT_HEIGHT;i++) {
		t = fonts[c][i];
		for (j=0;j<FONT_WIDTH;j++){
			*p = (t&0x01) ? fg: bg;
			p++;
			t >>= 1;
		}
	}
	return;
}
