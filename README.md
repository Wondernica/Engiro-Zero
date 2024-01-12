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

<b>CONNECTION TO MODBUS RTU SENSOR</b><br><br>

<img src="https://github.com/Wondernica/Engiro-Zero/assets/25891208/775ed292-3cee-4d8e-9b28-5bb98e739680" width="500" height="350"><br>

<b>Carefully connect the RS485A and RS485B wires to their corresponding terminals on the sensor, ensuring precise alignment. Reversing the A and B connections could potentially damage your Modbus sensor, as some devices lack adequate protection against reverse polarity</b>.<br>

The RS485 protocol utilizes a balanced differential signaling scheme, eliminating the need for a shared ground between the Engiro-Zero and Modbus sensor. This advantageous feature enables data transmission over long distances using only two wires. In typical configurations, RS485 can span up to 1,200 meters, making it well-suited for extensive networks.<br>

Additionally, the balanced differential signals render RS485 highly resilient to electrical noise generated by nearby equipment such as motors or welding machinery. This robustness ensures reliable data transmission even in challenging environments characterized by significant interference.<br>

While not as swift as Ethernet, RS485 still offers impressive data rates, reaching up to 10 Mbps depending on the transmission distance. To accommodate the typical RS485 speeds of Modbus devices, which often operate at 9,600 bps, the Engiro-Zero incorporates a built-in transceiver capable of supporting rates up to 250 kbps.<br><br>

<b>CONNECTION TO 0~10V SENSOR</b><br><br>

<img src="https://github.com/Wondernica/Engiro-Zero/assets/25891208/a75d3480-0f8b-4163-bcff-be39423ff26a" width="500" height="350"><br>

Engiro-Zero is designed to accommodate analog voltage outputs from sensors within a range of either 0 to 5 volts or 0 to 10 volts. Inputs exceeding these voltage limits will be subject to clamping, leading to inaccurate data readings. It's crucial to consult the sensor datasheet to ensure compatibility with Engiro-Zero's input range.<br>

Before reaching the analog-to-digital converter (ADC) port, the analog voltage input undergoes attenuation to ensure it falls within acceptable levels. The calculation for determining the analog voltage input from the sensor is as follows:<br><br>

Engiro-Zero Analog Voltage Input Attenuation = 0.34<br>
Analog-to-Digital (ADC) Converter Resolution = 12-bit<br>
Number of ADC Steps = 4096 steps<br>
ADC Reference Voltage = 3.3V<br>
Voltage Per Steps = 0.8 mV per ADC steps<br>

Hence, Sensor Voltage = ([ADC Value] x 0.8mV) / 0.34 Volt<br><br>

To ensure optimal accuracy of sensor readings, calibration is necessary to mitigate potential errors stemming from board-level noise and component variations. We'll be sharing detailed calibration techniques shortly to guide you through this process.<br><br>

<b>CONNECTION TO 4~20MA SENSOR</b><br><br>

<img src="https://github.com/Wondernica/Engiro-Zero/assets/25891208/08e7d835-8a0e-4119-af7e-f7e4b52a407e" width="500" height="350"><br>

Engiro-Zero is designed to accommodate analog current outputs from sensors within a range of 4 to 20 mA. Inputs exceeding these Current limits will be subject to clamping, leading to inaccurate data readings. It's crucial to consult the sensor datasheet to ensure compatibility with Engiro-Zero's input range.<br>

Engiro-Zero Analog Voltage Input @ 4 mA = ~0.48V
Engiro-Zero Analog Voltage Input @ 20 mA = ~2.4V

Analog-to-Digital (ADC) Converter Resolution = 12-bit<br>
Number of ADC Steps = 4096 steps<br>
ADC Reference Voltage = 3.3V<br>
Voltage Per Steps = 0.8 mV per ADC steps<br>

Hence, Sensor Current  = ([ADC Value] x 8) / 1200 mA<br><br>

<b>CONNECTION TO DIGITAL INPUT</b><br><br>

<img src="https://github.com/Wondernica/Engiro-Zero/assets/25891208/09a0ad49-ff37-403f-b64e-13f20b2c01fe)" width="500" height="350"><br>

Engiro-Zero features two opto-isolated digital inputs with 3.75kV isolation. These are active-low inputs, meaning grounding them activates the opto-isolator. In the absence of an input signal (floating state), the isolator outputs a high voltage of +3.3V. For optimal operation, it's recommended to connect these inputs to systems with open-drain or open-collector outputs. <br><br>


<b>CONNECTION TO DIGITAL OUTPUT</b><br><br>

<img src="https://github.com/Wondernica/Engiro-Zero/assets/25891208/aa7cd5b0-493d-4f06-8a71-5a3e0da45026)" width="500" height="350"><br>

Engiro-Zero's outputs are open-collector. You connect the Collector to the system's voltage through a pull-up resistor to create a complete circuit when the output is "on." This setup provides excellent isolation between your system and the external circuit while giving you flexibility to adjust the output voltage based on your system's needs.<br><br>

<b>ON-BOARD 3D ACCELEROMETER</b><br><br>

<img src="https://github.com/Wondernica/Engiro-Zero/assets/25891208/69a62021-bbe0-403d-be40-3522df9c6491)" width="500" height="250"><br>

Engiro-Zero's built-in 3-axis accelerometer, with its configurable detection range, high-speed communication, and dedicated interrupt connection, unlocks a vast array of possibilities. From monitoring machine health and triggering safety protocols, the applications are limited only by your imagination. By understanding the inner workings of this powerful motion-sensing technology, you can harness its true potential and bring your innovative ideas to life.


























