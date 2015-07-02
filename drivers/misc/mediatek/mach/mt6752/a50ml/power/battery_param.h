#ifndef _BATTERY_PARAM_H
#define _BATTERY_PARAM_H

#include <generated/autoconf.h>
#include <mach/mt_typedefs.h>

#define Batt0_Temperature_Table \
{\
        {-20,1282000},\
        {-15,929400},\
        {-10,680900},\
        { -5,504100},\
        {  0,376600},\
        {  5,283900},\
        { 10,216000},\
        { 15,165800},\
        { 20,128200},\
        { 25,100000},\
        { 30,78600},\
        { 35,62250},\
        { 40,49660},\
        { 45,39890},\
        { 50,32260},\
        { 55,26260},\
        { 60,21510}\
}

#define battery0_profile_t0 \
{\
{0 , 4342},\
{3 , 4314},\
{6 , 4292},\
{9 , 4271},\
{12 , 4251},\
{16 , 4234},\
{19 , 4215},\
{22 , 4196},\
{25 , 4180},\
{28 , 4167},\
{31 , 4153},\
{34 , 4132},\
{37 , 4101},\
{41 , 4056},\
{44 , 4020},\
{47 , 3998},\
{50 , 3978},\
{53 , 3960},\
{56 , 3945},\
{59 , 3931},\
{62 , 3920},\
{65 , 3905},\
{69 , 3891},\
{72 , 3876},\
{75 , 3864},\
{78 , 3853},\
{81 , 3843},\
{84 , 3834},\
{87 , 3827},\
{90 , 3819},\
{93 , 3812},\
{97 , 3807},\
{100 , 3801},\
{103 , 3797},\
{106 , 3792},\
{109 , 3790},\
{112 , 3787},\
{115 , 3785},\
{118 , 3783},\
{121 , 3781},\
{125 , 3779},\
{128 , 3776},\
{131 , 3772},\
{134 , 3769},\
{137 , 3762},\
{140 , 3757},\
{143 , 3751},\
{146 , 3745},\
{149 , 3736},\
{153 , 3729},\
{156 , 3720},\
{159 , 3712},\
{162 , 3702},\
{166 , 3692},\
{169 , 3687},\
{172 , 3678},\
{175 , 3668},\
{178 , 3655},\
{179 , 3636},\
{181 , 3606},\
{182 , 3588},\
{183 , 3568},\
{183 , 3540},\
{184 , 3509},\
{185 , 3472},\
{186 , 3431},\
{187 , 3366},\
{187 , 3366},\
{187 , 3366},\
{187 , 3366},\
{187 , 3366},\
{187 , 3366},\
{187 , 3366},\
{187 , 3366},\
{187 , 3366},\
{187 , 3366},\
{187 , 3366},\
{187 , 3366},\
{187 , 3366},\
{187 , 3366},\
}

#define battery0_profile_t1 \
{\
{0 , 4343},\
{2 , 4308},\
{4 , 4282},\
{6 , 4260},\
{7 , 4240},\
{9 , 4221},\
{11 , 4201},\
{13 , 4185},\
{15 , 4167},\
{17 , 4151},\
{19 , 4133},\
{21 , 4117},\
{23 , 4100},\
{25 , 4085},\
{27 , 4071},\
{29 , 4053},\
{31 , 4031},\
{33 , 4009},\
{35 , 3987},\
{37 , 3967},\
{39 , 3948},\
{41 , 3931},\
{43 , 3917},\
{45 , 3905},\
{47 , 3893},\
{49 , 3880},\
{51 , 3869},\
{53 , 3860},\
{55 , 3849},\
{57 , 3841},\
{59 , 3832},\
{61 , 3823},\
{63 , 3817},\
{65 , 3810},\
{67 , 3803},\
{69 , 3797},\
{71 , 3790},\
{73 , 3785},\
{75 , 3779},\
{77 , 3775},\
{79 , 3771},\
{82 , 3766},\
{84 , 3761},\
{85 , 3756},\
{87 , 3751},\
{89 , 3744},\
{91 , 3734},\
{93 , 3725},\
{96 , 3715},\
{98 , 3702},\
{100 , 3693},\
{102 , 3688},\
{104 , 3684},\
{106 , 3676},\
{108 , 3652},\
{110 , 3575},\
{112 , 3449},\
{113 , 3309},\
{114 , 3230},\
{114 , 3230},\
{114 , 3230},\
{114 , 3230},\
{114 , 3230},\
{114 , 3230},\
{114 , 3230},\
{114 , 3230},\
{114 , 3230},\
{114 , 3230},\
{114 , 3230},\
{114 , 3230},\
{114 , 3230},\
{114 , 3230},\
{114 , 3230},\
{114 , 3230},\
{114 , 3230},\
{114 , 3230},\
{114 , 3230},\
{114 , 3230},\
{114 , 3230},\
{114 , 3230},\
}

