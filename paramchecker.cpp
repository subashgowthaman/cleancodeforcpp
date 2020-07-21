bool checkValidvitals(int vitalName; int Min, int Max)
{
    if((value > Min) && (value < Max))
    {
        return true;
    }
    return false; 
}


bool vitalsAreOk(float bpm, float spo2, float respRate) 
{ 
  
  bool vitalOk = false;
  bool goodbpm =  checkValidvitals(bpm, 70, 150);
  bool spo2ok = checkValidvitals(spo2, 0, 80 );
  bool respRateok = checkValidvitals(respRate, 30, 60);
  
  if( goodbpm && spo2ok && respRateok)
  {
      vitalOk =  true;
  }
  
  vitalOk =  false;
} 
  
  
  
