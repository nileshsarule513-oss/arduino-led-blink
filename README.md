# arduino-led-blink
# Arduino LED Blink with QA Tracking

Basic embedded-system project (LED blinking on Arduino Uno) used to practise
QA documentation and collaboration on GitHub (Issues, comments, branches,
pull requests, Projects board).

Course: Project Management (2307476T), Dept. of E&TC, MIT Academy of Engineering

## Hardware
| Part | Qty |
|------|-----|
| Arduino Uno | 1 |
| LED (any colour) | 1 |
| 220 ohm resistor | 1 |
| Breadboard + jumper wires | 1 set |

## Wiring
`D8 -> 220 ohm -> LED anode (+)`, `LED cathode (-) -> GND`

## How to run
1. Open `led_blink/led_blink.ino` in Arduino IDE.
2. Select board *Arduino Uno* and the correct port.
3. Upload. The LED toggles every 500 ms; Serial Monitor (9600 baud) shows ON/OFF.

## Repository layout
```
led_blink/led_blink.ino   Arduino sketch
docs/qa_issues.md         QA issues logged (mirrors GitHub Issues)
docs/test_plan.md         Test cases and results
.github/ISSUE_TEMPLATE/   Bug report template
```

## Workflow
- One GitHub Issue per QA finding, labelled `bug`, `documentation` or `enhancement`.
- Fixes are done on a branch (`fix/issue-N`) and merged by pull request with `Closes #N`.
- Progress is tracked on the repository's Projects board (To Do / In Progress / Done).
