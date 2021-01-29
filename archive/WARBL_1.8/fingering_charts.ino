

//Fingering Charts
//these are stored in PROGMEM to save SRAM space.
//The fingering charts can be either explicit, meaning an exact pattern is required to return a note, or general, where the highest uncovered hole is used to determine the note. This allows use to ignore all the holes below that, so we catch various open fingering patterns without having to list all of them.
//we check the explicit patterns first, and if there's not a match we check the general patterns (if desired).


// MAE FOOFOO 17 Nov 2018 - Added full key map and vibrato flags
//Tin whistle/Irish flute
struct tinwhistle_explicit_entry {
  uint8_t midi_note;
  uint8_t vibrato; //send pitch bend down
};

const struct tinwhistle_explicit_entry tinwhistle_explicit[64] PROGMEM = {  //explicit fingering patterns that aren't covered by the general patterns below. Sensor numbers from left to right are L1,L2,L3,R1,R2,R3,R4. The Lthumb, R4 (pinky) and bell sensors are ignored for now.
{73, 0}, //0000000 C#
{73, 0}, //0000001 C#
{73, 0}, //0000010 C#
{73, 0}, //0000011 C#
{73, 0}, //0000100 C#
{73, 0}, //0000101 C#
{73, 0}, //0000110 C#
{73, 0}, //0000111 C#
{73, 0}, //0001000 C#
{73, 0}, //0001001 C#
{73, 0}, //0001010 C#
{73, 0}, //0001011 C#
{73, 0}, //0001100 C#
{73, 0}, //0001101 C#
{73, 0}, //0001110 C#
{73, 0}, //0001111 C#
{73, 0}, //0010000 C#
{73, 0}, //0010001 C#
{73, 0}, //0010010 C#
{73, 0}, //0010011 C#
{73, 0}, //0010100 C#
{73, 0}, //0010101 C#
{73, 0}, //0010110 C#
{72, 0}, //0010111 C
{72, 0b000010}, //0011000 C
{72, 1}, //0011001 C | kVibratoMask;
{72, 1}, //0011010 C| kVibratoMask; 
{72, 1}, //0011011 C| kVibratoMask; 
{72, 0}, //0011100 C
{72, 0}, //0011101 C
{72, 0}, //0011110 C
{74, 0}, //0011111 D
{71, 0b000010}, //0100000 B
{71, 1}, //0100001 B | kVibratoMask;
{71, 1}, //0100010 B | kVibratoMask;
{71, 1}, //0100011 B | kVibratoMask;
{71, 0}, //0100100 B
{71, 0}, //0100101 B
{71, 0}, //0100110 B
{71, 0}, //0100111 B
{71, 0}, //0101000 B
{71, 0}, //0101001 B
{71, 0}, //0101010 B
{71, 0}, //0101011 B
{71, 0}, //0101100 B
{71, 0}, //0101101 B
{70, 0}, //0101110 Bb
{70, 0}, //0101111 Bb
{69, 0b000010}, //0110000 A
{69, 1}, //0110001 A | kVibratoMask;
{69, 1}, //0110010 A | kVibratoMask;
{69, 1}, //0110011 A | kVibratoMask;
{69, 0}, //0110100 A
{68, 0}, //0110101 G#
{69, 0}, //0110110 A
{68, 0}, //0110111 G#
{67, 0b000010}, //0111000 G
{67, 1}, //0111001 G | kVibratoMask;
{67, 1}, //0111010 G | kVibratoMask;
{67, 1}, //0111011 G | kVibratoMask;
{66, 0}, //0111100 F#
{65, 0}, //0111101 F#
{64, 0}, //0111110 E
{62, 0}, //0111111 D


 };


// MAE FOOFOO 17 Nov 2018 - Added full key map and vibrato flags
//Uilleann
struct uilleann_explicit_entry {
  uint8_t midi_note;
  uint8_t vibrato; //send pitch bend down
};

const struct uilleann_explicit_entry uilleann_explicit[128] PROGMEM = {  //explicit fingering patterns that aren't covered by the general patterns below. Sensor numbers from left to right are L1,L2,L3,R1,R2,R3,R4. The bell sensor is ignored for now.
{73, 0}, //0000000 C#
{73, 0b000010}, //0000001 C#
{73, 0}, //0000010 C#
{73, 0}, //0000011 C#
{73, 0}, //0000100 C#
{73, 1}, //0000101 C#
{73, 0}, //0000110 C#
{73, 0}, //0000111 C#
{73, 0}, //0001000 C#
{73, 0}, //0001001 C#
{73, 0}, //0001010 C#
{73, 0}, //0001011 C#
{73, 0}, //0001100 C#
{73, 0}, //0001101 C#
{73, 0}, //0001110 C#
{73, 0}, //0001111 C#
{73, 0}, //0010000 C#
{73, 0}, //0010001 C#
{73, 0}, //0010010 C#
{73, 0}, //0010011 C#
{73, 0}, //0010100 C#
{73, 0}, //0010101 C#
{73, 0}, //0010110 C#
{73, 0}, //0010111 C#
{73, 0}, //0011000 C#
{73, 0}, //0011001 C#
{73, 0}, //0011010 C#
{73, 0}, //0011011 C#
{73, 0}, //0011100 C#
{73, 0}, //0011101 C#
{73, 0}, //0011110 C#
{73, 0}, //0011111 C#
{73, 0}, //0100000 C#
{73, 0}, //0100001 C#
{73, 0}, //0100010 C#
{73, 0}, //0100011 C#
{73, 0}, //0100100 C#
{73, 0}, //0100101 C#
{73, 0}, //0100110 C#
{73, 0}, //0100111 C#
{73, 0}, //0101000 C#
{73, 0}, //0101001 C#
{73, 0}, //0101010 C#
{73, 0}, //0101011 C#
{73, 0}, //0101100 C#
{73, 0}, //0101101 C#
{73, 0}, //0101110 C#
{73, 0}, //0101111 C#
{72, 0b000010}, //0110000 C
{72, 0b000010}, //0110001 C
{72, 0}, //0110010 C
{72, 0b000010}, //0110011 C
{72, 1}, //0110100 C | kVibratoMask;
{72, 1}, //0110101 C | kVibratoMask;
{72, 0}, //0110110 C | kVibratoMask;
{72, 1}, //0110111 C | kVibratoMask;
{72, 0}, //0111000 C
{72, 0b000010}, //0111001 C
{72, 0}, //0111010 C
{72, 0}, //0111011 C
{72, 0}, //0111100 C
{72, 1}, //0111101 C | kVibratoMask;
{72, 0}, //0111110 C
{73, 0}, //0111111 C#
{71, 0}, //1000000 B
{71, 0b000010}, //1000001 B
{71, 0}, //1000010 B
{71, 0b000010}, //1000011 B
{71, 0}, //1000100 B
{71, 1}, //1000101 B | kVibratoMask;
{71, 0}, //1000110 B
{71, 1}, //1000111 B | kVibratoMask;
{70, 0}, //1001000 Bb
{71, 0}, //1001001 B
{70, 0}, //1001010 Bb
{71, 0}, //1001011 B
{71, 0}, //1001100 B
{71, 0}, //1001101 B
{71, 0}, //1001110 B
{71, 0}, //1001111 B
{71, 0}, //1010000 B
{71, 0}, //1010001 B
{71, 0}, //1010010 B
{71, 0}, //1010011 B
{71, 0}, //1010100 B
{71, 0}, //1010101 B
{71, 0}, //1010110 B
{71, 0}, //1010111 B
{71, 0}, //1011000 B
{71, 0}, //1011001 B
{71, 0}, //1011010 B
{71, 0}, //1011011 B
{71, 0}, //1011100 B
{71, 0}, //1011101 B
{71, 0}, //1011110 B
{71, 0}, //1011111 B
{69, 0}, //1100000 A
{69, 0b000010}, //1100001 A
{69, 0}, //1100010 A
{69, 0b000010}, //1100011 A
{69, 0}, //1100100 A
{69, 1}, //1100101 A | kVibratoMask;
{69, 0}, //1100110 A
{69, 1}, //1100111 A | kVibratoMask;
{68, 0}, //1101000 G#
{69, 0}, //1101001 A
{68, 0}, //1101010 G#
{69, 0}, //1101011 A
{69, 0}, //1101100 A
{69, 0}, //1101101 A
{69, 0}, //1101110 A
{69, 0}, //1101111 A
{67, 0}, //1110000 G
{67, 0b000010}, //1110001 G
{67, 0}, //1110010 G
{67, 0b000010}, //1110011 G
{67, 0}, //1110100 G
{67, 1}, //1110101 G | kVibratoMask
{67, 0}, //1110110 G
{67, 1}, //1110111 G | kVibratoMask
{66, 0}, //1111000 F#
{66, 0}, //1111001 F#
{65, 0}, //1111010 F#
{66, 0}, //1111011 F#
{64, 0}, //1111100 E
{64, 0}, //1111101 E
{63, 0}, //1111110 Eb
{62, 0} //1111111 D

};


