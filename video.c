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
   float colored ; 
   float blackwhit ;

if (strcmp(unit, "bt") == 0 ){
  colored =3*w*h*8.0 ; 
  blackwhit = w*h*8.0; 
 } 
  else if (strcmp(unit, "ko") == 0){
   //kilobits 
  colored =(3*w*h)/ 1024 ; 
  blackwhit = (w*h)/ 1024;
 } 
 else  if (strcmp(unit, "mo") == 0){
    //megabits
     colored =(3*w*h)/ (1024*1024) ; 
  blackwhit = (w*h)/ (1024*1024);
    
 }else{
   //gigabits 
    colored =(3*w*h)/ (1024*1024*1024) ; 
  blackwhit = (w*h)/ (1024*1024*1024);
 }

float result = (colored * fps * durationMovie )+ (blackwhit * fps * durationMovie);
   // YOUR CODE HERE - END
   return result;
}