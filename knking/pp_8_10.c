#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int departure[8] = {480, 583, 679, 767, 840, 945, 1140, 1305};
  int arrival[8] = {616, 712, 811, 900, 968, 1075, 1280, 1438};
  int hour, minute;
  int timetominute;
  int min = 1000;
  int index;
  char midd, mida;
  int houra, hourd, minutea, minuted;

  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hour, &minute);

  timetominute = hour * 60 + minute;
  for (int i = 0; i < 8; i++) {
    if (abs(timetominute - departure[i]) <= min) {
      min = abs(timetominute - departure[i]);
      index = i;
    }
  }
  if (departure[index] / 60 > 12)
    hourd = departure[index] / 60 - 12;
  else
    hourd = departure[index] / 60;
  if (arrival[index] / 60 > 12)
    houra = arrival[index] / 60 - 12;
  else
    houra = arrival[index] / 60;
  minuted = departure[index] % 60;
  minutea = arrival[index] % 60;

  if (departure[index] / 60 >= 12)
    midd = 'p';
  else
    midd = 'a';

  if (arrival[index] / 60 >= 12)
    mida = 'p';
  else
    mida = 'a';

  printf("Closest departure time is %d:%.2d %c.m., arriving at %d:%.2d %c.m.\n",
         hourd, minuted, midd, houra, minutea, mida);
  return 0;
}
