#include <Control_Surface.h>

HardwareSerialMIDI_Interface midi = Serial;

// The library enables internal pull-up resistors automatically.
NoteButton keys[] = {
  {2, {MIDI_Notes::C(4), Channel_1}}, 
  {3, {MIDI_Notes::Db(4), Channel_1}},  
  {4, {MIDI_Notes::D(4), Channel_1}}, 
  {5, {MIDI_Notes::Eb(4), Channel_1}}, 
  {6, {MIDI_Notes::E(4), Channel_1}}, 
  {7, {MIDI_Notes::F(4), Channel_1}},
  {8, {MIDI_Notes::Gb(4), Channel_1}},
  {9, {MIDI_Notes::G(4), Channel_1}},
  {10,{MIDI_Notes::Ab(4), Channel_1}},
  {11,{MIDI_Notes::A(4), Channel_1}},
  {12,{MIDI_Notes::Bb(4), Channel_1}}, 
  {13,{MIDI_Notes::B(4), Channel_1}},
  {14,{MIDI_Notes::C(4), Channel_1}},
  {15,{MIDI_Notes::Db(4), Channel_1}},
  {16,{MIDI_Notes::D(4), Channel_1}},
  {17,{MIDI_Notes::Eb(4), Channel_1}},
  {18,{MIDI_Notes::E(4), Channel_1}},
  {19, {MIDI_Notes::C(5), Channel_1}}, 
  {20, {MIDI_Notes::Db(5), Channel_1}},  
  {21, {MIDI_Notes::D(5), Channel_1}}, 
  {22, {MIDI_Notes::Eb(5), Channel_1}}, 
  {23, {MIDI_Notes::E(5), Channel_1}}, 
  {24, {MIDI_Notes::F(5), Channel_1}},
  {25, {MIDI_Notes::Gb(5), Channel_1}},
  {26, {MIDI_Notes::G(5), Channel_1}},
  {27,{MIDI_Notes::Ab(5), Channel_1}},
  {28,{MIDI_Notes::A(5), Channel_1}},
  {29,{MIDI_Notes::Bb(5), Channel_1}}, 
  {30,{MIDI_Notes::B(5), Channel_1}},
  {31,{MIDI_Notes::C(5), Channel_1}},
  {32,{MIDI_Notes::Db(5), Channel_1}},
  {33,{MIDI_Notes::D(5), Channel_1}},
  {34,{MIDI_Notes::Eb(5), Channel_1}},
  {35,{MIDI_Notes::E(5), Channel_1}},
};

void setup() {
  // Initializes the serial port and all button debouncing logic
  Control_Surface.begin();
}

void loop() {
  // Continuously scans the switches and sends MIDI if states change
  Control_Surface.loop();
}