//==============================================================================
//All Definitions of Consts
//==============================================================================
//unit UnitVTObjConsts.h;
//==============================================================================

#ifndef _UnitVTObjConsts_
#define _UnitVTObjConsts_

//==============================================================================
//==============================================================================
//
//==============================================================================
//global define
//==============================================================================
//
//#define COM_MODUL_MODE
//
//
//
//==============================================================================
//==============================================================================
//

#include <stdint.h>
#include <stddef.h>

#include <QFile>
#include <QString>
#include <QDateTime>

#if !defined(ESP32) && !defined(ARDUINO)
typedef QString String;
#endif


//==============================================================================
//==============================================================================
//Definition consts
//==============================================================================
const QString gProgVersion="23.05";
const QString delm0="----------------";
const QString delm1="================";

//const uint32_t max_size=0xFFFF/2;
const uint32_t max_size=4*0xFFFF;
const uint8_t  listMax=3;
//------------------------------------------------------------------------------
 const int8_t _objTypeSet[]={2,0,-48};
 const int8_t _objStringTypeSet[]={2,11,22};
 const int8_t _mObjSet[]={7,7,-15,17,-20,23,-26,48};
 const int8_t _nObjSet[]={10,21,22,27,28,33,36,38,-43,45,-47};

//------------------------------------------------------------------------------
 const uint8_t  VTRefByte   = 0xFF;       //(0..255)
 const uint16_t VTRefNULL   = 0xFFFF;     //(0..65535)
 const uint32_t VTRefInt32  = 0xFFFFFFFF; //(0..4294967295)
 const uint8_t  WS_ListCount=3;

//-------------------------------------------------------------------------------
  //const for color
  const uint8_t cl_black  =0x00;
  const uint8_t cl_white  =0x01;
  const uint8_t cl_green  =0x02;
  const uint8_t cl_teal   =0x03;
  const uint8_t cl_macroon=0x04;
  const uint8_t cl_purple =0x05;
  const uint8_t cl_olive  =0x06;
  const uint8_t cl_silver =0x07;
  const uint8_t cl_grey   =0x08;
  const uint8_t cl_blue   =0x09;
  const uint8_t cl_lime   =0x0A;
  const uint8_t cl_cyan   =0x0B;
  const uint8_t cl_red    =0x0C;
  const uint8_t cl_magenta=0x0D;
  const uint8_t cl_yellow =0x0E;
  const uint8_t cl_navy   =0x0F;
  const uint8_t cl_transp =0xFF;

//-------------------------------------------------------------------------------
  //const for messages
  const uint32_t Request_PGN  =0x00EA0000;
  const uint8_t  Request_PRIO =0x18; //Prio=6

  const uint32_t AddrClm_PGN  =0x00EE0000;
  const uint32_t AddrClm_PRIO =0x18; //Prio=6

  const uint32_t PS_DA_PGN_F0    =0x00F00000; //> Pgn without Destination Address
  const uint32_t PS_DA_PGN_FD    =0x00FD0000; //> Pgn without Destination Address


  const uint32_t TECU_PGN          =0x00FE0000;
  const uint32_t TECU_REMOTE0_PGN  =0x00FE0A00;
  const uint32_t TECU_REMOTE1_PGN  =0x00FE0B00;
  const uint32_t TECU_Facilities0_PGN  =0x00FE0900;
  const uint32_t TECU_Facilities1_PGN  =0x00FE0800;
  // 
  const uint32_t TECU_WHEEL_PGN   =0x00FE4800;
  const uint32_t TECU_GROUND_PGN  =0x00FE4900;
  const uint32_t TECU_ENGINE_PGN  =0x00F00400;
  //
  const uint32_t TECU_RearPTOOutShaft_PGN  =0x00FE4300;
  const uint32_t TECU_RearHitchStatus_PGN  =0x00FE4500;
  //  
  const uint32_t TECU_FrontPTOOutShaft_PGN =0x00FE4400;
  const uint32_t TECU_FrontHitchStatus_PGN =0x00FE4600;
  //
  const uint32_t WMASTER_PGN       =0x00FE0D00;
  const uint32_t WMEMBER_PGN       =0x00FE0C00;
  const uint32_t TIME_PGN          =0x00FEE600;
  const uint32_t LANGUAGE_PGN      =0x00FE0F00;

  const uint8_t  TECU_PRIO    =0x0C; //Prio=3
  const uint8_t  TIME_PRIO    =0x18; //Prio=6

  //GPS/GNSS/NMEA2000 with DataPageBit
  const uint32_t GNSSPageBit_PGN                  =0x01000000;
  //
  const uint32_t GNSSPositionRapidUpDate_PGN      =0x01F80100;
  const uint32_t GNSSCourseSpeedRapidUpDate_PGN   =0x01F80200;
  const uint32_t GNSSPositionDeltaRapidUpDate_PGN =0x01F80300;
  const uint32_t GNSSAltitudeDeltaRapidUpDate_PGN =0x01F80400;
  const uint32_t GNSSPositionData_PGN             =0x01F80500;
  //
  const uint32_t GNSSTimeAndDate_PGN              =0x01F80900;
  const uint32_t GNSSGNSSCrossTrackError_PGN      =0x01F90300;
  //
  const uint32_t GNSSPseudoRangeNoiseStat_PGN     =0x01FA0600;
  const uint8_t  GNSS_PRIO    =0x08; //Prio=2
  const uint32_t gDay_ms=24*3600*1000;

  //
  //DIAG PGN
  const uint32_t DIAG_CONFORM_PGN  =0x00FD4200;
  const uint32_t DIAG_SOFTW_PGN    =0x00FEDA00;  //Software
  const uint32_t DIAG_HARDW_PGN    =0x00FDC500;  //Hardware
  const uint32_t DIAG_PROT_PGN     =0x00FD3200;
  //
  const uint32_t DIAG_ACT_PGN      =0x00FECA00; //DM1
  const uint32_t DIAG_PRV_PGN      =0x00FECB00; //DM2
  const uint32_t DIAG_CLR_PGN      =0x00FECC00; //DM3
  const uint32_t DIAG_FUN_PGN      =0x00FC8E00; //Control function functionalities
  const uint32_t DIAG_PID_PGN      =0x00FC8D00; //Product Identification

  //
  const uint32_t DIAG_VEHICLE_PGN  =0x00FEEC00;
  //Commanded Address
  const uint32_t CMD_ADDRESS_PGN      =0x00FED800;

  //TECU RepetitionRateResponse, Request
  const uint32_t REP_RESPONSE_PGN  =0x00FE0E00;
  const uint32_t REP_REQUEST_PGN   =0x00CC0000;

  //
  const uint32_t PROPA_PGN    =0x00EF0000;
  const uint32_t PROPB_PGN    =0x00FF0000;
  const uint8_t  PROP_PRIO    =0x18; //Prio=6

  const uint32_t ACKN_PGN     =0x00E80000;
  const uint8_t  ACKN_PRIO    =0x18; //Prio=6

  const uint32_t ECUtoVT_PGN  =0x00E70000;
  const uint32_t VTtoECU_PGN  =0x00E60000;
  const uint8_t  ECU_VT_PRIO  =0x1C;  //Prio=7

  const uint32_t EEC1_PGN     =0x00F00400; //Enginespeed
  const uint32_t PD_PGN       =0x00CB0000; //ProcessData
  const uint8_t  PD_PRIO      =0x0C;   //Prio=3


  const uint32_t FServerToClient_PGN =0x00AB0000; //FileServer       PGN
  const uint32_t FClientToServer_PGN =0x00AA0000; //FileServerClient PGN
  const uint8_t  FS_PRIO        =0x1C;  //Prio=7

  const uint32_t SCServerToClient_PGN=0x008E0000; //SequenceControl Server PGN
  const uint32_t SCClientToServer_PGN=0x008D0000; //SequenceControl Client PGN
  const uint8_t  SC_PRIO      =0x0C;   //Prio=3
  //
  const uint32_t TMServerToClient_PGN=0x00230000; //TIM Server PGN
  const uint32_t TMClientToServer_PGN=0x00240000; //TIM Client PGN
  const uint8_t  TM_PRIO      =0x1C;   //Prio=7
  //
  const uint32_t TAServerToClient_PGN=0x00700000; //TIM Authenticy Server PGN
  const uint8_t  TA_PRIO      =0x1C;   //Prio=7
  //
  //
  const uint32_t ETP_PGN     =0x00C80000;
  const uint32_t TP_PGN      =0x00EC0000;

  const uint32_t ETP_DT      =0x00C70000;
  const uint32_t TP_DT       =0x00EB0000;
  const uint32_t ETP_MsgSize =1785;
  const uint32_t TP_MsgSize  =8;

  const uint8_t  TP_ETP_PRIO  =0x18; //Prio=6

 //ControlByte TP/ETP
  const uint8_t  ETP_RTS  =0x14;
  const uint8_t  TP_RTS   =0x10;
  const uint8_t  TP_BAM   =0x20;

  const uint8_t  ETP_DPO   =0x16;
  const uint8_t  TP_DPO    =0x00;//TODO

  const uint8_t  ETP_CTS   =0x15;
  const uint8_t  TP_CTS    =0x11;

  const uint8_t  ETP_EOMA  =0x17;
  const uint8_t  TP_EOMA   =0x13;

  const uint8_t  ETP_Abort =0xFF;
  const uint8_t  TP_Abort  =0xFF;

  const uint8_t  ETP_EOP   =0x12;  //EndOfObjectPool
  const uint8_t  TP_EOP    =0x12;
  
 //ControlByte Auxiliary Assign and Status ISO2/3
  const uint8_t  AUX2_ASSIGN =0x20;
  const uint8_t  AUX2_STATUS =0x21;
  //
  const uint8_t  AUX3_ASSIGN_PREF =0x22;
  const uint8_t  AUX3_ASSIGN =0x24; //$24  36 dec
  const uint8_t  AUX3_STATUS =0x26; //$26  38 dec



