#ifndef __PMIC_WRAP_REGS_H__
#define __PMIC_WRAP_REGS_H__

#ifndef CONFIG_OF
#include <mach/mt_reg_base.h>
#include <mach/mt_irq.h>
#endif

#include <mach/upmu_hw.h>
#include "mach/sync_write.h"

#define PMIC_WRAP_DEBUG

#define PWRAPTAG                "[PWRAP] "
#ifdef PMIC_WRAP_DEBUG
  #define PWRAPDEB(fmt, arg...)     printk(PWRAPTAG "cpuid=%d," fmt,raw_smp_processor_id(), ##arg)
  #define PWRAPFUC(fmt, arg...)     printk(PWRAPTAG "cpuid=%d,%s\n", raw_smp_processor_id(), __FUNCTION__)
#endif
#define PWRAPLOG(fmt, arg...)   printk(PWRAPTAG fmt,##arg)
#define PWRAPERR(fmt, arg...)   printk(KERN_ERR PWRAPTAG "ERROR,line=%d " fmt, __LINE__, ##arg)
#define PWRAPREG(fmt, arg...)   printk(PWRAPTAG fmt,##arg)

#define SLV_6325
#if 0
#define SLV_6332
#endif

#ifdef CONFIG_OF
extern void __iomem *pwrap_base;
#define PMIC_WRAP_BASE		(pwrap_base)
#define MT_PMIC_WRAP_IRQ_ID	(pwrap_irq)
#define INFRACFG_AO_REG_BASE	(infracfg_ao_base)
#define TOPCKGEN_BASE		(topckgen_base)
#define SCP_CLK_CTRL_BASE	(scp_clk_ctrl_base)
#define PMIC_WRAP_P2P_BASE	(pwrap_p2p_base)
#else
#define PMIC_WRAP_BASE		(PWRAP_BASE)
#define MT_PMIC_WRAP_IRQ_ID	(PMIC_WRAP_ERR_IRQ_BIT_ID)
#define INFRACFG_AO_REG_BASE	(INFRACFG_AO_BASE)
#define TOPCKGEN_BASE		(CKSYS_BASE)
#define SCP_CLK_CTRL_BASE	(0x10059000)
#define PMIC_WRAP_P2P_BASE	(0x1005E000)
#endif


#define PMIC_WRAP_REG_RANGE   91

#define TIMEOUT_RESET		0x2710 
#define TIMEOUT_READ		0x2710 
#define TIMEOUT_WAIT_IDLE	0x2710 


#define CLK_CFG_5_CLR		(TOPCKGEN_BASE+0x098)
#define CLK_SPI_CK_26M		0x1

#define PERI_BUS_DCM_CTRL	(INFRACFG_AO_REG_BASE+0x074)
#define MODULE_SW_CG_0_SET	(INFRACFG_AO_REG_BASE+0x080)
#define MODULE_SW_CG_0_CLR	(INFRACFG_AO_REG_BASE+0x084)
#define MODULE_SW_CG_0_STA	(INFRACFG_AO_REG_BASE+0x090)

#define PMIC_CG_TMR		(1 << 0)
#define PMIC_CG_AP		(1 << 1)
#define PMIC_CG_MD		(1 << 2)
#define PMIC_CG_CONN		(1 << 3)
#define PMIC_DCM_EN		(1 << 22)

#define SCP_CG_CLK_CTRL		(SCP_CLK_CTRL_BASE+0x30)
#define AP2P_MCLK_CG		(1 << 6)

