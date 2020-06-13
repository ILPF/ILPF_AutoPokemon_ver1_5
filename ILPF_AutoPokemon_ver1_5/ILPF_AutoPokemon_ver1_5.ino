/*************************************************
ILPF_AutoPokemon_ver1_5.ino

Developed by ILPF, 2020/06/12
*************************************************/

#include <SwitchControlLibrary.h>

#define switch_red 9
#define switch_yellow 6
#define switch_green 5
#define switch_blue 8
#define switch_white 16
#define led_red 10
#define led_yellow 7
#define led_green 4
#define led_blue 3
#define led_white 2


#define led_number 5

int i,j,k ;
int pincommand = 0 ;

void led_binarycount(int command){
  
  digitalWrite(led_red,LOW) ;
  digitalWrite(led_yellow,LOW) ;
  digitalWrite(led_green,LOW) ;
  digitalWrite(led_blue,LOW) ;
  digitalWrite(led_white,LOW) ;
  
  if((command >> 0) & 1){
    digitalWrite(led_red,HIGH) ;
  }
  if((command >> 1) & 1){
    digitalWrite(led_yellow,HIGH) ;
  }
  if((command >> 2) & 1){
    digitalWrite(led_green,HIGH) ;
  }
  if((command >> 3) & 1){
    digitalWrite(led_blue,HIGH) ;
  }
  if((command >> 4) & 1){
    digitalWrite(led_white,HIGH) ;
  }
}

int select_command(int MinN,int MaxN){
  int command ;
  int N ;
  if(MinN>MaxN){
    N = MinN ;
    MinN = MaxN ;
    MaxN = N ;
  }
  if(MinN<0){
    MinN = 0 ;
  }else if(MinN>=32){
    MinN = 31 ;
  }
  if(MaxN<0){
    MaxN = 0 ;
  }else if(MaxN>=32){
    MaxN = 31 ;
  }
  command = 1 ;
  while(digitalRead(switch_white)==HIGH){
  }
  while(digitalRead(switch_white)==LOW){

    if(digitalRead(switch_yellow)==HIGH){
      command-- ;
      while(digitalRead(switch_yellow)==HIGH){
        }
    }else if(digitalRead(switch_blue)==HIGH){
      command++ ;
      while(digitalRead(switch_blue)==HIGH){
        }
    }else if(digitalRead(switch_green)==HIGH){
      if(command==0){
        command++ ;
      }else{
        command = command << 1 ;
      }
      while(digitalRead(switch_green)==HIGH){
        }
    }else if(digitalRead(switch_red)==HIGH){
      if(command==0){
        command-- ;
      }else{
        command = command >> 1 ;
      }
      while(digitalRead(switch_red)==HIGH){
        }
    }
    if(command<MinN){
      command = MaxN ;
    }else if(command>MaxN){
      command = MinN ;
    }
    led_binarycount(command) ;
    delay(100) ;
  }
  while(digitalRead(switch_white)==HIGH){
  }
  return command ;
}

void A_(unsigned long tp,unsigned long tr){
  SwitchControlLibrary().PressButtonA();
  delay(tp);
  SwitchControlLibrary().ReleaseButtonA();
  delay(tr);
}
void B_(unsigned long tp,unsigned long tr){
  SwitchControlLibrary().PressButtonB();
  delay(tp);
  SwitchControlLibrary().ReleaseButtonB();
  delay(tr);
}
void X_(unsigned long tp,unsigned long tr){
  SwitchControlLibrary().PressButtonX();
  delay(tp);
  SwitchControlLibrary().ReleaseButtonX();
  delay(tr);
}
void Y_(unsigned long tp,unsigned long tr){
  SwitchControlLibrary().PressButtonY();
  delay(tp);
  SwitchControlLibrary().ReleaseButtonY();
  delay(tr);
}
void L_(unsigned long tp,unsigned long tr){
  SwitchControlLibrary().PressButtonL();
  delay(tp);
  SwitchControlLibrary().ReleaseButtonL();
  delay(tr);
}
void R_(unsigned long tp,unsigned long tr){
  SwitchControlLibrary().PressButtonR();
  delay(tp);
  SwitchControlLibrary().ReleaseButtonR();
  delay(tr);
}
void ZL_(unsigned long tp,unsigned long tr){
  SwitchControlLibrary().PressButtonZL();
  delay(tp);
  SwitchControlLibrary().ReleaseButtonZL();
  delay(tr);
}
void ZR_(unsigned long tp,unsigned long tr){
  SwitchControlLibrary().PressButtonZR();
  delay(tp);
  SwitchControlLibrary().ReleaseButtonZR();
  delay(tr);
}
void Minus_(unsigned long tp,unsigned long tr){
  SwitchControlLibrary().PressButtonMinus();
  delay(tp);
  SwitchControlLibrary().ReleaseButtonMinus();
  delay(tr);
}
void Plus_(unsigned long tp,unsigned long tr){
  SwitchControlLibrary().PressButtonPlus();
  delay(tp);
  SwitchControlLibrary().ReleaseButtonPlus();
  delay(tr);
}
void LClick_(unsigned long tp,unsigned long tr){
  SwitchControlLibrary().PressButtonLClick();
  delay(tp);
  SwitchControlLibrary().ReleaseButtonLClick();
  delay(tr);
}
void RClick_(unsigned long tp,unsigned long tr){
  SwitchControlLibrary().PressButtonRClick();
  delay(tp);
  SwitchControlLibrary().ReleaseButtonRClick();
  delay(tr);
}
void Home_(unsigned long tp,unsigned long tr){
  SwitchControlLibrary().PressButtonHome();
  delay(tp);
  SwitchControlLibrary().ReleaseButtonHome();
  delay(tr);
}
void Capture_(unsigned long tp,unsigned long tr){
  SwitchControlLibrary().PressButtonCapture();
  delay(tp);
  SwitchControlLibrary().ReleaseButtonCapture();
  delay(tr);
}
void Up_(unsigned long tp,unsigned long tr){
  SwitchControlLibrary().MoveHat(0);
  delay(tp);
  SwitchControlLibrary().MoveHat(8);
  delay(tr);
}
void UpRight_(unsigned long tp,unsigned long tr){
  SwitchControlLibrary().MoveHat(1);
  delay(tp);
  SwitchControlLibrary().MoveHat(8);
  delay(tr);
}
void Right_(unsigned long tp,unsigned long tr){
  SwitchControlLibrary().MoveHat(2);
  delay(tp);
  SwitchControlLibrary().MoveHat(8);
  delay(tr);
}
void DownRight_(unsigned long tp,unsigned long tr){
  SwitchControlLibrary().MoveHat(3);
  delay(tp);
  SwitchControlLibrary().MoveHat(8);
  delay(tr);
}
void Down_(unsigned long tp,unsigned long tr){
  SwitchControlLibrary().MoveHat(4);
  delay(tp);
  SwitchControlLibrary().MoveHat(8);
  delay(tr);
}
void DownLeft_(unsigned long tp,unsigned long tr){
  SwitchControlLibrary().MoveHat(5);
  delay(tp);
  SwitchControlLibrary().MoveHat(8);
  delay(tr);
}
void Left_(unsigned long tp,unsigned long tr){
  SwitchControlLibrary().MoveHat(6);
  delay(tp);
  SwitchControlLibrary().MoveHat(8);
  delay(tr);
}
void UpLeft_(unsigned long tp,unsigned long tr){
  SwitchControlLibrary().MoveHat(7);
  delay(tp);
  SwitchControlLibrary().MoveHat(8);
  delay(tr);
}
void Nothing_(unsigned long t){
  SwitchControlLibrary().MoveHat(8);
  delay(t);
}

