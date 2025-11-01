#ifndef OPCODES
#define OPCODES

typedef enum 
{
  NOP       = 0xEA,

  ADC_imm   = 0x69,
  ADC_zp    = 0x65,
  ADC_zpx   = 0x75,
  ADC_abs   = 0x6D,
  ADC_absx  = 0x7D,
  ADC_absy  = 0x79,
  ADC_indx  = 0x61,
  ADC_ind_y = 0x71,

  AND_imm   = 0x29,
  AND_zp    = 0x25,
  AND_zpx   = 0x35,
  AND_abs   = 0x2D,
  AND_absx  = 0x3D,
  AND_absy  = 0x39,
  AND_indx  = 0x21,
  AND_ind_y = 0x31,

  //CONTINUA
}
CodigosOperacao;

#endif
