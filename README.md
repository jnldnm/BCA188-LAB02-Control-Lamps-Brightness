# Laboratory Activity 2: Control a Lamp's Brightness

**Subject:** BCA188 – Programming for Internet of Things  
**Laboratory Activity:** Control a Lamp's Brightness

## 1. About the Project

This project implements a simple lamp-brightness decision function. It accepts a Boolean switch state and an integer brightness setting from 0 to 100. When the switch is ON, the function returns the selected brightness. When the switch is OFF, it returns zero.

The program prints six test cases to the Arduino Serial Monitor. This is a software simulation of the required behavior; it does not control a physical lamp or LED.

The central function is:

```cpp
int getLampBrightness(bool switchOn, int brightnessSetting)
```

## 2. Objectives

Based on the laboratory instructions, this activity aims to:

- Use a function with parameters and a return value.
- Use `bool` to represent an ON/OFF switch state.
- Use `int` to represent a brightness setting.
- Apply conditional logic to determine the lamp's effective brightness.
- Call the function from `setup()`.
- Store the returned value in `lampBrightness`.
- Display and record the results for brightness settings 0, 50, and 100 with the switch both ON and OFF.

## 3. Technologies and Requirements

| Technology | Purpose |
|---|---|
| Arduino C++ | Implements the function and test cases. |
| Arduino IDE | Used to edit, compile, and run the sketch. |
| Arduino Serial Monitor | Displays the simulated brightness results. |
| Arduino core | Provides `setup()`, `loop()`, and Serial functionality. |
| ESP32 board package | Needed only if compiling for an ESP32 board. |
| Git and GitHub | Used to version and submit the project. |

The uploaded activity does not specify a particular board model. Select the board required by your instructor. If an ESP32 is required, install the appropriate ESP32 board package using Boards Manager.

## 4. Project Structure

```text
BCA188-LAB02-Control-Lamps-Brightness/
│
├── README.md
├── ACTIVITY-ANSWERS.md
├── Documentation/
│   ├── screenshot-01-project-setup.png
│   ├── screenshot-02-code-implementation.png
│   ├── screenshot-03-serial-monitor-output.png
│   └── screenshot-04-final-result.png
│
└── SourceCode/
    └── ControlLampsBrightness.ino
```

- `README.md` – project overview and implementation documentation.
- `ACTIVITY-ANSWERS.md` – answers to the Coding Check and the completed expected-results table.
- `Documentation/` – screenshots captured during implementation and verification.
- `SourceCode/ControlLampsBrightness.ino` – complete Arduino sketch.

## 5. Installation and Setup

1. Install Arduino IDE from https://www.arduino.cc/en/software/.
2. Open Arduino IDE.
3. Select the board required by the instructor. The activity screenshot does not identify a specific board model.
4. If using ESP32, install the ESP32 platform through **Tools > Board > Boards Manager**, search for `esp32`, and install the Espressif Systems package.
5. Connect the physical board by USB only if the instructor requires execution on a board.
6. No additional third-party library is required by this sketch.

## 6. Implementation and Procedure

1. Create a new Arduino sketch named `ControlLampsBrightness`.
2. Save it in the repository's `SourceCode/` directory.
3. Copy the complete program from `SourceCode/ControlLampsBrightness.ino` into the Arduino IDE.
4. Compile the sketch using **Sketch > Verify/Compile**.
5. If using a physical board, select its board and port, then choose **Sketch > Upload**. If the instructor permits a compile-only workflow, compilation alone does not demonstrate Serial output.
6. Open **Tools > Serial Monitor** and set the baud rate to **115200**.
7. Reset the board if needed. The Serial Monitor should print six test cases.

### How the function works

The function receives two parameters:

- `switchOn` is a Boolean value: `true` means ON and `false` means OFF.
- `brightnessSetting` is an integer representing the selected brightness.

The `if` statement returns `brightnessSetting` when the switch is ON. Otherwise, the function returns `0`. The stored setting itself is not modified.

The six test cases are grouped in separate code blocks so each block can declare its own local variables with the same names.

## 7. Project Documentation

Capture the screenshots during the corresponding implementation stages. The image files below are placeholders until the screenshots are actually captured.

### 7.1 Project setup

![Project setup screenshot](Documentation/screenshot-01-project-setup.png)

Shows the Arduino IDE sketch, selected board (if applicable), and project configuration.

### 7.2 Code implementation

![Code implementation screenshot](Documentation/screenshot-02-code-implementation.png)

Shows the completed `getLampBrightness()` function and the six test cases in `setup()`.

### 7.3 Serial Monitor output

![Serial Monitor output screenshot](Documentation/screenshot-03-serial-monitor-output.png)

Shows all six test cases and their printed brightness values.

### 7.4 Final result

![Final result screenshot](Documentation/screenshot-04-final-result.png)

Shows the final program and successful output together, if practical. Do not add an image until it has been captured.

## 8. Results and Discussion

The expected results are:

| Brightness setting | Switch state | Expected lamp brightness |
|---:|---|---:|
| 0 | On | 0 |
| 50 | On | 50 |
| 100 | On | 100 |
| 0 | Off | 0 |
| 50 | Off | 0 |
| 100 | Off | 0 |

These are logically derived expected values from the activity's stated rule. They are not claimed as experimentally observed until the sketch has actually been run and the Serial Monitor output has been checked.

When the switch is OFF, the function returns zero without changing the original `brightnessSetting` variable. Therefore, switching OFF affects the effective lamp brightness, not the stored setting.

See [ACTIVITY-ANSWERS.md](ACTIVITY-ANSWERS.md) for the completed table and all six Coding Check answers.

## 9. Conclusion

The activity demonstrates how a function can receive parameters, evaluate a condition, and return a value. The Boolean parameter represents the switch state, while the integer parameter represents the selected brightness. By calling the function for six combinations, the program models the required behavior: the selected brightness is used when the switch is ON, and zero is returned when it is OFF.

The Serial Monitor provides a simple way to inspect the program's output. Actual execution and screenshot evidence should be added after testing.

## 10. References

- Arduino Language Reference: https://docs.arduino.cc/language-reference/
- Arduino IDE: https://www.arduino.cc/en/software/
- Arduino Serial reference: https://docs.arduino.cc/language-reference/en/functions/communication/serial/
- Arduino ESP32 documentation (if using ESP32): https://docs.espressif.com/projects/arduino-esp32/en/latest/
- Git for Windows: https://git-scm.com/downloads
- GitHub Docs: https://docs.github.com/