//==============================================================================
    //Events ID
  const uint8_t VTOnRefresh=0;  
  const uint8_t VTOnActivate=1; 
  const uint8_t VTOnDeactivate=2;
  const uint8_t VTOnShow=3;
  const uint8_t VTOnHide=4;
  const uint8_t VTOnEnable=5;
  const uint8_t VTOnDisable=6;
  //
  const uint8_t VTOnChangeActiveMask=7;
  const uint8_t VTOnChangeSoftKeyMask=8;
  const uint8_t VTOnChangeAttribute=9;
  const uint8_t VTOnChangeBackgroundColour=10;
  const uint8_t VTOnChangeFontAttributes=11;
  const uint8_t VTOnChangeLineAttributes=12;
  const uint8_t VTOnChangeFillAttributes=13;
  const uint8_t VTOnChangeChildLocation=14;
  const uint8_t VTOnChangeSize=15;
  const uint8_t VTOnChangeValue=16;
  const uint8_t VTOnChangePriority=17;
  const uint8_t VTOnChangeEndPoint=18;
    //
  const uint8_t VTOnInputFieldSelection=19;
  const uint8_t VTOnInputFieldDeselection=20;
  const uint8_t VTOnESC=21;
  const uint8_t VTOnEntryOfValue=22;
  const uint8_t VTOnEntryOfNewValue=23;
    //
  const uint8_t VTOnSoftKeyPress=24;
  const uint8_t VTOnSoftKeyRelease=25;
    //
  const uint8_t VTOnChangeChildPosition=26;
  const uint8_t VTOnPointingPress=27;
  const uint8_t VTOnPointingRelease=28;
  
  //
  const uint8_t  VTOnMacro=255;
  const uint16_t VTObjMaxDef=4000;


//------------------------------------------------------------------------------
/*
Not Valid Version Label Characters:
00 $5C: \  Reverse Solidus (Back slash)
01 $22: " Quotation mark (Double quote)
02 $27: ' Apostrophe (Single quote)
03 $60: ` Grave Accent  (Back tic)
04 $2F: / Solidus (Forward slash)
05 $3A: : Colon
06 $2A: * Asterisk
07 $3C: < Less-than sign
08 $3E: > Greater-than sign
09 $7C: | Vertical line
10 $3F: ? Question mark
*/
  const uint8_t  VTCharLabel[16]={0x5C,0x22,0x27,0x60,0x2F,0x3A,0x2A,0x3C,0x3E,0x7F,0x3F,0x00,0x00,0x00,0x00,0x00};