#define PMIC_WRAP_MUX_SEL               ((PMIC_WRAP_BASE+0x0))
#define PMIC_WRAP_WRAP_EN               ((PMIC_WRAP_BASE+0x4))
#define PMIC_WRAP_DIO_EN                ((PMIC_WRAP_BASE+0x8))
#define PMIC_WRAP_SIDLY                 ((PMIC_WRAP_BASE+0xC))
#define PMIC_WRAP_RDDMY                 ((PMIC_WRAP_BASE+0x10))
#define PMIC_WRAP_SI_CK_CON             ((PMIC_WRAP_BASE+0x14))
#define PMIC_WRAP_CSHEXT_WRITE          ((PMIC_WRAP_BASE+0x18))
#define PMIC_WRAP_CSHEXT_READ           ((PMIC_WRAP_BASE+0x1C))
#define PMIC_WRAP_CSLEXT_START          ((PMIC_WRAP_BASE+0x20))
#define PMIC_WRAP_CSLEXT_END            ((PMIC_WRAP_BASE+0x24))
#define PMIC_WRAP_STAUPD_PRD            ((PMIC_WRAP_BASE+0x28))
#define PMIC_WRAP_STAUPD_GRPEN          ((PMIC_WRAP_BASE+0x2C))
#define PMIC_WRAP_EINT_STA0_ADR         ((PMIC_WRAP_BASE+0x30))
#define PMIC_WRAP_EINT_STA1_ADR         ((PMIC_WRAP_BASE+0x34))
#define PMIC_WRAP_EINT_STA              ((PMIC_WRAP_BASE+0x38))
#define PMIC_WRAP_EINT_CLR              ((PMIC_WRAP_BASE+0x3C))
#define PMIC_WRAP_STAUPD_MAN_TRIG       ((PMIC_WRAP_BASE+0x40))
#define PMIC_WRAP_STAUPD_STA            ((PMIC_WRAP_BASE+0x44))
#define PMIC_WRAP_WRAP_STA              ((PMIC_WRAP_BASE+0x48))
#define PMIC_WRAP_HARB_INIT             ((PMIC_WRAP_BASE+0x4C))
#define PMIC_WRAP_HARB_HPRIO            ((PMIC_WRAP_BASE+0x50))
#define PMIC_WRAP_HIPRIO_ARB_EN         ((PMIC_WRAP_BASE+0x54))
#define PMIC_WRAP_HARB_STA0             ((PMIC_WRAP_BASE+0x58))
#define PMIC_WRAP_HARB_STA1             ((PMIC_WRAP_BASE+0x5C))
#define PMIC_WRAP_MAN_EN                ((PMIC_WRAP_BASE+0x60))
#define PMIC_WRAP_MAN_CMD               ((PMIC_WRAP_BASE+0x64))
#define PMIC_WRAP_MAN_RDATA             ((PMIC_WRAP_BASE+0x68))
#define PMIC_WRAP_MAN_VLDCLR            ((PMIC_WRAP_BASE+0x6C))
#define PMIC_WRAP_WACS0_EN              ((PMIC_WRAP_BASE+0x70))
#define PMIC_WRAP_INIT_DONE0            ((PMIC_WRAP_BASE+0x74))
#define PMIC_WRAP_WACS0_CMD             ((PMIC_WRAP_BASE+0x78))
#define PMIC_WRAP_WACS0_RDATA           ((PMIC_WRAP_BASE+0x7C))
#define PMIC_WRAP_WACS0_VLDCLR          ((PMIC_WRAP_BASE+0x80))
#define PMIC_WRAP_WACS1_EN              ((PMIC_WRAP_BASE+0x84))
#define PMIC_WRAP_INIT_DONE1            ((PMIC_WRAP_BASE+0x88))
#define PMIC_WRAP_WACS1_CMD             ((PMIC_WRAP_BASE+0x8C))
#define PMIC_WRAP_WACS1_RDATA           ((PMIC_WRAP_BASE+0x90))
#define PMIC_WRAP_WACS1_VLDCLR          ((PMIC_WRAP_BASE+0x94))
#define PMIC_WRAP_WACS2_EN              ((PMIC_WRAP_BASE+0x98))
#define PMIC_WRAP_INIT_DONE2            ((PMIC_WRAP_BASE+0x9C))
#define PMIC_WRAP_WACS2_CMD             ((PMIC_WRAP_BASE+0xA0))
#define PMIC_WRAP_WACS2_RDATA           ((PMIC_WRAP_BASE+0xA4))
#define PMIC_WRAP_WACS2_VLDCLR          ((PMIC_WRAP_BASE+0xA8))
#define PMIC_WRAP_INT_EN                ((PMIC_WRAP_BASE+0xAC))
#define PMIC_WRAP_INT_FLG_RAW           ((PMIC_WRAP_BASE+0xB0))
#define PMIC_WRAP_INT_FLG               ((PMIC_WRAP_BASE+0xB4))
#define PMIC_WRAP_INT_CLR               ((PMIC_WRAP_BASE+0xB8))
#define PMIC_WRAP_SIG_ADR               ((PMIC_WRAP_BASE+0xBC))
#define PMIC_WRAP_SIG_MODE              ((PMIC_WRAP_BASE+0xC0))
#define PMIC_WRAP_SIG_VALUE             ((PMIC_WRAP_BASE+0xC4))
#define PMIC_WRAP_SIG_ERRVAL            ((PMIC_WRAP_BASE+0xC8))
#define PMIC_WRAP_CRC_EN                ((PMIC_WRAP_BASE+0xCC))
#define PMIC_WRAP_TIMER_EN              ((PMIC_WRAP_BASE+0xD0))
#define PMIC_WRAP_TIMER_STA             ((PMIC_WRAP_BASE+0xD4))
#define PMIC_WRAP_WDT_UNIT              ((PMIC_WRAP_BASE+0xD8))
#define PMIC_WRAP_WDT_SRC_EN            ((PMIC_WRAP_BASE+0xDC))
#define PMIC_WRAP_WDT_FLG               ((PMIC_WRAP_BASE+0xE0))
#define PMIC_WRAP_DEBUG_INT_SEL         ((PMIC_WRAP_BASE+0xE4))
#define PMIC_WRAP_DVFS_ADR0             ((PMIC_WRAP_BASE+0xE8))
#define PMIC_WRAP_DVFS_WDATA0           ((PMIC_WRAP_BASE+0xEC))
#define PMIC_WRAP_DVFS_ADR1             ((PMIC_WRAP_BASE+0xF0))
#define PMIC_WRAP_DVFS_WDATA1           ((PMIC_WRAP_BASE+0xF4))
#define PMIC_WRAP_DVFS_ADR2             ((PMIC_WRAP_BASE+0xF8))
#define PMIC_WRAP_DVFS_WDATA2           ((PMIC_WRAP_BASE+0xFC))
#define PMIC_WRAP_DVFS_ADR3             ((PMIC_WRAP_BASE+0x100))
#define PMIC_WRAP_DVFS_WDATA3           ((PMIC_WRAP_BASE+0x104))
#define PMIC_WRAP_DVFS_ADR4             ((PMIC_WRAP_BASE+0x108))
#define PMIC_WRAP_DVFS_WDATA4           ((PMIC_WRAP_BASE+0x10C))
#define PMIC_WRAP_DVFS_ADR5             ((PMIC_WRAP_BASE+0x110))
#define PMIC_WRAP_DVFS_WDATA5           ((PMIC_WRAP_BASE+0x114))
#define PMIC_WRAP_DVFS_ADR6             ((PMIC_WRAP_BASE+0x118))
#define PMIC_WRAP_DVFS_WDATA6           ((PMIC_WRAP_BASE+0x11C))
#define PMIC_WRAP_DVFS_ADR7             ((PMIC_WRAP_BASE+0x120))
#define PMIC_WRAP_DVFS_WDATA7           ((PMIC_WRAP_BASE+0x124))
#define PMIC_WRAP_SPMINF_STA            ((PMIC_WRAP_BASE+0x128))
#define PMIC_WRAP_CIPHER_KEY_SEL        ((PMIC_WRAP_BASE+0x12C))
#define PMIC_WRAP_CIPHER_IV_SEL         ((PMIC_WRAP_BASE+0x130))
#define PMIC_WRAP_CIPHER_EN             ((PMIC_WRAP_BASE+0x134))
#define PMIC_WRAP_CIPHER_RDY            ((PMIC_WRAP_BASE+0x138))
#define PMIC_WRAP_CIPHER_MODE           ((PMIC_WRAP_BASE+0x13C))
#define PMIC_WRAP_CIPHER_SWRST          ((PMIC_WRAP_BASE+0x140))
#define PMIC_WRAP_DCM_EN                ((PMIC_WRAP_BASE+0x144))
#define PMIC_WRAP_DCM_DBC_PRD           ((PMIC_WRAP_BASE+0x148))
#define PMIC_WRAP_EXT_CK                ((PMIC_WRAP_BASE+0x14C))
#define PMIC_WRAP_ADC_CMD_ADDR          ((PMIC_WRAP_BASE+0x150))
#define PMIC_WRAP_PWRAP_ADC_CMD         ((PMIC_WRAP_BASE+0x154))
#define PMIC_WRAP_ADC_RDY_ADDR          ((PMIC_WRAP_BASE+0x158))
#define PMIC_WRAP_ADC_RDATA_ADDR1       ((PMIC_WRAP_BASE+0x15C))
#define PMIC_WRAP_ADC_RDATA_ADDR2       ((PMIC_WRAP_BASE+0x160))
#define PMIC_WRAP_GPS_STA               ((PMIC_WRAP_BASE+0x164))
#define PMIC_WRAP_SWRST                 ((PMIC_WRAP_BASE+0x168))

