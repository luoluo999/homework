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
int tuneMoon[] =
{
  NTC6, NTC5, NTC6,
  NTC6, NTC5, NTC6,
  NTC6, NTC5, NTC3, NTC5,
  NTC3, NTC2, NTC3,
  NTC2, NTC1, NTC2, NTC3,
  NTC2, NTC1, NTCL6,
  NTCL6, NTC1, NTC2, NTC3,
  NTC2, NTC1, NTCL5,
  NTCL6, NTCL5, NTCL6,
  NTC2, NTC1, NTC2,
  NTC3, NTC3, NTC3, NTC5,
  NTC3, NTC2, NTC3,
  NTC6, NTC5, NTC6,
  NTC6, NTC5, NTC6,
  NTC6, NTC5, NTC3, NTC5,
  NTC6, NTC5, NTC6,
};
float durtMoon[] =
{
  0.5, 0.5, 1 + 1,
  0.5, 0.5, 1 + 1,
  0.5, 0.5, 1, 1,
  0.5, 0.5, 1 + 1,
  0.5, 0.5, 1 + 0.5, 0.5,
  0.5, 0.5, 1 + 1,
  0.5, 0.5, 1 + 0.5, 0.5,
  0.5, 0.5, 1 + 1,
  0.5, 0.5, 1 + 1,
  0.5, 0.5, 1 + 1,
  0.5, 0.5, 1, 1,
  0.5, 0.5, 1 + 1,
  0.5, 0.5, 1 + 1,
  0.5, 0.5, 1 + 1,
  0.5, 0.5, 1, 1,
  0.5, 0.5, 1 + 1,
};
int tuneStar[] =
{
  NTC1, NTC1, NTC5, NTC5,
  NTC6, NTC6, NTC5,
  NTC4, NTC4, NTC3, NTC3,
  NTC2, NTC2, NTC1,
  NTC5, NTC5, NTC4, NTC4,
  NTC3, NTC3, NTC2,
  NTC5, NTC5, NTC4, NTC4,
  NTC3, NTC3, NTC2,
  NTC1, NTC1, NTC5, NTC5,
  NTC6, NTC6, NTC5,
  NTC4, NTC4, NTC3, NTC3,
  NTC2, NTC2, NTC1,
};
float durtStar[] =
{
  1, 1, 1, 1,
  1, 1, 1 + 1,
  1, 1, 1, 1,
  1, 1, 1 + 1,
  1, 1, 1, 1,
  1, 1, 1 + 1,
  1, 1, 1, 1,
  1, 1, 1 + 1,
  1, 1, 1, 1,
  1, 1, 1 + 1,
  1, 1, 1, 1,
  1, 1, 1 + 1,
};

int tuneSleep[] =
{
  NTC3, NTC5, NTC2, NTC3, NTC4,
  NTC3, NTC3, NTC2, NTC1, NTCL7, NTC1, NTC2, NTCL5,
  NTC3, NTC5, NTC2, NTC3, NTC4,
  NTC3, NTC3, NTC2, NTC3, NTC4, NTC2, NTC1, NTC0,
  NTC2, NTC2, NTC3, NTC2, NTC1,
  NTC5, NTC6, NTC5, NTC4, NTC3, NTC2, NTCL5,
  NTC3, NTC5, NTC2, NTC3, NTC4,
  NTC3, NTC3, NTC2, NTC3, NTC4, NTC2, NTC1, NTC0,
};
float durtSleep[] =
{
  1, 1, 0.5 + 0.25, 0.25, 1,
  0.5, 0.5, 0.25, 0.25, 0.25, 0.25, 1, 1,
  1, 1, 0.5 + 0.25, 0.25, 1,
  0.5, 0.5, 0.25, 0.25, 0.25, 0.25, 1, 1,
  1 + 0.5, 0.5, 0.5 + 0.25, 0.25, 1,
  0.5, 0.25, 0.25, 0.5, 0.5, 1, 1,
  1, 1, 0.5 + 0.25, 0.25, 1,
  0.5, 0.5, 0.25, 0.25, 0.25, 0.25, 1, 1,
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
    if (c == 98)
    {
      for (int x = 0; x < length; x++)
      {
        length = sizeof(tuneMoon) / sizeof(tuneMoon[0]);
        tone(tonepin, tuneMoon[x]);
        delay(500 * durtMoon[x]);
        noTone(tonepin);
      }
      delay(2000);
    }
    if (c == 99)
    {
      for (int x = 0; x < length; x++)
      {
        length = sizeof(tuneStar) / sizeof(tuneStar[0]);
        tone(tonepin, tuneStar[x]);
        delay(500 * durtStar[x]);
        noTone(tonepin);
      }
      delay(2000);
    }

    if (c == 104)
    {
      for (int x = 0; x < length; x++)
      {
        length = sizeof(tuneSleep) / sizeof(tuneSleep[0]);
        tone(tonepin, tuneSleep[x]);
        delay(600 * durtSleep[x]);
        noTone(tonepin);
      }
      delay(2000);
    }
    if (c == 105)
    {
      noTone(tonepin);
      delay(2000);
    }
  }
}