#define battery0_profile_t2 \
{\
{0 , 4375},\
{1 , 4351},\
{3 , 4333},\
{4 , 4315},\
{6 , 4298},\
{7 , 4283},\
{8 , 4266},\
{10 , 4250},\
{11 , 4234},\
{13 , 4218},\
{14 , 4201},\
{16 , 4185},\
{16 , 4185},\
{17 , 4170},\
{18 , 4154},\
{20 , 4139},\
{21 , 4125},\
{23 , 4110},\
{24 , 4095},\
{25 , 4081},\
{27 , 4069},\
{28 , 4055},\
{30 , 4040},\
{31 , 4027},\
{32 , 4012},\
{34 , 3998},\
{34 , 3998},\
{35 , 3983},\
{37 , 3974},\
{38 , 3965},\
{39 , 3953},\
{41 , 3943},\
{42 , 3932},\
{44 , 3922},\
{45 , 3906},\
{47 , 3889},\
{48 , 3875},\
{49 , 3863},\
{51 , 3853},\
{52 , 3845},\
{54 , 3837},\
{55 , 3831},\
{56 , 3823},\
{58 , 3818},\
{59 , 3812},\
{61 , 3806},\
{62 , 3801},\
{63 , 3797},\
{65 , 3792},\
{66 , 3788},\
{68 , 3785},\
{69 , 3781},\
{71 , 3776},\
{72 , 3774},\
{73 , 3770},\
{75 , 3767},\
{76 , 3764},\
{78 , 3760},\
{79 , 3755},\
{80 , 3751},\
{82 , 3744},\
{83 , 3739},\
{85 , 3734},\
{86 , 3729},\
{87 , 3721},\
{89 , 3712},\
{89 , 3712},\
{90 , 3703},\
{92 , 3694},\
{93 , 3682},\
{95 , 3677},\
{96 , 3674},\
{97 , 3671},\
{99 , 3664},\
{100 , 3648},\
{102 , 3596},\
{103 , 3517},\
{104 , 3390},\
{104 , 3237},\
{104 , 3156},\
}

#define battery0_profile_t3 \
{\
{0 , 4384},\
{1 , 4358},\
{3 , 4339},\
{4 , 4320},\
{6 , 4303},\
{7 , 4287},\
{8 , 4270},\
{10 , 4255},\
{11 , 4237},\
{12 , 4222},\
{14 , 4206},\
{15 , 4190},\
{17 , 4174},\
{18 , 4158},\
{19 , 4143},\
{21 , 4127},\
{22 , 4113},\
{24 , 4097},\
{25 , 4084},\
{26 , 4069},\
{28 , 4056},\
{29 , 4044},\
{31 , 4029},\
{32 , 4017},\
{33 , 4003},\
{35 , 3992},\
{36 , 3979},\
{37 , 3968},\
{39 , 3958},\
{40 , 3946},\
{42 , 3936},\
{43 , 3925},\
{44 , 3914},\
{46 , 3900},\
{47 , 3881},\
{49 , 3865},\
{50 , 3857},\
{51 , 3848},\
{53 , 3841},\
{54 , 3832},\
{55 , 3826},\
{57 , 3819},\
{58 , 3813},\
{60 , 3807},\
{61 , 3802},\
{62 , 3797},\
{64 , 3792},\
{65 , 3788},\
{67 , 3785},\
{68 , 3781},\
{69 , 3776},\
{71 , 3772},\
{72 , 3769},\
{74 , 3765},\
{75 , 3757},\
{76 , 3746},\
{78 , 3741},\
{79 , 3736},\
{80 , 3731},\
{82 , 3725},\
{83 , 3719},\
{85 , 3715},\
{86 , 3709},\
{87 , 3700},\
{89 , 3693},\
{90 , 3683},\
{92 , 3673},\
{93 , 3667},\
{94 , 3664},\
{96 , 3661},\
{97 , 3657},\
{99 , 3647},\
{100 , 3607},\
{101 , 3537},\
{103 , 3435},\
{104 , 3253},\
{105 , 3039},\
{105 , 2969},\
{105 , 2934},\
{105 , 2909},\
}

