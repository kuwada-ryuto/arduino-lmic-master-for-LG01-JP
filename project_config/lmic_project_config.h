// project-specific definitions
//#define CFG_eu868 1
//#define CFG_us915 1
//#define CFG_au921 1
//#define CFG_as923 1
#define CFG_as923jp 1
//#define LMIC_COUNTRY_CODE LMIC_COUNTRY_CODE_JP	/* for as923-JP */
//#define CFG_in866 1
#define CFG_sx1276_radio 1
//#define LMIC_USE_INTERRUPTS

//disable all code related to ping
#define DISABLE_PING
//disable all code related to beacon tracking.
// Requires ping to be disabled too
#define DISABLE_BEACONS

//LG01�𗘗p����ꍇ�͈ȉ����`���邱�ƁB
#define DISABLE_INVERT_IQ_ON_RX
#define MINRX_SYMS 250
#define FOR_LG01_GW

//AS923�ŁADR10�ȊO�ŒʐM����ꍇ�Ɉȉ���define���Ă��������B
//�܂��AJoin����DR�l��ύX���邽�߁Almic_bandplan_as923.h��
//LMICbandplan_getInitialDrJoin()���ύX���Ă��������B
//#define OTHER_DR_AS923