#define PMIC_WRAP_P2P_WACS_P2P_EN	(PMIC_WRAP_P2P_BASE+0x200)
#define PMIC_WRAP_P2P_INIT_DONE_P2P	(PMIC_WRAP_P2P_BASE+0x204)
#define PMIC_WRAP_P2P_WACS_P2P_CMD	(PMIC_WRAP_P2P_BASE+0x208)
#define PMIC_WRAP_P2P_WACS_P2P_RDATA	(PMIC_WRAP_P2P_BASE+0x20C)
#define PMIC_WRAP_P2P_WACS_P2P_VLDCLR	(PMIC_WRAP_P2P_BASE+0x210)


#define GET_STAUPD_DLE_CNT(x)        ((x>>0)  & 0x00000007)
#define GET_STAUPD_ALE_CNT(x)        ((x>>3)  & 0x00000007)
#define GET_STAUPD_FSM(x)            ((x>>6)  & 0x00000007)
#define GET_WRAP_CH_DLE_RESTCNT(x)   ((x>>0)  & 0x00000007)
#define GET_WRAP_CH_ALE_RESTCNT(x)   ((x>>3)  & 0x00000003)
#define GET_WRAP_AG_DLE_RESTCNT(x)   ((x>>5)  & 0x00000003)
#define GET_WRAP_CH_W(x)             ((x>>7)  & 0x00000001)
#define GET_WRAP_CH_REQ(x)           ((x>>8)  & 0x00000001)
#define GET_AG_WRAP_W(x)             ((x>>9)  & 0x00000001)
#define GET_AG_WRAP_REQ(x)           ((x>>10) & 0x00000001)
#define GET_WRAP_FSM(x)              ((x>>11) & 0x0000000f)
#define GET_HARB_WRAP_WDATA(x)       ((x>>0)  & 0x0000ffff)
#define GET_HARB_WRAP_ADR(x)         ((x>>16) & 0x00007fff)
#define GET_HARB_WRAP_REQ(x)         ((x>>31) & 0x00000001)
#define GET_HARB_DLE_EMPTY(x)        ((x>>0)  & 0x00000001)
#define GET_HARB_DLE_FULL(x)         ((x>>1)  & 0x00000001)
#define GET_HARB_VLD(x)              ((x>>2)  & 0x00000001)
#define GET_HARB_DLE_OWN(x)          ((x>>3)  & 0x00000007)
#define GET_HARB_OWN(x)              ((x>>6)  & 0x00000007)
#define GET_HARB_DLE_RESTCNT(x)      ((x>>9)  & 0x00000007)
#define GET_AG_HARB_REQ(x)           ((x>>12) & 0x000000ff)
#define GET_HARB_WRAP_W(x)           ((x>>20) & 0x00000001)
#define GET_HARB_WRAP_REQ0(x)        ((x>>21) & 0x00000001)
#define GET_SPI_WDATA(x)             ((x>>0)  & 0x000000ff)
#define GET_SPI_OP(x)                ((x>>8)  & 0x0000001f)
#define GET_SPI_W(x)                 ((x>>13) & 0x00000001)
#define GET_MAN_RDATA(x)             ((x>>0)  & 0x000000ff)
#define GET_MAN_FSM(x)               ((x>>8)  & 0x00000007)
#define GET_MAN_REQ(x)               ((x>>11) & 0x00000001)
#define GET_WACS0_WDATA(x)           ((x>>0)  & 0x0000ffff)
#define GET_WACS0_ADR(x)             ((x>>16) & 0x00007fff)
#define GET_WACS0_WRITE(x)           ((x>>31) & 0x00000001)
#define GET_WACS0_RDATA(x)           ((x>>0)  & 0x0000ffff)
#define GET_WACS0_FSM(x)             ((x>>16) & 0x00000007)
#define GET_WACS0_REQ(x)             ((x>>19) & 0x00000001)
#define GET_SYNC_IDLE0(x)            ((x>>20) & 0x00000001)
#define GET_INIT_DONE0(x)            ((x>>21) & 0x00000001)
#define GET_SYS_IDLE0(x)             ((x>>22) & 0x00000001)
#define GET_WACS0_FIFO_FILLCNT(x)    ((x>>24) & 0x0000000f)
#define GET_WACS0_FIFO_FREECNT(x)    ((x>>28) & 0x0000000f)
#define GET_WACS1_WDATA(x)           ((x>>0)  & 0x0000ffff)
#define GET_WACS1_ADR(x)             ((x>>16) & 0x00007fff)
#define GET_WACS1_WRITE(x)           ((x>>31) & 0x00000001)
#define GET_WACS1_RDATA(x)           ((x>>0)  & 0x0000ffff)
#define GET_WACS1_FSM(x)             ((x>>16) & 0x00000007)
#define GET_WACS1_REQ(x)             ((x>>19) & 0x00000001)
#define GET_SYNC_IDLE1(x)            ((x>>20) & 0x00000001)
#define GET_INIT_DONE1(x)            ((x>>21) & 0x00000001)
#define GET_SYS_IDLE1(x)             ((x>>22) & 0x00000001)
#define GET_WACS1_FIFO_FILLCNT(x)    ((x>>24) & 0x0000000f)
#define GET_WACS1_FIFO_FREECNT(x)    ((x>>28) & 0x0000000f)
#define GET_WACS2_WDATA(x)           ((x>>0)  & 0x0000ffff)
#define GET_WACS2_ADR(x)             ((x>>16) & 0x00007fff)
#define GET_WACS2_WRITE(x)           ((x>>31) & 0x00000001)
#define GET_WACS2_RDATA(x)           ((x>>0)  & 0x0000ffff)
#define GET_WACS2_FSM(x)             ((x>>16) & 0x00000007)
#define GET_WACS2_REQ(x)             ((x>>19) & 0x00000001)
#define GET_SYNC_IDLE2(x)            ((x>>20) & 0x00000001)
#define GET_INIT_DONE2(x)            ((x>>21) & 0x00000001)
#define GET_SYS_IDLE2(x)             ((x>>22) & 0x00000001)
#define GET_WACS2_FIFO_FILLCNT(x)    ((x>>24) & 0x0000000f)
#define GET_WACS2_FIFO_FREECNT(x)    ((x>>28) & 0x0000000f)
#define GET_PWRAP_GPS_ACK(x)         ((x>>0)  & 0x00000001)
#define GET_GPS_PWRAP_REQ(x)         ((x>>1)  & 0x00000001)
#define GET_GPSINF_DLE_CNT(x)        ((x>>4)  & 0x00000003)
#define GET_GPSINF_ALE_CNT(x)        ((x>>6)  & 0x00000003)
#define GET_GPS_INF_FSM(x)           ((x>>8)  & 0x00000007)
#define GET_PWRAP_GPS_WDATA(x)       ((x>>15) & 0x0001ffff)

