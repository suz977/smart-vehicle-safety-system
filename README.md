# Smart Vehicle Safety & Collision Warning System
Interactive browser simulator plus Embedded C safety logic.

## Visual simulation
Open `index.html` in Chrome, Edge, or Firefox. Change distance, speed, acceleration, wheel RPM, IR detection and sensor health. Use presets, Start/Pause/Reset, run built-in tests, and export a CSV log.

## Compile/test C logic on Windows
From PowerShell in this folder:
```powershell
gcc -std=c11 -Wall -Wextra -Iinclude tests/test_safety.c src/safety.c -o test_safety.exe -lm
.\test_safety.exe
gcc -std=c11 -Wall -Wextra -Iinclude src/main.c src/safety.c -o vehicle_safety.exe -lm
.\vehicle_safety.exe
```
The dashboard mirrors the C rules in JavaScript so it can run as a static GitHub Pages site. If you modify the rules, keep both implementations synchronized. This is a demonstration model, not validated automotive safety software.

## Deploy to GitHub Pages
1. Create a public repository (e.g. `smart-vehicle-safety-system`).
2. Push the contents of this folder to the repository root.
3. Open **Settings → Pages**. Choose **Deploy from a branch**, branch `main`, folder `/ (root)`, then Save.
4. Wait for the Pages URL to appear in the same settings page.

## Hardware path
Potential sensors: ultrasonic distance, IR obstacle, MPU6050 accelerometer/gyroscope, Hall-effect wheel speed sensor. Later port sensor input/output drivers to STM32 GPIO, I²C, ADC/timers and interrupts. Do not connect this prototype to a real vehicle.
