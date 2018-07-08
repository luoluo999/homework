#define NTC0 -1
#define NTC1 262
#define NTC2 294
#define NTC3 330
#define NTC4 350
#define NTC5 393
#define NTC6 441
#define NTC7 495

#define NTCL1 131
#define NTCL2 147
#define NTCL3 165
#define NTCL4 175
#define NTCL5 196
#define NTCL6 221
#define NTCL7 248

#define NTCH1 525
#define NTCH2 589
#define NTCH3 661
#define NTCH4 700
#define NTCH5 786
#define NTCH6 882
#define NTCH7 990
//c pinlv
#define WHOLE 1
#define HALF 0.5
#define QUARTER 0.25
#define EIGHTH 0.25
#define SIXTEENTH 0.625
int tuneRabit[] =
{
  NTC3, NTC5, NTCH1, NTC6, NTC5, NTC5,
  NTC3, NTC5, NTC6, NTCH1, NTC5, NTC5,
  NTC6, NTC5, NTC3, NTC2, NTC2,
  NTC3, NTC5, NTC3, NTC2, NTC1,
  NTC6, NTC5, NTC6, NTC5, NTC3, NTC6, NTC5,
  NTC2, NTC5, NTC3, NTC2, NTC1,
  NTCL6, NTC1, NTC2, NTC3, NTC1,
};
int tuneNight[] =
{
  NTC1, NTC3, NTC5,
  NTC3, NTC4, NTC5,
  NTC6, NTC7, NTCH1,
  NTC5,
  NTC4, NTC5, NTC4,
  NTC3, NTC4, NTC5,
  NTC2,
  NTC2,
  NTC1, NTC3, NTC5,
  NTC3, NTC4, NTC5,
  NTC6, NTC7, NTCH1,
  NTC5,
  NTCH1, NTC7, NTC6,
  NTC5, NTC1,
  NTC2, NTC3, NTC2,
  NTC1,
  NTC6, NTC6,
  NTC6, NTC7, NTCH1,
  NTCH1,
  NTC5,
  NTC5, NTC5, NTC5,
  NTC5, NTC4, NTC3,
  NTC4,
  NTC5,
  NTC1, NTC3, NTC5,
  NTC3, NTC4, NTC5,
  NTC6, NTC7, NTCH1,
  NTC5, NTC5,
  NTCH1, NTC7, NTC6,
  NTC5, NTC1,
  NTC2, NTC3, NTC2,
  NTC1,
};
float durtNight[] =
{
  1, 1, 1,
  1, 1, 1,
  1, 1, 1,
  1 + 1 + 1,
  1 + 0.5, 0.5, 1,
  1, 1, 1,
  1 + 1 + 1,
  1 + 1 + 1,
  1, 1, 1,
  1, 1, 1,
  1, 1, 1,
  1 + 1 + 1,
  1 + 0.5, 0.5, 1,
  1 + 1, 1,
  1 + 0.5, 0.5, 1,
  1 + 1 + 1,
  1 + 1, 1,
  1, 1, 1,
  1 + 1 + 1,
  1 + 1 + 1,
  1 + 0.5, 0.5, 1,
  1, 1, 1,
  1 + 1 + 1,
  1 + 1 + 1,
  1, 1, 1,
  1, 1, 1,
  1, 1, 1,
  1 + 1, 1,
  1 + 0.5, 0.5, 1,
  1 + 1, 1,
  1 + 0.5, 0.5, 1,
  1 + 1 + 1,
};
float durtRabit[] =
{
  0.5, 0.5, 0.5, 0.5, 1, 1,
  0.5, 0.5, 0.5, 0.5, 1, 1,
  1, 0.5, 0.5, 1, 1,
  1, 0.5, 0.5, 1, 1,
  0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 1,
  0.5, 0.5, 0.5, 0.5, 1 + 1,
  0.5, 0.5, 0.5, 0.5, 1 + 1,
};
int tuneTiger[] =
{
  NTC1, NTC2, NTC3, NTC1,
  NTC1, NTC2, NTC3, NTC1,
  NTC3, NTC4, NTC5,
  NTC3, NTC4, NTC5,
  NTC5, NTC6, NTC5, NTC4, NTC3, NTC1,
  NTC5, NTC6, NTC5, NTC4, NTC3, NTC1,
  NTC1, NTCL5, NTC1,
  NTC1, NTCL5, NTC1,
};
float durtTiger[] =
{
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1 + 1,
  1, 1, 1 + 1,
  0.5, 0.5, 0.5, 0.5, 1, 1,
  0.5, 0.5, 0.5, 0.5, 1, 1,
  1, 1, 1 + 1,
  1, 1, 1 + 1,
};
int tuneSwallow[] =
{
  NTC3, NTC5, NTCH1, NTC6, NTC5,
  NTC3, NTC5, NTC6, NTCH1, NTC5,
  NTCH1, NTCH3, NTCH2, NTCH1,
  NTCH2, NTCH1, NTC6, NTCH1, NTC5,
  NTC3, NTC5, NTC6, NTC5, NTC6,
  NTCH1, NTCH2, NTC5, NTC6,
  NTC3, NTC2, NTC1, NTC2,
  NTC2, NTC2, NTC3, NTC5, NTC5,
  NTCH1, NTC2, NTC3, NTC5,
  NTC0, NTC0, NTC0, NTC0,
  NTC3, NTC5, NTCH1, NTC6, NTC5,
  NTC3, NTC5, NTC6, NTCH1, NTC5,
  NTCH1, NTCH3, NTCH2, NTCH1,
  NTCH2, NTCH1, NTC6, NTCH1, NTC5,
  NTC3, NTC5, NTC6, NTC5, NTC6,
  NTCH1, NTCH2, NTC5, NTC6,
  NTC3, NTCH1, NTC6, NTC5,
  NTC3, NTC2, NTC1, NTC2,
  NTC2, NTC3, NTC5,
  NTCH1, NTCH3, NTCH2, NTCH1,
  NTCH2, NTCH1, NTC5, NTC6, NTCH1,
};
float durtSwallow[] =
{
  0.5, 0.5, 0.5, 0.5, 1 + 1,
  0.5, 0.5, 0.5, 0.5, 1 + 1,
  1 + 0.5, 0.5, 1, 1,
  0.5, 0.5, 0.5, 0.5, 1 + 1,
  1 + 0.5, 0.5, 1, 0.5, 0.5,
  1, 0.5, 0.5, 1 + 1,
  0.5, 0.5, 1, 1 + 1,
  1, 0.5, 0.5, 1, 1,
  1, 0.5, 0.5, 1 + 1,
  1, 1, 1, 1,
  0.5, 0.5, 0.5, 0.5, 1 + 1,
  0.5, 0.5, 0.5, 0.5, 1 + 1,
  1 + 0.5, 0.5, 1, 1,
  0.5, 0.5, 0.5, 0.5, 1 + 1,
  1 + 0.5, 0.5, 1, 0.5, 0.5,
  1, 0.5, 0.5, 1 + 1,
  1 + 0.5, 0.5, 1, 1,
  0.5, 0.5, 1, 1 + 1,
  1 + 0.5, 0.5, 1 + 1,
  1 + 0.5, 0.5, 1, 1,
  0.5, 0.5, 0.5, 0.5, 1 + 1,
};
int tunePinetree[] =
{
  NTC5, NTCH1,
  NTC5, NTC3,
  NTC5, NTCH3,
  NTCH1,
  NTCH2, NTCH2, NTCH3,
  NTCH2, NTCH1,
  NTC7, NTCH2,
  NTC5,
  NTC3, NTCH1,
  NTC6, NTC5,
  NTC4, NTC6,
  NTC2,
  NTC5, NTC6, NTC5, NTC4,
  NTC3, NTC5, NTC2,
  NTC1,
  NTC0, NTC0,
  NTC0, NTC0,
  NTC5, NTCH1,
  NTC5, NTC3,
  NTC5, NTCH3,
  NTCH1,
  NTCH2, NTCH2, NTCH3,
  NTCH2, NTCH1,
  NTC7, NTCH2,
  NTC5,
  NTC3, NTCH1, NTCH1,
  NTC6, NTC5,
  NTC4, NTC6,
  NTC2,
  NTC5, NTC6, NTC5, NTC4,
  NTC3, NTC3, NTC5,
  NTCH1,

};
float durtPinetree[] =
{
  1, 1,
  1 + 0.5, 0.5,
  1, 1,
  1 + 1,
  1, 0.5 + 0.25, 0.25,
  1 + 0.5, 0.5,
  1, 1,
  1 + 1,
  1, 1,
  1 + 0.5, 0.5,
  1, 1,
  1 + 1,
  0.5 + 0.25, 0.25, 0.5, 0.5,
  0.5, 0.5, 1,
  1 + 1 + 1,
  1, 1,
  1, 1,
  1, 1,
  1 + 0.5, 0.5,
  1, 1,
  1 + 1,
  1, 0.5 + 0.25, 0.25,
  1 + 0.5, 0.5,
  1, 1,
  1 + 1,
  1, 0.5, 0.5,
  1 + 0.5, 0.5,
  1, 1,
  1 + 1,
  0.5 + 0.25, 0.25, 0.5, 0.5,
  0.5, 0.5, 1,
  1 + 1 + 1,
};
int length;
int tonepin = 6;
int c = 0;
void setup()
{
  Serial.begin(9600);
  pinMode(tonepin, OUTPUT);
}
void loop()
{
  if (Serial.available())
  {
    c = Serial.read();
    if (c == 97)
    {
      length = sizeof(tuneNight) / sizeof(tuneNight[0]);
      for (int x = 0; x < length; x++)
      {
        tone(tonepin, tuneNight[x]);
        delay(500 * durtNight[x]);
        noTone(tonepin);
      }
      delay(2000);
    }
    if (c == 100)
    {
      for (int x = 0; x < length; x++)
      {
        length = sizeof(tuneRabit) / sizeof(tuneRabit[0]);
        tone(tonepin, tuneRabit[x]);
        delay(500 * durtRabit[x]);
        noTone(tonepin);
      }
      delay(2000);
    }
    if (c == 101)
    {
      for (int x = 0; x < length; x++)
      {
        length = sizeof(tuneTiger) / sizeof(tuneTiger[0]);
        tone(tonepin, tuneTiger[x]);
        delay(500 * durtTiger[x]);
        noTone(tonepin);
      }
      delay(2000);
    }
    if (c == 102)
    {
      for (int x = 0; x < length; x++)
      {
        length = sizeof(tuneSwallow) / sizeof(tuneSwallow[0]);
        tone(tonepin, tuneSwallow[x]);
        delay(500 * durtSwallow[x]);
        noTone(tonepin);
      }
      delay(2000);
    }
    if (c == 103)
    {
      for (int x = 0; x < length; x++)
      {
        length = sizeof(tunePinetree) / sizeof(tunePinetree[0]);
        tone(tonepin, tunePinetree[x]);
        delay(500 * durtPinetree[x]);
        noTone(tonepin);
      }
      delay(2000);
    }
  }
}