void Forward1Day(){
  A_(50,350) ;
  Right_(50,50) ;
  Right_(50,50) ;
  Up_(50,50) ;
  Right_(50,50) ;
  Right_(50,50) ;
  Right_(50,50) ;
  A_(50,350) ;
}
void Forward1Month(){
  A_(50,350) ;
  Right_(50,50) ;
  Right_(50,50) ;
  Up_(50,50) ;
  Left_(50,50) ;
  Up_(50,50) ;
  Right_(50,50) ;
  Right_(50,50) ;
  Right_(50,50) ;
  Right_(50,50) ;
  A_(50,350) ;
}

void Forward1Year(){
  A_(50,350) ;
  Right_(50,50) ;
  Right_(50,50) ;
  Up_(50,50) ;
  Left_(50,50) ;
  Up_(50,50) ;
  Left_(50,50) ;
  Up_(50,50) ;
  Right_(50,50) ;
  Right_(50,50) ;
  Right_(50,50) ;
  Right_(50,50) ;
  Right_(50,50) ;
  A_(50,350) ;
}

void ClockForward1Day(){
  Home_(50,1450) ;
  Down_(50,50) ;
  Right_(50,50) ;
  Right_(50,50) ;
  Right_(50,50) ;
  Right_(50,50) ;
  A_(50,950) ;
  Down_(50,50) ;
  Down_(50,50) ;
  Down_(50,50) ;
  Down_(50,50) ;
  Down_(50,50) ;
  Down_(50,50) ;
  Down_(50,50) ;
  Down_(50,50) ;
  Down_(50,50) ;
  Down_(50,50) ;
  Down_(50,50) ;
  Down_(50,50) ;
  Down_(50,50) ;
  Down_(50,50) ;
  Right_(50,150) ;
  Down_(50,50) ;
  Down_(50,50) ;
  Down_(50,50) ;
  Down_(50,50) ;
  A_(50,250) ;
  Down_(50,50) ;
  Down_(50,50) ;
  Forward1Day() ;
  Home_(50,1450) ;
  Home_(50,1450) ;
}

void ClockForward1Month(){
  Home_(50,1450) ;
  Down_(50,50) ;
  Right_(50,50) ;
  Right_(50,50) ;
  Right_(50,50) ;
  Right_(50,50) ;
  A_(50,950) ;
  Down_(50,50) ;
  Down_(50,50) ;
  Down_(50,50) ;
  Down_(50,50) ;
  Down_(50,50) ;
  Down_(50,50) ;
  Down_(50,50) ;
  Down_(50,50) ;
  Down_(50,50) ;
  Down_(50,50) ;
  Down_(50,50) ;
  Down_(50,50) ;
  Down_(50,50) ;
  Down_(50,50) ;
  Right_(50,150) ;
  Down_(50,50) ;
  Down_(50,50) ;
  Down_(50,50) ;
  Down_(50,50) ;
  A_(50,250) ;
  Down_(50,50) ;
  Down_(50,50) ;
  Forward1Month() ;
  Home_(50,1450) ;
  Home_(50,1450) ;
}

