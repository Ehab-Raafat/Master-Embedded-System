#include "uart.h"
unsigned char string_buffer[100] = "learn-in-depth:<hello>";
unsigned char string_buffer3[100] = "learn-in-depth:<hello>";

void main(void)
{
	Uart_Send_String(string_buffer);
}