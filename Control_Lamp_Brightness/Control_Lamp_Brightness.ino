// Variables to test different conditions
bool switchOn = true;         // Change to false for the "Off" tests
int brightnessSetting = 50;   // Change to 0, 50, or 100 for the tests

void setup() {
  // Initialize the Serial Monitor to simulate the lamp
  Serial.begin(9600);
  
  // Wait for the serial port to connect
  while(!Serial); 

  // Call the function, store its returned value, and print the result
  int lampBrightness = getLampBrightness(switchOn, brightnessSetting);
  
  // Print the results to the Serial Monitor
  Serial.print("Switch is ");
  if (switchOn) {
    Serial.print("On");
  } else {
    Serial.print("Off");
  }
  Serial.print(" | Brightness Setting: ");
  Serial.print(brightnessSetting);
  Serial.print(" | Observed Lamp Brightness: ");
  Serial.println(lampBrightness);
}

void loop() {
  // The loop is left empty because the instructions specify 
  // calling the function from setup() and running a simple Serial Monitor simulation.
}

// Function to determine the lamp's brightness
int getLampBrightness(bool switchOn, int brightnessSetting) {
  // Return the brightness setting when the switch is on, and zero when it is off
  if (switchOn == true) {
    return brightnessSetting;
  } else {
    return 0;
  }
}