void ClockForward1Year(){
  Home_(50,1450) ;
  Down_(50,50) ;
  Right_(50,50) ;
  Right_(50,50) ;
  Right_(50,50) ;
  Right_(50,50) ;
  A_(50,950) ;
  Down_(50,50) ;
  Down_(50,50) ;
  Down_(50,50) ;
  Down_(50,50) ;
  Down_(50,50) ;
  Down_(50,50) ;
  Down_(50,50) ;
  Down_(50,50) ;
  Down_(50,50) ;
  Down_(50,50) ;
  Down_(50,50) ;
  Down_(50,50) ;
  Down_(50,50) ;
  Down_(50,50) ;
  Right_(50,150) ;
  Down_(50,50) ;
  Down_(50,50) ;
  Down_(50,50) ;
  Down_(50,50) ;
  A_(50,250) ;
  Down_(50,50) ;
  Down_(50,50) ;
  Forward1Year() ;
  Home_(50,1450) ;
  Home_(50,1450) ;
}

void AutoSave(){
  X_(50,950) ;
  R_(50,2750);
  A_(50,2750) ;
}

void ManualMode(){
  int pause = 1 ;
  int count = 0 ;
    while(pause){
      if((count%10)<5){
        digitalWrite(led_green,HIGH) ;
        digitalWrite(led_white,HIGH) ;
        digitalWrite(led_yellow,HIGH) ;
        digitalWrite(led_blue,HIGH) ;
        digitalWrite(led_red,HIGH) ;
      }else{
        digitalWrite(led_green,LOW) ;
        digitalWrite(led_white,LOW) ;
        digitalWrite(led_yellow,LOW) ;
        digitalWrite(led_blue,LOW) ;
        digitalWrite(led_red,LOW) ;
      }
      if(digitalRead(switch_white)==HIGH){
        pause = 0 ;
        digitalWrite(led_green,LOW) ;
        digitalWrite(led_white,LOW) ;
        digitalWrite(led_yellow,LOW) ;
        digitalWrite(led_blue,LOW) ;
        digitalWrite(led_red,LOW) ;
        while(digitalRead(switch_white)==HIGH){
        }
      }else if(digitalRead(switch_green)==HIGH){
        digitalWrite(led_green,HIGH) ;
        digitalWrite(led_white,LOW) ;
        digitalWrite(led_yellow,LOW) ;
        digitalWrite(led_blue,LOW) ;
        digitalWrite(led_red,LOW) ;
        Down_(50,50) ;
        while(digitalRead(switch_green)==HIGH){
        }
        digitalWrite(led_green,LOW) ;
      }else if(digitalRead(switch_red)==HIGH){
        digitalWrite(led_red,HIGH) ;
        digitalWrite(led_white,LOW) ;
        digitalWrite(led_yellow,LOW) ;
        digitalWrite(led_blue,LOW) ;
        digitalWrite(led_green,LOW) ;
        A_(50,50) ;
        while(digitalRead(switch_red)==HIGH){
        }
        digitalWrite(led_red,LOW) ;
      }else if(digitalRead(switch_yellow)==HIGH){
        digitalWrite(led_yellow,HIGH) ;
        digitalWrite(led_white,LOW) ;
        digitalWrite(led_green,LOW) ;
        digitalWrite(led_blue,LOW) ;
        digitalWrite(led_red,LOW) ;
        B_(50,50) ;
        while(digitalRead(switch_yellow)==HIGH){
        }
        digitalWrite(led_yellow,LOW) ;
      }else if(digitalRead(switch_blue)==HIGH){
        digitalWrite(led_blue,HIGH) ;
        digitalWrite(led_white,LOW) ;
        digitalWrite(led_yellow,LOW) ;
        digitalWrite(led_green,LOW) ;
        digitalWrite(led_red,LOW) ;
        Up_(50,50) ;
        while(digitalRead(switch_blue)==HIGH){
        }
        digitalWrite(led_blue,LOW) ;
      }
      count++ ;
      delay(100) ;
    }
}

void RepeatA(){
  int count = 0 ;
  for(count=0;count<10;count++){
    if(digitalRead(switch_red)==HIGH){
      while(digitalRead(switch_red)==HIGH){
      }
      ManualMode() ;
    }
    if((count%10)<5){
      digitalWrite(led_red,HIGH) ;
    }else{
      digitalWrite(led_red,LOW) ;
    }
    A_(50,50) ;
  }
}

