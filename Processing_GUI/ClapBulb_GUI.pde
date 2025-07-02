import processing.serial.*;

Serial myPort;
String bulbStatus = "OFF";

void setup() {
  size(400, 400);
  println(Serial.list());  // See available ports
  myPort = new Serial(this, Serial.list()[0], 9600); // Change index if needed
  myPort.bufferUntil('\n');
}

void draw() {
  background(30);

  // Draw the bulb
  if (bulbStatus.equals("ON")) {
    fill(255, 255, 100);  // Yellow glow
    ellipse(width/2, height/2, 200, 200);
    fill(0);
    textSize(24);
    textAlign(CENTER);
    text("Bulb is ON", width/2, height - 50);
  } else {
    fill(80);  // Grey bulb
    ellipse(width/2, height/2, 200, 200);
    fill(255);
    textSize(24);
    textAlign(CENTER);
    text("Bulb is OFF", width/2, height - 50);
  }
}

void serialEvent(Serial p) {
  String input = p.readStringUntil('\n');
  if (input != null) {
    input = trim(input);
    println("Received: " + input);

    // Change GUI based on serial input
    if (input.equals("Bulb ON")) {
      bulbStatus = "ON";
    } else if (input.equals("Bulb OFF")) {
      bulbStatus = "OFF";
    }
  }
}
