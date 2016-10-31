#include <stdio.h>

struct date
{
  int month;
  int day;
  int year;
};
int compare(struct date date1, struct date date2);
int getN(struct date);
int main()
{
  struct date start_date,end_date;
  printf("Please enter a numeric start date delimited by spaces.\n\
      e.g. 1 12 2007 for 12, Jan 2007.\n");
  scanf("%d%d%d", &start_date.month, &start_date.day, &start_date.year);

  printf("Please enter a numeric end date delimited by spaces.\n\
      e.g. 1 12 2007 for 12, Jan 2007.\n");
  scanf("%d%d%d", &end_date.month, &end_date.day, &end_date.year);
  if( compare(start_date, end_date) == 1)
  {
    printf("Start date is greater than end date...\n");
    return 1;
  }
  else if(compare(start_date, end_date) == 0)
  {
    printf("Start date and end date are that same date.");
  }
  else
  {
    printf("There are %i days between the start and end dates\n",\
      getN(end_date) - getN(start_date));
  }
  return 0;
}

int compare(struct date date1, struct date date2)
{
  int value;// 1 greater 0 equal -1 less
  if( date1.year > date2.year)
    value = 1;
  else if( date1.year < date2.year)
    value = -1;
  else 
  {
    if( date1.month > date2.month)
      value = 1;
    else if( date1.month < date2.month)
      value = -1;
    else
    {
      if( date1.day > date2.day)
        value = 1;
      else if( date1.day < date2.day)
        value = -1;
      else
        value = 0;
    }
  }
  return value;
}
int getN(struct date date1)
{
  int f,g, value;
  struct date mar11800 = {1,3,1800},\
    feb281900 = {2,28,1900},\
    mar11700 = {1,3,1700},\
    feb281800 = {2,28,1800};
  if(date1.month <= 2)
  {
    f = date1.year - 1;
    g = date1.month + 13;
  }
  else
  {
    f = date1.year;
    g = date1.month +1;
  }

  value =  ((1461 * f) / 4) + ((153 * g) / 5) + date1.day;
// if  mar 1 1800 >= date1 <= feb 28 1900
  if ( (compare(date1,mar11800) == 1 ) && (compare(date1,feb281900) <= 0))
    value += 1;
  else if ( (compare(date1,mar11700) == 1 ) && (compare(date1,feb281800) <= 0))
    value += 2;
  return value;
}
