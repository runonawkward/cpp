#include <stdio.h>

struct time
{
  int hours,minutes,seconds;
};

struct time elapsed_time(struct time start_time, struct time end_time);

int main()
{
  struct time start_time, end_time, elapsed;
  char a;
  printf("Please enter a time string in the format.\n\
      hh:mm:ss\n");
  scanf("%d%c%d%c%d", &start_time.hours, &a,\
      &start_time.minutes,&a,&start_time.seconds);

  printf("Please enter a time string in the format.\n\
      hh:mm:ss\n");
  scanf("%d%c%d%c%d", &end_time.hours, &a,\
      &end_time.minutes,&a,&end_time.seconds);

  elapsed = elapsed_time(start_time, end_time);
  printf("Time elapsed between start and end: %.2d:%.2d:%.2d\n", \
      elapsed.hours,elapsed.minutes, elapsed.seconds);
  return 0;
}
struct time elapsed_time(struct time start_time, struct time end_time)
{
  //set duration to zero
  struct time duration = {0,0,0};
  int start_sec = start_time.hours * 3600 +\
                  start_time.minutes * 60 + start_time.seconds;
  int end_sec = end_time.hours * 3600 +\
                  end_time.minutes * 60 + end_time.seconds;
  int one_day = 24 * 3600, current = 0;

  if( start_sec > end_sec )
  {
    current = one_day - (start_sec - end_sec);
  }
  else if ( start_sec < end_sec )
  {
    current = end_sec - start_sec;
  }
  else
    current = one_day;

  duration.hours = current / 3600;
  current %= 3600;
  duration.minutes = current / 60;
  current %=  60;
  duration.seconds = current;
  return duration;
}