#define battery1_profile_t0 \
{\
{0 , 4336},\
{2 , 4305},\
{4 , 4280},\
{6 , 4257},\
{8 , 4234},\
{10 , 4210},\
{12 , 4187},\
{13 , 4168},\
{15 , 4145},\
{17 , 4125},\
{19 , 4106},\
{21 , 4090},\
{23 , 4069},\
{25 , 4045},\
{27 , 4021},\
{29 , 3998},\
{31 , 3980},\
{33 , 3960},\
{35 , 3945},\
{36 , 3929},\
{38 , 3915},\
{40 , 3898},\
{42 , 3885},\
{44 , 3870},\
{46 , 3857},\
{48 , 3847},\
{50 , 3838},\
{52 , 3830},\
{54 , 3820},\
{56 , 3813},\
{58 , 3806},\
{59 , 3799},\
{61 , 3796},\
{63 , 3793},\
{65 , 3788},\
{67 , 3786},\
{69 , 3783},\
{71 , 3779},\
{73 , 3773},\
{75 , 3769},\
{77 , 3760},\
{79 , 3753},\
{81 , 3745},\
{82 , 3735},\
{84 , 3725},\
{86 , 3713},\
{88 , 3705},\
{90 , 3694},\
{92 , 3685},\
{94 , 3670},\
{96 , 3643},\
{97 , 3613},\
{98 , 3590},\
{98 , 3576},\
{98 , 3562},\
{98 , 3549},\
{99 , 3537},\
{99 , 3526},\
{99 , 3516},\
{99 , 3507},\
{99 , 3498},\
{99 , 3489},\
{99 , 3480},\
{99 , 3473},\
{99 , 3465},\
{100 , 3457},\
{100 , 3450},\
{100 , 3443},\
{100 , 3436},\
{100 , 3430},\
{100 , 3424},\
{100 , 3417},\
{100 , 3412},\
{100 , 3405},\
{100 , 3401},\
{100 , 3395},\
{100 , 3388},\
{100 , 3384},\
{100 , 3378},\
{100 , 3372},\
}

#define battery1_profile_t1 \
{\
{0 , 4343},\
{2 , 4316},\
{4 , 4293},\
{6 , 4270},\
{8 , 4248},\
{10 , 4227},\
{11 , 4205},\
{13 , 4184},\
{15 , 4164},\
{17 , 4143},\
{19 , 4122},\
{21 , 4103},\
{23 , 4086},\
{25 , 4068},\
{27 , 4046},\
{29 , 4025},\
{31 , 4004},\
{32 , 3986},\
{34 , 3967},\
{36 , 3950},\
{38 , 3933},\
{40 , 3916},\
{42 , 3900},\
{44 , 3885},\
{46 , 3871},\
{48 , 3859},\
{50 , 3848},\
{51 , 3838},\
{53 , 3829},\
{55 , 3821},\
{57 , 3814},\
{59 , 3806},\
{61 , 3799},\
{63 , 3794},\
{65 , 3788},\
{67 , 3785},\
{69 , 3781},\
{71 , 3779},\
{72 , 3775},\
{74 , 3771},\
{76 , 3767},\
{78 , 3759},\
{80 , 3749},\
{82 , 3738},\
{84 , 3724},\
{86 , 3711},\
{88 , 3701},\
{90 , 3693},\
{92 , 3684},\
{93 , 3674},\
{95 , 3648},\
{97 , 3588},\
{99 , 3475},\
{100 , 3391},\
{100 , 3343},\
{101 , 3307},\
{101 , 3279},\
{101 , 3258},\
{101 , 3238},\
{101 , 3221},\
{101 , 3207},\
{101 , 3194},\
{101 , 3179},\
{101 , 3167},\
{101 , 3155},\
{101 , 3147},\
{101 , 3137},\
{101 , 3130},\
{101 , 3122},\
{101 , 3116},\
{101 , 3107},\
{101 , 3100},\
{101 , 3094},\
{101 , 3087},\
{101 , 3080},\
{101 , 3072},\
{101 , 3065},\
{101 , 3058},\
{101 , 3051},\
{101 , 3046},\
}

