#include <stdio.h>

void find_closest_flight(int desired_time, int *departure_time,
                         int *arrival_time);

int main(void) {
  int hour, minute, htom, departure_time, arrival_time;
  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hour, &minute);

  htom = hour * 60 + minute;

  find_closest_flight(htom, &departure_time, &arrival_time);

  int dhour, dmin, ahour, amin;

  if (departure_time < 720)
    printf("Closest departure time is %d:%2.2d a.m., ", departure_time / 60,
           departure_time % 60);
  else {
    if (departure_time / 60 == 12)
      printf("Closest departure time is %d:%2.2d p.m., ", departure_time / 60,
             departure_time % 60);
    else
      printf("Closest departure time is %d:%2.2d p.m., ",
             departure_time / 60 - 12, departure_time % 60);
  }
  if (arrival_time < 720)
    printf("arrving at %d:%2.2d a.m.\n", arrival_time / 60, arrival_time % 60);
  else {
    if (arrival_time / 60 == 12)
      printf("arrving at %d:%2.2d p.m.\n", arrival_time / 60,
             arrival_time % 60);
    else
      printf("arrving at %d:%2.2d p.m.\n", arrival_time / 60 - 12,
             arrival_time % 60);
  }
  return 0;
}

void find_closest_flight(int desired_time, int *departure_time,
                         int *arrival_time) {
  if (desired_time <= 531) {
    *departure_time = 480;
    *arrival_time = 616;
  } else if (desired_time <= 631) {
    *departure_time = 583;
    *arrival_time = 712;
  } else if (desired_time <= 723) {
    *departure_time = 679;
    *arrival_time = 811;
  } else if (desired_time <= 803) {
    *departure_time = 767;
    *arrival_time = 900;
  } else if (desired_time <= 891) {
    *departure_time = 840;
    *arrival_time = 968;
  } else if (desired_time <= 1041) {
    *departure_time = 945;
    *arrival_time = 1075;
  } else if (desired_time <= 1222) {
    *departure_time = 1140;
    *arrival_time = 1280;
  } else {
    *departure_time = 1305;
    *arrival_time = 1438;
  }
}
