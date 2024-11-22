#include <string.h>
#include "config/video.h"
// Parameters:
//   w: width of the image
//   h: height of the image
//   durationMovie: duration in second of movie (colored image)
//   durationCredits: duration in second of credit (image Black/White)
//   unit: Unit of the output value. It could be 'bt' byte, 'ko' kilobits, 'mo' megabits, 'go' gigabits
// Return value
//   colored video size (based on the unit passed parametter)
float video(int w, int h, int durationMovie, int durationCredits, int fps, char* unit) {
   // YOUR CODE HERE - BEGIN
float result = fps *(w*h*durationCredits + 3*w*h*durationMovie); // byte 
if (strcmp(unit, "bt") == 0 ){
   return result * 8 ; //bits 
 } 
  if (strcmp(unit, "ko") == 0){
   return result / 1024 ; //kilobits 
 } 
  if (strcmp(unit, "mo") == 0){
   return result / (1024*1024) ; //megabits
 }
 if (strcmp(unit, "go") == 0){
   return result / (1024*1024*1024) ; //gigabits 
 }


   // YOUR CODE HERE - END
   return 0;
}