//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//Definition set of objects with
//------------------------------------------------------------------------------
//Sets Definition PoolData
  const uint8_t gPoolObjMax     =50;  //maximum actual valid objects type
  const uint8_t gPoolObjMax0    =48;  //actual valid objects type
  //
  const uint8_t gPictureType   =20;
  //Set of Pointer objects,Pointer=27
  const uint8_t gPointerType   =27;
  const uint8_t gContainterType=3;
  const int8_t  pointerObjRefSet[]  ={4,3,5,-20,27};
  //  
  //set of objects with
  const int8_t  auxAllObjSet[]  ={4,29,30,31,32};
  const int8_t  auxAllObjSet2[] ={2,31,32};
  const uint8_t gAuxFuncType    =31;
  const uint8_t gAuxInpType     =32;
  const uint8_t gAuxPtnType     =33;
  //
  const uint8_t gWindowMaskType =34;  //WindowMaskObject,Container
  const uint8_t gKeyGroupType   =35;  //KeyGroupObject,Container
  const uint8_t gOutputListType =37;  //OutputListField
  const uint8_t gColorMapType   =39;  //ColorMapType
  const uint8_t gLabelRefType   =40;  //LabelReferenceListContainter
  //  
  //Definition external objects types,gExternalDefType,gExternalNameType,gExternalPointerType
  const uint8_t gExternalDefType =41;
  const uint8_t gExternalNameType=42;
  const uint8_t gExternalPointerType=43;
  //Animation Object
  const uint8_t gAnimationObjType =44;
  //
  const uint8_t gColorPalType    =45;  //ColorPalType
  const uint8_t gGraphicData     =46;
  const uint8_t gWSControlType   =47;  //WorkingSetControlType
  const uint8_t gScaleGraphicType=48;
  //
  //
  /*
  //Set of drawing objects
  const int8_t drawObjSet[]     ={12,0,-20,27,29,-34,gColorMapType,36,37,44,gKeyGroupType,46,48};

  //Set of moving objects
  const int8_t moveObjSet[]     ={10,3,6,-20,27,33,34,gColorMapType,36,37,44};
  //Set of Height=width objects Boolean,Meter, PictureGraphic extra
  const int8_t widthObjSet[]    ={3,7,17,20};
  const int8_t pictObjSet[]     ={1,20};
  */
  //Set of Numeric Value objects
  const int8_t numObjSet[]      ={3,9,12,21};
  //Set of QString Value objects
  const int8_t strgObjSet[]     ={5,8,11,22,26,36};
  //Set of Input objects  with Button

  const uint8_t gInpStringType=8;
  const int8_t  inpObjSet[]   ={3,6,-10,33}; //+ auxPtnObjSet;
  //Set of numeric Input objects
  const int8_t inpNumObjSet[]   ={4,7,9,10,33};
  //Set of all Input objects
  const int8_t inpAllObjSet[]   ={5,7,8,9,10,33};
  //edit object set
  const int8_t editObjSet[]     ={2,8,9};
  const int8_t editObjSetK[]    ={4,8,9,10,33};

  //Set of numeric InputList objects
  const uint8_t gInpBooleanObjType=7;
  const uint8_t gInpNumericObjType=9;
  const uint8_t gInpListObjType   =10;
  const int8_t  inpListObjSet[]   ={2,10,33};
  //Set of Button objects
  const uint8_t gButObjType=6;
  
  //Set of Key objects
  const uint8_t gKeyObjType=5;
  
  //Set of SoftKeyMask objects
  const uint8_t gKeyMaskObjType=4;
  
  //Set of WorkingSet objects
  const uint8_t gWSetObjType=0;
  
  //Set of Mask objects
  const int8_t  topObjSet[]       ={4,0,1,2,4};
  const int8_t  wsMaskObjSet[]    ={3,0,1,2};
  const int8_t  maskObjSet[]      ={2,1,2};;
  const uint8_t gDataMaskObjType =1;
  const uint8_t gAlarmMaskObjType=2;
  
  //Set of Output objects
  const int8_t outObjSet[]      ={3,11,12,37};
  const int8_t gOutStrObjType   =11;

  //Set of Attributes objects
  const int8_t  attrObjSet[]     ={2,21,-26};
  const int8_t  inpAttrObjSet[]  ={2,26,38};
  const uint8_t gInpNAttrObjType =26;

  //Set of Refrence objects
  const int8_t  RefObjSet[]      ={2,21,22};
  const uint8_t gNumVarObjType   =21;
  const uint8_t gStrVarObjType   =22;

  //Set of FontAttributes objects
  const uint8_t gFontObjType=23;
  //Set ListObjects
  const int8_t listObjSet[] ={4,10,33,37,gExternalDefType}; //OutputList=37

  //Set ListObjects for Points, Polygon, GraphicsContext,ColorPalette
  const int8_t  ptnObjSet[]       ={3,16,36,45};
  const uint8_t gPolygonObjType   =16;
  
  //no Input allowed for parent objects
  const int8_t noInpObjSet[]    ={8,0,2,4,-26,28,-36,38,-43};
  //no Keys allowed for parent objects
  const int8_t noKeyObjSet[]    ={9,0,-3,5,-26,28,-34,36,38,-43};
  //only width allowed for ob jects
  const int8_t widthObjSet[]    ={3,7,17,20};
  //


//==============================================================================
//STRUCTURES
//==============================================================================
//Structure VTKeyboard
//==============================================================================
#define KEYBOARD_X (0)
#define KEYBOARD_Y (26)
//
#define KEY_W (40)
#define KEY_H (40)
//
#define COLS (8)
#define ROWS (5)

#define MAX_SHIFT_MODE (4)
//==============================================================================

typedef enum {
  KEY_MODE_LETTER = 0,
  KEY_MODE_NUMBER = 1,
} key_mode_t;


//==============================================================================
//Structure VTDateTime
//==============================================================================
typedef struct {
  uint8_t Hours;
  uint8_t Minutes;
  uint8_t Seconds;
  uint8_t HoursOffs;
  uint8_t MinutesOffs;
} VT_TimeTypeDef;

//==============================================================================
typedef struct {
  uint8_t WeekDay;
  uint8_t Date;
  uint8_t Month;
  uint16_t Year;
} VT_DateTypeDef;


//==============================================================================
typedef struct i2cDevice {
  i2cDevice() {
    Name = "";
    addr = 0;
    nextPtr = nullptr;
  };
  QString Name;
  uint8_t addr;
  struct i2cDevice *nextPtr;
} i2cDevice_t;



//==============================================================================
//CLASSES
//==============================================================================
//Class TVTDateTime
//==============================================================================
class TVTDateTime {
 private:
  uint8_t trdata[7];
  //
  void Bcd2asc(void);
  uint8_t Bcd2ToByte(uint8_t Value);
  uint8_t ByteToBcd2(uint8_t Value);
  void Str2Time(void);
  void DataMask();
  
 public:
  uint8_t Second;
  uint8_t Minute;
  uint8_t Hour;
  uint8_t Week;
  uint8_t Day;
  uint8_t Month;
  uint8_t Year;
  uint8_t DateString[9];
  uint8_t TimeString[9];

  uint8_t asc[14];

  //void begin(void);
  //void GetBm8563Time(void);

  int SetTime(VT_TimeTypeDef* VT_TimeStruct);
  int SetDate(VT_DateTypeDef* VT_DateStruct);

  void GetTime(VT_TimeTypeDef* VT_TimeStruct);
  void GetDate(VT_DateTypeDef* VT_DateStruct);
};



//==============================================================================
//LoopbackStream
//==============================================================================
class LoopbackStream {
  uint8_t *buffer=NULL;
  uint32_t buffer_size=0;
  uint32_t pos=0, size=0;
public:
  uint32_t setNewBufferSize(uint32_t bSize, bool psRAM=true);
  uint32_t clear(bool psRAM=true);
  uint8_t* getBuffer();
  uint32_t getBufferSize();
  uint32_t available();
  uint32_t setPos(uint32_t bPos);
  uint32_t getPos();
  uint32_t setSize(uint32_t bSize);
  uint32_t getSize();
  //
  uint32_t writeBytes(uint8_t *buff,uint32_t bSize,int32_t bPos=-1,uint32_t buffPos=0);
  uint32_t writeBytesVal(uint32_t dVal,uint32_t bSize,int32_t bPos=-1);
  //
  uint32_t removeBytes(uint32_t pPos0,uint32_t pPos1);
  
