void pega(){
  power = 100;
  OnFwd(OUT_C, power);
  Wait(SEC_3);
  Float(OUT_C);
  OnRev(OUT_C, power);
  Wait(SEC_1);
  Float(OUT_C);
}
