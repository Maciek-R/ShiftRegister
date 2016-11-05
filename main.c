#include <avr/io.h>
#include <util/delay.h>

#include "rejestr_przesuwny.h"


int main(void){

DDRD |= 0xFF;
DDRC |= 0xFF;

reset();

while(1){





PORTC &= ~(1<<4);

shift_register_high();
shift_register_high();
shift_register_high();
shift_register_high();

update_register();

_delay_ms(2000);

PORTC |= (1<<4);

shift_register_low();
shift_register_low();
shift_register_low();
shift_register_low();

update_register();

_delay_ms(2000);

}


return 0;
}
