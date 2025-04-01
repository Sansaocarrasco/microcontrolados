#define F_CPU 16000000UL

#include <stdint.h>
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

#define SET_BIT(VALUE, BIT) (VALUE |= (1 << BIT))
#define CLEAR_BIT(VALUE, BIT) (VALUE &= ~(1 << BIT))
#define TOGGLE_BIT(VALUE, BIT) (VALUE ^= (1 << BIT))
#define GET_BIT(VALUE, BIT) ((VALUE >> BIT) & 1)

ISR(INT0_vect) {
	TOGGLE_BIT(PORTB, 5);
}

int main(void){
	SET_BIT(DDRB, 5);
	CLEAR_BIT(PORTB, 5);
	
	SET_BIT(EICRA, 1);
	SET_BIT(EICRA, 0);

	SET_BIT(EIMSK, 0);
	SET_BIT(EIFR, 0);
	
	SET_BIT(SREG, 7);
	
	while(1){
		
	}
}
	
