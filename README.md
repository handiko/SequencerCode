# SequencerCode
EME Relay Sequencer Code (Beta test). Runs on ATmega16 / pin compatible chip.
Compiled using CodeVision AVR (Not Arduino rubbish).

## I/O Ports
Input
* `PTT Input (active low)  PIND.3`

Leds:
* `PTT Led (TX high)       PORTD.2`
* `EVENT 1                 PORTA.4`
* `EVENT 2                 PORTA.5`
* `EVENT 3                 PORTA.6`
* `EVENT 4                 PORTA.7`

## Fuse Bits
* `Low   0xBD`
* `High  0x99`

...