#define ENABLE	1
#define DISABLE 0
#define DISABLE_ALL 0

#if 0
#define PWRAP_ENABLE_DCM		WRAP_WR32(PMIC_WRAP_DCM_EN, ENABLE)
#define PWRAP_DISABLE_DCM		WRAP_WR32(PMIC_WRAP_DCM_EN, DISABLE)
#define PWRAP_DISABLE_DCM_DBC_PRD	WRAP_WR32(PMIC_WRAP_DCM_DBC_PRD, DISABLE)
#define PWRAP_SET_DCM_DBC_PRD(x)	WRAP_WR32(PMIC_WRAP_DCM_DBC_PRD, x)

#define PWRAP_ENABLE			WRAP_WR32(PMIC_WRAP_WRAP_EN,ENABLE) 
#define PWRAP_DISABLE			WRAP_WR32(PMIC_WRAP_WRAP_EN,DISABLE) 
#endif

#define MDINF		(1 << 0)
#define WACS0		(1 << 1)
#define WACS1		(1 << 3)
#define WACS2		(1 << 4)
#define DVFSINF		(1 << 2)
#define STAUPD		(1 << 5)
#define GPSINF		(1 << 6)
#define WACS_P2P	(1 << 7)

#define	WRAPPER_MODE	0
#define	MANUAL_MODE		1