//GHB/Scottish smallpipes
struct GHB_explicit_entry {
  uint8_t midi_note;
};


const struct GHB_explicit_entry GHB_explicit[128] PROGMEM = {  //explicit fingering patterns. Sensor numbers from left to right are L1,L2,L3,R1,R2,R3,R4. The bell sensor is ignored.

{72}, //0000000 G (as written, actual note sounded is Bb, like on real GHB) Noteshift variable is used to transpose from key of D (all fingerings are based on D) to Bb. Uses equal temperament, but temperament can be set in app (e.g. Universal Piper).
{72}, //0000001 G
{72}, //0000010 G
{72}, //0000011 G
{72}, //0000100 G
{72}, //0000101 G
{72}, //0000110 G
{72}, //0000111 G
{72}, //0001000 G
{72}, //0001001 G
{72}, //0001010 G
{72}, //0001011 G
{72}, //0001100 G
{72}, //0001101 G
{72}, //0001110 G
{72}, //0001111 G
{72}, //0010000 G
{72}, //0010001 G
{72}, //0010010 G
{72}, //0010011 G
{72}, //0010100 G
{72}, //0010101 G
{72}, //0010110 G
{72}, //0010111 G
{72}, //0011000 G
{72}, //0011001 G
{72}, //0011010 G
{72}, //0011011 G
{72}, //0011100 G
{72}, //0011101 G
{72}, //0011110 G
{72}, //0011111 G
{72}, //0100000 G
{72}, //0100001 G
{72}, //0100010 G
{72}, //0100011 G
{72}, //0100100 G
{72}, //0100101 G
{72}, //0100110 G
{72}, //0100111 G
{72}, //0101000 G
{72}, //0101001 G
{72}, //0101010 G
{72}, //0101011 G
{72}, //0101100 G
{72}, //0101101 G
{72}, //0101110 G
{72}, //0101111 G
{72}, //0110000 G
{72}, //0110001 G
{72}, //0110010 G
{72}, //0110011 G
{72}, //0110100 G
{72}, //0110101 G
{72}, //0110110 G
{72}, //0110111 G
{72}, //0111000 G
{72}, //0111001 G
{72}, //0111010 G
{72}, //0111011 G
{72}, //0111100 G
{72}, //0111101 G
{72}, //0111110 G
{73}, //0111111 G#
{71}, //1000000 F#
{71}, //1000001 F#
{71}, //1000010 F#
{71}, //1000011 F#
{71}, //1000100 F#
{71}, //1000101 F#
{71}, //1000110 F#
{71}, //1000111 F#
{71}, //1001000 F#
{71}, //1001001 F#
{71}, //1001010 F#
{71}, //1001011 F#
{71}, //1001100 F#
{71}, //1001101 F#
{71}, //1001110 F#
{71}, //1001111 F#
{71}, //1010000 F#
{71}, //1010001 F#
{71}, //1010010 F#
{71}, //1010011 F#
{71}, //1010100 F#
{71}, //1010101 F#
{71}, //1010110 F#
{71}, //1010111 F#
{71}, //1011000 F#
{71}, //1011001 F#
{70}, //1011010 F
{70}, //1011011 F#
{71}, //1011100 F#
{71}, //1011101 F#
{71}, //1011110 F#
{71}, //1011111 F#
{69}, //1100000 E
{69}, //1100001 E
{69}, //1100010 E
{69}, //1100011 E
{69}, //1100100 E
{69}, //1100101 E
{69}, //1100110 E
{69}, //1100111 E
{69}, //1101000 E
{69}, //1101001 E
{69}, //1101010 E
{69}, //1101011 E
{69}, //1101100 E
{69}, //1101101 E
{69}, //1101110 E
{69}, //1101111 E
{67}, //1110000 D
{67}, //1110001 D
{67}, //1110010 D
{67}, //1110011 D
{67}, //1110100 D
{67}, //1110101 D
{67}, //1110110 D
{67}, //1110111 D
{66}, //1111000 C#
{66}, //1111001 C#
{65}, //1111010 C
{65}, //1111011 C
{64}, //1111100 B
{63}, //1111101 A#
{62}, //1111110 A
{60} //1111111 G

};



