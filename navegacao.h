int power = 100;

void ligar_a() {
  RotateMotorPID(OUT_A, power, 535, 50, 50, 50);
}

void ligar_b() {
  RotateMotorPID(OUT_C, power, -535, 50, 50, 50);
}

void gira_90(){
    ligar_a();
    ligar_b();
}
task tGira_90(){
  gira_90();
}
task tGira_180(){
  gira_90();
  gira_90();
}
