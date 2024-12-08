#define REMOTEXY_MODE__WIFI_POINT
#include <WiFi.h>
#define REMOTEXY_WIFI_SSID "HYDROPONIK IOT K30"
#define REMOTEXY_WIFI_PASSWORD "PPNSSUKSES"
#define REMOTEXY_SERVER_PORT 6377


#include <RemoteXY.h>

// RemoteXY GUI configuration  
#pragma pack(push, 1)  
uint8_t RemoteXY_CONF[] =   // 423 bytes
  { 255,9,0,20,0,160,1,19,0,0,0,75,51,48,32,87,77,75,0,31,
  1,106,200,1,1,25,0,129,8,2,92,11,64,191,71,82,79,87,70,76,
  79,87,32,84,69,67,72,0,129,17,14,73,10,64,191,87,77,75,32,80,
  80,78,83,32,75,51,48,0,130,236,27,139,187,27,160,7,15,75,30,9,
  110,64,6,31,6,2,129,11,36,38,7,64,31,84,68,83,32,77,69,84,
  69,82,0,67,14,55,30,9,78,205,31,2,129,41,165,24,7,64,31,80,
  79,77,80,65,0,129,12,48,34,6,0,31,80,114,101,115,101,116,32,86,
  97,108,117,101,0,129,18,69,23,6,0,31,83,101,116,32,80,111,105,110,
  0,7,65,75,30,9,110,64,6,31,6,2,129,63,36,34,7,64,31,80,
  72,32,77,69,84,69,82,0,67,65,55,30,9,78,205,31,2,129,63,48,
  34,6,0,31,80,114,101,115,101,116,32,86,97,108,117,101,0,129,69,69,
  23,6,0,31,83,101,116,32,80,111,105,110,0,129,27,133,49,7,64,31,
  84,69,77,80,69,82,65,84,85,82,69,0,67,38,149,30,9,78,205,31,
  2,129,36,142,34,6,0,31,80,114,101,115,101,116,32,86,97,108,117,101,
  0,129,57,97,45,7,64,31,70,76,79,87,32,65,76,73,82,65,78,0,
  67,65,114,30,9,78,205,31,2,129,63,107,34,6,0,31,80,114,101,115,
  101,116,32,86,97,108,117,101,0,2,40,174,24,11,0,135,26,31,31,79,
  78,0,79,70,70,0,129,23,193,54,4,128,31,67,79,80,89,82,73,71,
  72,84,32,64,87,77,75,80,80,78,83,75,51,48,0,129,6,97,44,7,
  64,31,70,76,79,87,32,65,66,32,77,73,88,0,67,13,114,30,9,78,
  205,31,2,129,11,107,34,6,0,31,80,114,101,115,101,116,32,86,97,108,
  117,101,0 };
  
// this structure defines all the variables and events of your control interface 
struct {

    // input variables
  float edit_01;
  float edit_02;
  uint8_t switch_01; // =1 if switch ON and =0 if OFF

    // output variables
  float value_01;
  float value_02;
  float value_03;
  float value_04;
  float value_05;

    // other variable
  uint8_t connect_flag;  // =1 if wire connected, else =0

} RemoteXY;   
#pragma pack(pop)
 
/////////////////////////////////////////////
//           END RemoteXY include          //
/////////////////////////////////////////////

int RELAY = 0;


void setup() 
{
  RemoteXY_Init (); 
  pinMode(RELAY, OUTPUT);
  
  // TODO you setup code
  
}

void loop() 
{ 
  RemoteXY_Handler ();
  if (RemoteXY.switch_01 == 1){
    digitalWrite(RELAY, HIGH);
  }
  else {
    digitalWrite(RELAY, LOW);
  }
  
  // TODO you loop code
  // use the RemoteXY structure for data transfer
  // do not call delay(), use instead RemoteXY_delay() 


}