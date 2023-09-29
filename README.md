# Crash-Detection-and-Alert-System

## Usage

### Phase 1: Downloading Arduino IDE

1. Go to [this link.](https://www.arduino.cc/en/software)
1. Download Windows 10 and newer (64 bits).
1. Install the IDE using the setup file.

### Phase 2: Setting up IDE

1. Go to `File` &rarr; `Preferences`.
1. Enter [this url](https://dl.espressif.com/dl/package_esp32_index.json) into the _Additional Boards Manager URLS:_ dialog box.
1. Go to `Tools` &rarr; `Boards` &rarr; `Boards Manager`.
1. Type ESP32 and install _esp32_ by _Espressif Systems_.

_Note: Install the respective libraries given in `GISMO6-Docs/Introduction.pptx`_

### Phase 3: Programming ESP32 with Arduino

1. Connect the ESP32 module after connecting all the necessary sensors for the program.
1. Go to `Tools` &rarr; `Boards` and select _ESP32 Dev Module_ (if a dialog for the USB port opens, set the Board to _ESP32 Dev Module_ right there).
1. If port is not set yet, go to `Tools` &rarr; `Port` &rarr; `COMX`.

_Note: Serial Monitor should be set to 115200 baud for serial messages._

### Phase 4: Importing `.aia` file in Kodular

1. Open [this link.](https://creator.kodular.io)
1. If project is not already imported, click on _Import Project_ and upload the `.aia` file.

### Phase 5: Connecting Kodular to Firebase

1. Copy the Firebase URL into _Firebase URL_ (including https://) in the Firebase component.
1. Copy the Firebase secret into _Firebase Token_ in the Firebase component.

_Note: After installing libraries for Firebase and OLED Display, delete the folder `C:\Users\%USERNAME%\AppData\Local\Arduino15\libraries`_

This is an updated public version of an older repository privatized due to a security vulnerability.