void AutoHatching_route5(){
  int n = 1 ;
  int t = 0 ;
  n = select_command(1,30) ;
  i = 0 ;
  while(i<n){
    j = 0 ;
    while((j<5)&&(i<n)){
      led_binarycount(n-i) ;
      B_(50,1450) ;
      B_(50,1450) ;
      B_(50,1450) ;
      X_(50,950) ;
      Left_(950,50);
      Up_(950,50);
      Down_(50,450);
      A_(50,2750) ;
      UpRight_(60,200) ;
      A_(50,750) ;
      A_(50,3250) ;
      SwitchControlLibrary().MoveLeftStick(0, 128);
      delay(50);
      SwitchControlLibrary().MoveLeftStick(128, 0);
      delay(450);
      SwitchControlLibrary().MoveLeftStick(128, 128);
      delay(50);
      A_(50,950) ;
      B_(50,950) ;
      Down_(50,450) ;
      Down_(50,450) ;
      A_(50,3950) ;
      B_(50,2450) ;
      B_(50,1950) ;
      B_(50,250) ;
      SwitchControlLibrary().MoveLeftStick(255, 128);
      delay(2000) ;
      for(k=0;k<1600;k++){
        t = (k % 16)/2 ;
        switch(t){
          case 0:
          SwitchControlLibrary().MoveLeftStick(255, 128);
          break;
          case 1:
          SwitchControlLibrary().MoveLeftStick(255, 255);
          break;
          case 2:
          SwitchControlLibrary().MoveLeftStick(128, 255);
          break;
          case 3:
          SwitchControlLibrary().MoveLeftStick(0, 255);
          break;
          case 4:
          SwitchControlLibrary().MoveLeftStick(0, 128);
          break;
          case 5:
          SwitchControlLibrary().MoveLeftStick(0, 0);
          break;
          case 6:
          SwitchControlLibrary().MoveLeftStick(128, 0);
          break;
          case 7:
          SwitchControlLibrary().MoveLeftStick(255, 0);
          break;
        }
        A_(50,50) ;
      }
      SwitchControlLibrary().MoveLeftStick(128, 128);
      delay(950);
      i++ ;
      j++ ;
    }
    X_(50,950) ;
    Left_(950,50);
    Up_(450,50);
    A_(50,1750) ;
    R_(50,2450) ;
    Y_(50,250) ;
    Y_(50,250) ;
    Left_(50,250) ;
    Down_(50,250) ;
    A_(50,250) ;
    Down_(850,50) ;
    A_(50,250) ;
    Down_(850,50) ;
    Right_(50,250) ;
    A_(50,950) ;
    A_(50,450) ;
    B_(50,1950) ;
  }
}

void AutoHatching_hashinoma(){
  int n = 1 ;
  int t = 0 ;
  n = select_command(1,30) ;
  i = 0 ;
  while(i<n){
    j = 0 ;
    while((j<5)&&(i<n)){
      led_binarycount(n-i) ;
      B_(50,1450) ;
      B_(50,1450) ;
      B_(50,1450) ;
      X_(50,950) ;
      Left_(950,50);
      Up_(950,50);
      Down_(50,450);
      A_(50,2750) ;
      A_(50,750) ;
      A_(50,3250) ;
      SwitchControlLibrary().MoveLeftStick(135, 255);
      delay(950);
      SwitchControlLibrary().MoveLeftStick(0, 100);
      delay(950);
      SwitchControlLibrary().MoveLeftStick(128, 128);
      delay(50);
      A_(50,950) ;
      B_(50,950) ;
      Down_(50,450) ;
      Down_(50,450) ;
      A_(50,3950) ;
      B_(50,2450) ;
      B_(50,1950) ;
      B_(50,250) ;
      SwitchControlLibrary().MoveLeftStick(255, 0);
      delay(4000) ;
      SwitchControlLibrary().MoveRightStick(0, 128);
      for(k=0;k<1300;k++){
        B_(50,50) ;
      }
      SwitchControlLibrary().MoveLeftStick(128, 128);
      SwitchControlLibrary().MoveRightStick(128, 128);
      delay(50);
      i++ ;
      j++ ;
    }
    X_(50,950) ;
    Left_(950,50);
    Up_(450,50);
    A_(50,1750) ;
    R_(50,2450) ;
    Y_(50,250) ;
    Y_(50,250) ;
    Left_(50,250) ;
    Down_(50,250) ;
    A_(50,250) ;
    Down_(850,50) ;
    A_(50,250) ;
    Down_(850,50) ;
    Right_(50,250) ;
    A_(50,950) ;
    A_(50,450) ;
    B_(50,1450) ;
  }
}

void AutoRelease(){
  int n = 1 ;
  n = select_command(1,30) ;
  B_(50,1450) ;
  B_(50,1450) ;
  B_(50,1450) ;
  B_(50,1450) ;
  X_(50,950) ;
  Left_(950,50);
  Up_(450,50);
  A_(50,1750) ;
  R_(50,1950) ;
  i = 0 ;
  while(i<n){
    j = 0 ;
    while((j<6)&&(i<n)){
      led_binarycount(n-i) ;
      A_(50,750) ;
      Up_(50,250) ;
      Up_(50,250) ;
      A_(50,950) ;
      Up_(50,250) ;
      A_(50,1450) ;
      B_(50,950) ;
      Right_(50,250) ;
      i++ ;
      j++ ;
    }
    Right_(50,450) ;
    Down_(50,450) ;
  }
}

void AutoWatt_notRank(){
  A_(50,2950) ;
  B_(50,2950) ;
  A_(50,2950) ;
  A_(50,950) ;
  A_(50,1950) ;
  ClockForward1Day() ;
  B_(50,950) ;
  A_(50,4950) ;
}

void AutoWatt_needRank(){
  A_(50,950) ;
  B_(50,2950) ;
  B_(50,2950) ;
  B_(50,1950) ;
  ClockForward1Day() ;
}

