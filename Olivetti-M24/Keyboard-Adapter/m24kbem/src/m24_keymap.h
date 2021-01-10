
#define M24_KC_Q  0x10
#define M24_KC_W  0x11
#define M24_KC_E  0x12
#define M24_KC_R  0x13
#define M24_KC_T  0x14
#define M24_KC_Y  0x15
#define M24_KC_U  0x16
#define M24_KC_I  0x17
#define M24_KC_O  0x18
#define M24_KC_P  0x19
// @ ' on Keyboard 2, [ { on Keyboard 1 : _OB
#define M24_KC_OB 0x1A
// [ { on Keyboard 2, ] } on Keyboard 1 : _CB
#define M24_KC_CB 0x1B

#define M24_KC_A  0x1E
#define M24_KC_S  0x1F
#define M24_KC_D  0x20
#define M24_KC_F  0x21
#define M24_KC_G  0x22
#define M24_KC_H  0x23
#define M24_KC_J  0x24
#define M24_KC_K  0x25
#define M24_KC_L  0x26
// ; + on Keyboard 2, ; : on Keyboard 1 : _SC
#define M24_KC_SC 0x27
// : * on Keyboard 2, ' " on Keyboard 1 : _QU
#define M24_KC_QU 0x28
// ] } on Keyboard 2, ` ~ on Keyboard 1 : _TL
#define M24_KC_TL 0x29

// \ |
#define M24_KC_BSL 0x2B
#define M24_KC_Z  0x2C
#define M24_KC_X  0x2D
#define M24_KC_C  0x2E
#define M24_KC_V  0x2F
#define M24_KC_B  0x30
#define M24_KC_N  0x31
#define M24_KC_M  0x32
// , <
#define M24_KC_CM 0x33
// . >
#define M24_KC_PD 0x34
// / ?
#define M24_KC_SL 0x35

#define M24_KC_1  0x02
#define M24_KC_2  0x03
#define M24_KC_3  0x04
#define M24_KC_4  0x05
#define M24_KC_5  0x06
#define M24_KC_6  0x07
#define M24_KC_7  0x08
#define M24_KC_8  0x09
#define M24_KC_9  0x0A
#define M24_KC_0  0x0B
// - = on Keyboard 2, - _ on Keyboard 1 : _MI
#define M24_KC_MI 0x0C
// ^ ~ on Keyboard 2, = + on Keyboard 1 : _EQ
#define M24_KC_EQ 0x0D

#define M24_KC_ESC  0x01
#define M24_KC_BS   0x0E
#define M24_KC_TAB  0x0F
#define M24_KC_ENT  0x1C
#define M24_KC_ALT  0x38
#define M24_KC_CTRL 0x1D
#define M24_KC_LSHF 0x2A
#define M24_KC_RSHF 0x36
#define M24_KC_CAPS 0x3A
#define M24_KC_SPC  0x39

#define M24_KC_CLR 0x5C
#define M24_KC_BRK 0x5D
#define M24_KC_SCRL 0x46
#define M24_KC_FUNC 0x45

#define M24_KC_UP  0x5B
#define M24_KC_DN  0x59
#define M24_KC_LF  0x58
#define M24_KC_RT  0x5A

#define M24_KC_F1  0x3B
#define M24_KC_F2  0x3C
#define M24_KC_F3  0x3D
#define M24_KC_F4  0x3E
#define M24_KC_F5  0x3F
#define M24_KC_F6  0x40
#define M24_KC_F7  0x41
#define M24_KC_F8  0x42
#define M24_KC_F9  0x43
#define M24_KC_F10 0x44
#define M24_KC_F11 0x60
#define M24_KC_F12 0x61
#define M24_KC_F13 0x62
#define M24_KC_F14 0x63
#define M24_KC_F15 0x64
#define M24_KC_F16 0x65
#define M24_KC_F17 0x66
#define M24_KC_F18 0x67

#define M24_KC_KP1 0x4F
#define M24_KC_KP2 0x50
#define M24_KC_KP3 0x51
#define M24_KC_KP4 0x4B
#define M24_KC_KP5 0x4C
#define M24_KC_KP6 0x4D
#define M24_KC_KP7 0x47
#define M24_KC_KP8 0x48
#define M24_KC_KP9 0x49
#define M24_KC_KP0 0x52
#define M24_KC_KP00 0x54
#define M24_KC_DOT 0x53
#define M24_KC_HLP 0x56
#define M24_KC_PRT 0x55
#define M24_KC_PLS 0x4E
#define M24_KC_MIN 0x4A
#define M24_KC_TMS 0x37
#define M24_KC_DIV 0x5F
#define M24_KC_KPE 0x57

#define M24_NOTFOUND 0x00

// these maps are for M24 Keyboard 1 type - adjustment for Keyboard 2 is done separately