#define OP_TYPE_CK	0	
#define OP_TYPE_CSL	1	
#define MSB		1	
#define LSB		0	

#define CHECK_CRC	0
#define CHECK_SIG	1



#define STAUPD_FSM_IDLE               (0x00)
#define STAUPD_FSM_REQ                (0x02)
#define STAUPD_FSM_WFDLE              (0x04) 


#define MAN_FSM_NO_REQ             (0x00)
#define MAN_FSM_IDLE               (0x00)
#define MAN_FSM_REQ                (0x02)
#define MAN_FSM_WFDLE              (0x04) 
#define MAN_FSM_WFVLDCLR           (0x06)

#define WACS_FSM_IDLE               (0x00)
#define WACS_FSM_REQ                (0x02)
#define WACS_FSM_WFDLE              (0x04) 
#define WACS_FSM_WFVLDCLR           (0x06) 
#define WACS_INIT_DONE              (0x01)
#define WACS_SYNC_IDLE              (0x01)
#define WACS_SYNC_BUSY              (0x00)



#define SWCHR_REG_BASE (0x8000)
#define PMIC_REG_BASE             (0x0000)

#ifdef SLV_6325
#endif

#ifdef SLV_6325
#endif
#ifdef SLV_6332
#endif

#define MT6325_DEFAULT_VALUE_READ_TEST      0x5aa5
#define WRITE_TEST_DEFAULT_VALUE 		    0x0
#define WRITE_TEST_EXT_DEFAULT_VALUE	0x0
#define MT6332_DEFAULT_VALUE_READ_TEST     0xa55a
#define MT6325_WRITE_TEST_VALUE            0x1234
#define MT6332_WRITE_TEST_VALUE            0x4321