  uint32_t readBytes(uint8_t *buff,uint32_t bSize,int32_t bPos=-1);
  uint32_t readBytesVal(uint32_t bSize,int32_t bPos=-1);
  QString   readBytesString(uint32_t bSize,int32_t bPos=-1);
  //
  uint32_t write(uint8_t b);
  uint8_t  read();
  uint8_t  peek();
};



//==============================================================================
//Definition CAN message
//==============================================================================
class CANMsg {
public:
   long unsigned int ID=0;               // CAN ID
   uint8_t   LEN=8;                      // Data Length Code
   uint8_t   DATA[256]={};               // Data array
   uint8_t   MSGTYPE=0;                  // Remote request flag
   uint8_t   MSG_TX=0;                   // TX transmit flag
   uint32_t  TimeStamp=QDateTime::currentDateTime().toMSecsSinceEpoch();         // CAN Timestamp
   char      msgString[128];
};


//==============================================================================
class TVTPixelXY {
public:
 int16_t  pixelX=0;
 int16_t  pixelY=0;
 int16_t  pixelXOffs=0;
 int16_t  pixelYOffs=0;
 uint16_t pixelXX=0;
 uint16_t pixelYY=0;
 uint16_t pixelW=0;
 uint16_t pixelH=0;
 uint16_t pixelN=0;
 uint16_t pixelS=0;
 uint8_t  pixelC=0;
 uint8_t  pixelFormat=0;
 float    pixelXF=1.000;
 float    pixelYF=1.000;
 bool  flash=false;
 bool  swap=false;
};


//==============================================================================
class TVTTouchXY {
public:
 int16_t  x=0;
 int16_t  y=0;
};


//==============================================================================
class TVTAttrValue {
public:
 uint32_t attrValue[3]={0,0,0};
 QString   attrName[3]={"VTLineColour","VTLineWidth","VTLineArt"};
};

//==============================================================================
class TVTColorAlpha {
public:
 uint8_t alpha=0xFF;
 uint16_t color=0;;
};


//==============================================================================
//------------------------------------------------------------------------------
class TVTAttrAID {
 public:
 uint8_t numAID=0;
 uint8_t byteAID=0;
 uint8_t typeAID=0;
 QString  nameAID="";
 QString  valueAID="";
};


//------------------------------------------------------------------------------
class TVT_TECU_Data {
 public:
 uint8_t  wheel=0;
 uint8_t  Direction=0;
 uint8_t  StartStopState=0;
 uint8_t  wgKey=0;
 uint8_t  MaxTimeOfTractorPower=0;
 uint32_t Distance=0;
 //
 //Wheel,Ground,Speed,RearStatus,FrontStatus,RearSpeed,FrontSpeed,Distance
 //ParentObject
 uint16_t pObjID[8]={17027,17027,12011,18002,18003,18000,18001,0xFFFF};
 int16_t  pObjIdx[8]={-1,-1,-1,-1,-1,-1,-1,-1};
 //
 //VariableReference ID
 uint16_t objID[8]={21035,21035,21011,21000,21001,21030,21031,22000}; //0xFFFF};
 int16_t  objIdx[8]={-1,-1,-1,-1,-1,-1,-1,-1};
 uint32_t objValue0[8]={0,0,0,0,0,0,0,0};
 uint32_t objValue1[8]={0,0,0,0,0,0,0,0};
};


#if !defined(ESP32) && !defined(ARDUINO)
struct setup_t {
    int version = 0;
    int trans = 0;
    int serial = 0;
    int tft_driver = 0;
    int tft_width = 0;
    int tft_height = 0;
    int r0_x_offset = 0;
    int r0_y_offset = 0;
    int r1_x_offset = 0;
    int r1_y_offset = 0;
    int r2_x_offset = 0;
    int r2_y_offset = 0;
    int r3_x_offset = 0;
    int r3_y_offset = 0;
    int pin_tft_mosi = -1;
    int pin_tft_miso = -1;
    int pin_tft_clk = -1;
    int pin_tft_cs = -1;
    int pin_tft_dc = -1;
    int pin_tft_rst = -1;
    int pin_tft_wr = -1;
    int pin_tft_rd = -1;
    int pin_tft_d0 = -1;
    int pin_tft_d1 = -1;
    int pin_tft_d2 = -1;
    int pin_tft_d3 = -1;
    int pin_tft_d4 = -1;
    int pin_tft_d5 = -1;
    int pin_tft_d6 = -1;
    int pin_tft_d7 = -1;
    double tft_spi_freq = 0;
};

struct GFXfont {};

struct DummySprite {
    bool fontLoaded = false;
    uint16_t fontsLoaded() { return 0; }
    uint16_t alphaColor = 0;
    uint8_t alpha = 0;
    bool setTransp = false;
    bool setScreenShot = false;
    void setColorDepth(int) {}
    void createSprite(int, int) {}
    int width() { return 320; }
    int height() { return 240; }
    void pushImage(int, int, int, int, uint16_t*) {}
    void pushSprite(int, int) {}
    void setTextDatum(int) {}
    void setTextSize(int) {}
    void setTextColor(uint16_t) {}
    void setTextColor(uint16_t, uint16_t) {}
    void setTextFont(uint8_t) {}
    void setFreeFont(const GFXfont*) {}
    void fillScreen(uint16_t) {}
    void drawString(const QString &, int, int, int = 0) {}
    void drawCentreString(const QString &, int, int, int) {}
    void drawChar(char, int, int, int) {}
    void drawNumber(int, int, int, int) {}
    void unloadFont() {}
    void loadFont(const char*) {}
    void loadFont(const QString &) {}
    void loadFont(const QString &, bool) {}
    void loadFont(const uint8_t*) {}
    void setCursor(int, int) {}
    void drawGlyph(uint16_t) {}
    void frameViewport(uint16_t, bool) {}
    void setViewport(int, int, int, int, bool) {}
    void resetViewport() {}
    void drawRect(int, int, int, int, uint16_t) {}
    void drawRoundRect(int, int, int, int, int, uint16_t) {}
    void fillRect(int, int, int, int, uint16_t) {}
    void drawLine(int, int, int, int, uint16_t) {}
    void fillTriangle(int, int, int, int, int, int, uint16_t) {}
    void drawTriangle(int, int, int, int, int, int, uint16_t) {}
    void pushImageAlpha(int, int, int, int, uint16_t*, uint8_t*, uint16_t) {}
    void drawPixel(int, int, uint16_t, uint8_t = 255) {}
    uint16_t readPixel(int, int) { return 0; }
    void setSwapBytes(bool) {}
    bool getSwapBytes() { return false; }
};

