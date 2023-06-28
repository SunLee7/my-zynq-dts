#ifndef _DT_BINDINGS_PHYTIUM_LOCAL_BUS_H
#define _DT_BINDINGS_PHYTIUM_LOCAL_BUS_H

/* device list param */

/* param 0, CS */

/* param 1, machine_sel */
#define LBC_NOR_CM 1
#define LBC_GPCM 2
#define LBC_SSCM 3

/* param 2, TIM0 */
/* TIM0 NOR */
#define NOR_TACSEX_OFST (16)
#define NOR_TACSEX_MASK (0xF)
#define NOR_TACSEX(x) (((x) & NOR_TACSEX_MASK) << NOR_TACSEX_OFST)

#define NOR_TEADCX_OFST (10)
#define NOR_TEADCX_MASK (0x3F)
#define NOR_TEADCX(x) (((x) & NOR_TEADCX_MASK) << NOR_TEADCX_OFST)

#define NOR_TCESX_OFST (6)
#define NOR_TCESX_MASK (0xF)
#define NOR_TCESX(x)  (((x) & NOR_TCESX_MASK) << NOR_TCESX_OFST)

#define NOR_TEAHCX_OFST (0)
#define NOR_TEAHCX_MASK (0x3F)
#define NOR_TEAHCX(x) (((x) & NOR_TEAHCX_MASK) << NOR_TEAHCX_OFST)

/* TIM0 GPCM */
#define GPCM_TACSEX_OFST (12)
#define GPCM_TACSEX_MASK (0xF)
#define GPCM_TACSEX(x) (((x) & GPCM_TACSEX_MASK) << GPCM_TACSEX_OFST)

#define GPCM_TEADCX_OFST (6)
#define GPCM_TEADCX_MASK (0x3F)
#define GPCM_TEADCX(x) (((x) & GPCM_TEADCX_MASK) << GPCM_TEADCX_OFST)

#define GPCM_TEAHCX_OFST (0)
#define GPCM_TEAHCX_MASK (0x3F)
#define GPCM_TEAHCX(x) (((x) & GPCM_TEAHCX_MASK) << GPCM_TEAHCX_OFST)


/* param 3, TIM1 */
/* TIM1 NOR */
#define NOR_TACOX_OFST (16)
#define NOR_TACOX_MASK (0xFF)
#define NOR_TACOX(x) (((x) & NOR_TACOX_MASK) << NOR_TACOX_OFST)

#define NOR_TRADX_OFST (8)
#define NOR_TRADX_MASK (0xFF)
#define NOR_TRADX(x) (((x) & NOR_TRADX_MASK) << NOR_TRADX_OFST)

#define NOR_TSEQRADX_OFST (0)
#define NOR_TSEQRADX_MASK (0xFF)
#define NOR_TSEQRADX(x)  (((x) & NOR_TSEQRADX_MASK) << NOR_TSEQRADX_OFST)

/* TIM1 GPCM */
#define GPCM_TACOX_OFST (12)
#define GPCM_TACOX_MASK (0xFF)
#define GPCM_TACOX(x) (((x) & GPCM_TACOX_MASK) << GPCM_TACOX_OFST)

#define GPCM_TAADX_OFST (6)
#define GPCM_TAADX_MASK (0x3F)
#define GPCM_TAADX(x) (((x) & GPCM_TAADX_MASK) << GPCM_TAADX_OFST)

#define GPCM_TRADX_OFST (0)
#define GPCM_TRADX_MASK (0x3F)
#define GPCM_TRADX(x) (((x) & GPCM_TRADX_MASK) << GPCM_TRADX_OFST)

/* param 4, TIM2 */
/* TIM2 NOR */
#define NOR_TCSX_OFST (18)
#define NOR_TCSX_MASK (0xF)
#define NOR_TCSX(x) (((x) & NOR_TCSX_MASK) << NOR_TCSX_OFST)

#define NOR_TCHX_OFST (14)
#define NOR_TCHX_MASK (0xF)
#define NOR_TCHX(x) (((x) & NOR_TCHX_MASK) << NOR_TCHX_OFST)

#define NOR_TWPHX_OFST (8)
#define NOR_TWPHX_MASK (0x3F)
#define NOR_TWPHX(x)  (((x) & NOR_TWPHX_MASK) << NOR_TWPHX_OFST)

#define NOR_TWPX_OFST (0)
#define NOR_TWPX_MASK (0xFF)
#define NOR_TWPX(x) (((x) & NOR_TWPX_MASK) << NOR_TWPX_OFST)

/* TIM2 GPCM */
#define GPCM_TCSX_OFST (12)
#define GPCM_TCSX_MASK (0xF)
#define GPCM_TCSX(x) (((x) & GPCM_TCSX_MASK) << GPCM_TCSX_OFST)

#define GPCM_TCHX_OFST (8)
#define GPCM_TCHX_MASK (0xF)
#define GPCM_TCHX(x) (((x) & GPCM_TCSX_MASK) << GPCM_TCHX_OFST)

#define GPCM_TWPX_OFST (0)
#define GPCM_TWPX_MASK (0xFF)
#define GPCM_TWPX(x) (((x) & GPCM_TWPX_MASK) << GPCM_TWPX_OFST)


#endif
