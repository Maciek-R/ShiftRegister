#include "rejestr_przesuwny.h"



void reset(){	//empty shift register loaded into storage register

PORTD = 0;

PORTD |= (1<<STCP);


}

void shift_register_high(){


PORTD = (1<<MR) | (1<<DS);

PORTD |= (1<<SHCP);

}

void shift_register_low(){


PORTD = (1<<MR);

PORTD |= (1<<SHCP);

}
void update_register(){

PORTD = (1<<MR);
PORTD |= (1<<STCP);

}
