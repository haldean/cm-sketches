#include <stdio.h>
void main(){int t;for(t=0;;t++)putchar(
    (t>>18==0 ? ((
      (2*t)|
      ((t >> 10)*t)
      )
     & (t >> 8)
     )
    | (t>>15 ? 4*t : 0)
    | (t>>17 ? (t>>4) : 0)

    : (t>>19==0 ? 
      (t*(t >> 8)|(t >> 13)|t*t)
      : 2*t|3*t|4*t
      )
    ));}
