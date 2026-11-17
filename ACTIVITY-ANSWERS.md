# Laboratory Activity Answers

**Subject:** BCA188 – Programming for Internet of Things  
**Laboratory Activity:** Control a Lamp's Brightness

## 1. Activity Questions

### Coding Check

**1. In `int brightnessSetting = 75;`, identify the data type, variable name, and initial value. How would you change the value to 50?**

- **Data type:** `int`, which stores an integer (whole number).
- **Variable name:** `brightnessSetting`.
- **Initial value:** `75`.
- To change the value to 50, write:

```cpp
int brightnessSetting = 50;
```

**2. Why is `bool` suitable for `switchOn`, while `int` is suitable for `brightnessSetting`?**

`bool` is suitable for `switchOn` because the switch has only two possible states: `true` (ON) or `false` (OFF). `int` is suitable for `brightnessSetting` because the setting is represented by whole-number values such as 0, 50, and 100.

**3. Predict the output when `brightnessSetting` is 80 and `switchOn` is `false`.**

The returned lamp brightness is `0`. Since the switch is OFF, the function returns zero regardless of the selected brightness setting. The stored `brightnessSetting` remains 80.

**4. Are `switchOn` and `switchon` the same variable? Explain.**

No. C++ is case-sensitive, so uppercase `O` and lowercase `o` are different characters. `switchOn` and `switchon` are different identifiers and refer to different variables if both are declared.

**5. What values are passed to `getLampBrightness()`, and what does it return?**

The function receives two arguments: a Boolean switch state (`true` or `false`) and an integer brightness setting (such as 0, 50, or 100). It returns the brightness setting when `switchOn` is `true`; otherwise, it returns `0`.

**6. If `lampBrightness` is declared inside `setup()`, can `loop()` access it directly? Explain.**

No. A variable declared inside `setup()` is local to that function and is only accessible within its scope. The `loop()` function cannot access it directly. To share a variable between `setup()` and `loop()`, it would need to be declared in an appropriate wider scope, such as globally, or passed to another function.

## 2. Completed Tables

### Brightness test results

| Brightness setting | Switch state | Expected lamp brightness | Observed output |
|---:|---|---:|---|
| 0 | On | 0 | Pending actual test |
| 50 | On | 50 | Pending actual test |
| 100 | On | 100 | Pending actual test |
| 0 | Off | 0 | Pending actual test |
| 50 | Off | 0 | Pending actual test |
| 100 | Off | 0 | Pending actual test |

**Note:** The expected values follow the rule in the activity. The observed-output column must be updated after running the sketch and checking the Serial Monitor. Do not treat expected values as measured results.

## 3. Exercises and Additional Activities

### Required function

```cpp
int getLampBrightness(bool switchOn, int brightnessSetting) {
  if (switchOn == true) {
    return brightnessSetting;
  } else {
    return 0;
  }
}
```

### Function parameters and return value

- `bool switchOn` is the first parameter and indicates whether the switch is ON or OFF.
- `int brightnessSetting` is the second parameter and holds the selected brightness.
- The return type `int` indicates that the function returns an integer.
- If the switch is ON, the function returns `brightnessSetting`.
- If the switch is OFF, the function returns `0`.

### Expected test cases

| Test | `brightnessSetting` | `switchOn` | Returned value |
|---:|---:|---|---:|
| 1 | 0 | `true` | 0 |
| 2 | 50 | `true` | 50 |
| 3 | 100 | `true` | 100 |
| 4 | 0 | `false` | 0 |
| 5 | 50 | `false` | 0 |
| 6 | 100 | `false` | 0 |

## 4. Observations and Analysis

The function uses the switch state to determine the effective brightness. When the switch is ON, the output matches the selected setting. When the switch is OFF, the output is zero even if the selected setting is 50 or 100.

The function does not assign a new value to `brightnessSetting`; it only decides which value to return. This means turning the switch OFF does not erase or change the stored brightness setting.

The table above contains expected results derived from the activity's stated logic. Actual Serial Monitor observations, screenshots, and successful execution must be supplied after the program is run.

## 5. References

- Arduino Language Reference: https://docs.arduino.cc/language-reference/
- Arduino Serial reference: https://docs.arduino.cc/language-reference/en/functions/communication/serial/
- Arduino IDE: https://www.arduino.cc/en/software/
