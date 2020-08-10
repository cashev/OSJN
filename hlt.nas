[BITS 32]
  MOV   AL,'A'
  CALL  0xbee
fin:
  HLT
  JMP   fin