#define PACHUBEFEED "THIS IS YOUR FEED"
// this API key will only work from my IP address - you need to supply your own
#define APIKEY "PUT IN YOUR OWN DAMN KEY"
int red=0;
int green=0;
int blue=0;


void setup(){
  Serial1.begin(57600);
  Serial.begin(57600);
}

void loop(){
  red = random(254);
  green = random(254);
  blue = random(254);
  Serial1.print("http://leifp.com/pachube_php/xbeeup.php?r=");
  Serial1.print(red);
  Serial1.print("&g=");
  Serial1.print(green);
  Serial1.print("&b=");
  Serial1.print(blue);
  Serial1.print("&f=");
  Serial1.print(PACHUBEFEED);
  Serial1.print("&k=");
  Serial1.println(APIKEY);
  while(Serial1.available()> 0){
    Serial.write(Serial1.read());
  }
  //counter++;
  delay(10000);
}