struct DummyTFT : public DummySprite {
    uint16_t gWidth[1024] = {0};
    int16_t gdX[1024] = {0};
    bool getUnicodeIndex(uint16_t unicode, uint16_t *index) {
        *index = 0;
        return false;
    }
    void getSetup(setup_t &user) {}
    template<typename... Args>
    void printf(const char* format, Args... args) {
        ::printf(format, args...);
    }
    uint16_t color565(uint8_t r, uint8_t g, uint8_t b) {
        return ((r & 0xF8) << 8) | ((g & 0xFC) << 3) | (b >> 3);
    }
    void init() {}
    void invertDisplay(bool) {}
    void setRotation(int) {}
    void setAttribute(int, int) {}
    int getAttribute(int) { return 0; }
};

#define PSRAM_ENABLE 0
#define sq(x) ((x) * (x))

struct DummySerial {
    template<typename... Args>
    void printf(const char* format, Args... args) {
        ::printf(format, args...);
    }
    template<typename... Args>
    void print(Args... args) {
        // stub
    }
    template<typename... Args>
    void println(Args... args) {
        // stub
    }
};
extern DummySerial Serial;

#define TFT_BLACK 0
#define MC_DATUM 4
#define TFT_WHITE 0xFFFF
#define TFT_RED 0xF800
#define TFT_GREEN 0x07E0
#define TFT_BLUE 0x001F
#define TFT_DARKGREEN 0x03E0
#define TFT_DARKGREY 0x7BEF
#define TFT_YELLOW 0xFFE0
#define TFT_LIGHTGREY 0xC618
typedef uint8_t byte;
#endif


//------------------------------------------------------------------------------
//Definition Messages ID and PGN's
//------------------------------------------------------------------------------
//Messages of Network
class TVT_Net {
 public:
  void * StackPtrAtStart;
  void * StackPtrEnd;
  //
  uint16_t VTObjID=0xFFFF;
  uint8_t  VTObjType=0xFF;
  uint32_t VTObjLen=0;
  uint32_t VTObjPos=0;
  //
  //TECU data receive
  TVT_TECU_Data tecuData;
  //String TECU_Monitor="/_tecu_monitor.iop";
  QString TECU_Monitor="/_v6_opc50_4.iop";
  //
  //variable for input objects
  bool  getVTValue=false;
  uint32_t VTValue=0;
  QString   VTValueStr="";
  uint16_t VTInpAttr=0xFFFF; //reference to actual InputAttributes of StringInput
  uint16_t VTInpFont=0xFFFF; //reference to actual InputFont of StringInput
  //  
  //max objects in objectlist
  uint16_t VTObjMax[listMax]; //0..listMax
  //
  bool  VT_ChangeAttr=false;
  bool  VT_SetEvent=true;
  bool  VT_InfoMode=false; //set Serial.print mode ON/OFF
  
  //
  uint8_t  VT_CMD=0xFF;    //default Command
  uint32_t VT_AttrValue=0x00;    //default Attribute value

  bool CAN_active=false;
  bool LOG_active=false;
  bool Trace_active=false;
  bool CR_active=false;
  //
  uint8_t  VT_SRC=0x26;    //default VT-address
  QString   VT_SRC_WS="FFFFFFFFFFFFFFFF";    //default VT-Workingset Name VT
  //
  uint32_t VT_DST_TIME[listMax]; //default ECU-TimeStampDiff 0..listMax
  uint8_t  VT_DST[listMax];      //default ECU-addresses 0..listMax
  QString   VT_DST_WS[listMax];   //default ECU-Workingset Name 0..listMax
  //
  QString   WS_List[WS_ListCount];         //default ECU-Workingset Name List

  int8_t   VT_VersionSize=14;     //default Version Size, extended=64
  uint8_t  VT_VersionCount=0;     //default Version Count
  QString   VT_VersionList="";     //default Version File List
  QString   VT_VersionLast="";     //default Last Version Label
  time_t   VT_VersionDateTime=0;  //default Last Version Label DateTime
  //
  int8_t   VTInstance=-1;
  //
  uint8_t  VT_ActiveSRC=VT_SRC;
  uint16_t VT_ActiveMask=0xFFFF;
  uint16_t VT_ActiveSoftKeyMask=0xFFFF;
  uint32_t VT_PoolSize=256*64;
  //
  uint32_t RP_Bit=0x00000000; //Reserve and Page Bit
  //
  //TP-protocol
  uint8_t  TP_Block =0xFF;
  int32_t  TP_SIZE;        // actual TP-DATA Size
  int32_t  TP_SIZE0;       // start TP-DATA Size
  uint32_t TP_DATA;        // TP-DATA counter
  uint32_t TP_DATA_NR;     // TP-DATA number
  bool  TP_DATA_ACTIVE=false;
  bool  TP_EOMA_ACTIVE=false;
  //
  //ETP-protocol
  uint8_t  ETP_Block=0xFF;
  int32_t  ETP_SIZE;       // actual ETP-DATA Size
  int32_t  ETP_SIZE0;      // start ETP-DATA Size
  uint32_t ETP_DATA;       // ETP-DATA counter
  uint32_t ETP_DATA_NR;    // ETP-DATA number
  bool  ETP_DATA_ACTIVE=false;
  bool  ETP_EOMA_ACTIVE=false;
  //
  uint8_t fntSr=0;
  uint8_t fntNr=0;
  //
  uint16_t color=0;
  uint8_t  fntColor=0;
  uint8_t  fntSize=0;
  uint8_t  fntType=0;
  uint8_t  fntStyle=0;
  //
  uint8_t  fntJust=0;
  int16_t  fntLine=0;
  //
  //Flash list font and bitmap
  QString   FlashList="";
  uint8_t  Flash=0;
  uint16_t FlashColor=0; // FIXME TFT_WHITE;
  
  //Font set
  uint8_t fontSet[15][7]=
    {{0,0,0,0,6,8,0},     //0
     {0,0,0,0,8,8,0},     //1
     {0,0,0,0,8,12,1},    //2
     {0,0,0,0,12,16,2},   //3
     {0,0,0,0,16,16,2},   //4
     {0,0,0,0,16,24,3},   //5
     {0,0,0,0,24,32,4},   //6
     {0,0,0,0,32,32,4},   //7
     {0,0,0,0,32,48,5},   //8
     {0,0,0,0,48,64,6},   //9
     {0,0,0,0,64,64,6},   //10
     {0,0,0,0,64,96,7},   //11
     {0,0,0,0,96,128,8},  //12
     {0,0,0,0,128,128,8}, //13
     {0,0,0,0,128,192,9}};//14
  //
  QString fntName="arial2-1";
  QString fntNamePool[listMax];
  uint8_t  optn=0;
  uint16_t level=0;
  int16_t  x=0;
  int16_t  y=0;
  bool  pVisible=true;
  //
  uint16_t w=0;
  uint16_t h=0;
  //
  uint8_t listNr=0;
  uint8_t AuxlistNr=0;