void CountWatt_notRank(){
  int n = 1 ;
  int count = 0 ;
  n = select_command(0,30) ;
  i = 0 ;
  if(n==0){
    while(1){
      AutoWatt_notRank() ;
    }
  }else{
    while(i<n){
      led_binarycount(n-i) ;
      AutoWatt_notRank() ;
      i++ ;
    }
  }
  count = 0 ;
  digitalWrite(led_red,LOW) ;
  digitalWrite(led_green,LOW) ;
  digitalWrite(led_white,LOW) ;
  digitalWrite(led_yellow,LOW) ;
  digitalWrite(led_blue,LOW) ;
  while(digitalRead(switch_white)==HIGH){
  }
  while(digitalRead(switch_white)==LOW){

    if(digitalRead(switch_red)==HIGH){
      while(digitalRead(switch_red)==HIGH){
        }
        digitalWrite(led_red,HIGH) ;
        digitalWrite(led_green,LOW) ;
        digitalWrite(led_blue,LOW) ;
        digitalWrite(led_white,LOW) ;
        count = 0 ;
        AutoSave() ;
    }else if(digitalRead(switch_green)==HIGH){
      while(digitalRead(switch_green)==HIGH){
        }
        digitalWrite(led_red,LOW) ;
        digitalWrite(led_green,HIGH) ;
        digitalWrite(led_blue,LOW) ;
        digitalWrite(led_white,LOW) ;
        count = 0 ;
        A_(50,2950) ;
        B_(50,2950) ;
        A_(50,2950) ;
        A_(50,950) ;
        A_(50,1950) ;
        ClockForward1Month() ;
        B_(50,950) ;
        A_(50,4950) ;
    }else if(digitalRead(switch_blue)==HIGH){
      while(digitalRead(switch_blue)==HIGH){
        }
        digitalWrite(led_red,LOW) ;
        digitalWrite(led_green,LOW) ;
        digitalWrite(led_blue,HIGH) ;
        digitalWrite(led_white,LOW) ;
        count = 0 ;
        A_(50,2950) ;
        B_(50,2950) ;
        A_(50,2950) ;
        A_(50,950) ;
        A_(50,1950) ;
        ClockForward1Year() ;
        B_(50,950) ;
        A_(50,4950) ;
    }
    if((count%10)<5){
      digitalWrite(led_red,HIGH) ;
      digitalWrite(led_green,HIGH) ;
      digitalWrite(led_blue,HIGH) ;
      digitalWrite(led_white,HIGH) ;
    }else{
      digitalWrite(led_red,LOW) ;
      digitalWrite(led_green,LOW) ;
      digitalWrite(led_blue,LOW) ;
      digitalWrite(led_white,LOW) ;
    }
    delay(100) ;
    count++ ;
  }
  while(digitalRead(switch_white)==HIGH){
    digitalWrite(led_green,LOW) ;
    digitalWrite(led_white,LOW) ;
    digitalWrite(led_yellow,LOW) ;
    digitalWrite(led_blue,LOW) ;
    digitalWrite(led_red,LOW) ;
  }
}

void CountWatt_needRank(){
  int n = 1 ;
  int count = 0 ;
  n = select_command(0,30) ;
  i = 0 ;
  if(n==0){
    while(1){
      AutoWatt_needRank() ;
    }
  }else{
    while(i<n){
      led_binarycount(n-i) ;
      AutoWatt_needRank() ;
      i++ ;
    }
  }
  count = 0 ;
  digitalWrite(led_red,LOW) ;
  digitalWrite(led_green,LOW) ;
  digitalWrite(led_white,LOW) ;
  digitalWrite(led_yellow,LOW) ;
  digitalWrite(led_blue,LOW) ;
  while(digitalRead(switch_white)==HIGH){
  }
  while(digitalRead(switch_white)==LOW){

    if(digitalRead(switch_red)==HIGH){
      while(digitalRead(switch_red)==HIGH){
        }
        digitalWrite(led_red,HIGH) ;
        digitalWrite(led_green,LOW) ;
        digitalWrite(led_blue,LOW) ;
        digitalWrite(led_white,LOW) ;
        count = 0 ;
        AutoSave() ;
    }else if(digitalRead(switch_green)==HIGH){
      while(digitalRead(switch_green)==HIGH){
        }
        digitalWrite(led_red,LOW) ;
        digitalWrite(led_green,HIGH) ;
        digitalWrite(led_blue,LOW) ;
        digitalWrite(led_white,LOW) ;
        count = 0 ;
        A_(50,950) ;
        B_(50,2950) ;
        B_(50,2950) ;
        B_(50,1950) ;
        ClockForward1Month() ;
    }else if(digitalRead(switch_blue)==HIGH){
      while(digitalRead(switch_blue)==HIGH){
        }
        digitalWrite(led_red,LOW) ;
        digitalWrite(led_green,LOW) ;
        digitalWrite(led_blue,HIGH) ;
        digitalWrite(led_white,LOW) ;
        count = 0 ;
        A_(50,950) ;
        B_(50,2950) ;
        B_(50,2950) ;
        B_(50,1950) ;
        ClockForward1Year() ;
    }
    if((count%10)<5){
      digitalWrite(led_red,HIGH) ;
      digitalWrite(led_green,HIGH) ;
      digitalWrite(led_blue,HIGH) ;
      digitalWrite(led_white,HIGH) ;
    }else{
      digitalWrite(led_red,LOW) ;
      digitalWrite(led_green,LOW) ;
      digitalWrite(led_blue,LOW) ;
      digitalWrite(led_white,LOW) ;
    }
    delay(100) ;
    count++ ;
  }
  while(digitalRead(switch_white)==HIGH){
    digitalWrite(led_green,LOW) ;
    digitalWrite(led_white,LOW) ;
    digitalWrite(led_yellow,LOW) ;
    digitalWrite(led_blue,LOW) ;
    digitalWrite(led_red,LOW) ;
  }
}