struct northumbrian_general_entry {
  uint8_t keys;
  uint8_t midi_note;
};

const struct northumbrian_general_entry northumbrian_general[8]PROGMEM  = {  //general fingering pattern for each MIDI note. In this case, the index (position from right) of the leftmost uncovered hole is used to determine the MIDI note. This way all other holes below that one are ignored.
  {127, 60},//This will be interpreted as slient (closed pipe). The findleftmostunsetbit function returns 127 if all holes are covered.
  {0, 62},//G --- noteshift variable is set by default to lower the key to F, which is most common for Northumbrian.
  {1, 64},//A
  {2, 66},//B
  {3, 67},//C
  {4, 69},//D
  {5, 71},//E
  {6, 73}//F#


};



//Gaita, extended
struct gaita_extended_explicit_entry {
  uint8_t midi_note;
};


const struct gaita_extended_explicit_entry gaita_extended_explicit[256]PROGMEM  = {  //general fingering pattern for each MIDI note. In this case, the index (position from right) of the leftmost uncovered hole is used to determine the MIDI note. This way all other holes below that one are ignored.
{75}, //00000000 C  MIDI notes in the GAITA chart are shifted 1 note upward to bring the base note to a similar range as other instruments, because this base note is used in octave-shifting calculations. The notes are shifted back down again later to bring them in tune.
{75}, //00000001
{75}, //00000010 C
{75}, //00000011
{75}, //00000100
{75}, //00000101
{75}, //00000110
{75}, //00000111
{75}, //00001000
{75}, //00001001 C
{75}, //00001010
{75}, //00001011
{75}, //00001100
{75}, //00001101
{75}, //00001110
{74}, //00001111 B
{99}, //00010000
{99}, //00010001
{99}, //00010010
{99}, //00010011
{99}, //00010100
{99}, //00010101
{99}, //00010110
{99}, //00010111
{98}, //00011000
{98}, //00011001
{97}, //00011010
{97}, //00011011
{96}, //00011100
{95}, //00011101
{94}, //00011110
{93}, //00011111
{85}, //00100000
{85}, //00100001
{85}, //00100010
{85}, //00100011
{85}, //00100100
{85}, //00100101
{85}, //00100110
{85}, //00100111
{93}, //00101000
{75}, //00101001
{75}, //00101010
{73}, //00101011 A#
{73}, //00101100
{73}, //00101101
{73}, //00101110
{73}, //00101111
{92}, //00110000 F
{92}, //00110001
{92}, //00110010
{74}, //00110011
{92}, //00110100
{74}, //00110101
{74}, //00110110
{74}, //00110111
{91}, //00111000 E
{74}, //00111001
{90}, //00111010 D#
{74}, //00111011
{89}, //00111100 D
{88}, //00111101
{87}, //00111110
{86}, //00111111 B
{84}, //01000000 A
{84}, //01000001 A
{84}, //01000010 A
{73}, //01000011 A#
{73}, //01000100
{73}, //01000101
{84}, //01000110 A
{84}, //01000111
{84}, //01001000
{73}, //01001001 A#
{73}, //01001010
{73}, //01001011
{73}, //01001100
{73}, //01001101
{73}, //01001110
{73}, //01001111
{83}, //01010000 G#
{83}, //01010001
{83}, //01010010
{83}, //01010011
{83}, //01010100 G#
{83}, //01010101
{83}, //01010110
{75}, //01010111 C
{75}, //01011000
{75}, //01011001
{75}, //01011010
{75}, //01011011
{75}, //01011100
{75}, //01011101
{83}, //01011110 G#
{75}, //01011111
{82}, //01100000 G
{82}, //01100001 G
{82}, //01100010 G
{82}, //01100011 G
{82}, //01100100
{82}, //01100101
{82}, //01100110
{82}, //01100111
{82}, //01101000
{82}, //01101001 G
{82}, //01101010
{82}, //01101011
{81}, //01101100 F#
{81}, //01101101
{81}, //01101110
{82}, //01101111 G
{80}, //01110000 F
{80}, //01110001 F
{80}, //01110010 F
{80}, //01110011
{80}, //01110100
{80}, //01110101
{80}, //01110110 F
{80}, //01110111 F
{79}, //01111000 E
{79}, //01111001 E
{78}, //01111010 D#
{78}, //01111011 D#
{77}, //01111100 D
{76}, //01111101 C#
{75}, //01111110 C
{74}, //01111111 B
{74}, //10000000 B
{74}, //10000001
{74}, //10000010
{74}, //10000011 B
{74}, //10000100
{74}, //10000101
{74}, //10000110 B
{74}, //10000111
{74}, //10001000
{74}, //10001001 B
{74}, //10001010 B
{74}, //10001011
{74}, //10001100
{74}, //10001101
{74}, //10001110 B
{74}, //10001111 B
{74}, //10010000
{74}, //10010001
{74}, //10010010
{74}, //10010011
{74}, //10010100
{74}, //10010101
{74}, //10010110
{74}, //10010111
{74}, //10011000
{74}, //10011001
{74}, //10011010
{74}, //10011011
{74}, //10011100
{74}, //10011101
{74}, //10011110
{74}, //10011111
{73}, //10100000 A#
{73}, //10100001 A#
{73}, //10100010 A#
{73}, //10100011 A#
{73}, //10100100 A#
{73}, //10100101 A#
{73}, //10100110 A#
{73}, //10100111 A#
{73}, //10101000 A#
{73}, //10101001 A#
{73}, //10101010 A#
{73}, //10101011
{73}, //10101100 A#
{73}, //10101101 A#
{73}, //10101110 A#
{73}, //10101111 A#
{75}, //10110000 C
{75}, //10110001 C
{75}, //10110010 C
{75}, //10110011 C
{75}, //10110100
{75}, //10110101 C
{75}, //10110110 C
{73}, //10110111 A#
{75}, //10111000
{75}, //10111001 C
{75}, //10111010 C
{75}, //10111011 C
{75}, //10111100 C
{75}, //10111101
{75}, //10111110 C
{75}, //10111111 C
{72}, //11000000 A
{72}, //11000001 A
{72}, //11000010 A
{72}, //11000011 A
{72}, //11000100
{72}, //11000101
{72}, //11000110 A
{72}, //11000111
{72}, //11001000
{72}, //11001001 A
{72}, //11001010 A
{72}, //11001011
{72}, //11001100
{72}, //11001101
{72}, //11001110 A
{72}, //11001111 A
{71}, //11010000 G#
{74}, //11010001 B
{71}, //11010010 G#
{71}, //11010011 G#
{71}, //11010100
{71}, //11010101
{71}, //11010110 G#
{71}, //11010111
{71}, //11011000
{71}, //11011001 G#
{71}, //11011010 G#
{71}, //11011011
{71}, //11011100
{71}, //11011101
{71}, //11011110 G#
{71}, //11011111 G#
{70}, //11100000 G
{70}, //11100001 G
{70}, //11100010 G
{70}, //11100011
{70}, //11100100
{70}, //11100101 G
{70}, //11100110 G
{70}, //11100111 G
{69}, //11101000 F#
{70}, //11101001 G
{70}, //11101010 G
{70}, //11101011
{69}, //11101100 F#
{69}, //11101101
{70}, //11101110 G
{70}, //11101111
{68}, //11110000 F
{68}, //11110001 F
{68}, //11110010 F
{68}, //11110011 F
{68}, //11110100
{68}, //11110101 F
{68}, //11110110 F
{68}, //11110111 F
{67}, //11111000 E
{67}, //11111001 E
{66}, //11111010 D#
{66}, //11111011 D#
{65}, //11111100 D
{64}, //11111101 C#
{63}, //11111110 C
{62}, //11111111 B
};



