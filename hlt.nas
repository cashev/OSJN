[BITS 32]
  MOV   AL,'A'
  CALL  2*8:0xbee
fin:
  HLT
  JMP   fin