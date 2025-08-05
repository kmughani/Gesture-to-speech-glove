# 📱 Android App – Gesture to Speech

This Android app receives Bluetooth data from the Arduino glove and provides both **text display** and **speech output** using Android’s Text-to-Speech (TTS) engine.

---

## 🧠 Features

- Receives gesture codes via Bluetooth
- Displays the gesture meaning on screen (e.g. "Hello", "I need help")
- Converts text to speech using Android TTS
- Simple and clean UI for elderly or physically challenged users

---

## 📸 Screens (to be added)

- Gesture received screen
- Speech output confirmation
- Bluetooth pairing prompt

---

## 🔌 Bluetooth Input Format

Expected input from Arduino via HC-05 module:
Hello
I need help
Water please
---

## 📱 Development Stack

- Android Studio
- Java (or Kotlin)
- TextToSpeech API
- BluetoothSocket for data reception

---

## 🚀 Improvements (Planned)

- Add gesture customization
- Multilingual TTS (via Google Translate API)
- Store gesture logs locally
