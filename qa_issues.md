# QA Issues Log

Paste each entry as a new GitHub Issue (Issues > New issue), then add the
labels shown. Fixes go on a branch and are merged with `Closes #N`.

## Issue 1: Blocking delay() makes the sketch unresponsive
- Labels: `bug`, `severity: medium`
- Found in: first version of `led_blink.ino` using `delay(500)`
- Problem: Nothing else can run during the delay, so future inputs (button, sensor) would be missed.
- Root cause (5-Why): delay() halts the CPU -> loop cannot run other tasks -> design used the simplest blink pattern without planning for expansion.
- Fix: Replaced with millis()-based non-blocking timing (branch `fix/issue-1-non-blocking`).
- Status: Closed

## Issue 2: LED pin and interval are hard-coded magic numbers
- Labels: `enhancement`, `severity: low`
- Problem: `8` and `500` appeared inline, making changes error-prone.
- Root cause: no constants defined.
- Fix: Added `LED_PIN` and `BLINK_INTERVAL` constants.
- Status: Closed

## Issue 3: Missing wiring diagram and resistor value in README
- Labels: `documentation`, `severity: medium`
- Problem: A new user could connect the LED without a resistor and damage the LED/pin.
- Root cause: documentation written after the code, hardware details omitted.
- Fix: Added hardware table and wiring section to README.
- Status: Closed

## Issue 4: No serial debug output to verify behaviour
- Labels: `enhancement`, `severity: low`
- Problem: Cannot confirm LED state without looking at the board.
- Fix: Added Serial.begin(9600) and ON/OFF messages (using F() macro to save RAM).
- Status: Closed

## Issue 5: No test plan or recorded results
- Labels: `documentation`, `severity: low`
- Problem: Behaviour was never checked against expected results.
- Fix: Added `docs/test_plan.md`.
- Status: Open (left open for collaborator review)
