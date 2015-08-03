#include <linux/batterydata-lib.h>

static struct single_row_lut fcc_temp = {
	.x		= {-20,0,25,40,60},
	.y		= {2057,2060,2058,2055,2044},
	.cols	= 5
};

static struct single_row_lut fcc_sf = {
	.x		= {0},
	.y		= {100},
	.cols	= 1
};


static struct sf_lut rbatt_sf = {
	.rows		= 30,
	.cols		= 5,
	.row_entries		= {-20,0,25,40,60},
	.percent	= {100,95,90,85,80,75,70,65,60,55,50,45,40,35,30,25,20,16,13,11,10,9,8,7,6,5,4,3,2,1},
	.sf		= {
				{1095,249,100,86,84},
				{1095,249,100,86,84},
				{1065,253,101,88,85},
				{1050,262,105,90,86},
				{1040,276,109,93,88},
				{990,289,115,96,90},
				{990,280,120,99,91},
				{996,271,132,104,96},
				{1007,263,140,115,102},
				{1032,262,115,101,94},
				{1066,266,105,91,88},
				{1110,272,105,91,88},
				{1162,285,107,93,90},
				{1225,305,112,96,93},
				{1294,332,116,97,90},
				{1373,365,121,96,88},
				{1474,398,122,95,89},
				{1603,445,123,96,88},
				{1853,507,125,96,88},
				{2191,568,127,98,90},
				{2474,603,132,100,93},
				{2713,630,138,104,93},
				{3007,650,143,106,94},
				{3676,707,150,107,94},
				{4774,793,158,109,94},
				{6440,918,162,107,93},
				{9253,1106,168,110,96},
				{13561,1457,185,116,100},
				{19707,2093,213,128,109},
				{29240,3122,268,156,121}
	}
};

static struct pc_temp_ocv_lut pc_temp_ocv = {
	.rows		= 31,
	.cols		= 5,
	.temp		= {-20,0,25,40,60},
	.percent	= {100,95,90,85,80,75,70,65,60,55,50,45,40,35,30,25,20,16,13,11,10,9,8,7,6,5,4,3,2,1,0},
	.ocv		= {
				{4322,4321,4314,4308,4299},
				{4228,4244,4244,4241,4234},
				{4162,4184,4186,4182,4176},
				{4103,4128,4130,4128,4122},
				{4048,4078,4078,4076,4070},
				{3975,4024,4029,4028,4023},
				{3930,3971,3986,3985,3980},
				{3890,3925,3948,3947,3942},
				{3856,3884,3911,3912,3908},
				{3830,3852,3862,3864,3861},
				{3811,3825,3829,3829,3827},
				{3796,3803,3806,3807,3804},
				{3780,3788,3790,3790,3788},
				{3765,3776,3777,3776,3774},
				{3750,3764,3768,3764,3756},
				{3731,3748,3756,3749,3734},
				{3710,3722,3734,3727,3712},
				{3688,3703,3704,3696,3684},
				{3668,3692,3682,3674,3660},
				{3650,3685,3674,3667,3656},
				{3639,3681,3672,3665,3654},
				{3626,3676,3669,3662,3652},
				{3614,3670,3666,3660,3648},
				{3597,3662,3662,3656,3644},
				{3576,3648,3654,3646,3632},
				{3551,3626,3630,3619,3598},
				{3519,3589,3584,3572,3550},
				{3476,3534,3522,3508,3486},
				{3412,3454,3436,3422,3406},
				{3294,3328,3310,3292,3276},
				{3000,3000,3000,3000,3000}
	}
};

struct bms_battery_data LGE_BL41A1H_1527783_2100mAh_BMS_data = {
	.fcc				= 2100,
	.fcc_temp_lut			= &fcc_temp,
	.fcc_sf_lut				= &fcc_sf,
	.pc_temp_ocv_lut		= &pc_temp_ocv,
	.rbatt_sf_lut			= &rbatt_sf,
	.default_rbatt_mohm	= 136
};