//Gaita
struct gaita_explicit_entry {
  uint8_t midi_note;
};


const struct gaita_explicit_entry gaita_explicit[256]PROGMEM  = {  //general fingering pattern for each MIDI note. In this case, the index (position from right) of the leftmost uncovered hole is used to determine the MIDI note. This way all other holes below that one are ignored.
{75}, //00000000 C  
{75}, //00000001  
{75}, //00000010 C  
{75}, //00000011  
{75}, //00000100  
{75}, //00000101  
{75}, //00000110  
{75}, //00000111  
{75}, //00001000  
{75}, //00001001 C  
{75}, //00001010  
{75}, //00001011  
{75}, //00001100  
{75}, //00001101  
{75}, //00001110  
{74}, //00001111 B  
{75}, //00010000  
{75}, //00010001  
{75}, //00010010  
{75}, //00010011  
{75}, //00010100  
{75}, //00010101  
{75}, //00010110  
{75}, //00010111  
{75}, //00011000  
{75}, //00011001  
{75}, //00011010  
{75}, //00011011  
{75}, //00011100  
{75}, //00011101  
{75}, //00011110  
{75}, //00011111  
{75}, //00100000  
{75}, //00100001  
{75}, //00100010  
{75}, //00100011  
{75}, //00100100  
{75}, //00100101  
{75}, //00100110  
{75}, //00100111  
{75}, //00101000  
{75}, //00101001  
{75}, //00101010  
{73}, //00101011 A# 
{73}, //00101100  
{73}, //00101101  
{73}, //00101110  
{73}, //00101111  
{80}, //00110000 F  
{74}, //00110001 B  
{74}, //00110010  
{74}, //00110011  
{74}, //00110100  
{74}, //00110101  
{74}, //00110110  
{74}, //00110111  
{79}, //00111000 E  
{74}, //00111001  
{78}, //00111010 D# 
{74}, //00111011  
{77}, //00111100 D  
{74}, //00111101  
{75}, //00111110  
{74}, //00111111 B  
{84}, //01000000 A  
{84}, //01000001 A  
{84}, //01000010 A  
{73}, //01000011 A# 
{73}, //01000100  
{73}, //01000101  
{84}, //01000110 A  
{84}, //01000111  
{84}, //01001000  
{73}, //01001001 A# 
{73}, //01001010  
{73}, //01001011  
{73}, //01001100  
{73}, //01001101  
{73}, //01001110  
{73}, //01001111  
{83}, //01010000 G# 
{83}, //01010001  
{83}, //01010010  
{83}, //01010011  
{83}, //01010100 G# 
{83}, //01010101  
{83}, //01010110  
{75}, //01010111 C  
{75}, //01011000  
{75}, //01011001  
{75}, //01011010  
{75}, //01011011  
{75}, //01011100  
{75}, //01011101  
{83}, //01011110 G# 
{75}, //01011111  
{82}, //01100000 G  
{82}, //01100001 G  
{82}, //01100010 G  
{82}, //01100011 G  
{82}, //01100100  
{82}, //01100101  
{82}, //01100110  
{82}, //01100111  
{82}, //01101000  
{82}, //01101001 G  
{82}, //01101010  
{82}, //01101011  
{81}, //01101100 F# 
{81}, //01101101  
{81}, //01101110  
{82}, //01101111 G  
{80}, //01110000 F  
{80}, //01110001 F  
{80}, //01110010 F  
{80}, //01110011  
{80}, //01110100  
{80}, //01110101  
{80}, //01110110 F  
{80}, //01110111 F  
{79}, //01111000 E  
{79}, //01111001 E  
{78}, //01111010 D# 
{78}, //01111011 D# 
{77}, //01111100 D  
{76}, //01111101 C# 
{75}, //01111110 C  
{74}, //01111111 B  
{74}, //10000000 B  
{74}, //10000001  
{74}, //10000010  
{74}, //10000011 B  
{74}, //10000100  
{74}, //10000101  
{74}, //10000110 B  
{74}, //10000111  
{74}, //10001000  
{74}, //10001001 B  
{74}, //10001010 B  
{74}, //10001011  
{74}, //10001100  
{74}, //10001101  
{74}, //10001110 B  
{74}, //10001111 B  
{74}, //10010000  
{74}, //10010001  
{74}, //10010010  
{74}, //10010011  
{74}, //10010100  
{74}, //10010101  
{74}, //10010110  
{74}, //10010111  
{74}, //10011000  
{74}, //10011001  
{74}, //10011010  
{74}, //10011011  
{74}, //10011100  
{74}, //10011101  
{74}, //10011110  
{74}, //10011111  
{73}, //10100000 A# 
{73}, //10100001 A# 
{73}, //10100010 A# 
{73}, //10100011 A# 
{73}, //10100100 A# 
{73}, //10100101 A# 
{73}, //10100110 A# 
{73}, //10100111 A# 
{73}, //10101000 A# 
{73}, //10101001 A# 
{73}, //10101010 A# 
{73}, //10101011  
{73}, //10101100 A# 
{73}, //10101101 A# 
{73}, //10101110 A# 
{73}, //10101111 A# 
{75}, //10110000 C  
{75}, //10110001 C  
{75}, //10110010 C  
{75}, //10110011 C  
{75}, //10110100  
{75}, //10110101 C  
{75}, //10110110 C  
{73}, //10110111 A# 
{75}, //10111000  
{75}, //10111001 C  
{75}, //10111010 C  
{75}, //10111011 C  
{75}, //10111100 C  
{75}, //10111101  
{75}, //10111110 C  
{75}, //10111111 C  
{72}, //11000000 A  
{72}, //11000001 A  
{72}, //11000010 A  
{72}, //11000011 A  
{72}, //11000100  
{72}, //11000101  
{72}, //11000110 A  
{72}, //11000111  
{72}, //11001000  
{72}, //11001001 A  
{72}, //11001010 A  
{72}, //11001011  
{72}, //11001100  
{72}, //11001101  
{72}, //11001110 A  
{72}, //11001111 A  
{71}, //11010000 G# 
{74}, //11010001 B  
{71}, //11010010 G# 
{71}, //11010011 G# 
{71}, //11010100  
{71}, //11010101  
{71}, //11010110 G# 
{71}, //11010111  
{71}, //11011000  
{71}, //11011001 G# 
{71}, //11011010 G# 
{71}, //11011011  
{71}, //11011100  
{71}, //11011101  
{71}, //11011110 G# 
{71}, //11011111 G# 
{70}, //11100000 G  
{70}, //11100001 G  
{70}, //11100010 G  
{70}, //11100011  
{70}, //11100100  
{70}, //11100101 G  
{70}, //11100110 G  
{70}, //11100111 G  
{69}, //11101000 F# 
{70}, //11101001 G  
{70}, //11101010 G  
{70}, //11101011  
{69}, //11101100 F# 
{69}, //11101101  
{70}, //11101110 G  
{70}, //11101111  
{68}, //11110000 F  
{68}, //11110001 F  
{68}, //11110010 F  
{68}, //11110011 F  
{68}, //11110100  
{68}, //11110101 F  
{68}, //11110110 F  
{68}, //11110111 F  
{67}, //11111000 E  
{67}, //11111001 E  
{66}, //11111010 D# 
{66}, //11111011 D# 
{65}, //11111100 D  
{64}, //11111101 C# 
{63}, //11111110 C  
{62}, //11111111 B  
};




