void setup() 
{  
  pinMode(LED_BUILTIN, OUTPUT); 
}    
   
void morseDot() 
{
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(1500);                       
  digitalWrite(LED_BUILTIN, LOW);    
  delay(1500);                       
}

void morseDash() 
  {
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(3000);                       
  digitalWrite(LED_BUILTIN, LOW);    
  delay(3000);                       
  }

void loop() 
{
// * A  ._
    morseDot();
    morseDash();
    delay(1500);  // Delay of 1 seconds 

// * R ._.
    morseDot();
    morseDash();
    morseDot();
    delay(1500);  // Delay of 1 seconds 

// * Y  ._
    morseDash();
    morseDot();
    morseDash();
    morseDash();
    delay(1500);  // Delay of 1 seconds 

// * A  ._
    morseDot();
    morseDash();
    delay(1500);  // Delay of 1 seconds 
    
// * N  _.
    morseDash();
    morseDot();
    delay(1500);  // Delay of 1 seconds  
}          