void AutoChangeDate(){
  int n = 1 ;
  int count = 0 ;
  Down_(50,50) ;
  Down_(50,50) ;
  A_(50,350) ;
  Right_(50,50) ;
  Right_(50,50) ;
  Right_(50,50) ;
  Right_(50,50) ;
  Right_(50,50) ;
  A_(50,350) ;
  count = 0 ;
  digitalWrite(led_red,LOW) ;
  digitalWrite(led_green,LOW) ;
  digitalWrite(led_white,LOW) ;
  digitalWrite(led_yellow,LOW) ;
  digitalWrite(led_blue,LOW) ;
  while(digitalRead(switch_white)==HIGH){
  }
  while(digitalRead(switch_white)==LOW){

    if(digitalRead(switch_green)==HIGH){
      while(digitalRead(switch_green)==HIGH){
        }
        digitalWrite(led_green,HIGH) ;
        digitalWrite(led_blue,LOW) ;
        digitalWrite(led_white,LOW) ;
        count = 0 ;
        A_(50,350) ;
        Left_(50,50) ;
        Left_(50,50) ;
        Left_(50,50) ;
        Up_(50,50) ;
        Left_(50,50) ;
        Up_(50,50) ;
        Right_(50,50) ;
        Right_(50,50) ;
        Right_(50,50) ;
        Right_(50,50) ;
        A_(50,350) ;
    }else if(digitalRead(switch_blue)==HIGH){
      while(digitalRead(switch_blue)==HIGH){
        }
        digitalWrite(led_green,LOW) ;
        digitalWrite(led_blue,HIGH) ;
        digitalWrite(led_white,LOW) ;
        count = 0 ;
        A_(50,350) ;
        Left_(50,50) ;
        Left_(50,50) ;
        Left_(50,50) ;
        Up_(50,50) ;
        Left_(50,50) ;
        Up_(50,50) ;
        Left_(50,50) ;
        Up_(50,50) ;
        Right_(50,50) ;
        Right_(50,50) ;
        Right_(50,50) ;
        Right_(50,50) ;
        Right_(50,50) ;
        A_(50,350) ;
    }
    if((count%10)<5){
      digitalWrite(led_green,HIGH) ;
      digitalWrite(led_blue,HIGH) ;
      digitalWrite(led_white,HIGH) ;
    }else{
      digitalWrite(led_green,LOW) ;
      digitalWrite(led_blue,LOW) ;
      digitalWrite(led_white,LOW) ;
    }
    delay(100) ;
    count++ ;
  }
  while(digitalRead(switch_white)==HIGH){
    digitalWrite(led_green,LOW) ;
    digitalWrite(led_white,LOW) ;
    digitalWrite(led_yellow,LOW) ;
    digitalWrite(led_blue,LOW) ;
    digitalWrite(led_red,LOW) ;
  }
  n = select_command(0,30) ;
  i = 0 ;
  if(n==0){
    while(1){
      A_(50,350) ;
      Left_(50,50) ;
      Left_(50,50) ;
      Left_(50,50) ;
      Up_(50,50) ;
      Right_(50,50) ;
      Right_(50,50) ;
      Right_(50,50) ;
      A_(50,350) ;
    }
  }else{
    while(i<n){
      led_binarycount(n-i) ;
      A_(50,350) ;
      Left_(50,50) ;
      Left_(50,50) ;
      Left_(50,50) ;
      Up_(50,50) ;
      Right_(50,50) ;
      Right_(50,50) ;
      Right_(50,50) ;
      A_(50,350) ;
      i++ ;
    }
  }
}

void AutoTournament(){
  int count = 0 ;   
  for(count=0;count<2;count++){
    if(digitalRead(switch_red)==HIGH){
      SwitchControlLibrary().MoveLeftStick(128, 128);
      while(digitalRead(switch_red)==HIGH){
      }
      ManualMode() ;
    }
    if((count%2)<1){
      digitalWrite(led_red,HIGH) ;
    }else{
      digitalWrite(led_red,LOW) ;
    }
    SwitchControlLibrary().MoveLeftStick(155, 0);
    A_(25,25) ;
    A_(25,25) ;
    A_(25,25) ;
    B_(25,25) ;
    A_(25,25) ;
    A_(25,25) ;
    B_(25,25) ;
    A_(25,25) ;
    B_(25,25) ;
    B_(25,25) ;
  }
}

void AutoBattleTower(){
  int count = 0 ;
  for(count=0;count<30;count++){
    if((count%2)<1){
      digitalWrite(led_red,HIGH) ;
    }else{
      digitalWrite(led_red,LOW) ;
    }
    if(digitalRead(switch_red)==HIGH){
      while(digitalRead(switch_red)==HIGH){
      }
      ManualMode() ;
    }
    switch(count){
      case 0:
      A_(50,700) ;
      break ;
      case 1:
      delay(750) ;
      break ;
      case 2:
      A_(50,700) ;
      break ;
      case 3:
      delay(750) ;
      break ;
      case 4:
      A_(50,700) ;
      break ;
      case 5:
      delay(750) ;
      break ;
      case 6:
      A_(50,700) ;
      break ;
      case 7:
      delay(750) ;
      break ;
      case 8:
      Up_(50,700) ;
      break ;
      case 9:
      delay(750) ;
      break ;
      case 10:
      A_(50,700) ;
      break ;
      case 11:
      delay(750) ;
      break ;
      case 12:
      A_(50,700) ;
      break ;
      case 13:
      delay(750) ;
      break ;
      case 14:
      Up_(50,700) ;
      break ;
      case 15:
      delay(750) ;
      break ;
      case 16:
      A_(50,700) ;
      break ;
      case 17:
      delay(750) ;
      break ;
      case 18:
      A_(50,700) ;
      break ;
      case 19:
      delay(750) ;
      break ;
      case 20:
      A_(50,700) ;
      break ;
      case 21:
      delay(750) ;
      break ;
      case 22:
      A_(50,700) ;
      break ;
      case 23:
      delay(750) ;
      break ;
      case 24:
      B_(50,700) ;
      break ;
      case 25:
      delay(750) ;
      break ;
      case 26:
      Up_(50,700) ;
      break ;
      case 27:
      delay(750) ;
      break ;
      case 28:
      R_(50,450) ;
      R_(50,200) ;
      break ;
      case 29:
      delay(750) ;
      break ;
    }
  }
}