#define battery1_profile_t2 \
{\
{0 , 4346},\
{2 , 4322},\
{4 , 4298},\
{6 , 4275},\
{8 , 4253},\
{10 , 4231},\
{11 , 4210},\
{13 , 4189},\
{15 , 4168},\
{17 , 4147},\
{19 , 4127},\
{21 , 4107},\
{23 , 4088},\
{25 , 4069},\
{27 , 4052},\
{29 , 4035},\
{31 , 4017},\
{32 , 4001},\
{34 , 3985},\
{36 , 3969},\
{38 , 3952},\
{40 , 3934},\
{42 , 3915},\
{44 , 3897},\
{46 , 3881},\
{48 , 3868},\
{50 , 3857},\
{51 , 3847},\
{53 , 3838},\
{55 , 3829},\
{57 , 3821},\
{59 , 3814},\
{61 , 3808},\
{63 , 3802},\
{65 , 3797},\
{67 , 3791},\
{69 , 3786},\
{71 , 3781},\
{72 , 3773},\
{74 , 3765},\
{76 , 3757},\
{78 , 3749},\
{80 , 3742},\
{82 , 3735},\
{84 , 3725},\
{86 , 3713},\
{88 , 3702},\
{90 , 3686},\
{92 , 3680},\
{93 , 3674},\
{95 , 3661},\
{97 , 3605},\
{99 , 3497},\
{101 , 3284},\
{101 , 3272},\
{101 , 3267},\
{101 , 3264},\
{101 , 3262},\
{101 , 3261},\
{101 , 3260},\
{101 , 3260},\
{101 , 3260},\
{101 , 3260},\
{101 , 3260},\
{101 , 3260},\
{101 , 3260},\
{101 , 3260},\
{101 , 3260},\
{101 , 3260},\
{101 , 3260},\
{101 , 3260},\
{101 , 3260},\
{101 , 3260},\
{101 , 3260},\
{101 , 3260},\
{101 , 3260},\
{101 , 3260},\
{101 , 3260},\
{101 , 3260},\
{101 , 3260},\
}

#define battery1_profile_t3 \
{\
{0 , 4328},\
{2 , 4305},\
{4 , 4282},\
{6 , 4261},\
{8 , 4238},\
{10 , 4217},\
{12 , 4196},\
{14 , 4175},\
{15 , 4155},\
{17 , 4133},\
{19 , 4113},\
{21 , 4094},\
{23 , 4074},\
{25 , 4055},\
{27 , 4037},\
{29 , 4020},\
{31 , 4003},\
{33 , 3987},\
{35 , 3972},\
{37 , 3956},\
{39 , 3943},\
{41 , 3928},\
{43 , 3915},\
{44 , 3898},\
{46 , 3878},\
{48 , 3859},\
{50 , 3845},\
{52 , 3835},\
{54 , 3826},\
{56 , 3818},\
{58 , 3810},\
{60 , 3803},\
{62 , 3796},\
{64 , 3789},\
{66 , 3784},\
{68 , 3779},\
{70 , 3774},\
{72 , 3767},\
{73 , 3756},\
{75 , 3749},\
{77 , 3743},\
{79 , 3734},\
{81 , 3725},\
{83 , 3714},\
{85 , 3697},\
{87 , 3678},\
{89 , 3671},\
{91 , 3667},\
{93 , 3663},\
{95 , 3656},\
{97 , 3615},\
{99 , 3521},\
{100 , 3361},\
{101 , 3281},\
{101 , 3266},\
{101 , 3259},\
{101 , 3256},\
{101 , 3253},\
{101 , 3252},\
{101 , 3251},\
{101 , 3251},\
{101 , 3251},\
{101 , 3251},\
{101 , 3251},\
{101 , 3251},\
{101 , 3251},\
{101 , 3251},\
{101 , 3251},\
{101 , 3251},\
{101 , 3251},\
{101 , 3251},\
{101 , 3251},\
{101 , 3251},\
{101 , 3251},\
{101 , 3251},\
{101 , 3251},\
{101 , 3251},\
{101 , 3251},\
{101 , 3251},\
{101 , 3251},\
}

