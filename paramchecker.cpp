static bool checkValidvitals(float vitalValue, int Min, int Max);
static bool checkValidvitals(float vitalValue, int Min, int Max)
{
    if((vitalValue < Min) || (vitalValue > Max))
    {
        return false;
    }
    else
    {
        return true;
    }
}
bool vitalsAreOk(float bpm, float spo2, float respRate) 
{ 
  bool vitalsOk = false;
  int goodbpm =  checkValidvitals(bpm, 70, 150);
  int spo2ok = checkValidvitals(spo2, 0, 80 );
  int respRateok = checkValidvitals(respRate, 30, 60);
  if(goodbpm && spo2ok && respRateok)
  {
      vitalsOk =  true;
  }
  else
  {
      vitalsOk =  false;
  }
  return vitalsOk;
} 
  
  
  