void AutoRaid(){
  A_(50,950) ;
  B_(50,2950) ;
  B_(50,2950) ;
  B_(50,1950) ;
  A_(50,1450) ;
  Down_(50,50) ;
  A_(50,950) ;
  A_(50,950) ;
  A_(50,950) ;
  A_(50,950) ;
  A_(50,950) ;
  A_(50,950) ;
  Up_(50,50) ;
  delay(1000) ;
  B_(50,1450) ;
  B_(50,1450) ;
  Up_(1050,50) ;
  Up_(50,50) ;
  B_(50,1450) ;
  A_(50,950) ;
  Down_(50,50) ;//
  A_(50,3450) ;
}

//void AutoRaid_withCatching(){
//  int FinishTime = 60 ;
//  A_(50,950) ;
//  B_(50,2950) ;
//  B_(50,2950) ;
//  B_(50,1950) ;
//  A_(50,1450) ;
//  Down_(50,50) ;
//  for(i=0;i<FinishTime;i++){
//    RepeatA() ;
//  }
//  delay(3000) ;
//  B_(50,1450) ;
//  B_(50,1450) ;
//  B_(50,1450) ;
//  A_(50,950) ;
//  A_(50,3450) ;
//}

void AutoMagicaltrading(){
  int n = 1 ;
  int x ;
  int y ;
  n = select_command(1,30) ;
  i = 0 ;
  B_(50,1450) ;
  B_(50,1450) ;
  B_(50,1450) ;
  B_(50,1450) ;
  while(i<n){
    led_binarycount(n-i) ;
    Y_(50,1950) ;
    Down_(50,450);
    A_(50,2950) ;
    for(j=0;j<i%6;j++){
      Right_(50,50) ;
    }
    for(j=0;j<i/6;j++){
      Down_(50,50) ;
    }
    A_(50,450) ;
    A_(50,450) ;
    A_(50,4950) ;
    A_(50,950) ;
    A_(50,950) ;
    A_(50,950) ;
    B_(50,1950) ;
    B_(50,1950) ;
    delay(30000) ;
    for(j=0;j<11;j++){
      Y_(50,1950) ;
      B_(50,1950) ;
    }
    i++ ;
  }
}

void RotomiID(){
  A_(50,400) ;
  B_(50,300) ;
  Down_(50,100) ;
  A_(50,650) ;
  B_(50,600) ;
  B_(50,600) ;
  B_(50,650) ;
  A_(50,600) ;
  B_(50,600) ;
  B_(50,600) ;
  B_(50,600) ;
  B_(50,600) ;
  B_(50,600) ;
  B_(50,600) ;
  B_(50,600) ;
  B_(50,600) ;
  B_(50,600) ;
  B_(50,600) ;
  B_(50,600) ;
  B_(50,600) ;
  B_(50,600) ;
  B_(50,600) ;
  B_(50,600) ;
  B_(50,600) ;
  B_(50,600) ;
  B_(50,600) ;
  B_(50,600) ;
  B_(50,600) ;
  B_(50,600) ;
  B_(50,600) ;
  B_(50,600) ;
  B_(50,600) ;
  B_(50,600) ;
  B_(50,600) ;
  ClockForward1Day() ;
}

void AutoBargain(){
  A_(50,950) ;
  A_(50,950) ;
  B_(50,950) ;
  A_(50,1950) ;
  B_(50,2450) ;
  B_(50,950) ;
  B_(50,1950) ;
  B_(50,950) ;
  B_(50,950) ;
  B_(50,950) ;
  ClockForward1Day() ;
}

void AutoBerry(){
  A_(50,950) ;
  B_(50,950) ;
  A_(50,950) ;
  B_(50,950) ;
  B_(50,950) ;
  B_(50,950) ;
  B_(50,950) ;
  B_(50,950) ;
  B_(50,950) ;
  B_(50,950) ;
  B_(50,950) ;
  B_(50,950) ;
  B_(50,950) ;
  B_(50,950) ;
  ClockForward1Day() ;
}

