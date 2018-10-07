int D0 = ;
int D1 = ;
int D2 = ;
int D3 = ;

const int enA = ;
const int enB = ;
const int IN1 = ;
const int IN2 = ;
const int IN3 = ;
const int IN4 = ;

int headlight = ;
int taillight = ;
int horn = ;

void setup(){
  pinMode(DO, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void forward(){
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void rightaxial(){
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void forwardright(){
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}

void leftaxial(){
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void forwardleft(){
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void reverse(){
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void reverseright(){
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}

void reverseleft(){
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void stp()
{
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}

void headlight(){
  digitalWrite(headlight, HIGH);
}

void tailight(){
  digitalWrite(taillight, HIGH);
}

void nolights(){
  digitalWrite(headlight, LOW);
  digitalWrite(taillight, LOW);
}

void loop(){
  if(D0 == 0 && D1 == 0 && D2 == 0 && D3 == 1){    //1
    forwardleft();
  }

  else if(D0 == 0 && D1 == 0 && D2 == 1 && D3 == 0){  //2
    fwd();
  }

  else if(D0 == 0 && D1 == 0 && D2 == 1 && D3 == 1){  //3
     forwardright();
  }

  else if(D0 == 0 && D1 == 1 && D2 == 0 && D3 == 0){  //4
    leftaxial();
  }

  else if(D0 == 0 && D1 == 1 && D2 == 0 && D3 == 1){  //5
    stp();
  }

  else if(D0 == 0 && D1 == 1 && D2 == 1 && D3 == 0){  //6
    rightaxial();
  }

  else if(D0 == 0 && D1 == 1 && D2 == 1 && d3 == 1){  //7
    reverseleft();  
  }

  else if(D0 == 1 && D1 == 0 && D2 == 0 && D3 == 0){  //8
    reverse();
  }

  else if(D0 == 1 && D1 == 0 && D2 == 0 && D3 == 1){  //9
     reverseright();
  }

  else if(D0 == 1 && D1 == 0 && D2 == 1 && D3 == 0){  //0
    nolights();
  }

  else if(D0 == 1 && D1 == 0 && D2 == 1 && D3 == 1){  //*
    headlight();
  }

  else if(D0 == 1 && D1 == 1 && D2 == 0 && D3 == 0){  //#
    tailligh();
  }
}  