  uint8_t butMax=16;
  int16_t png_xpos = 0;
  int16_t png_ypos = 0;
  //
  //
  //TFT settings
  const uint16_t TFT_Width=320;
  const uint16_t TFT_Height=240;
  const uint16_t TFT_KeyWidth=80;
  const uint16_t TFT_KeyHeight=40;
  const uint8_t  TFT_KeyNr=6;
  //
  int16_t   TFT_KeySelect=-1;
  int16_t   TFT_KeyPage=-1;
  uint16_t  TFT_KeySelectObjID=0xFFFF;
  uint16_t  TFT_KeySelectObjType=0xFF;
  //
  int8_t    TFT_ButtonPressed=-1;
  uint8_t   TFT_ButtonSelect=0;
  uint16_t  TFT_ButtonSelectObjID=0xFFFF;
  uint8_t   TFT_ButtonSelectObjType=0xFF;
  //
  int16_t   TFT_InputSelect=-1;
  uint16_t  TFT_InputSelectObjID=0xFFFF;
  uint8_t   TFT_InputSelectObjType=0xFF;
  //
  uint8_t   TFT_SelectNr=255;
  //
  //uint8_t ImgMode=1;
  uint8_t ImgMode=0;
  //
  bool VTDefaultColour=false;
  uint8_t VTEllipseType=0;
  uint16_t lineArt=0xFFFF;
  //
  uint8_t arcSeg=6,arcTickLength=0;
  int16_t arcTicks=-1;
  int16_t arcW=0;
  bool arcValue=false;
  bool uniCode=false;
  bool firstMinus=false;
  //
  uint16_t VTFillAttribute=0xFFFF;
  bool  VTFillMode=false;
  uint8_t  lineWidth=1;
  uint8_t  options=0;
  int16_t  animationIdx=-1;
  //ScaleGraphic object
  int8_t VTScaleOptions=-1;
  int8_t VTScaleType=-1;
  //
  //view Log
  bool serialOut=false; //true;
  bool notSerial=false; //true;
  //Heap status
  uint32_t heapTime=QDateTime::currentDateTime().toMSecsSinceEpoch();
  uint32_t pTime=QDateTime::currentDateTime().toMSecsSinceEpoch();
  //
  int16_t  objNr=-1;
  uint32_t aIdx=0;
  //
  TVTAttrAID VTAttrAID[32];
  uint8_t VT_AID_Nr=32;
  bool getAttributeMode=false;
  QString nameAttr="";
  QString newValueAttr="";
  uint8_t SetLabel=0;
  //
  uint16_t VTParentReference=0xFFFF;
  uint8_t  VTParentType=0xFF;
  uint16_t VTSelectReference=0xFFFF;
  int16_t  VTKeyIndex=0xFF;
  int16_t  VTButtonIndex=0xFF;
  int16_t  VTInputIndex=0xFF;
  int16_t  VTxPos=0x00;
  int16_t  VTyPos=0x00;
  int8_t   VTsPos=0x00;      //pointing event state
  //
  QString   VTSelectMode="C"; //key event state 3000ms
  bool  VTPressedFor=false;
  bool  VTPressedABC=false;
  bool  VTChangeSelect=false;
  int8_t   VTPageSelect=0;
  uint8_t  VTPageMax=3;
  uint8_t  VTTraceLine=0;
  //
  bool  VTUpLoad=false;
  bool  VTPoolRefresh=false;
  bool  VTPoolClear=false;

#ifdef COM_CAN_MODE
  // by JG COM_CAN_MODE_B: interner CAN PIN26 u. Pin36
   QString   infoStr[6]={"CAN-Intern:250kbit","WebSocket:","Webserver:","AccessPoint:","ImageMode:","Mask:"};
#else
  QString   infoStr[6]={"CAN-MCP2516:250kbit","WebSocket:","Webserver:","AccessPoint:","ImageMode:","Mask:"};
#endif
  //  
  QString VTObjName="";
  //
  LoopbackStream streamDraw;
  LoopbackStream stream_Draw[listMax];
  //
  LoopbackStream stream_Cmd[listMax];
  //
  LoopbackStream streamStr;
  LoopbackStream streamObj[listMax];
  LoopbackStream stream_Pool[listMax];
  //
  LoopbackStream stream_ETP[listMax];
  LoopbackStream stream_TP[listMax];
  //
  LoopbackStream stream_Font[15][4];
  //
  bool valid_sd=true;
  bool valid_sp=true;
  bool SD_Mode=true;
  bool SD_DownLoad=false;
  //
  QString  inputLineString="";           // a QString to set line data to auto.txt file
  QString  inputSerialString="";         // a QString to hold incoming data
  uint8_t inputSerialIndex=0;           //
  bool inputSerialComplete = false;  // whether the string is complete
  bool notSerialReceive=false;
  //
  bool PSRam=false;
  //
  //VTAudio   
  uint8_t  VTAudioActive=0;
  uint8_t  VTAudioVolume=100;
  uint8_t  VTRepetition=0;
  uint16_t VTFrequency =0;
  uint16_t VTOnTimeDuration =0;
  uint16_t VTOffTimeDuration=0;
  uint32_t VTActiveTime=QDateTime::currentDateTime().toMSecsSinceEpoch();
  //
  //DateTime
  bool RTC_active=false;
  int8_t hourOffset=0;
  QTime RTCtime;
  QDateTime RTCDate;
  char timeStrbuff[64];  
  //  
  struct tm tmstruct;
  uint32_t TargetTime = QDateTime::currentDateTime().toMSecsSinceEpoch();  // for next 1 second timeout
  //
  //
  QFile fontFile;
  //
  //Point for Touch
   #ifdef M5CORE2_MODE
    //TVTTouchXY tPoint;
    //TVTTouchXY rPoint;
    Point tPoint;
    Point rPoint;
   #endif
   //
#if !defined(ESP32) && !defined(ARDUINO)
   DummyTFT tft;
   DummySprite ImgTFT;
#endif
   uint16_t VTKeyboardOffs=0x0000;
  //
  uint8_t  VTTraceFilter=0xFF; //not trace filtering
  uint8_t  VTTraceActive=0;
  uint8_t  VTStampActive=0;
  uint32_t VTTimeStamp=0;
  //
  QString  ssid_w="";
  QString  password_w="";
  QString  ip_w="";
  //
  QString  ssid_a="";
  QString  password_a="";
  QString  ip_a="";
  //
  QString  SSID_List="";
  uint8_t SSID_ListMax=12;
  int8_t  SSID_ListIdx=-1;
  int8_t  SSID_ListIdxMax=-1;
  //
  //Auxiliary functions and inputs 
  QString VTAuxFuncList="";
  QString VTAuxInpList="";
  //
  //Auxiliary assign preferAssignment, VT->Assignment
  QString VTAuxAssignList="";
  
//------------------------------------------------------------------------------
//Definition Color range and ISO Color palette
//------------------------------------------------------------------------------
const uint32_t ggISO_ColourMap[256]=
     {0xFF000000,0xFFFFFFFF,0xFF009900,0xFF009999,0xFF990000,0xFF990099,0xFF999900,0xFFCCCCCC,
      0xFF999999,0xFF0000FF,0xFF00FF00,0xFF00FFFF,0xFFFF0000,0xFFFF00FF,0xFFFFFF00,0xFF000099,
      0xFF000000,0xFF000033,0xFF000066,0xFF000099,0xFF0000CC,0xFF0000FF,0xFF003300,0xFF003333,
      0xFF003366,0xFF003399,0xFF0033CC,0xFF0033FF,0xFF006600,0xFF006633,0xFF006666,0xFF006699,
      0xFF0066CC,0xFF0066FF,0xFF009900,0xFF009933,0xFF009966,0xFF009999,0xFF0099CC,0xFF0099FF,
      0xFF00CC00,0xFF00CC33,0xFF00CC66,0xFF00CC99,0xFF00CCCC,0xFF00CCFF,0xFF00FF00,0xFF00FF33,
      0xFF00FF66,0xFF00FF99,0xFF00FFCC,0xFF00FFFF,0xFF330000,0xFF330033,0xFF330066,0xFF330099,
      0xFF3300CC,0xFF3300FF,0xFF333300,0xFF333333,0xFF333366,0xFF333399,0xFF3333CC,0xFF3333FF,
      0xFF336600,0xFF336633,0xFF336666,0xFF336699,0xFF3366CC,0xFF3366FF,0xFF339900,0xFF339933,
      0xFF339966,0xFF339999,0xFF3399CC,0xFF3399FF,0xFF33CC00,0xFF33CC33,0xFF33CC66,0xFF33CC99,
      0xFF33CCCC,0xFF33CCFF,0xFF33FF00,0xFF33FF33,0xFF33FF66,0xFF33FF99,0xFF33FFCC,0xFF33FFFF,
      0xFF660000,0xFF660033,0xFF660066,0xFF660099,0xFF6600CC,0xFF6600FF,0xFF663300,0xFF663333,
      0xFF663366,0xFF663399,0xFF6633CC,0xFF6633FF,0xFF666600,0xFF666633,0xFF666666,0xFF666699,
      0xFF6666CC,0xFF6666FF,0xFF669900,0xFF669933,0xFF669966,0xFF669999,0xFF6699CC,0xFF6699FF,
      0xFF66CC00,0xFF66CC33,0xFF66CC66,0xFF66CC99,0xFF66CCCC,0xFF66CCFF,0xFF66FF00,0xFF66FF33,
      0xFF66FF66,0xFF66FF99,0xFF66FFCC,0xFF66FFFF,0xFF990000,0xFF990033,0xFF990066,0xFF990099,
      0xFF9900CC,0xFF9900FF,0xFF993300,0xFF993333,0xFF993366,0xFF993399,0xFF9933CC,0xFF9933FF,
      0xFF996600,0xFF996633,0xFF996666,0xFF996699,0xFF9966CC,0xFF9966FF,0xFF999900,0xFF999933,
      0xFF999966,0xFF999999,0xFF9999CC,0xFF9999FF,0xFF99CC00,0xFF99CC33,0xFF99CC66,0xFF99CC99,
      0xFF99CCCC,0xFF99CCFF,0xFF99FF00,0xFF99FF33,0xFF99FF66,0xFF99FF99,0xFF99FFCC,0xFF99FFFF,
      0xFFCC0000,0xFFCC0033,0xFFCC0066,0xFFCC0099,0xFFCC00CC,0xFFCC00FF,0xFFCC3300,0xFFCC3333,
      0xFFCC3366,0xFFCC3399,0xFFCC33CC,0xFFCC33FF,0xFFCC6600,0xFFCC6633,0xFFCC6666,0xFFCC6699,
      0xFFCC66CC,0xFFCC66FF,0xFFCC9900,0xFFCC9933,0xFFCC9966,0xFFCC9999,0xFFCC99CC,0xFFCC99FF,
      0xFFCCCC00,0xFFCCCC33,0xFFCCCC66,0xFFCCCC99,0xFFCCCCCC,0xFFCCCCFF,0xFFCCFF00,0xFFCCFF33,
      0xFFCCFF66,0xFFCCFF99,0xFFCCFFCC,0xFFCCFFFF,0xFFFF0000,0xFFFF0033,0xFFFF0066,0xFFFF0099,
      0xFFFF00CC,0xFFFF00FF,0xFFFF3300,0xFFFF3333,0xFFFF3366,0xFFFF3399,0xFFFF33CC,0xFFFF33FF,
      0xFFFF6600,0xFFFF6633,0xFFFF6666,0xFFFF6699,0xFFFF66CC,0xFFFF66FF,0xFFFF9900,0xFFFF9933,
      0xFFFF9966,0xFFFF9999,0xFFFF99CC,0xFFFF99FF,0xFFFFCC00,0xFFFFCC33,0xFFFFCC66,0xFFFFCC99,
      0xFFFFCCCC,0xFFFFCCFF,0xFFFFFF00,0xFFFFFF33,0xFFFFFF66,0xFFFFFF99,0xFFFFFFCC,0xFFFFFFFF,
      //User Color  >=  232 to 255
      0xFF000000,0xFF000000,0xFF000000,0xFF000000,0xFF000000,0xFF000000,0xFF000000,0xFF000000,
      0xFF000000,0xFF000000,0xFF000000,0xFF000000,0xFF000000,0xFF000000,0xFF000000,0xFF000000,
      0xFF000000,0xFF000000,0xFF000000,0xFF000000,0xFF000000,0xFF000000,0xFF000000,0xFF000000};
      //

//ColorMapping
uint32_t gISO_ColourMap[256]=
     {0xFF000000,0xFFFFFFFF,0xFF009900,0xFF009999,0xFF990000,0xFF990099,0xFF999900,0xFFCCCCCC,
      0xFF999999,0xFF0000FF,0xFF00FF00,0xFF00FFFF,0xFFFF0000,0xFFFF00FF,0xFFFFFF00,0xFF000099,
      0xFF000000,0xFF000033,0xFF000066,0xFF000099,0xFF0000CC,0xFF0000FF,0xFF003300,0xFF003333,
      0xFF003366,0xFF003399,0xFF0033CC,0xFF0033FF,0xFF006600,0xFF006633,0xFF006666,0xFF006699,
      0xFF0066CC,0xFF0066FF,0xFF009900,0xFF009933,0xFF009966,0xFF009999,0xFF0099CC,0xFF0099FF,
      0xFF00CC00,0xFF00CC33,0xFF00CC66,0xFF00CC99,0xFF00CCCC,0xFF00CCFF,0xFF00FF00,0xFF00FF33,
      0xFF00FF66,0xFF00FF99,0xFF00FFCC,0xFF00FFFF,0xFF330000,0xFF330033,0xFF330066,0xFF330099,
      0xFF3300CC,0xFF3300FF,0xFF333300,0xFF333333,0xFF333366,0xFF333399,0xFF3333CC,0xFF3333FF,
      0xFF336600,0xFF336633,0xFF336666,0xFF336699,0xFF3366CC,0xFF3366FF,0xFF339900,0xFF339933,
      0xFF339966,0xFF339999,0xFF3399CC,0xFF3399FF,0xFF33CC00,0xFF33CC33,0xFF33CC66,0xFF33CC99,
      0xFF33CCCC,0xFF33CCFF,0xFF33FF00,0xFF33FF33,0xFF33FF66,0xFF33FF99,0xFF33FFCC,0xFF33FFFF,
      0xFF660000,0xFF660033,0xFF660066,0xFF660099,0xFF6600CC,0xFF6600FF,0xFF663300,0xFF663333,
      0xFF663366,0xFF663399,0xFF6633CC,0xFF6633FF,0xFF666600,0xFF666633,0xFF666666,0xFF666699,
      0xFF6666CC,0xFF6666FF,0xFF669900,0xFF669933,0xFF669966,0xFF669999,0xFF6699CC,0xFF6699FF,
      0xFF66CC00,0xFF66CC33,0xFF66CC66,0xFF66CC99,0xFF66CCCC,0xFF66CCFF,0xFF66FF00,0xFF66FF33,
      0xFF66FF66,0xFF66FF99,0xFF66FFCC,0xFF66FFFF,0xFF990000,0xFF990033,0xFF990066,0xFF990099,
      0xFF9900CC,0xFF9900FF,0xFF993300,0xFF993333,0xFF993366,0xFF993399,0xFF9933CC,0xFF9933FF,
      0xFF996600,0xFF996633,0xFF996666,0xFF996699,0xFF9966CC,0xFF9966FF,0xFF999900,0xFF999933,
      0xFF999966,0xFF999999,0xFF9999CC,0xFF9999FF,0xFF99CC00,0xFF99CC33,0xFF99CC66,0xFF99CC99,
      0xFF99CCCC,0xFF99CCFF,0xFF99FF00,0xFF99FF33,0xFF99FF66,0xFF99FF99,0xFF99FFCC,0xFF99FFFF,
      0xFFCC0000,0xFFCC0033,0xFFCC0066,0xFFCC0099,0xFFCC00CC,0xFFCC00FF,0xFFCC3300,0xFFCC3333,
      0xFFCC3366,0xFFCC3399,0xFFCC33CC,0xFFCC33FF,0xFFCC6600,0xFFCC6633,0xFFCC6666,0xFFCC6699,
      0xFFCC66CC,0xFFCC66FF,0xFFCC9900,0xFFCC9933,0xFFCC9966,0xFFCC9999,0xFFCC99CC,0xFFCC99FF,
      0xFFCCCC00,0xFFCCCC33,0xFFCCCC66,0xFFCCCC99,0xFFCCCCCC,0xFFCCCCFF,0xFFCCFF00,0xFFCCFF33,
      0xFFCCFF66,0xFFCCFF99,0xFFCCFFCC,0xFFCCFFFF,0xFFFF0000,0xFFFF0033,0xFFFF0066,0xFFFF0099,
      0xFFFF00CC,0xFFFF00FF,0xFFFF3300,0xFFFF3333,0xFFFF3366,0xFFFF3399,0xFFFF33CC,0xFFFF33FF,
      0xFFFF6600,0xFFFF6633,0xFFFF6666,0xFFFF6699,0xFFFF66CC,0xFFFF66FF,0xFFFF9900,0xFFFF9933,
      0xFFFF9966,0xFFFF9999,0xFFFF99CC,0xFFFF99FF,0xFFFFCC00,0xFFFFCC33,0xFFFFCC66,0xFFFFCC99,
      0xFFFFCCCC,0xFFFFCCFF,0xFFFFFF00,0xFFFFFF33,0xFFFFFF66,0xFFFFFF99,0xFFFFFFCC,0xFFFFFFFF,
      //User Color  >=  232 to 255
      0xFF000000,0xFF000000,0xFF000000,0xFF000000,0xFF000000,0xFF000000,0xFF000000,0xFF000000,
      0xFF000000,0xFF000000,0xFF000000,0xFF000000,0xFF000000,0xFF000000,0xFF000000,0xFF000000,
      0xFF000000,0xFF000000,0xFF000000,0xFF000000,0xFF000000,0xFF000000,0xFF000000,0xFF000000};
      //
};//TVT_Net


