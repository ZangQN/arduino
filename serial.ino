int incomingByte = 0;   // dùng để lưu giá trị được gửi

void setup() {
        Serial.begin(9600);     // mở serial với baudrate 9600
        pinMode(13, OUTPUT);
}

void loop() {
delay(1000);
        // nếu còn có thể đọc được 
        if (Serial.available() > 0) {
                // đọc chữ liệu
                incomingByte = Serial.read();

                // trả về những gì nhận được
                Serial.print("Toi nhan duoc: ");
                 Serial.println(char(incomingByte));
    if (incomingByte==97 ){
      digitalWrite(13,LOW);

               delay(2000);
                 //    Serial.println("kkkkkkkkkk");


                }else{
                  digitalWrite(13,HIGH);
                }

                if (incomingByte == -1) {
                  Serial.println("Toi khong nhan duoc gi ca");
                } 
}} 