const uint8_t PROGMEM m24_keymap[ 128 ] = {
                    M24_NOTFOUND , 
                    M24_KC_F9 , 
                    M24_NOTFOUND , 
                    M24_KC_F5 , 
                    M24_KC_F3 , 
                    M24_KC_F1 , 
                    M24_KC_F2 , 
                    M24_KC_F12,   // not on keyb 1 
                    M24_NOTFOUND , 
                    M24_KC_F10 , 
                    M24_KC_F8 , 
                    M24_KC_F6 , 
                    M24_KC_F4 , 
                    M24_KC_TAB , 
                    M24_KC_TL ,  // M24: ] } (keyb 2 !!) AT: ` ~
                    M24_NOTFOUND , 
                    M24_NOTFOUND , 
                    M24_KC_ALT , 
                    M24_KC_LSHF , 
                    M24_NOTFOUND , 
                    M24_KC_CTRL, 
                    M24_KC_Q , 
                    M24_KC_1 , 
                    M24_NOTFOUND , 
                    M24_NOTFOUND , 
                    M24_NOTFOUND , 
                    M24_KC_Z , 
                    M24_KC_S , 
                    M24_KC_A , 
                    M24_KC_W , 
                    M24_KC_2 , 
                    M24_NOTFOUND , 
                    M24_NOTFOUND , 
                    M24_KC_C , 
                    M24_KC_X , 
                    M24_KC_D , 
                    M24_KC_E , 
                    M24_KC_4 , 
                    M24_KC_3 , 
                    M24_NOTFOUND , 
                    M24_NOTFOUND , 
                    M24_KC_SPC , 
                    M24_KC_V , 
                    M24_KC_F , 
                    M24_KC_T , 
                    M24_KC_R , 
                    M24_KC_5 , 
                    M24_NOTFOUND , 
                    M24_NOTFOUND , 
                    M24_KC_N , 
                    M24_KC_B , 
                    M24_KC_H , 
                    M24_KC_G , 
                    M24_KC_Y , 
                    M24_KC_6 , 
                    M24_NOTFOUND , 
                    M24_NOTFOUND , 
                    M24_NOTFOUND , 
                    M24_KC_M , 
                    M24_KC_J , 
                    M24_KC_U , 
                    M24_KC_7 , 
                    M24_KC_8 , 
                    M24_NOTFOUND , 
                    M24_NOTFOUND , 
                    M24_KC_CM , 
                    M24_KC_K , 
                    M24_KC_I , 
                    M24_KC_O , 
                    M24_KC_0 , 
                    M24_KC_9 , 
                    M24_NOTFOUND , 
                    M24_NOTFOUND , 
                    M24_KC_PD , 
                    M24_KC_SL , 
                    M24_KC_L , 
                    M24_KC_SC ,  // M24: ; + (keyb 2) AT: ; :
                    M24_KC_P , 
                    M24_KC_MI ,  // M24: - = (keyb 2) AT: - _
                    M24_NOTFOUND , 
                    M24_NOTFOUND , 
                    M24_NOTFOUND , 
                    M24_KC_QU ,  // M24: : * (keyb 2 !) AT: ' "
                    M24_NOTFOUND , 
                    M24_KC_OB , 
                    M24_KC_EQ ,  // M24: ^ ~ (keyb 2 !) AT: = +
                    M24_NOTFOUND , 
                    M24_NOTFOUND , 
                    M24_KC_CAPS , 
                    M24_KC_RSHF ,  
                    M24_KC_ENT , 
                    M24_KC_CB , 
                    M24_NOTFOUND , 
                    M24_KC_BSL , 
                    M24_NOTFOUND , 
                    M24_NOTFOUND , 
                    M24_NOTFOUND , 
                    M24_NOTFOUND , 
                    M24_NOTFOUND , 
                    M24_NOTFOUND , 
                    M24_NOTFOUND , 
                    M24_NOTFOUND , 
                    M24_KC_BS , 
                    M24_NOTFOUND , 
                    M24_NOTFOUND , 
                    M24_KC_KP1 , 
                    M24_NOTFOUND , 
                    M24_KC_KP4 , 
                    M24_KC_KP7 , 
                    M24_NOTFOUND , 
                    M24_NOTFOUND , 
                    M24_NOTFOUND , 
                    M24_KC_KP0 , 
                    M24_KC_DOT , 
                    M24_KC_KP2 , 
                    M24_KC_KP5 , 
                    M24_KC_KP6 , 
                    M24_KC_KP8 , 
                    M24_KC_ESC , 
                    M24_KC_FUNC , 
                    M24_KC_F11 ,    // not on keyb 1
                    M24_KC_PLS , 
                    M24_KC_KP3 , 
                    M24_KC_MIN , 
                    M24_KC_TMS , 
                    M24_KC_KP9 , 
                    M24_KC_SCRL ,  
                    M24_NOTFOUND 
                };

