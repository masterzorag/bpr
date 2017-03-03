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

void claw(int,int);  
int servoport1 = 0; /* change to correct port */
int claw_speed = 2;      /* change to speed you want the claw to open/close at */

void claw(int n, int cnt)
{
  int i;
  if (n<CLAW_CLOSE || n>CLAW_OPEN) {
    printf("invalid claw position\n");
    return;
  }
  for (i=0; i<=cnt; ++i) {
    set_servo_position(servoport1, n); 
    printf("opening or closing claw\n");
    msleep(100);
  }
}