#ifdef SLV_6325
#define WRAP_ACCESS_TEST_REG 		MT6325_DEW_WRITE_TEST
#endif
#define WRAP_ACCESS_TEST_EXT_REG 		MT6332_DEW_WRITE_TEST

#define OP_WR    (0x1)
#define OP_RD    (0x0)

#define OP_CSH   (0x0)
#define OP_CSL   (0x1)
#define OP_CK    (0x2)

#define OP_OUTS  (0x8)
#define OP_OUTD  (0x9)
#define OP_OUTQ  (0xA)

#define OP_INS   (0xC)
#define OP_IND   (0xD)
#define OP_INQ   (0xE)

#define OP_OS2IS (0x10)
#define OP_OS2ID (0x11)
#define OP_OS2IQ (0x12)
#define OP_OD2IS (0x13)
#define OP_OD2ID (0x14)
#define OP_OD2IQ (0x15)
#define OP_OQ2IS (0x16)
#define OP_OQ2ID (0x17)
#define OP_OQ2IQ (0x18)

#define OP_OSNIS (0x19)
#define OP_ODNID (0x1A)

#define E_PWR_INVALID_ARG               1
#define E_PWR_INVALID_RW                2
#define E_PWR_INVALID_ADDR              3
#define E_PWR_INVALID_WDAT              4
#define E_PWR_INVALID_OP_MANUAL         5
#define E_PWR_NOT_IDLE_STATE            6
#define E_PWR_NOT_INIT_DONE             7
#define E_PWR_NOT_INIT_DONE_READ        8
#define E_PWR_WAIT_IDLE_TIMEOUT         9
#define E_PWR_WAIT_IDLE_TIMEOUT_READ    10
#define E_PWR_INIT_SIDLY_FAIL           11
#define E_PWR_RESET_TIMEOUT             12
#define E_PWR_TIMEOUT                   13

#define E_PWR_INIT_RESET_SPI            20
#define E_PWR_INIT_SIDLY                21
#define E_PWR_INIT_REG_CLOCK            22
#define E_PWR_INIT_ENABLE_PMIC          23
#define E_PWR_INIT_DIO                  24
#define E_PWR_INIT_CIPHER               25
#define E_PWR_INIT_WRITE_TEST           26
#define E_PWR_INIT_ENABLE_CRC           27
#define E_PWR_INIT_ENABLE_DEWRAP        28

#define E_PWR_READ_TEST_FAIL            30
#define E_PWR_WRITE_TEST_FAIL           31
#define E_PWR_SWITCH_DIO                32




#define WRAP_RD32(addr)            __raw_readl((void *)addr)
#define WRAP_WR32(addr,val)        mt_reg_sync_writel((val), ((void *)addr))

#define WRAP_SET_BIT(BS,REG)       mt_reg_sync_writel((__raw_readl((void *)REG) | (U32)(BS)), ((void *)REG))
#define WRAP_CLR_BIT(BS,REG)       mt_reg_sync_writel((__raw_readl((void *)REG) & (~(U32)(BS))), ((void *)REG))

#define INFRA_GLOBALCON_RST0               (INFRACFG_AO_BASE+0x030)

#define PWRAP_SOFT_RESET                   WRAP_SET_BIT(1<<7,INFRA_GLOBALCON_RST0)
#define PWRAP_CLEAR_SOFT_RESET_BIT         WRAP_CLR_BIT(1<<7,INFRA_GLOBALCON_RST0)
#define PERI_GLOBALCON_RST1                (PERICFG_BASE+0x004)

#endif 
