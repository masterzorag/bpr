/* Function to open/close claws
 * Created by Harrison Jumper */ 
  
#include <kipr/botball.h>  
 
//claw closed position = 
//claw open position = 
 
 
void claw_change(op, wp);//op is the original position and wp is the wanted position
  
int servoport1 = 0;//change to correct port  
int speed = 2;//change to speed you want the claw to open/close at 
 
 
int main()  
{  
enable_servos();  
claw_change;  
disable_servos();  
return 0;  
}  
  
void claw_change(op, wp)
{  
while(op > wp) //change to < if positions need it 
{  
op = op - speed;//change to - if positions need it 
set_servo_position(servoport1, op);  
printf("opening or closing claw/");//to debug issues with the code 
msleep(100);
}  
}   