//North American Flute
struct naf_explicit_entry {
  uint8_t midi_note;
};

const struct naf_explicit_entry naf_explicit[128]PROGMEM  = {  //general fingering pattern for each MIDI note. In this case, the index (position from right) of the leftmost uncovered hole is used to determine the MIDI note. This way all other holes below that one are ignored.
{75}, //0000000 D#5
{74}, //0000001 D5
{74}, //0000010 D5
{73}, //0000011 C#5
{74}, //0000100 D5
{73}, //0000101 C#5
{73}, //0000110 C#5
{72}, //0000111 C5
{74}, //0001000 D5
{73}, //0001001 C#5
{73}, //0001010 C#5
{72}, //0001011 C5
{73}, //0001100 C#5
{72}, //0001101 C5
{72}, //0001110 C5
{71}, //0001111 B4
{74}, //0010000 D5
{73}, //0010001 C#5
{73}, //0010010 C#5
{72}, //0010011 C5
{73}, //0010100 C#5
{72}, //0010101 C5
{72}, //0010110 C5
{71}, //0010111 B4
{73}, //0011000 C#5
{72}, //0011001 C5
{72}, //0011010 C5
{71}, //0011011 B4
{77}, //0011100 F5
{76}, //0011101 E5
{76}, //0011110 E5
{75}, //0011111 D#5
{74}, //0100000 D5
{73}, //0100001 C#5
{73}, //0100010 C#5
{72}, //0100011 C5
{73}, //0100100 C#5
{72}, //0100101 C5
{71}, //0100110 B4
{70}, //0100111 A#4
{78}, //0101000 F#5
{77}, //0101001 F5
{77}, //0101010 F5
{76}, //0101011 E5
{77}, //0101100 F5
{76}, //0101101 E5
{76}, //0101110 E5
{75}, //0101111 D#5
{72}, //0110000 C5
{71}, //0110001 B4
{71}, //0110010 B4
{70}, //0110011 A#4
{71}, //0110100 B4
{70}, //0110101 A#4
{70}, //0110110 A#4
{69}, //0110111 A4
{77}, //0111000 F5
{76}, //0111001 E5
{76}, //0111010 E5
{75}, //0111011 D#5
{76}, //0111100 E5
{75}, //0111101 D#5
{75}, //0111110 D#5
{74}, //0111111 D5
{73}, //1000000 C#5
{72}, //1000001 C5
{72}, //1000010 C5
{71}, //1000011 B4
{72}, //1000100 C5
{71}, //1000101 B4
{70}, //1000110 A#4
{69}, //1000111 A4
{72}, //1001000 C5
{71}, //1001001 B4
{70}, //1001010 A#4
{69}, //1001011 A4
{71}, //1001100 B4
{70}, //1001101 A#4
{70}, //1001110 A#4
{69}, //1001111 A4
{72}, //1010000 C5
{71}, //1010001 B4
{71}, //1010010 B4
{70}, //1010011 A#4
{71}, //1010100 B4
{70}, //1010101 A#4
{70}, //1010110 A#4
{69}, //1010111 A4
{71}, //1011000 B4
{70}, //1011001 A#4
{70}, //1011010 A#4
{69}, //1011011 A4
{70}, //1011100 A#4
{69}, //1011101 A4
{69}, //1011110 A4
{68}, //1011111 G#4
{71}, //1100000 B4
{70}, //1100001 A#4
{70}, //1100010 A#4
{69}, //1100011 A4
{70}, //1100100 A#4
{69}, //1100101 A4
{69}, //1100110 A4
{68}, //1100111 G#4
{70}, //1101000 A#4
{69}, //1101001 A4
{69}, //1101010 A4
{68}, //1101011 G#4
{69}, //1101100 A4
{68}, //1101101 G#4
{68}, //1101110 G#4
{67}, //1101111 G4
{69}, //1110000 A4
{68}, //1110001 G#4
{68}, //1110010 G#4
{67}, //1110011 G4
{68}, //1110100 G#4
{67}, //1110101 G4
{67}, //1110110 G4
{66}, //1110111 F#4
{67}, //1111000 G4
{66}, //1111001 F#4
{66}, //1111010 F#4
{65}, //1111011 F4
{65}, //1111100 F4
{64}, //1111101 E4
{62}, //1111110 D4
{63} //1111111 D#4

};



//EVI
struct evi_explicit_entry {
  uint8_t midi_note;
};


