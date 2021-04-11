#define PORTA_PIN234567 0x78;//0xFC
#define PORTA_CLK_EN 0x01;

#define FORWARD  0x00//0xD4 //110101//01101000
#define BACKWARD 0xAC //101011
#define LEFT  0xCC   //110011
#define RIGHT  0xB4   //101101
#define BREAK  0xFC   //111111

void motorDriverConfig(void);
void moveForward(void);
void moveBackward(void);
void moveLeft(void);
void moveRight(void);
void Stop(void);