#define battery0_r_profile_t0 \
{\
{683 , 4342},\
{658 , 4314},\
{683 , 4292},\
{693 , 4271},\
{698 , 4251},\
{710 , 4234},\
{710 , 4215},\
{713 , 4196},\
{718 , 4180},\
{738 , 4167},\
{778 , 4153},\
{803 , 4132},\
{825 , 4101},\
{880 , 4056},\
{1000 , 4020},\
{1048 , 3998},\
{1070 , 3978},\
{1103 , 3960},\
{1123 , 3945},\
{1120 , 3931},\
{1135 , 3920},\
{1128 , 3905},\
{1113 , 3891},\
{1140 , 3876},\
{1145 , 3864},\
{1133 , 3853},\
{1150 , 3843},\
{1155 , 3834},\
{1160 , 3827},\
{1168 , 3819},\
{1173 , 3812},\
{1140 , 3807},\
{1185 , 3801},\
{1193 , 3797},\
{1203 , 3792},\
{1220 , 3790},\
{1233 , 3787},\
{1253 , 3785},\
{1283 , 3783},\
{1315 , 3781},\
{1355 , 3779},\
{1393 , 3776},\
{1438 , 3772},\
{1490 , 3769},\
{1533 , 3762},\
{1578 , 3757},\
{1618 , 3751},\
{1658 , 3745},\
{1695 , 3736},\
{1733 , 3729},\
{1773 , 3720},\
{1818 , 3712},\
{1865 , 3702},\
{1910 , 3692},\
{1950 , 3687},\
{2058 , 3678},\
{2085 , 3668},\
{2140 , 3655},\
{2093 , 3636},\
{2023 , 3606},\
{1973 , 3588},\
{1925 , 3568},\
{1860 , 3540},\
{1788 , 3509},\
{1703 , 3472},\
{1608 , 3431},\
{1455 , 3366},\
}

#define	battery0_r_profile_t1 \
{\
{518 , 4343},\
{398 , 4308},\
{428 , 4282},\
{447 , 4260},\
{450 , 4240},\
{455 , 4221},\
{458 , 4201},\
{463 , 4185},\
{465 , 4167},\
{473 , 4151},\
{475 , 4133},\
{480 , 4117},\
{478 , 4100},\
{480 , 4085},\
{505 , 4071},\
{525 , 4053},\
{520 , 4031},\
{508 , 4009},\
{493 , 3987},\
{478 , 3967},\
{465 , 3948},\
{453 , 3931},\
{445 , 3917},\
{450 , 3905},\
{450 , 3893},\
{450 , 3880},\
{453 , 3869},\
{455 , 3860},\
{455 , 3849},\
{450 , 3841},\
{465 , 3832},\
{468 , 3823},\
{473 , 3817},\
{478 , 3810},\
{480 , 3803},\
{483 , 3797},\
{488 , 3790},\
{493 , 3785},\
{498 , 3779},\
{500 , 3775},\
{505 , 3771},\
{515 , 3766},\
{523 , 3761},\
{540 , 3756},\
{568 , 3751},\
{600 , 3744},\
{623 , 3734},\
{663 , 3725},\
{705 , 3715},\
{748 , 3702},\
{800 , 3693},\
{855 , 3688},\
{928 , 3684},\
{1013 , 3676},\
{1085 , 3652},\
{1130 , 3575},\
{1238 , 3449},\
{1280 , 3309},\
{1083 , 3230},\
}

