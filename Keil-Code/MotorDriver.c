#include "motordriver.h"
#include "tm4c123gh6pm.h"


void GPIO_PortA_Init()
{
	//Initializing the Ports for Motor Driver
  GPIO_PORTA_DEN_R |= PORTA_PIN234567;
  GPIO_PORTA_DIR_R |= PORTA_PIN234567;
}

void moveBackward (void)
{
	//Writing the Backward Data
  GPIO_PORTA_DATA_R = FORWARD;
}

void moveForward (void)
{
	//Writing the Forward Data
  GPIO_PORTA_DATA_R = BACKWARD;
}

void moveLeft (void)
{
	//Writing the Left Data
  GPIO_PORTA_DATA_R = LEFT;
}

void moveRight (void)
	
{
	//Writing the Right Data
 GPIO_PORTA_DATA_R =RIGHT;
}

void Stop (void)
	
{

	//Writing the Stop Data
 GPIO_PORTA_DATA_R =BREAK;
}


void motorDriverConfig(void)
{
	//Enabling clock to Port A and Initializing ports
  SYSCTL_RCGCGPIO_R |= PORTA_CLK_EN;
  GPIO_PortA_Init();
}