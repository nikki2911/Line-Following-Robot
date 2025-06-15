# Line Following Robot 🤖

A simple yet effective **Line Following Robot** project built using Arduino. This robot is capable of detecting and following a line path using IR sensors, making it suitable for automation, robotics competitions, and learning embedded systems.

## 🚀 Features

- Follows black line on a white surface
- IR sensor-based line detection
- Arduino Uno powered control logic
- Dual motor driving system with L293D motor driver
- Basic obstacle avoidance logic (optional)

## 🧰 Hardware Components

- Arduino Uno R3
- L293D Motor Driver Module
- IR Sensor Module 
- DC Motors
- Chassis with Wheels
- Power Supply (Battery pack)
- Jumper Wires
- Breadboard (optional)

## 🛠️ How It Works

1. IR sensors detect the presence or absence of the line.
2. Arduino reads the IR sensor data.
3. Based on the input, the Arduino adjusts the speed and direction of the motors using the L293D motor driver.
4. The robot constantly corrects its path to stay aligned with the line.

## 🔌 Circuit Diagram

![Line_Following_Robot](https://github.com/user-attachments/assets/6aaed9ac-620f-4555-8ddf-147b726382b2)


## 📂 Project Structure


## 🚦 Usage

1. Connect your Arduino board with all components as per the wiring diagram.
2. Upload `LineFollower.ino` to your Arduino using the Arduino IDE.
3. Power the robot using a battery or USB (based on design).
4. Place it on a track and watch it follow the line.


## 📚 Learn More

- [Arduino IR Sensor Guide](https://lastminuteengineers.com/ir-sensor-arduino-tutorial/)
- [L293D Motor Driver Tutorial](https://components101.com/l293d-motor-driver)

## 🧑‍💻 Author

**Nikita Kapadiya**  
🔗 [GitHub Profile](https://github.com/nikki2911)

## 📝 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---

*Have fun building robots and learning embedded systems!*
