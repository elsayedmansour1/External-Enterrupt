#ifndef _GIE_CONFIG_H_
#define _GIE_CONFIG_H_


#define GIE_ENABLE  7

/************************************************************/
/***************************   ISR   ************************/
/************************************************************/

#define ISR(Vector_Num)     void Vector_Num(void)__attribute__((signal));\
	                  void Vector_Num(void)
/*****************************************************/
/********************   VECTOR TABLE   ***************/
/*****************************************************/

/*****************************************************/
/************ INT0		1	**************/
/************ INT1		2	**************/
/************ INT2		3	**************/
/************ TIMER2COMP	4	**************/
/************ TIMER2OVF	5	**************/
/************ TIMER1CAPT	6	**************/
/************ TIMER1CAPTA	7	**************/
/************ TIMER1CAPTB	8	**************/
/************ TIMER1OVF	9	**************/
/************ TIMER0COMP	10        **************/
/************ TIMER0OVF	11	**************/
/************ SPI             12        **************/
/************ UART_RXC	13	**************/
/************ UART_UDTE	14	**************/
/************ UART_TXC	15	**************/
/************ ADC		16	**************/
/*****************************************************/





#endif