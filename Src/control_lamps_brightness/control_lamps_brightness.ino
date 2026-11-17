
// BCA188 - Laboratory Activity 2
// Control a Lamp's Brightness

// Function to determine the effective lamp brightness
int getLampBrightness(bool switchOn, int brightnessSetting) {

  // Check whether the switch is ON
  if (switchOn == true) {
    return brightnessSetting;
  } else {
    return 0;
  }
}

void setup() {

  // Initialize Serial communication
  Serial.begin(115200);
  delay(1000);

  Serial.println("BCA188 - Laboratory Activity 2");
  Serial.println("Control a Lamp's Brightness");
  Serial.println("--------------------------------");

  // TEST 1: Brightness 0, Switch ON
  {
    int brightnessSetting = 0;
    bool switchOn = true;

    int lampBrightness =
      getLampBrightness(switchOn, brightnessSetting);

    Serial.print("Setting: ");
    Serial.print(brightnessSetting);
    Serial.print(" | Switch: ON | Lamp brightness: ");
    Serial.println(lampBrightness);
  }

  // TEST 2: Brightness 50, Switch ON
  {
    int brightnessSetting = 50;
    bool switchOn = true;

    int lampBrightness =
      getLampBrightness(switchOn, brightnessSetting);

    Serial.print("Setting: ");
    Serial.print(brightnessSetting);
    Serial.print(" | Switch: ON | Lamp brightness: ");
    Serial.println(lampBrightness);
  }

  // TEST 3: Brightness 100, Switch ON
  {
    int brightnessSetting = 100;
    bool switchOn = true;

    int lampBrightness =
      getLampBrightness(switchOn, brightnessSetting);

    Serial.print("Setting: ");
    Serial.print(brightnessSetting);
    Serial.print(" | Switch: ON | Lamp brightness: ");
    Serial.println(lampBrightness);
  }

  // TEST 4: Brightness 0, Switch OFF
  {
    int brightnessSetting = 0;
    bool switchOn = false;

    int lampBrightness =
      getLampBrightness(switchOn, brightnessSetting);

    Serial.print("Setting: ");
    Serial.print(brightnessSetting);
    Serial.print(" | Switch: OFF | Lamp brightness: ");
    Serial.println(lampBrightness);
  }

  // TEST 5: Brightness 50, Switch OFF
  {
    int brightnessSetting = 50;
    bool switchOn = false;

    int lampBrightness =
      getLampBrightness(switchOn, brightnessSetting);

    Serial.print("Setting: ");
    Serial.print(brightnessSetting);
    Serial.print(" | Switch: OFF | Lamp brightness: ");
    Serial.println(lampBrightness);
  }

  // TEST 6: Brightness 100, Switch OFF
  {
    int brightnessSetting = 100;
    bool switchOn = false;

    int lampBrightness =
      getLampBrightness(switchOn, brightnessSetting);

    Serial.print("Setting: ");
    Serial.print(brightnessSetting);
    Serial.print(" | Switch: OFF | Lamp brightness: ");
    Serial.println(lampBrightness);
  }

  Serial.println("--------------------------------");
  Serial.println("All six test cases have been printed.");
}

void loop() {
  // No repeated operation is required.
}
