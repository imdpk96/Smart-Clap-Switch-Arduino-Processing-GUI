# 🔊 Smart Clap Switch using Arduino UNO + Processing GUI 💡

Control your bulb with just two claps — and see its status in a custom desktop GUI!  
This DIY **home automation project** is perfect for beginners using **Arduino UNO**, a **sound sensor**, and a **relay module**. Plus, it's visualized beautifully in **Processing** using real-time Serial communication.

---

## 🎯 Features

- 👏 **Double Clap Detection** – Two claps = Bulb ON, next two claps = Bulb OFF
- 🖥️ **Real-time GUI** in Processing – See bulb status visually (ON/OFF)
- 📡 **Serial Communication** – Arduino sends status to PC GUI
- 🧠 **Debouncing + Clap Window Logic** – Accurate, reliable triggering
- ⚡ Easy to build with beginner-friendly components

---

## 🔧 Components Used

| Component                  | Buy from Amazon |
|---------------------------|-----------------|
| Arduino UNO R3            | [Buy UNO R3](https://amzn.to/4nvnfB5) |
| Relay Module (1 Channel)  | [Buy Relay](https://amzn.to/44LyTQQ) |
| LM393 Sound Sensor Module | [Buy Sound Sensor](https://amzn.to/3G9Djrs) |
| Jumper Wires              | Local/Electronic Store |
| Bulb + Holder + Plug      | Any 230V lamp (⚠️ Be careful) |
| Processing IDE            | [processing.org](https://processing.org/download) |

---

## 🛠️ How It Works

### Arduino Side:
- Listens to sound sensor (D0 pin)
- If 2 claps are detected within 1 second ➜ toggles relay ON/OFF
- Sends status via Serial: `"Bulb ON"` / `"Bulb OFF"`

### Processing GUI:
- Listens to Arduino Serial output
- Shows bulb as **yellow glowing** when ON and **gray dim** when OFF
- Displays `"Bulb is ON"` / `"Bulb is OFF"` as text

---

## 📁 Project Structure

Smart-Clap-Switch-Arduino-Processing-GUI/
│
├── Arduino_Code/
│ └── ClapSwitch_DoubleClap.ino
│
├── Processing_GUI/
│ └── ClapBulb_GUI.pde
│
├── Images/ ← Optional (if using bulb images)
│ ├── bulb_on.png
│ └── bulb_off.png
│
├── README.md
└── LICENSE


---

## 🧪 How to Use

1. Upload the `ClapSwitch_DoubleClap.ino` code to your Arduino UNO.
2. Open `ClapBulb_GUI.pde` in Processing IDE.
3. Run the GUI (choose correct serial port).
4. Clap **twice** to turn the bulb **ON**, clap **twice** again to turn it **OFF**.
5. Watch the GUI update in real-time!

---

## 🖼️ Preview

*Image or YouTube demo here*

> 📽️ YouTube Video: Coming soon on [@TheIITianDpk](https://www.youtube.com/@TheIITianDpk)

---

## 📱 Connect with Me

| Platform      | Link |
|---------------|------|
| 🔗 LinkedIn   | [linkedin.com/in/imdpk96](https://www.linkedin.com/in/imdpk96) |
| 📷 Instagram  | [instagram.com/imdpk96](https://www.instagram.com/imdpk96) |
| 🧪 Tinkercad  | [tinkercad.com/users/eWTnVR7FKkS-dpk-kmwt](https://www.tinkercad.com/users/eWTnVR7FKkS-dpk-kmwt) |
| 💻 GitHub     | [github.com/imdpk96](https://github.com/imdpk96) |
| 📹 YouTube    | [@TheIITianDpk](https://www.youtube.com/@TheIITianDpk) |

---

## 🔖 GitHub Tags (SEO Optimized)

`#Arduino` `#ClapSwitch` `#SoundSensor` `#RelayModule` `#ProcessingGUI`  
`#HomeAutomation` `#ArduinoProjects` `#SerialCommunication` `#SmartBulb` `#DIYElectronics`

---

## 📄 License

This project is open-source under the **MIT License** — feel free to modify and build upon it.

---

## 💬 Feedback

If you liked the project or used it in your own setup, tag me on **Instagram** or **LinkedIn**! I'd love to share your version too.  
And don't forget to **star this repo ⭐** if you found it useful!

---