#define battery0_r_profile_t2 \
{\
{188 , 4375},\
{188 , 4351},\
{190 , 4333},\
{188 , 4315},\
{185 , 4298},\
{193 , 4283},\
{190 , 4266},\
{193 , 4250},\
{195 , 4234},\
{193 , 4218},\
{195 , 4201},\
{195 , 4185},\
{195 , 4185},\
{198 , 4170},\
{195 , 4154},\
{198 , 4139},\
{200 , 4125},\
{205 , 4110},\
{202 , 4095},\
{205 , 4081},\
{205 , 4069},\
{215 , 4055},\
{220 , 4040},\
{225 , 4027},\
{225 , 4012},\
{223 , 3998},\
{223 , 3998},\
{220 , 3983},\
{223 , 3974},\
{228 , 3965},\
{228 , 3953},\
{233 , 3943},\
{233 , 3932},\
{238 , 3922},\
{220 , 3906},\
{208 , 3889},\
{200 , 3875},\
{193 , 3863},\
{190 , 3853},\
{190 , 3845},\
{188 , 3837},\
{190 , 3831},\
{188 , 3823},\
{193 , 3818},\
{190 , 3812},\
{190 , 3806},\
{190 , 3801},\
{195 , 3797},\
{193 , 3792},\
{195 , 3788},\
{195 , 3785},\
{198 , 3781},\
{193 , 3776},\
{193 , 3774},\
{193 , 3770},\
{195 , 3767},\
{193 , 3764},\
{193 , 3760},\
{193 , 3755},\
{198 , 3751},\
{195 , 3744},\
{203 , 3739},\
{208 , 3734},\
{215 , 3729},\
{220 , 3721},\
{228 , 3712},\
{228 , 3712},\
{235 , 3703},\
{248 , 3694},\
{255 , 3682},\
{273 , 3677},\
{298 , 3674},\
{340 , 3671},\
{390 , 3664},\
{453 , 3648},\
{518 , 3596},\
{633 , 3517},\
{833 , 3390},\
{1093 , 3237},\
{890 , 3156},\
}

#define battery0_r_profile_t3 \
{\
{108 , 4384},\
{108 , 4358},\
{113 , 4339},\
{110 , 4320},\
{108 , 4303},\
{108 , 4287},\
{108 , 4270},\
{113 , 4255},\
{108 , 4237},\
{110 , 4222},\
{110 , 4206},\
{110 , 4190},\
{113 , 4174},\
{108 , 4158},\
{113 , 4143},\
{108 , 4127},\
{115 , 4113},\
{110 , 4097},\
{115 , 4084},\
{113 , 4069},\
{117 , 4056},\
{120 , 4044},\
{118 , 4029},\
{123 , 4017},\
{118 , 4003},\
{125 , 3992},\
{120 , 3979},\
{128 , 3968},\
{130 , 3958},\
{130 , 3946},\
{133 , 3936},\
{133 , 3925},\
{140 , 3914},\
{133 , 3900},\
{120 , 3881},\
{108 , 3865},\
{113 , 3857},\
{113 , 3848},\
{113 , 3841},\
{110 , 3832},\
{110 , 3826},\
{110 , 3819},\
{110 , 3813},\
{108 , 3807},\
{113 , 3802},\
{113 , 3797},\
{115 , 3792},\
{113 , 3788},\
{118 , 3785},\
{118 , 3781},\
{115 , 3776},\
{118 , 3772},\
{120 , 3769},\
{120 , 3765},\
{113 , 3757},\
{105 , 3746},\
{108 , 3741},\
{108 , 3736},\
{110 , 3731},\
{108 , 3725},\
{105 , 3719},\
{110 , 3715},\
{113 , 3709},\
{110 , 3700},\
{115 , 3693},\
{113 , 3683},\
{118 , 3673},\
{118 , 3667},\
{120 , 3664},\
{125 , 3661},\
{130 , 3657},\
{143 , 3647},\
{143 , 3607},\
{153 , 3537},\
{173 , 3435},\
{228 , 3253},\
{598 , 3039},\
{428 , 2969},\
{338 , 2934},\
{275 , 2909},\
}

