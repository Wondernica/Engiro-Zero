# Engiro-Zero

<img src="https://github.com/Wondernica/Engiro-Zero/assets/25891208/02b3652d-2a1f-40c3-8d6b-c965163bddad" width="600" height="300"><br><br>

<b>Introducing Engiro Zero: Bridging the Gap Between Hobbyist and Industrial IoT</b>
Imagine a world where the ease of Arduino development meets the robust power of industrial IoT. That's the reality you unlock with Engiro Zero, the revolutionary board that empowers creators of all levels to transform their ideas into impactful solutions.<br>

<b>Unleash the Power Within:</b><br>

<b>Familiar Tools, Unprecedented Potential:</b> Ditch the complex development platforms. Engiro Zero leverages the Microchip SAMD21 ARM Cortex M0+ core, granting you the familiar comfort of Arduino IDE programming with the muscle to tackle demanding industrial applications.<br>
<b>Speak Every Sensor's Language:</b> Break free from proprietary limitations. Engiro Zero seamlessly integrates with a vast array of industrial sensors, effortlessly understanding their 4-20mA, 0-10V, and Modbus RTU dialects.<br>
<b>Confidence Built In:</b> Rest assured, even in harsh environments. Two isolated inputs and outputs keep your projects safe and reliable, ensuring data integrity and protecting your valuable equipment.

<b>From Farm to Factory, Engiro Zero Empowers:</b>

<b>Revolutionize Agriculture:</b> Monitor soil moisture, optimize irrigation, and boost crop yields for a sustainable future.<br>
<b>Transform Utilities:</b> Optimize energy flow, detect meter anomalies, and ensure grid stability for a smarter tomorrow.<br>
<b>Master Metrology:</b> Collect precise environmental data, optimize operations, and predict weather patterns for informed decision-making.<br>
<b>Embrace ESG:</b> Monitor emissions, optimize resource usage, and drive sustainable practices for a responsible future.<br>

<b>Engiro Zero is more than just a board; it's a gateway to endless possibilities.</b> Whether you're a seasoned developer crafting industrial solutions or a passionate maker exploring the boundaries of IoT, Engiro Zero equips you with the tools and confidence to turn your vision into reality.<br><br>

<b><h2>Board Overview</h2></b><br><br>

<img src="https://github.com/Wondernica/Engiro-Zero/assets/25891208/b8060e15-c19c-49cc-af57-4aaadbdceb14" width="700" height="950"><br><br><br>

<b><h2>SAMD21 Arduino Pin Numbering</h2></b><br><br>

<img src="https://github.com/Wondernica/Engiro-Zero/assets/25891208/a99fbe41-152a-438e-a10c-35d27d8f2b3b" width="600" height="600"><br><br><br>

<b><h2>Specifications</h2></b><br><br>

<img src="https://github.com/Wondernica/Engiro-Zero/assets/25891208/63525bf6-7bac-481f-9f7d-919930d6ae9f" width="600" height="550"><br><br><br>

<b><h2>Engiro-Zero Debug Port</h2></b><br><br>

<img src="https://github.com/Wondernica/Engiro-Zero/assets/25891208/5c78f120-a7ec-4b22-bb40-087dfe07de43" width="500" height="250"><br><br>

To monitor the output of the serial monitor debug port, please follow these instructions:<br>

1. <b>Utilize an external UART to USB converter.</b><br>

2. <b>Carefully verify the converter's UART port voltage</b>. It's crucial to <b>only use converters with a UART voltage level of 3.3V or lower</b>. Applying a voltage higher than 3.3V could potentially damage the Engiro-Zero serial monitor port.<br>

3. <b>Refer to the provided code example for guidance on printing to the Serial Monitor port for debugging purposes</b>.<br><br><br>

<b><h2>Engiro-Zero Power Supply</h2></b><br><br>

<img src="https://github.com/Wondernica/Engiro-Zero/assets/25891208/52857d8f-9b20-442d-abd2-ecd0895eddcf" width="500" height="250"><br><br>

⚠️ Important: Ensure correct power supply polarity and voltage for Engiro-Zero.<br>

To safeguard your Engiro-Zero board, please adhere to these crucial power requirements:<br>

<b>Polarity Precision:</b> Meticulously verify that the power supply connections align with the designated positive (+) and negative (-) terminals on the Engiro-Zero input. Improper polarity can lead to irreparable damage.<br>

<b>Voltage Compliance:</b> Employ a power supply that delivers a voltage within the <b>permissible range of 9V to 24V. Never surpass this threshold</b>, as excessive voltage poses a significant risk of board malfunction.<br><br><br>

<b><h2>Engiro-Zero Sensor Connection</h2></b><br><br>

<b>CONNECTION TO MODBUS RTU SENSOR</b><br>

<img src="https://github.com/Wondernica/Engiro-Zero/assets/25891208/775ed292-3cee-4d8e-9b28-5bb98e739680" width="500" height="350"><br>

<b>Carefully connect the RS485A and RS485B wires to their corresponding terminals on the sensor, ensuring precise alignment. Reversing the A and B connections could potentially damage your Modbus sensor, as some devices lack adequate protection against reverse polarity</b>.<br>

The RS485 protocol utilizes a balanced differential signaling scheme, eliminating the need for a shared ground between the Engiro-Zero and Modbus sensor. This advantageous feature enables data transmission over long distances using only two wires. In typical configurations, RS485 can span up to 1,200 meters, making it well-suited for extensive networks.<br>

Additionally, the balanced differential signals render RS485 highly resilient to electrical noise generated by nearby equipment such as motors or welding machinery. This robustness ensures reliable data transmission even in challenging environments characterized by significant interference.<br>

While not as swift as Ethernet, RS485 still offers impressive data rates, reaching up to 10 Mbps depending on the transmission distance. To accommodate the typical RS485 speeds of Modbus devices, which often operate at 9,600 bps, the Engiro-Zero incorporates a built-in transceiver capable of supporting rates up to 250 kbps.<br><br>

<b>CONNECTION TO 0~10V SENSOR</b><br>


















