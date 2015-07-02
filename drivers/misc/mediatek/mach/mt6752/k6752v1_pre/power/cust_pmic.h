#ifndef _CUST_PMIC_H_
#define _CUST_PMIC_H_


#define LOW_POWER_LIMIT_LEVEL_1 15

                                         
                                         

#define DISABLE_DLPT_FEATURE

#define POWER_INT0_VOLT 3400
#define POWER_INT1_VOLT 3250
#define POWER_INT2_VOLT 3100

#define POWER_BAT_OC_CURRENT_H    4670
#define POWER_BAT_OC_CURRENT_L    5500
#define POWER_BAT_OC_CURRENT_H_RE 3400
#define POWER_BAT_OC_CURRENT_L_RE 4000



#if defined(CONFIG_MTK_BQ24196_SUPPORT)\
	||defined(CONFIG_MTK_BQ24296_SUPPORT)\
	||defined(CONFIG_MTK_BQ24160_SUPPORT)\
	||defined(CONFIG_MTK_BQ24261_SUPPORT)
#define SWCHR_POWER_PATH
#endif

#if defined(CONFIG_MTK_FAN5402_SUPPORT) \
	 || defined(CONFIG_MTK_FAN5405_SUPPORT) \
	  || defined(CONFIG_MTK_BQ24158_SUPPORT) \
	   || defined(CONFIG_MTK_BQ24196_SUPPORT) \
	    || defined(CONFIG_MTK_BQ24296_SUPPORT) \
	     || defined(CONFIG_MTK_NCP1851_SUPPORT) \
	      || defined(CONFIG_MTK_NCP1854_SUPPORT) \
	       || defined(CONFIG_MTK_BQ24160_SUPPORT) \
	        || defined(CONFIG_MTK_BQ24157_SUPPORT) \
	         || defined(CONFIG_MTK_BQ24250_SUPPORT) \
	          || defined(CONFIG_MTK_BQ24261_SUPPORT) 
#define EXTERNAL_SWCHR_SUPPORT
#endif

typedef enum {
	
	AUX_BATSNS_AP =		0x000,
	AUX_ISENSE_AP,
	AUX_VCDT_AP,
	AUX_BATON_AP,
	AUX_TSENSE_AP,
	AUX_TSENSE_MD =		0x005,
	AUX_VACCDET_AP =	0x007,
	AUX_VISMPS_AP =		0x00B,
	AUX_ICLASSAB_AP =	0x016,
	AUX_HP_AP =		0x017,
	AUX_CH10_AP =		0x018,
	AUX_VBIF_AP =		0x019,
	
	AUX_CH0_6311 =		0x020,
	AUX_CH1_6311 =		0x021,

	AUX_ADCVIN0_MD =	0x10F,
	AUX_ADCVIN0_GPS = 	0x20C,
	AUX_CH12 = 		0x1011,
	AUX_CH13 = 		0x2011,
	AUX_CH14 = 		0x3011,
	AUX_CH15 = 		0x4011,
} upmu_adc_chl_list_enum;

#endif  