const struct evi_explicit_entry evi_explicit[128]PROGMEM  = {  
{94}, //0000000 Bb
{94}, //0000001 Bb
{94}, //0000010 Bb
{94}, //0000011 Bb
{94}, //0000100 Bb
{94}, //0000101 Bb
{94}, //0000110 Bb
{94}, //0000111 Bb
{94}, //0001000 Bb
{94}, //0001001 Bb
{94}, //0001010 Bb
{94}, //0001011 Bb
{94}, //0001100 Bb
{94}, //0001101 Bb
{94}, //0001110 Bb
{94}, //0001111 Bb
{94}, //0010000 Bb
{94}, //0010001 Bb
{91}, //0010010 G
{94}, //0010011 Bb
{93}, //0010100 A
{93}, //0010101 A
{90}, //0010110 Gb
{90}, //0010111 Gb
{92}, //0011000 Ab
{92}, //0011001 F
{89}, //0011010 Ab
{92}, //0011011 Ab
{91}, //0011100 G
{91}, //0011101 G
{88}, //0011110 E
{91}, //0011111 G
{89}, //0100000 F
{86}, //0100001 F
{86}, //0100010 D
{89}, //0100011 F
{88}, //0100100 E
{88}, //0100101 E
{85}, //0100110 Db
{85}, //0100111 Db
{87}, //0101000 Eb
{87}, //0101001 Eb
{84}, //0101010 C
{84}, //0101011 C
{86}, //0101100 D
{86}, //0101101 D
{83}, //0101110 B
{83}, //0101111 B
{65}, //0110000 F
{65}, //0110001 F
{62}, //0110010 D
{65}, //0110011 F
{64}, //0110100 E
{64}, //0110101 E
{61}, //0110110 Db
{61}, //0110111 Db
{63}, //0111000 Eb
{63}, //0111001 Eb
{60}, //0111010 C
{60}, //0111011 C
{62}, //0111100 D
{62}, //0111101 D
{59}, //0111110 B
{59}, //0111111 B
{82}, //1000000 Bb
{82}, //1000001 Bb
{79}, //1000010 G
{82}, //1000011 Bb
{81}, //1000100 A
{81}, //1000101 A
{78}, //1000110 Gb
{78}, //1000111 Gb
{80}, //1001000 Ab
{80}, //1001001 Ab
{77}, //1001010 F
{80}, //1001011 Ab
{79}, //1001100 G
{79}, //1001101 G
{76}, //1001110 E
{79}, //1001111 G
{70}, //1010000 Bb
{70}, //1010001 Bb
{67}, //1010010 G
{70}, //1010011 Bb
{69}, //1010100 A
{69}, //1010101 A
{66}, //1010110 Gb
{66}, //1010111 Gb
{68}, //1011000 Ab
{68}, //1011001 Ab
{65}, //1011010 F
{68}, //1011011 Ab
{67}, //1011100 G
{67}, //1011101 G
{64}, //1011110 E
{67}, //1011111 G
{77}, //1100000 F
{77}, //1100001 F
{74}, //1100010 D
{77}, //1100011 F
{76}, //1100100 E
{76}, //1100101 E
{73}, //1100110 Db
{73}, //1100111 Db
{75}, //1101000 Eb
{75}, //1101001 Eb
{72}, //1101010 C
{72}, //1101011 C
{74}, //1101100 D
{74}, //1101101 D
{71}, //1101110 B
{71}, //1101111 B
{58}, //1110000 Bb
{58}, //1110001 Bb
{55}, //1110010 G
{58}, //1110011 Bb
{57}, //1110100 A
{57}, //1110101 A
{54}, //1110110 Gb
{54}, //1110111 Gb
{56}, //1111000 Ab
{56}, //1111001 Ab
{53}, //1111010 F
{53}, //1111011 F
{55}, //1111100 G
{55}, //1111101 G
{52}, //1111110 E
{52} //1111111 E
};



//Shakuhachi
struct shakuhachi_explicit_entry {
  uint8_t midi_note;
};


const struct shakuhachi_explicit_entry shakuhachi_explicit[32]PROGMEM  = {  
{74}, //00000 D
{74}, //00001 
{74}, //00010 
{74}, //00011 
{74}, //00100 
{74}, //00101 
{74}, //00110 
{74}, //00111 
{74}, //01000 
{74}, //01001 
{74}, //01010 
{74}, //01011 
{74}, //01100 
{74}, //01101 
{74}, //01110 
{73}, //01111 C#
{72}, //10000 C
{72}, //10001 
{72}, //10010 
{72}, //10011 
{72}, //10100 
{72}, //10101 
{72}, //10110 
{72}, //10111 
{69}, //11000 A
{69}, //11001 
{69}, //11010 
{69}, //11011 
{67}, //11100 G
{67}, //11101 
{65}, //11110 F
{62} //11111 C


};


//Kaval
struct kaval_explicit_entry {
  uint8_t midi_note;
};

const struct kaval_explicit_entry kaval_explicit[128]PROGMEM  = {  //general fingering pattern for each MIDI note. In this case, the index (position from right) of the leftmost uncovered hole is used to determine the MIDI note. This way all other holes below that one are ignored.

{70}, //0000000 Bb
{70}, //0000001 
{70}, //0000010 
{70}, //0000011 
{70}, //0000100 
{70}, //0000101 
{70}, //0000110 
{70}, //0000111 
{70}, //0001000 
{70}, //0001001 
{70}, //0001010 
{70}, //0001011 
{70}, //0001100 
{70}, //0001101 
{70}, //0001110 
{70}, //0001111 
{70}, //0010000 
{70}, //0010001 
{70}, //0010010 
{70}, //0010011 
{70}, //0010100 
{70}, //0010101 
{70}, //0010110 
{70}, //0010111 
{70}, //0011000 
{70}, //0011001 
{70}, //0011010 
{70}, //0011011 
{70}, //0011100 
{70}, //0011101 
{70}, //0011110 
{70}, //0011111 
{70}, //0100000 
{70}, //0100001 
{70}, //0100010 
{70}, //0100011 
{70}, //0100100 
{70}, //0100101 
{70}, //0100110 
{70}, //0100111 
{70}, //0101000 
{70}, //0101001 
{70}, //0101010 
{70}, //0101011 
{70}, //0101100 
{70}, //0101101 
{70}, //0101110 
{70}, //0101111 
{70}, //0110000 
{70}, //0110001 
{70}, //0110010 
{70}, //0110011 
{70}, //0110100 
{70}, //0110101 
{70}, //0110110 
{70}, //0110111 
{70}, //0111000 
{70}, //0111001 
{70}, //0111010 
{70}, //0111011 
{70}, //0111100 
{70}, //0111101 
{70}, //0111110 
{70}, //0111111 
{69}, //1000000 A
{69}, //1000001 
{69}, //1000010 
{69}, //1000011 
{69}, //1000100 
{69}, //1000101 
{69}, //1000110 
{69}, //1000111 
{69}, //1001000 
{69}, //1001001 
{69}, //1001010 
{69}, //1001011 
{69}, //1001100 
{69}, //1001101 
{69}, //1001110 
{69}, //1001111 
{69}, //1010000 
{69}, //1010001 
{69}, //1010010 
{69}, //1010011 
{69}, //1010100 
{69}, //1010101 
{69}, //1010110 
{69}, //1010111 
{69}, //1011000 
{69}, //1011001 
{69}, //1011010 
{69}, //1011011 
{69}, //1011100 
{69}, //1011101 
{69}, //1011110 
{69}, //1011111 
{68}, //1100000 G#
{68}, //1100001 
{68}, //1100010 
{68}, //1100011 
{68}, //1100100 
{68}, //1100101 
{68}, //1100110 
{68}, //1100111 
{68}, //1101000 
{68}, //1101001 
{68}, //1101010 
{68}, //1101011 
{68}, //1101100 
{68}, //1101101 
{68}, //1101110 
{68}, //1101111 
{67}, //1110000 G
{67}, //1110001 
{67}, //1110010 
{67}, //1110011 
{67}, //1110100 
{67}, //1110101 
{67}, //1110110 
{67}, //1110111 
{66}, //1111000 F#
{66}, //1111001 
{66}, //1111010 
{66}, //1111011 
{65}, //1111100 F
{65}, //1111101 
{64}, //1111110 E
{62} //1111111 D

};