const uint8_t PROGMEM m24_ascii_keymap[ 128 ] = {
                    M24_NOTFOUND ,
                    M24_NOTFOUND ,
                    M24_NOTFOUND ,
                    M24_NOTFOUND ,
                    M24_NOTFOUND ,
                    M24_NOTFOUND ,
                    M24_NOTFOUND ,
                    M24_NOTFOUND ,
                    M24_KC_BS ,
                    M24_KC_TAB ,
                    M24_KC_ENT ,
                    M24_NOTFOUND ,
                    M24_NOTFOUND ,
                    M24_KC_ENT ,
                    M24_NOTFOUND ,
                    M24_NOTFOUND ,
                    M24_NOTFOUND ,
                    M24_NOTFOUND ,
                    M24_NOTFOUND ,
                    M24_NOTFOUND ,
                    M24_NOTFOUND ,
                    M24_NOTFOUND ,
                    M24_NOTFOUND ,
                    M24_NOTFOUND ,
                    M24_NOTFOUND ,
                    M24_NOTFOUND ,
                    M24_NOTFOUND ,
                    M24_KC_ESC ,
                    M24_NOTFOUND ,
                    M24_NOTFOUND ,
                    M24_NOTFOUND ,
                    M24_NOTFOUND ,
                    M24_KC_SPC ,
                    M24_KC_1 | 0x80 ,
                    M24_KC_QU | 0x80 ,
                    M24_KC_3 | 0x80 ,
                    M24_KC_4 | 0x80 ,
                    M24_KC_5 | 0x80 ,
                    M24_KC_7 | 0x80 ,
                    M24_KC_QU ,
                    M24_KC_9 | 0x80 ,
                    M24_KC_0 | 0x80 ,
                    M24_KC_8 | 0x80 ,
                    M24_KC_EQ | 0x80 ,
                    M24_KC_CM ,
                    M24_KC_MI ,
                    M24_KC_PD ,
                    M24_KC_SL ,
                    M24_KC_0 ,
                    M24_KC_1 ,
                    M24_KC_2 ,
                    M24_KC_3 ,
                    M24_KC_4 ,
                    M24_KC_5 ,
                    M24_KC_6 ,
                    M24_KC_7 ,
                    M24_KC_8 ,
                    M24_KC_9 ,
                    M24_KC_SC | 0x80 ,
                    M24_KC_SC ,
                    M24_KC_CM | 0x80 ,
                    M24_KC_EQ ,
                    M24_KC_PD | 0x80 ,
                    M24_KC_SL | 0x80 ,
                    M24_KC_2 | 0x80 ,
                    M24_KC_A | 0x80 ,
                    M24_KC_B | 0x80 ,
                    M24_KC_C | 0x80 ,
                    M24_KC_D | 0x80 ,
                    M24_KC_E | 0x80 ,
                    M24_KC_F | 0x80 ,
                    M24_KC_G | 0x80 ,
                    M24_KC_H | 0x80 ,
                    M24_KC_I | 0x80 ,
                    M24_KC_J | 0x80 ,
                    M24_KC_K | 0x80 ,
                    M24_KC_L | 0x80 ,
                    M24_KC_M | 0x80 ,
                    M24_KC_N | 0x80 ,
                    M24_KC_O | 0x80 ,
                    M24_KC_P | 0x80 ,
                    M24_KC_Q | 0x80 ,
                    M24_KC_R | 0x80 ,
                    M24_KC_S | 0x80 ,
                    M24_KC_T | 0x80 ,
                    M24_KC_U | 0x80 ,
                    M24_KC_V | 0x80 ,
                    M24_KC_W | 0x80 ,
                    M24_KC_X | 0x80 ,
                    M24_KC_Y | 0x80 ,
                    M24_KC_Z | 0x80 ,
                    M24_KC_OB ,
                    M24_KC_BSL ,
                    M24_KC_CB ,
                    M24_KC_6 | 0x80 ,
                    M24_KC_MI | 0x80 ,
                    M24_KC_TL ,
                    M24_KC_A ,
                    M24_KC_B ,
                    M24_KC_C ,
                    M24_KC_D ,
                    M24_KC_E ,
                    M24_KC_F ,
                    M24_KC_G ,
                    M24_KC_H ,
                    M24_KC_I ,
                    M24_KC_J ,
                    M24_KC_K ,
                    M24_KC_L ,
                    M24_KC_M ,
                    M24_KC_N ,
                    M24_KC_O ,
                    M24_KC_P ,
                    M24_KC_Q ,
                    M24_KC_R ,
                    M24_KC_S ,
                    M24_KC_T ,
                    M24_KC_U ,
                    M24_KC_V ,
                    M24_KC_W ,
                    M24_KC_X ,
                    M24_KC_Y ,
                    M24_KC_Z ,
                    M24_KC_OB | 0x80 ,
                    M24_KC_BSL | 0x80 ,
                    M24_KC_CB | 0x80 ,
                    M24_KC_TL | 0x80 ,
                    M24_KC_CLR
                };
