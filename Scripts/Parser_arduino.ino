void setup() {
  Serial.begin(9600);

  String line = "G1 X40.5 Y20.0";

  int xPos = line.indexOf('X');   // Finds index of 'X' (3)
  int yPos = line.indexOf('Y');   // Finds index of 'Y' (8)

  int start = xPos + 1;           // Starts right after 'X' (4)
  String xStr = line.substring(start, yPos); // Slices from start up to yPos ("40.5 ")
  float xVal = xStr.toFloat();    // Converts sliced String to float (40.5)

  Serial.print("X string: [");
  Serial.print(xStr);
  Serial.print("] -> X value: ");
  Serial.println(xVal);
}

void loop() {
  // Nothing repeating yet
}