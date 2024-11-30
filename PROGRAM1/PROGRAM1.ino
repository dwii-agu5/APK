
#define REMOTEXY_MODE__WIFI_POINT

#include <WiFi.h>

// RemoteXY connection settings 
#define REMOTEXY_WIFI_SSID "HYDROPONIK IOT K30"
#define REMOTEXY_WIFI_PASSWORD "PPNSSUKSES"
#define REMOTEXY_SERVER_PORT 6377


#include <RemoteXY.h>

// RemoteXY GUI configuration  
#pragma pack(push, 1)  
uint8_t RemoteXY_CONF[] =   // 314 bytes
  { 255,13,0,16,0,51,1,19,0,0,0,75,51,48,32,87,77,75,0,31,
  1,106,200,1,1,23,0,129,8,2,92,11,64,191,71,82,79,87,70,76,
  79,87,32,84,69,67,72,0,129,17,14,73,10,64,191,87,77,75,32,80,
  80,78,83,32,75,51,48,0,130,244,27,120,180,27,165,7,19,66,30,9,
  110,64,2,26,2,2,129,9,40,38,7,64,60,84,68,83,32,77,69,84,
  69,82,0,67,19,53,30,9,78,166,26,2,129,4,54,9,7,64,60,80,
  86,0,129,4,68,9,7,64,60,83,86,0,129,65,40,34,7,64,60,80,
  72,32,77,69,84,69,82,0,129,60,54,9,7,64,60,80,86,0,129,60,
  68,9,7,64,60,83,86,0,67,72,53,30,9,78,2,26,2,7,72,66,
  30,9,110,64,2,26,2,2,7,18,119,30,9,110,64,2,26,2,2,129,
  3,93,49,7,64,60,84,69,77,80,69,82,65,84,85,82,69,0,67,18,
  106,30,9,78,2,26,2,129,3,107,9,7,64,60,80,86,0,129,3,121,
  9,7,64,60,83,86,0,129,60,93,43,7,64,60,70,76,79,87,32,77,
  69,84,69,82,0,129,59,107,9,7,64,60,80,86,0,67,71,106,30,9,
  78,2,26,2,10,43,155,17,17,48,4,26,31,79,78,0,31,79,70,70,
  0,129,40,145,24,7,64,60,80,79,77,80,65,0 };
  
// this structure defines all the variables and events of your control interface 
struct {

    // input variables
  float edit_01;
  float edit_02;
  float edit_03;
  uint8_t pushSwitch_01; // =1 if state is ON, else =0

    // output variables
  float value_01;
  float value_02;
  float value_03;
  float value_04;

    // other variable
  uint8_t connect_flag;  // =1 if wire connected, else =0

} RemoteXY;   
#pragma pack(pop)
 
/////////////////////////////////////////////
//           END RemoteXY include          //
/////////////////////////////////////////////



void setup() 
{
  RemoteXY_Init (); 
  
  
  // TODO you setup code
  
}

void loop() 
{ 
  RemoteXY_Handler ();
  
  
  // TODO you loop code
  // use the RemoteXY structure for data transfer
  // do not call delay(), use instead RemoteXY_delay() 


}