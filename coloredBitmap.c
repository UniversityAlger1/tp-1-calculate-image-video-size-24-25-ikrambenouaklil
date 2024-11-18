#include <string.h>
#include "config/coloredBitmap.h"

// Parameters:
//   w: width of the image
//   h: height of the image
//   u: Unit of the output value. It could be 'bt' bits, 'ko' kilobits, 'mo' megabits, 'go' gigabits
// Return value
//   colored image size Bitmap (based on the unit passed parametter)
float coloredBitmap(int w, int h, char* unit) {
   // YOUR CODE HERE - BEGIN
 float result = w * h * 3 ; //bytess  

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
