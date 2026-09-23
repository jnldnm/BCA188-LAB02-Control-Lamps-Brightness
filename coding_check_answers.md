# 4. Coding Check Answers

1. In the line `int brightnessSetting = 75;`, the data type is **`int`**, the variable name is **`brightnessSetting`**, and the initial value is **`75`**. To change the value to 50, you write: `brightnessSetting = 50;`.
2. The `bool` data type is suitable for `switchOn` because a switch only has two binary states: on or off (true or false). The `int` data type is suitable for `brightnessSetting` because it needs to store a numerical value within a range (0 to 100).
3. If `brightnessSetting` is 80 and `switchOn` is false, the predicted output is **0**. The logic dictates that when the switch is off, the output is always 0.
4. No, `switchOn` and `switchon` are not the same variable. The Arduino programming language (C++) is case-sensitive, so the uppercase 'O' and lowercase 'o' make them distinct identifiers.
5. The values passed to `getLampBrightness()` are a boolean representing the switch state and an integer representing the brightness level. It returns an integer representing the actual lamp brightness (either the brightness setting or zero).
6. No, if `lampBrightness` is declared inside `setup()`, the `loop()` function cannot access it directly. Variables declared within a function have local scope, meaning they only exist and are accessible within the specific block of code where they were created.