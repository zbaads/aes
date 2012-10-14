#ifndef _aes_h
#define _aes_h

#define byte unsigned char

void keyScheduleCore(byte *temp, int rconi);
void keyExpansion(byte *cipherkey, byte *expandedkey);
void subBytes(byte *state);
void shiftRows(byte *state);
byte mixColumnsMult(byte mixcolumnnum, byte statebyte);
void mixColumns(byte *state);
void addRoundKey(byte *state, byte *expandedkey, int round);
void encryptBlock(byte *state, byte *expandedkey);

#endif