//Recorder
struct recorder_explicit_entry {
  uint8_t midi_note;
};

const struct recorder_explicit_entry recorder_explicit[128]PROGMEM  = {
//thumb and left index finger aren't shown, they are accounted for in getNote().
{75}, //0000000 C#
{74}, //0000001 C
{74}, //0000010 C
{74}, //0000011 C
{74}, //0000100 C
{74}, //0000101 C
{74}, //0000110 C
{74}, //0000111 C
{74}, //0001000 C
{74}, //0001001 C
{74}, //0001010 C
{74}, //0001011 C
{74}, //0001100 C
{74}, //0001101 C
{74}, //0001110 C
{74}, //0001111 C
{74}, //0010000 C
{74}, //0010001 C
{74}, //0010010 C
{74}, //0010011 C
{74}, //0010100 C
{74}, //0010101 C
{74}, //0010110 C
{74}, //0010111 C
{74}, //0011000 C
{74}, //0011001 C
{74}, //0011010 C
{74}, //0011011 C
{74}, //0011100 C
{74}, //0011101 C
{74}, //0011110 C
{74}, //0011111 C
{74}, //0100000 C
{74}, //0100001 C
{74}, //0100010 C
{74}, //0100011 C
{74}, //0100100 C
{74}, //0100101 C
{74}, //0100110 C
{74}, //0100111 C
{74}, //0101000 C
{74}, //0101001 C
{74}, //0101010 C
{74}, //0101011 C
{75}, //0101100 C# alternative, added in 1.7 (only works in lower octave with thumb hole covered)
{74}, //0101101 C
{74}, //0101110 C
{74}, //0101111 C
{73}, //0110000 B added in 1.7
{74}, //0110001 C
{74}, //0110010 C
{74}, //0110011 C
{74}, //0110100 C
{74}, //0110101 C
{74}, //0110110 C
{74}, //0110111 C
{74}, //0111000 C
{74}, //0111001 C
{74}, //0111010 C
{74}, //0111011 C
{74}, //0111100 C
{74}, //0111101 C
{74}, //0111110 C
{74}, //0111111 C
{73}, //1000000 B
{73}, //1000001 B
{73}, //1000010 B
{73}, //1000011 B
{73}, //1000100 B
{73}, //1000101 B
{73}, //1000110 B
{73}, //1000111 B
{73}, //1001000 B
{73}, //1001001 B
{73}, //1001010 B
{73}, //1001011 B
{73}, //1001100 B
{73}, //1001101 B
{73}, //1001110 B
{73}, //1001111 B
{73}, //1010000 B
{73}, //1010001 B
{73}, //1010010 B
{73}, //1010011 B
{73}, //1010100 B
{73}, //1010101 B
{73}, //1010110 B
{73}, //1010111 B
{72}, //1011000 Bb
{72}, //1011001 Bb
{72}, //1011010 Bb
{72}, //1011011 Bb
{72}, //1011100 Bb
{72}, //1011101 Bb
{72}, //1011110 Bb
{72}, //1011111 Bb
{71}, //1100000 A
{71}, //1100001 A
{71}, //1100010 A
{71}, //1100011 A
{71}, //1100100 A
{71}, //1100101 A
{71}, //1100110 A
{71}, //1100111 A
{71}, //1101000 A
{71}, //1101001 A
{71}, //1101010 A
{71}, //1101011 A
{70}, //1101100 G# added in 1.7
{71}, //1101101 A
{70}, //1101110 G# added in 1.7
{63}, //1101111 C# added in 1.7
{69}, //1110000 G
{69}, //1110001 G
{69}, //1110010 G
{69}, //1110011 G
{69}, //1110100 G
{69}, //1110101 G
{68}, //1110110 F#
{68}, //1110111 F#
{67}, //1111000 F
{68}, //1111001 F
{69}, //1111010 F
{67}, //1111011 F
{66}, //1111100 E
{65}, //1111101 D#
{64}, //1111110 D
{62} //1111111 C


};





//Xiao
struct xiao_explicit_entry {
  uint8_t midi_note;
};

const struct xiao_explicit_entry xiao_explicit[128]PROGMEM  = {
  

{68}, //000000 Ab
{68}, //000001 Ab
{68}, //000010 Ab
{68}, //000011 Ab
{68}, //000100 Ab
{68}, //000101 Ab
{68}, //000110 Ab
{68}, //000111 Ab
{68}, //001000 Ab
{68}, //001001 Ab
{68}, //001010 Ab
{68}, //001011 Ab
{68}, //001100 Ab
{68}, //001101 Ab
{68}, //001110 Ab
{68}, //001111 Ab
{68}, //010000 Ab
{68}, //010001 Ab
{68}, //010010 Ab
{68}, //010011 Ab
{68}, //010100 Ab
{68}, //010101 Ab
{68}, //010110 Ab
{68}, //010111 Ab
{68}, //011000 Ab
{68}, //011001 Ab
{68}, //011010 Ab
{68}, //011011 Ab
{68}, //011100 Ab
{68}, //011101 Ab
{68}, //011110 Ab
{68}, //011111 Ab
{67}, //100000 G
{67}, //100001 G
{67}, //100010 G
{67}, //100011 G
{67}, //100100 G
{67}, //100101 G
{67}, //100110 G
{67}, //100111 G
{67}, //101000 G
{67}, //101001 G
{67}, //101010 G
{67}, //101011 G
{67}, //101100 G
{67}, //101101 G
{67}, //101110 G
{67}, //101111 G
{65}, //110000 F
{65}, //110001 F
{65}, //110010 F
{65}, //110011 F
{65}, //110100 F
{65}, //110101 F
{65}, //110110 F
{65}, //110111 F
{64}, //111000 E
{64}, //111001 E
{64}, //111010 E
{64}, //111011 E
{63}, //111100 Eb
{63}, //111101 Eb
{62}, //111110 D
{60} //111111 C
};