#define battery1_r_profile_t0 \
{\
{903 , 4336},\
{903 , 4305},\
{908 , 4280},\
{913 , 4257},\
{905 , 4234},\
{893 , 4210},\
{883 , 4187},\
{890 , 4168},\
{880 , 4145},\
{873 , 4125},\
{883 , 4106},\
{900 , 4090},\
{920 , 4069},\
{908 , 4045},\
{900 , 4021},\
{888 , 3998},\
{883 , 3980},\
{878 , 3960},\
{880 , 3945},\
{883 , 3929},\
{890 , 3915},\
{890 , 3898},\
{900 , 3885},\
{898 , 3870},\
{900 , 3857},\
{915 , 3847},\
{925 , 3838},\
{945 , 3830},\
{948 , 3820},\
{963 , 3813},\
{978 , 3806},\
{995 , 3799},\
{1028 , 3796},\
{1058 , 3793},\
{1085 , 3788},\
{1125 , 3786},\
{1168 , 3783},\
{1218 , 3779},\
{1265 , 3773},\
{1325 , 3769},\
{1368 , 3760},\
{1418 , 3753},\
{1470 , 3745},\
{1500 , 3735},\
{1535 , 3725},\
{1565 , 3713},\
{1608 , 3705},\
{1653 , 3694},\
{1725 , 3685},\
{1823 , 3670},\
{1965 , 3643},\
{2033 , 3613},\
{1975 , 3590},\
{1940 , 3576},\
{1910 , 3562},\
{1878 , 3549},\
{1858 , 3537},\
{1825 , 3526},\
{1798 , 3516},\
{1778 , 3507},\
{1748 , 3498},\
{1738 , 3489},\
{1705 , 3480},\
{1685 , 3473},\
{1683 , 3465},\
{1650 , 3457},\
{1635 , 3450},\
{1623 , 3443},\
{1600 , 3436},\
{1610 , 3430},\
{1563 , 3424},\
{1565 , 3417},\
{1538 , 3412},\
{1515 , 3405},\
{1528 , 3401},\
{1530 , 3395},\
{1493 , 3388},\
{1468 , 3384},\
{1473 , 3378},\
{1473 , 3372},\
}

#define battery1_r_profile_t1 \
{\
{458 , 4343},\
{458 , 4316},\
{460 , 4293},\
{458 , 4270},\
{460 , 4248},\
{465 , 4227},\
{465 , 4205},\
{468 , 4184},\
{473 , 4164},\
{473 , 4143},\
{478 , 4122},\
{480 , 4103},\
{490 , 4086},\
{510 , 4068},\
{513 , 4046},\
{513 , 4025},\
{503 , 4004},\
{495 , 3986},\
{485 , 3967},\
{480 , 3950},\
{478 , 3933},\
{475 , 3916},\
{470 , 3900},\
{465 , 3885},\
{460 , 3871},\
{463 , 3859},\
{465 , 3848},\
{470 , 3838},\
{473 , 3829},\
{478 , 3821},\
{483 , 3814},\
{488 , 3806},\
{493 , 3799},\
{503 , 3794},\
{505 , 3788},\
{520 , 3785},\
{538 , 3781},\
{558 , 3779},\
{578 , 3775},\
{605 , 3771},\
{640 , 3767},\
{670 , 3759},\
{700 , 3749},\
{745 , 3738},\
{783 , 3724},\
{828 , 3711},\
{873 , 3701},\
{933 , 3693},\
{1013 , 3684},\
{1113 , 3674},\
{1228 , 3648},\
{1313 , 3588},\
{1465 , 3475},\
{1478 , 3391},\
{1360 , 3343},\
{1270 , 3307},\
{1208 , 3279},\
{1148 , 3258},\
{1103 , 3238},\
{1058 , 3221},\
{1033 , 3207},\
{995 , 3194},\
{975 , 3179},\
{960 , 3167},\
{920 , 3155},\
{878 , 3147},\
{875 , 3137},\
{833 , 3130},\
{835 , 3122},\
{810 , 3116},\
{840 , 3107},\
{810 , 3100},\
{815 , 3094},\
{783 , 3087},\
{820 , 3080},\
{820 , 3072},\
{828 , 3065},\
{833 , 3058},\
{838 , 3051},\
{815 , 3046},\
}

