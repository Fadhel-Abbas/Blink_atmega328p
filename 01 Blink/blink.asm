; blink.asm
; by Fadhel Abbas
; turns on an LED which is connected to PB5 (digital out 13)

.include "./m328Pdef.inc"
rjmp Start

Start:
	call On

	; set delay to max possible in 16 bit number
	; and call subroutine Delay
	ldi zl, 0xFF
	ldi zh, 0xFF 
	call Delay

	call Off
	rjmp Start

Delay:
	sbci zl, 0x01
	brne Delay; load delay size in Z-register
	ret

On:
	ldi r16, 0b00100000
	out DDRB, r16
	out PortB, r16
	ret

Off:
	ldi r16, 0b00000000
	out DDRB, r16
	out PortB, r16
	ret
