#include <Arduino.h>
#include <avr/pgmspace.h>
#include <inttypes.h>
#include "Print.h"

class LiquidCrystalChina {
  
typedef unsigned char uchar;
public:
  LiquidCrystalChina(uint8_t di, uint8_t e,uint8_t rw);
  void init( uint8_t di,uint8_t e,uint8_t rw);
  void begin(uint8_t cols, uint8_t rows);
  void delayns(void);

  void WriteByte(int dat);
  void WriteCommand(int CMD);
  void WriteData(int CMD);
  void clear(void);

  void DisplayString(int X,int Y,uchar *ptr);
  void DisplaySig(int M,int N,int sig);
  void setCursor(uint8_t N, uint8_t M);
  void print(char *ptr);
  void print(unsigned char *ptr);
  void print(char ptr);
  void write(char ptr);
  void print(unsigned char ptr);
  void write(unsigned char ptr);

private:
  uint8_t latchPin; 
  uint8_t clockPin;
  uint8_t dataPin;

};

