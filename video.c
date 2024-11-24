#include <string.h>
#include "config/video.h"
// Parameters:
//   w: width of the image
//   h: height of the image
//   durationMovie: duration in seconds of the movie (colored image)
//   durationCredits: duration in seconds of the credits (black-and-white image)
//   unit: Unit of the output value. It could be 'bt' (bits), 'ko' (kilobits), 'mo' (megabits), 'go' (gigabits)
// Return value:
//   Total video size (based on the unit passed parameter)
float video(int w, int h, int durationMovie, int durationCredits, int fps, char* unit) {
   float colored; 
   float blackwhit;

   // Determine the base size for colored and black-and-white frames based on the unit
   if (strcmp(unit, "bt") == 0) {
       // Bits
       colored = 3 * w * h * 8.0; 
       blackwhit = w * h * 8.0; 
   } else if (strcmp(unit, "ko") == 0) {
       // Kilobits
       colored = (3 * w * h) / 1024.0; 
       blackwhit = (w * h) / 1024.0;
   } else if (strcmp(unit, "mo") == 0) {
       // Megabits
       colored = (3 * w * h) / (1024.0 * 1024.0); 
       blackwhit = (w * h) / (1024.0 * 1024.0);
   } else {
       // Gigabits
       colored = (3 * w * h) / (1024.0 * 1024.0 * 1024.0); 
       blackwhit = (w * h) / (1024.0 * 1024.0 * 1024.0);
   }

  
   float result = (colored * fps * durationMovie) + (blackwhit * fps * durationCredits);
   return result;
}
