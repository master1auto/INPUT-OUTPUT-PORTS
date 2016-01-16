void main() {
//programme1



clignoterled :
ANSEL = ANSELH = 0; // All I/O pins are configured as digital
TRISD = 0b00000000; // All PORTD pins are configured as outputs
PORTD = 0;          // All PORTD pins are cleared
Delay_ms(4000);
PORTD = 0b11111111;          // All PORTD pins are set
Delay_ms(4000);
goto clignoterled



//programme2
/* Activer les entrées analogiques 3,4, 5. */
...
ANSEL = 0b00111000; // The PORTA.3 PORTA.4 PORTA.5 pins are analog
ANSELH = 0;         // All other I/O pins are configured as digital
TRISA = 0b00111000; // PORTA 3 and 4 and 5 are configured as inputs
PORTA = 0;          // All PORTA pins are cleared

//programme3
/* Activer les résistances de tirage pour connecter des buttons poussoir aux Pins RB0, RB1, RB2, RB3*/

ANSEL = ANSELH = 0; // All I/O pins are configured as digital
PORTB = 0;          // All PORTB pins are cleared
TRISB = 0b00001111; // PORTB.0 PORTB.1 PORTB.2 PORTB.3 are configured inputs
RBPU = 0;           // Pull-up resistors are enabled
WPUB0 = 1;		// Pull-up resistor is connected to the PORTB.0 pin
WPUB1 = 1;       // Pull-up resistor is connected to the PORTB.1 pin
WPUB2 = 1;	// Pull-up resistor is connected to the PORTB.2 pin
WPUB3 = 1;    // Pull-up resistor is connected to the PORTB.3 pin
IOCB0 = 1;    // The PORTB.0 pin may cause an interrupt on logic state change
IOCB1 = 1;    // The PORTB.1 pin may cause an interrupt on logic state change
IOCB2 = 1;    // The PORTB.2 pin may cause an interrupt on logic state change
IOCB3 = 1;   // The PORTB.3 pin may cause an interrupt on logic state change

RBIE = GIE = 1;     // Interrupt is enabled


}
