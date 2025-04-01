ldi r16, 0x20
out DDRB, r16
ldi r16, 0x00
out PORTB, r16

start:
    ldi r16, 0x00
    out PORTB, r16
    call delay
    
    ldi r16, 0x20
    out PORTB, r16
    call delay
    
    rjmp start

delay:
    ldi r17, 0x00
loop:
    inc r17
    cpi r17, 0xFF
    brne loop
    ret