//==============================================================================
//FUNCTIONS
//==============================================================================
//global functions
//==============================================================================
void bitSet8(uint8_t & x, uint8_t n);
void bitClear8(uint8_t & x, uint8_t n);
void bitToggle8(uint8_t & x, uint8_t n);
uint8_t bitRead8(uint8_t & x, uint8_t bit);
void bitWrite8(uint8_t & x, uint8_t bit, uint8_t value);

QString uint64ToString(uint64_t input);


//==============================================================================
QString getNumericResult(uint32_t nVal,uint32_t nOffs,uint32_t nScale,uint8_t nOpt,uint8_t nDecimals,bool nFormat);

char * sci(double number, int digits,bool nTrunc=false);
void sci(QString &str, float f, uint8_t digits,bool nTrunc=false);
//
uint16_t getUniCodeFontIndex(QString str, uint16_t k, TVT_Net *pVT_Net);
uint16_t setUniCodeFontIndex(QString str, uint16_t k, TVT_Net *pVT_Net);
QString   getUniCodeInfo     (QString str,bool setLine);
int16_t  getUniCodeIndexOf  (QString str,wchar_t wc0,wchar_t wc1);
QString   getUniCodeReplace  (QString str,wchar_t wc0, wchar_t wc1);
QString   getUniCodeSubstring(QString str,uint16_t a,uint16_t cc);
QString   getUniCodeRemove   (QString str,uint16_t a,uint16_t cc);
QString   setUniCodeStrToASCII(QString uStr);
QString   setASCIItoUniCodeStr(QString aStr);

//------------------------------------------------------------------------------
bool  HasInArray(uint8_t eIdx, const int8_t objSet[]);
//
QString   getStringLeftTrim(QString str);
QString   getStringRightTrim(QString str);
QString   getStringHEX(uint32_t valHex,uint8_t len);
int16_t  hexCharacterToInt(QString str);
uint16_t hexCharacterToObjID(QString str);
uint64_t hexCharacterToInt64(QString str,int8_t len);
//
void    getAddressInfo(TVT_Net *pVT_Net);
//
int16_t getIntFromHEX(QString str);
QString  getStringHEXInfo(QString str,bool info=true);
//
QString getStringDEC(uint32_t valDEC,uint8_t len);
//
QString  getMsgFrameStr(CANMsg *pMsg);
//
float  getFloatFromInt (uint32_t int4);
double getDoubleFromInt(uint32_t int4);
//
void   resetSelectInput(TVT_Net *pVT_Net);


//==============================================================================
//==============================================================================
#endif // _UnitVTObjConsts_
