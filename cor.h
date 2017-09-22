// essa biblioteca fornece uma função e uma tarefa que escrevem na tela do Lego a cor
// que está na frente do sensor, para uso síncrono use a função printa_cor(),
// para uso assíncrono use a tarefa tPrinta_cor

void fim_rua(){
  ClearScreen();
  OnRev(OUT_AC, 50);
  TextOut(0, 40,"preto");
}
void azul(){
  ClearScreen();
  TextOut(0, 40,"azul");
}
void verde(){
  ClearScreen();
  TextOut(0, 40,"verde");
}
void amarelo(){
  ClearScreen();
  TextOut(0, 40,"amarelo");
}
void vermelho(){
  ClearScreen();
  TextOut(0, 40,"vermelho");
}
void branco(){
  ClearScreen();
  gira_90_Hor();
  gira_90_Hor();
  OnRev(OUT_AC, 50);
  Wait(2000);
}

void printa_cor() {
    int nColor;
    // liga o sensor
    while (true) {
        nColor = Sensor(S1);
        switch(nColor) {
            case 1:fim_rua();break;
            case 2:azul();break;//azul
            case 3:verde();break;//verde
            case 4:amarelo();break;//amarelo
            case 5:vermelho();break;//vermelho
            case 6:branco();break;//branco
            default: break;
        }
        //while( Sensor(S1) == nColor );
    }
}

task tPrinta_cor(){
  printa_cor();
}
