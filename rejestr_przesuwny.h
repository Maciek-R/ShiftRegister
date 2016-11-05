#ifndef REJ_PRZESUWNY
#define REJ_PRZESUWNY

#include <avr/io.h>
//PIN 13 OE(output enable input) have to be in LOW


#define MR 		0	//master reset(LOW)
#define SHCP	1	//shift register clock input
#define STCP	2	//starage register clock input
#define DS		3	//serial data input






void reset();	//empty shift register loaded into storage register
void shift_register_high();
void shift_register_low();
void update_register();



#endif
