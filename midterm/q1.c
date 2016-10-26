/**
 * Title: Grade Histogram
 * Author: William Walter
 * Date: 10/26/2016
 * Purpose: Analyze an array of grades and display a histogram of the grades.
**/
#include <stdio.h>
int main()
{
  //populate with provided data
  char grade[32] = {
     'A', 'B', 'C', 'D', 'f', 'I', \
     'b', 'C', 'd', 'F', 'I', 'a', \
     'C', 'D', 'F', 'I', 'A', 'B', \
     'D', 'F', 'I', 'A', 'B', 'c', \
     'I' , 'D', 'F', 'F', 'A', 'B',\
     'a', 'b' \
  };
  
  int hist_grades[6] = {0};

  //loop through grades to populate histogram array
  for ( int index = 0; index < sizeof(grade)/sizeof(grade[0]); ++index)
  {
    //normalize values for a shorter switch
    if(grade[index] >= 'a')
      grade[index] = grade[index] - 32;

    //switch on grade value I = 5
    switch(grade[index])
    {
      case 'A':
        ++hist_grades[0];
        continue;
      case 'B':
        ++hist_grades[1];
        continue;
      case 'C':
        ++hist_grades[2];
        continue;
      case 'D':
        ++hist_grades[3];
        continue;
      case 'F':
        ++hist_grades[4];
        continue;
      case 'I':
        ++hist_grades[5];
        continue;
      //ignore input other than A-F or I
      default:
        continue;
    }
  }
   //print histogram table 
   printf("Grade\t Frequency\n--------------------\n");
   for(int index = 0; index < sizeof(hist_grades)/sizeof(hist_grades[0]); ++index)
   {
     //convert index to A-F or I
     char cur_grade = index;
     if( index != 5)
        cur_grade += 65;
     else
        cur_grade = 'I';
        
     printf("%3c\t%6d\n", cur_grade, hist_grades[index]);
    }
}
