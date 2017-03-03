/* Function to open/close claws
 * Created by Harrison Jumper
 *            and Ryan Keleti */ 
#include <kipr/botball.h>

/* please, for the love of God, fix these enums
 * to their appropriate values */
enum {
  CLAW_CLOSE=0,
  CLAW_OPEN=180
};

void claw(int op, int wp);  
int servoport1 = 0; /* change to correct port */
int speed = 2;      /* change to speed you want the claw to open/close at */

void claw(int orig, int new)
{
  if (new<CLAW_CLOSE || new>CLAW_OPEN) {
    printf("invalid claw position\n");
    return;
  }
  while (orig > new) { /* change to < if positions need it <--- ... */ 
    orig -= speed; /*change to - if positions need it */
    set_servo_position(servoport1, orig); 
    printf("opening or closing claw\n");//to debug issues with the code
    msleep(100);
  }
}