void AutoFeather(){
  X_(50,950) ;
  Left_(950,50);
  Up_(950,50);
  Down_(50,450);
  A_(50,2750) ;
  UpRight_(60,200) ;
  A_(50,750) ;
  A_(50,2750) ;
  SwitchControlLibrary().MoveLeftStick(255, 128);
  delay(3000);
  SwitchControlLibrary().MoveLeftStick(128, 255);
  delay(100);
  SwitchControlLibrary().MoveLeftStick(128, 128);
  delay(450);
  A_(50,1950) ;
  B_(50,950) ;
  SwitchControlLibrary().MoveLeftStick(128, 0);
  delay(1100);
  SwitchControlLibrary().MoveLeftStick(255, 128);
  delay(1500);
  SwitchControlLibrary().MoveLeftStick(128, 128);
  delay(450);
  A_(50,1950) ;
  B_(50,950) ;
  SwitchControlLibrary().MoveLeftStick(255, 128);
  delay(1450);
  SwitchControlLibrary().MoveLeftStick(128, 255);
  delay(150);
  SwitchControlLibrary().MoveLeftStick(128, 128);
  delay(450);
  A_(50,1950) ;
  B_(50,950) ;
  SwitchControlLibrary().MoveLeftStick(255, 128);
  delay(1250);
  SwitchControlLibrary().MoveLeftStick(128, 255);
  delay(150);
  SwitchControlLibrary().MoveLeftStick(128, 128);
  delay(450);
  A_(50,1950) ;
  B_(50,950) ;
  SwitchControlLibrary().MoveLeftStick(255, 128);
  delay(3200);
  SwitchControlLibrary().MoveLeftStick(128, 0);
  delay(150);
  SwitchControlLibrary().MoveLeftStick(128, 128);
  delay(450);
  A_(50,1950) ;
  B_(50,950) ;
  SwitchControlLibrary().MoveLeftStick(255, 128);
  delay(1500);
  SwitchControlLibrary().MoveLeftStick(128, 0);
  delay(1100);
  SwitchControlLibrary().MoveLeftStick(128, 128);
  delay(450);
  A_(50,1950) ;
  B_(50,950) ;
  SwitchControlLibrary().MoveLeftStick(255, 128);
  delay(3300);
  SwitchControlLibrary().MoveLeftStick(128, 255);
  delay(250);
  SwitchControlLibrary().MoveLeftStick(128, 128);
  delay(450);
  A_(50,1950) ;
  B_(50,950) ;
  SwitchControlLibrary().MoveLeftStick(255, 128);
  delay(950);
  SwitchControlLibrary().MoveLeftStick(128, 255);
  delay(50);
  SwitchControlLibrary().MoveLeftStick(128, 128);
  delay(450);
  A_(50,1950) ;
  B_(50,950) ;
  ClockForward1Day() ;
}

void AutoBattleCafe(){
  int Count = 5 ;
  int BattleTime = 90 ;
  for(i=0;i<Count;i++){
    for(j=0;j<BattleTime;j++){
      RepeatA() ;
    }
    B_(50,950) ;
    B_(50,950) ;
    B_(50,950) ;
    B_(50,950) ;
    B_(50,950) ;
    ClockForward1Day() ;
  }
  X_(50,950) ;
  Right_(950,50) ;
  Up_(1950,50) ;
  A_(50,2450) ;
  A_(50,950) ;
  A_(50,950) ;
  A_(50,950) ;
  A_(50,950) ;
  B_(50,950) ;
  Down_(50,450) ;
  A_(50,950) ;
  A_(50,950) ;
  B_(50,950) ;
  B_(50,950) ;
  B_(50,950) ;
  B_(50,950) ;
}

void setup(){
  pinMode(switch_red,INPUT) ;
  pinMode(switch_yellow,INPUT) ;
  pinMode(switch_green,INPUT) ;
  pinMode(switch_blue,INPUT) ;
  pinMode(switch_white,INPUT) ;
  pinMode(led_red,OUTPUT) ;
  pinMode(led_yellow,OUTPUT) ;
  pinMode(led_green,OUTPUT) ;
  pinMode(led_blue,OUTPUT) ;
  pinMode(led_white,OUTPUT) ;

  digitalWrite(led_red,LOW) ;
  digitalWrite(led_yellow,LOW) ;
  digitalWrite(led_green,LOW) ;
  digitalWrite(led_blue,LOW) ;
  digitalWrite(led_white,LOW) ;

  RClick_(50,50) ;
  RClick_(50,50) ;
  RClick_(50,50) ;
  RClick_(50,50) ;
  RClick_(50,50) ;
  RClick_(50,50) ;
  RClick_(50,50) ;
  RClick_(50,50) ;
  RClick_(50,50) ;
  RClick_(50,50) ;
  pincommand = select_command(0,31);
}
void loop() {
  digitalWrite(led_red,LOW) ;
  digitalWrite(led_yellow,LOW) ;
  digitalWrite(led_green,LOW) ;
  digitalWrite(led_blue,LOW) ;
  digitalWrite(led_white,LOW) ;
  switch(pincommand){
    case 0:
    ManualMode() ;
    while(digitalRead(switch_white)==HIGH){
    }
    pincommand = 32 ;
    break ;
    case 1:
    RepeatA() ;
    break ;
    case 2:
    AutoHatching_route5() ;
    break ;
    case 3:
    AutoRelease() ;
    break ;
    case 4:
    CountWatt_notRank() ;
    break ;
    case 5:
    CountWatt_needRank() ;
    break ;
    case 6:
    AutoRaid() ;
    break ;
    case 7:
    AutoChangeDate() ;
    break ;
    case 8:
    AutoMagicaltrading() ;
    break ;
    case 9:
    AutoTournament() ;
    break ;
    case 10:
    AutoBattleTower() ;
    break ;
    case 11:
    RotomiID() ;
    break ;
    case 12:
    AutoBerry() ;
    break ;
    case 13:
    AutoFeather() ;
    break ;
    case 14:
    AutoBargain() ;
    break ;
    case 15:
    AutoBattleCafe() ;
    break ;
    case 16:
    AutoHatching_hashinoma() ;
    break ;
    default:
    pincommand = select_command(0,31);
    break ;
  }
}
