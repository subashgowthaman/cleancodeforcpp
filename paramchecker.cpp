static bool checkValidvitals(float vitalValue, int Min, int Max);
static bool checkValidvitals(float vitalValue, int Min, int Max)
{
    int isVitalValid = true;
    if((vitalValue < Min) || (vitalValue > Max))
    {
        isVitalValid =  false;
    }
    return isVitalValid;
}
bool vitalsAreOk(float bpm, float spo2, float respRate) 
{ 
  int goodbpm =  checkValidvitals(bpm, 70, 150);
  int spo2ok = checkValidvitals(spo2, 80, 100 );
  int respRateok = checkValidvitals(respRate, 30, 60);
  return goodbpm && spo2ok && respRateok;
} 
  
  
  