//Saxophone, extended
struct sax_explicit_entry {
  uint8_t midi_note;
};

const struct sax_explicit_entry sax_explicit[64]PROGMEM  = {

{61}, //000000 C#
{61}, //000001 C#
{61}, //000010 C#
{61}, //000011 C#
{61}, //000100 C#
{61}, //000101 C#
{61}, //000110 C#
{61}, //000111 C#
{61}, //001000 C#
{61}, //001001 C#
{61}, //001010 C#
{61}, //001011 C#
{61}, //001100 C#
{61}, //001101 C#
{61}, //001110 C#
{61}, //001111 C#
{60}, //010000 C
{48}, //010001 C
{60}, //010010 C
{60}, //010011 C
{60}, //010100 C
{60}, //010101 C
{60}, //010110 C
{60}, //010111 C
{60}, //011000 C
{60}, //011001 C
{60}, //011010 C
{60}, //011011 C
{60}, //011100 C
{60}, //011101 C
{60}, //011110 C
{60}, //011111 C
{59}, //100000 B
{47}, //100001 B
{59}, //100010 B
{59}, //100011 B
{59}, //100100 B
{59}, //100101 B
{59}, //100110 B
{59}, //100111 B
{59}, //101000 B
{59}, //101001 B
{59}, //101010 B
{59}, //101011 B
{59}, //101100 B
{59}, //101101 B
{59}, //101110 B
{59}, //101111 B
{57}, //110000 A
{45}, //110001 A
{57}, //110010 A
{57}, //110011 A
{57}, //110100 A
{57}, //110101 A
{57}, //110110 A
{57}, //110111 A
{55}, //111000 G
{43}, //111001 G
{54}, //111010 F#
{55}, //111011 G
{53}, //111100 F
{53}, //111101 F
{52}, //111110 E
{50} //111111 D
};




//Saxophone, basic
struct saxbasic_explicit_entry {
  uint8_t midi_note;
};

const struct saxbasic_explicit_entry saxbasic_explicit[128]PROGMEM  = {
  
{73}, //0000000 C#
{73}, //0000001 C#
{73}, //0000010 C#
{73}, //0000011 C#
{73}, //0000100 C#
{73}, //0000101 C#
{73}, //0000110 C#
{73}, //0000111 C#
{73}, //0001000 C#
{73}, //0001001 C#
{73}, //0001010 C#
{73}, //0001011 C#
{73}, //0001100 C#
{73}, //0001101 C#
{73}, //0001110 C#
{73}, //0001111 C#
{73}, //0010000 C#
{73}, //0010001 C#
{73}, //0010010 C#
{73}, //0010011 C#
{73}, //0010100 C#
{73}, //0010101 C#
{73}, //0010110 C#
{73}, //0010111 C#
{73}, //0011000 C#
{73}, //0011001 C#
{73}, //0011010 C#
{73}, //0011011 C#
{73}, //0011100 C#
{73}, //0011101 C#
{73}, //0011110 C#
{73}, //0011111 C#
{72}, //0100000 C
{72}, //0100001 C
{72}, //0100010 C
{72}, //0100011 C
{72}, //0100100 C
{72}, //0100101 C
{72}, //0100110 C
{72}, //0100111 C
{72}, //0101000 C
{72}, //0101001 C
{72}, //0101010 C
{72}, //0101011 C
{72}, //0101100 C
{72}, //0101101 C
{72}, //0101110 C
{72}, //0101111 C
{72}, //0110000 C
{72}, //0110001 C
{72}, //0110010 C
{72}, //0110011 C
{72}, //0110100 C
{72}, //0110101 C
{72}, //0110110 C
{72}, //0110111 C
{72}, //0111000 C
{72}, //0111001 C
{72}, //0111010 C
{72}, //0111011 C
{72}, //0111100 C
{72}, //0111101 C
{74}, //0111110 D
{74}, //0111111 D
{71}, //1000000 B
{70}, //1000001 Bb
{70}, //1000010 Bb
{70}, //1000011 Bb
{70}, //1000100 Bb
{70}, //1000101 Bb
{70}, //1000110 Bb
{70}, //1000111 Bb
{70}, //1001000 Bb
{70}, //1001001 Bb
{70}, //1001010 Bb
{70}, //1001011 Bb
{70}, //1001100 Bb
{70}, //1001101 Bb
{70}, //1001110 Bb
{70}, //1001111 Bb
{71}, //1010000 B
{70}, //1010001 Bb
{70}, //1010010 Bb
{70}, //1010011 Bb
{70}, //1010100 Bb
{70}, //1010101 Bb
{70}, //1010110 Bb
{70}, //1010111 Bb
{70}, //1011000 Bb
{70}, //1011001 Bb
{70}, //1011010 Bb
{70}, //1011011 Bb
{70}, //1011100 Bb
{70}, //1011101 Bb
{70}, //1011110 Bb
{70}, //1011111 Bb
{69}, //1100000 A
{69}, //1100001 A
{69}, //1100010 A
{68}, //1100011 Ab
{69}, //1100100 A
{68}, //1100101 Ab
{68}, //1100110 Ab
{68}, //1100111 Ab
{69}, //1101000 A
{68}, //1101001 Ab
{68}, //1101010 Ab
{68}, //1101011 Ab
{68}, //1101100 Ab
{68}, //1101101 Ab
{68}, //1101110 Ab
{68}, //1101111 Ab
{67}, //1110000 G
{67}, //1110001 G
{67}, //1110010 G
{67}, //1110011 G
{66}, //1110100 F#
{66}, //1110101 F#
{66}, //1110110 F#
{66}, //1110111 F#
{65}, //1111000 F
{65}, //1111001 F
{65}, //1111010 F
{65}, //1111011 F
{64}, //1111100 E
{64}, //1111101 E
{62}, //1111110 D
{63} //1111111 Eb
};