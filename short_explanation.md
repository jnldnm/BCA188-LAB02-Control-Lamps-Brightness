# 3. Short Explanation

The function `getLampBrightness(bool switchOn, int brightnessSetting)` takes two parameters:

* **`switchOn`**: A boolean variable representing the current state of the switch (true for on, false for off).
* **`brightnessSetting`**: An integer variable representing the target brightness level (ranging from 0 to 100).

The function returns an integer value representing the final output brightness. If `switchOn` is true, the function returns the value held in `brightnessSetting`. If `switchOn` is false, it returns 0, simulating that the lamp is off regardless of the brightness setting.