#define battery1_r_profile_t2 \
{\
{158 , 4346},\
{158 , 4322},\
{158 , 4298},\
{158 , 4275},\
{158 , 4253},\
{158 , 4231},\
{163 , 4210},\
{188 , 4189},\
{168 , 4168},\
{170 , 4147},\
{173 , 4127},\
{175 , 4107},\
{178 , 4088},\
{180 , 4069},\
{188 , 4052},\
{193 , 4035},\
{193 , 4017},\
{200 , 4001},\
{200 , 3985},\
{203 , 3969},\
{198 , 3952},\
{193 , 3934},\
{180 , 3915},\
{170 , 3897},\
{165 , 3881},\
{160 , 3868},\
{163 , 3857},\
{160 , 3847},\
{163 , 3838},\
{163 , 3829},\
{165 , 3821},\
{165 , 3814},\
{170 , 3808},\
{170 , 3802},\
{175 , 3797},\
{175 , 3791},\
{175 , 3786},\
{175 , 3781},\
{175 , 3773},\
{170 , 3765},\
{168 , 3757},\
{163 , 3749},\
{163 , 3742},\
{168 , 3735},\
{165 , 3725},\
{163 , 3713},\
{168 , 3702},\
{160 , 3686},\
{165 , 3680},\
{175 , 3674},\
{190 , 3661},\
{185 , 3605},\
{193 , 3497},\
{208 , 3284},\
{183 , 3272},\
{170 , 3267},\
{165 , 3264},\
{158 , 3262},\
{153 , 3261},\
{158 , 3260},\
{155 , 3260},\
{155 , 3260},\
{155 , 3260},\
{155 , 3260},\
{155 , 3260},\
{155 , 3260},\
{155 , 3260},\
{155 , 3260},\
{155 , 3260},\
{155 , 3260},\
{155 , 3260},\
{155 , 3260},\
{155 , 3260},\
{155 , 3260},\
{155 , 3260},\
{155 , 3260},\
{155 , 3260},\
{155 , 3260},\
{155 , 3260},\
{155 , 3260},\
}

#define battery1_r_profile_t3 \
{\
{128 , 4328},\
{128 , 4305},\
{123 , 4282},\
{125 , 4261},\
{123 , 4238},\
{125 , 4217},\
{128 , 4196},\
{130 , 4175},\
{133 , 4155},\
{133 , 4133},\
{133 , 4113},\
{138 , 4094},\
{138 , 4074},\
{138 , 4055},\
{140 , 4037},\
{143 , 4020},\
{145 , 4003},\
{150 , 3987},\
{150 , 3972},\
{153 , 3956},\
{158 , 3943},\
{160 , 3928},\
{165 , 3915},\
{165 , 3898},\
{150 , 3878},\
{135 , 3859},\
{128 , 3845},\
{128 , 3835},\
{128 , 3826},\
{133 , 3818},\
{135 , 3810},\
{138 , 3803},\
{140 , 3796},\
{138 , 3789},\
{145 , 3784},\
{145 , 3779},\
{148 , 3774},\
{143 , 3767},\
{130 , 3756},\
{133 , 3749},\
{135 , 3743},\
{133 , 3734},\
{133 , 3725},\
{133 , 3714},\
{133 , 3697},\
{133 , 3678},\
{135 , 3671},\
{138 , 3667},\
{148 , 3663},\
{160 , 3656},\
{155 , 3615},\
{175 , 3521},\
{208 , 3361},\
{208 , 3281},\
{168 , 3266},\
{148 , 3259},\
{140 , 3256},\
{133 , 3253},\
{133 , 3252},\
{130 , 3251},\
{130 , 3251},\
{130 , 3251},\
{130 , 3251},\
{130 , 3251},\
{130 , 3251},\
{130 , 3251},\
{130 , 3251},\
{130 , 3251},\
{130 , 3251},\
{130 , 3251},\
{130 , 3251},\
{130 , 3251},\
{130 , 3251},\
{130 , 3251},\
{130 , 3251},\
{130 , 3251},\
{130 , 3251},\
{130 , 3251},\
{130 , 3251},\
{130 , 3251},\
}
#define VALUE_ZERO \
{\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 },\
{0 , 0 }\
}

#endif
