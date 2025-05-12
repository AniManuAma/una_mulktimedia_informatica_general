#include <iostream>
#include <string>
#include <unistd.h> // Para usar sleep()
#include <cstdlib>  // Para system("clear")

using namespace std;

int main() {
    int opcionMenu;
    bool salir = false;
    
    while (!salir) {
        // Variables reiniciadas cada nueva partida
        string respuesta;
        float tiempoRestante = 10; // Tiempo inicial
        bool escape = false;

        // Menú principal
        cout << R"(                                                                                                    
                       ......................................................................       
                    .;;;,,,,,,,,,,,,,,,,,,,,,,,,''''''''''''''''''''''''''''''''''''.......,::.     
                   .c:.;ll:..;lllc.   .clo;.;lllllooooooc..cooooooooool'.:llllllllll;.      .o:     
                   ,l.:XWWx.;KWWWWx.  lWWWo,OWWWWMWWWMWWO.lWWWWWWWWWWWK,;XWWWWWWWWMMNO,     'o'     
                  .c;.kWWX:.oWMWWWNl 'OWWK;.clo0WWWWOoll'.OWWWOo      ;.oWWWKl;  dXWWWo     :c      
                  ;l.:NWWx.,KWMWWWWKcoNWWx.   'OWWWX:    :NWWN0xxxxx:  'OWWWk    oXWWX;    .l,      
                 .l;.xWWN: oWWWOxNWWXXWMN:    cNWWMk.   .xMWWWNXXNNXl  cNWWWNXXXNWWXO;     :c.      
                 :c.;XWWk.,KWWX:.kNWWWWWO.   .xWWNXl    ,KWWNx:     . .kWWWXXWWWWNx:....  .l,       
            ....,l'.xWWNc.oWWWx. ,0WWWMNc    ;KWWOl.    lWWWWX000000o.,KWWNl.cONWWK000Ok, ;l.       
         ;:,,,,;,. ,OKKx..xKK0:   :0XKKk.    cKKKc.    .dKKKKKKKKKK0c :KKKk,  .;oOKKKKKx..l;        
        'l. .......,;;;,.';;'.    .,::c:'..  ..... ...........,;;;,.  ....'............. ,l.        
        c: .kKKKKXXKKXKKXKK0;  .;lk0XNNXXKOd;.   ,dOKKKKo.   .dKKKd.    .l0KKXXXO,       c:         
       'l. :KNXXNXNWWWWWWWNk'.l0NWWNKOOKNWWWNk.  oNWWWWWNo.  ;XWWWo    .oNWWWMWWWl      'o'         
       cc  ...''';dXWNWMNOc.;ONWNOl,....,kWWWWd.'0MWWMWWWNl .xWWMK,   .dNMMXOXWWWk.     cc          
      ,l.      .cONWWWKd,. 'OWWWk.       ;KWWWx.cNWMWWWWMWXc;0WWMd.  .kWMWNo'dWWWX;    .l'          
      cc    .,oKWWWNOl.    lNWWNc        cNWWNl.xWWWWKd0MWWX0NWWX:  'OWWMWx  lWWWWo    cc           
     'l'  .cONWWWNk:..  .  oWMWWx.     .lKWWNx.;XMMWWx.:XWWWWWWWk. ,OWWWMWKO0KWWWWO.  .l,           
    .l: .cKWWWWWWN0kOOOOx' 'OWWWN0xdddkKNWWKl..dWWWMX:  cXWWWWWNl ;0WWWNKKKKKKXWWMX;  :l            
    ,o' 'OMWWMWWMMMWWWWMk.  .o0NWWMMMWWNKkc.  ;KWWMWk.  .oNWWWWO,:KWWW0:......oNWWWo .l,            
    ,l' .;c::c::::::::::'     .':coooc:,.     .:::::'    .;::::'.,::::.       .;:::'.:c.            
     ,:,,,,,,,,,,,,,,,,,,,;,,,,,,,,,,,,,,;,,,;,,,;;;,,,,,,;,,,;,,;;,,,,,,,,,,,,,;,,;:;.             
          .  .  .......  ...................... ....................................                
                                                                                                    
                                                                                                    )" << endl;
        cout << "\n+------------------------------------------+\n";
        cout << "|       INTERZONA: PRUEBA CERO            |\n";
        cout << "|     \"La inactividad es una elección\"     |\n";
        cout << "+------------------------------------------+\n";
        cout << "1. Iniciar la prueba\n";
        cout << "2. Ver instrucciones\n";
        cout << "3. Salir del juego\n";
        cout << "Elegí una opción: ";
        cin >> opcionMenu;

        switch (opcionMenu) {
            case 1: // Iniciar juego
                system("clear");
                
                // Cuenta regresiva inicial
                for (int i = 3; i > 0; i--) {
                    cout << "Comenzando en " << i << "...\n";
                    sleep(1);
                }
                
                // Introducción a la historia
                cout << R"(                                                                                                    
                                                                                                    
                                      .''.                                     ..',,;;,.            
                                     .lKKkoc:,,.                              ,kKKXXXNKc            
                         ...          :KXXKkkd;.                             .kNXXXXXXXx'         .,
                        .okOd:;,.     'cloc.                                .;0NXNNNNXXk,     ...;kX
                         ;dkOOKXOl'                                        .dKXNXNNXNXo. .  'd0kkKXN
                            ..';;;'.                                .''..  'kNXXNNNXNXdcxkoo0NNNNXXX
                                                                  .:OXKKkclOXXXNXNNXNXXXXXNNNXXNNX0k
        ...                                                       .xNXXNNXXNXXNNXXXNXXXXKOxoxkdoo:. 
      .:xOOdl;.                              .''''''...         .,xXNXXNNNXXNXXXXXXXXNNk,.   .      
      'xXKNXXXl                             .;'      .'.     .;xO00OddkKXXNXXNX0OkOOxdl,            
       .xXXXKXO;  ..                       .;.        ..      .,'... .c0XKKKK0o. ...                
.       .oKXXXXKxdOOd;.                   .:'          ..            '::,.''...                     
0xc' .,c;cOXXXXXNXXXNK:                   .:'         .,,                                           
XXX0ddKNXXXNXXXNXXXXNXd.                    ',.      .'.                                            
0XNNNXXXXXXXXNXXXXXXN0:                      ':.    ':.                                             
.,cok00KXXXXXXNNXXXXXX0dcoxxd,           ..'','     .''''.                     ,coc,.   ...         
     ..;kXNNXXKxxk00KNNNXXXNN0dl;.     ',''..          ..'''..               .c0NNNKdclxOxc.        
       .;odxkOk;....,clldxOx:,;cc'   .;,                   .,,           ....:0NXNNNXKK0o.          
             ...                     ,;                     .;.     ..':d0K0OKXNN0o:,.'.            
                                    .:.                      ,,     ':::cccoolccc,                  
                                    ;;                       .,.                            .';,.':o
                     ......        .c'                        ';.                         .;xKXXKXNN
:,.':c:,.            ':clxdlc;'.   .,;.                      .;'                 ...';cooxOXNNNNNNNN
XXKXXNXXOo:;;,.          ...'...    .;.  ..              ..  ';                  .;:loooollooooddkKN
XXXNXXXNXXK0Okdol:,.                ':. .:.              ':. .:'.....',,'''...       ..',,,,:odxkKXX
XXXNXXXXXXOocccccc:;'.....':coooc::;l:  'c.              'c.  l00KKKKKOxooolc:,''';oxOKXXXXXXNNNXXNX
XXXXXXXXXNNNNXXXKK000000OOOO0KXXNNXXXc  ;l.              .l,  lXXXXXXXXKKKKKKKXXXXXXXXXXXXXXNNNNNNNN
XXXXXXXNNNXXXNNXXXXXXXXXXXXXXXXXXNXXXc  cl                lc  lXNNXXXXXXXNXXXXXNXXXXXXXXXNNNNNNNNNNX
NNNNNNNXXNNNNNNNNXXNNNNXXNNNXXXXXXXXXl .dc                co .dNXXNNNXXXNNNNNNNNNNNNNNNNNNNNNNNNNNNN
;;;;;;;::::::ccccccclllllllllllllllox: .xl                cd..oxlooolllollllllllllllllllllllllllllll
                                    ';  cl.               cc .;.                                    
                                    ',  .'                '.  ,.                                    
                             ....',cx: .;,       .        ,;..co;'...                               
                         ..',:oxkOXXX0dld:      .;,.      cocdKNXKkdc;'..                           
                       .,codxk0KKKKXXXXNXc      ,o:.     .oNXXXXXXK0Oxo:;,.                         
                    ....;:clodk0K00XXXXXXl      :xl'     .xNXXXKKXK0Okdooolc;''''..                 
                ..,cdkOKXNXXNXXXXXXNXXXXXo.     l0x,     'ONXXXXXXXNNXXXXXXXXKko:,.                 
                   ..',:llodkk0KKK0KXXXXNd.    .dX0:     ,0XXXKK00K0kodkOOkoc;.                     
                 .':c:::ccccl:;dKKOOKXXXNk.    .kNXc     :KXXXXXNXXXKOkOOkO00kxdol,'..              
          .;;:ccox0XXXXXXXXXXOk0XXXXXXXXNk.    ,0NXl     cXXXXXXXXKXNXXXXOdox0kdolcc;.              
          .;:dkO0KKXNNXK0OkKXXXXXXXXXXXXNk.    ,0NNd.    cXXXXXXXXXXXXXX0oloxOOdocc;'.              
               ...,:clodxdxO0000KXKKXXXXNO'    ;KNNo.    cKXXXXX00KK0Okkkoo0XKK0xlol;.              
               ..';;'':oxxOXXXXXXXXXXXXXXO'    ,0NXl     lXXXXXX0O00Odc;',;,''...                   
               .':clloool:,:xKXXKKXXXXXXX0,    'OXKc    .oXXXXXXXXNXXX0Oxl;.                        
                       ..  .cx0KKXXKXXXXXK:    'OXKc    .xXXXXXXKkdol;...                           
                              .':ldkKXXXXKc    'OXKc    .OXXKK0Oxo:.                                
                                   .lx0XXKl    .OX0:    'ON0l'..                                    
                                    .;xKXXl    .kKO;    ,0Kl.                                       )" << endl;
                cout << "\n** Bienvenido a la INTERZONA **\n";
                sleep(2);
                cout << "Te despertás en un lugar desconocido...\n";
                sleep(2);
                cout << "El tiempo corre en tu contra.\n";
                sleep(2);
                
                // Bucle principal del juego
                while (tiempoRestante > 0 && !escape) {
                    cout << "\nTe quedan " << tiempoRestante << " minutos. ¿Qué hacés?\n";
                    cout << "A) Intentás buscar una salida.\n";
                    cout << "B) Esperás a que algo suceda\n";
                    cout << "C) Llamás por ayuda\n";
                    cout << "Elegí una opción (A/B/C): ";
                    cin >> respuesta;

                    // Procesar elección del jugador
                    if (respuesta == "A" || respuesta == "a") {
                        // Opción A: Buscar salida
                        cout << "\nDecidiste intentar escapar.\n";
                        tiempoRestante -= 3;
                        cout << "\nPresiona ENTER para continuar...";
                        system("clear");
                        cin.get();
                        
                        // Escenario de la puerta
                        system("clear");
                        cout << "\nTe quedan " << tiempoRestante << " minutos.\n";
                        cout << "Llegas a una puerta que se abre sola frente a vos. Entrás sin pensar demasiado...\n";
                        sleep(2);
                        cout << "Adentro hay una habitación blanca con una única pantalla encendida.\n";
                        sleep(2);
                        cout << "En la pantalla aparece el siguiente mensaje:\n";
                        sleep(2);
                        cout << "\"Para avanzar, respondé con sinceridad: ¿Cuál es tu mayor miedo?\"\n";
                        sleep(2);
                        
                        // Sub-decisión
                        cout << "\n¿Qué hacés?\n";
                        cout << "A) Decís tu mayor miedo en voz alta.\n";
                        cout << "B) Mentís y decís que no tenés miedo.\n";
                        cout << "C) Callás y salís de la sala.\n"; 
                        cout << "Elegí una opción (A/B/C): ";
                        cin >> respuesta;
                        
                        if (respuesta == "A" || respuesta == "a") {
                            cout << "\nLa pantalla parpadea. Reconoce tu miedo.\n";
                            cout << "Una voz dice: \"Respuesta aceptada.\"\n";
                            tiempoRestante -= 3;

                            //REDACTAR SITUACIÓN FINAL
                            //Preguntas
                            //Respuesta ganadora B
                            /*if (respuesta == "B" || respuesta == "b")
                            escape = true
                            */
                        } 
                        else if (respuesta == "B" || respuesta == "b") {
                            cout << "\nLa sala se enfría. Todo se oscurece por unos segundos.\n";
                            cout << "Una voz dice: \"Mentira detectada. Castigo leve.\"\n";
                            tiempoRestante -= 5;
                            
                        } 
                        else if (respuesta == "C" || respuesta == "c") {
                            cout << "\nCerraste la puerta. El pasillo se repite como un laberinto.\n";
                            tiempoRestante -= 3;
                            
                        } 
                        else {
                            cout << "Opción no válida. El tiempo pasa...\n";
                            tiempoRestante -= 4;
                        }
                        
                        cout << "\nPresiona ENTER para continuar...";
                        cin.ignore(1000, '\n');
                        cin.get();
                        
                    } 
                    else if (respuesta == "B" || respuesta == "b") {
                        // Opción B: Esperar
                        cout << "\nDecidiste esperar.\n";
                        tiempoRestante -= 2;
                        cout << R"(                                                                                                    
                                                                                                    
                                                                                                    
                                         .,:ldxkOkkxoc,:x,                                          
                                        ;0WMMMMMMMMMMMWNWOc:.                                       
                                      'd0WMMMMMMMMMMMMMMMMWO'                                       
                                      :0WWWMWNNMMMMWXKXWMMMNc                                       
                                       ;Kklo:';ol:;,..:XMMMMk.                                      
                                       ,Oo.'.   .''''.,OMMMMd.                                      
                                       ,Oxdd;. .:k0xl;.:XN00k'                                      
                                       :k;:llc   :xc.   ;l:;ko                                      
                                       cO, 'Ol           .,ck:                                      
                                       :0; .cl'         :dll,                                       
                                       .ko  .:c:.      cKd.                                         
                                        ,xl..'''.    'ox00oooc,.                                    
                                       .'xKkoc;;;:clll;.dd..,:lool;.                                
                                     'ldoc'.'kNxc:;,. .ox'      .;od,                               
                                   .ok:.     .odoccclooc.          :Oc                              
                    .'''',,,'''',';xx.         .,;;;,.        ',    cOl'''''''',,,,,,,,,'''.        
                   .k0ooooooooooodKO. ,d'                    .ko    .xXxoooooooooooooooookXl        
                   ,Kl           :O;  'Oc                    .Ol     ;O:                 cNl        
                   :K:          'kl   .xx.                   .ko     .xd                 oNc        
                   lXl''...'''',xd.    c0;                    dx.     cO;...............'kX;        
                   ,dooxKXkoood00'     :Xd                    lO.     ,0Ooooooooood0X0doodl.        
                       ,KX;   ,Oc ..  .xX0;                   :0o,'.  .ko         .kMk.             
                       :N0'   dx..:oolxO;ok.                 .d0xlol.  dx.        '0Md              
                       lWk.  'Ol    .lKk.c0, ,cc:,,''.... .cddc.      .xd         ,KWl              
                      .xMo   'Ol   .,cd0OK0;...,:cllllldkkdc.        .ok,         :NN:              
                      .ONc  .:0Xo',do,..:0WN0kxdolllllllloo;      .;o0k.          lWK,              
                      ,KK, c0WMMMXNx.    .oXMMMMWKkd:'.   ;Ol.,cdOXWMMx.          dMO.              
                      :NO'cNMMMMMMMO. ...'ckWMMWk:'....  .lKNXWMMMMMMMO.         .kMx.              
           ..';:ccccccokxl0MMMMMMMMN:'oododxKMW0kd:dxdl,oXMMMMMMMMMMMWOlccccccccclkXKkxko.          
         ;xxxOOOxdollllllo0MMMMMMMMMd:kdxddO0NN0ko:dxxloWMMMMMMMMWNXXKxllllllloodooool:l0c          
         dO'..............lNMMMMMMMMKkO0K0kd:':xOOO000OKMMMMMMMMMO,......''''''dXl'';cldx,          
         ckooxkxllllloxkkdxNMMMMMMMMXOOKK0xoooookKXKK0OXMMMMMMMMMKoooooooooddookKxxXWO;.            
          ..:KWd......xMNl'kMMMMMMMM0;................'xMMMMMMMMNo''''''''dWWd''..;KMd              
            :XNc      cWN: lWMMMMMMM0'                 dMMMMMMMMK,        lWX;    '0Mk.             
            cWX;      :NWc :NMMMMMMMX;                .kMMMMMMMMO.        dMK,    .kMO.             
            dM0'      ;XWl '0MMMMMMMNc                '0MMMMMMMMx.       .xMO.    .dMK,             
           .xMk.      ,KMd .kMMMMMMMWl                ;KMMMMMMMMo        .OMx.     oWX;             
           .OMd.      '0Mx. oWMMMMMMMd                :NMMMMMMMWc        ,KMo      cNNc             
           ,KWl       .xWd. cKNKkdddKd                :NNKXXXXW0'        ;XWc      ;XWl             
           ;XN:        .clloo:;:;.  cO'              .xXOxkd;.xk.        cNX;      .;c.             
           ,kd.      .cooc,.        cKc            'odc'..''. c0'        oWK,                       
                     cKl.    ..;cllloc.          ;OOc        .xO'        'o:.                       
                     .clllllllll;'.              cK0o;;,,;:lool.                                    
                                                  .':clllc:,.                                       
                                                                                                    
                                                                                                    
                                                                                                    
)" << endl;
                        cout << "El tiempo pasa lentamente...\n";
                        cout << "\nPresiona ENTER para continuar...";
                        cin.ignore(1000, '\n');
                        cin.get();
                    } 
                    else if (respuesta == "C" || respuesta == "c") {
                        // Opción C: Pedir ayuda
                        system("clear");
                        tiempoRestante -= 3;
                        cout << "\nTe quedan " << tiempoRestante << " minutos.\n";
                        cout << "Llamaste por ayuda... pero nadie responde.\n";
                        sleep(2);
                        cout << R"(                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
                        'xOkOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOx'                        
                        :NMMMMMMMMMMMMMMMMMMMMWNXXKNWMMMMMMMMMMMMMMMMMMMMMN:                        
                        :NMMMMMMMMMMMMMMMMMMWO:'...'lONMMMMMMMMMMMMMMMMMMMN:                        
                        :NMMMMMMMMMMMMMMMMMM0'       .xMMMMMMMMMMMMMMMMMMMN:                        
                        :NMMMMMMMMMMMMMMMMMMO.       .xMMMMMMMMMMMMMMMMMMMN:                        
                        :NMMMMMMMMMMMMMMMMMMk.        oWMMMMMMMMMMMMMMMMMMN:                        
                        :NMMMMMMMMMMMMMMMMMMXd.      :KMMMMMMMMMMMMMMMMMMMN:                        
                        :NMMMMMMMMMMMMMMMMMMWK;      :k0XWMMMMMMMMMMMMMMMMN:                        
                        :NMMMMMMMMMMMMMMN0xc,.         ..,:oKWMMMMMMMMMMMMN:                        
                        :NMMMMMMMMMMMMWk,                   '0MMMMMMMMMMMMN:                        
                        :NMMMMMMMMMMMM0'                     :XMMMMMMMMMMMN:                        
                        :NMMMMMMMMMMMNl                       oWMMMMMMMMMMN:                        
                        :NMMMMMMMMMMMk.                       .kWMMMMMMMMMN:                        
                        :NMMMMMMMMMM0'                         :NMMMMMMMMMN:                        
                        :NMMMMMMMMMMk.   .;.             .l:   'OMMMMMMMMMN:                        
                        :NMMMMMMMMMK;   .k0,             '0X;   cNMMMMMMMMN:                        
                        :NMMMMMMMMWl    oWX;             .OMx.  ,KMMMMMMMMN:                        
                        :NMMMMMMMM0'   cXMK,             ;KMNc  '0MMMMMMMMN:                        
                        :NMMMMMMMMx. .lNMM0'             ;XMMO. '0MMMMMMMMN:                        
                        :NMMMMMMMNc .oNMMMd              ,KMMK; '0MMMMMMMMN:                        
                        :NMMMMMMMO. ,KMMMNc              ,KMWd. .xMMMMMMMMN:                        
                        :NMMMMMMK;  .dWMMK,              ,KM0,   lWMMMMMMMN:                        
                        :NMMMMMMx.  .dWMMk.      ..      ;XMkc;..xWMMMMMMMN:                        
                        :NMMMMMMx. ;0WMMMd.     ,ol.     cWMNx;:kWMMMMMMMMN:                        
                        :NMMMMMWl ,0MMMMMo      o0d'     lWMWXXWMMMMMMMMMMN:                        
                        :NMMMMMX:.dMMMMMWl     ,KKk,     dMMMMMMMMMMMMMMMMN:                        
                        :NMMMMMW0ONMMMMMNc    .dWNK:    .kMMMMMMMMMMMMMMMMN:                        
                        :NMMMMMMMMMMMMMMN:    ,KMWXc    .OMMMMMMMMMMMMMMMMN:                        
                        :NMMMMMMMMMMMMMMX;    '0MWNc    .OMMMMMMMMMMMMMMMMN:                        
                        :NMMMMMMMMMMMMMMWo    .dMWXc    .OMMMMMMMMMMMMMMMMN:                        
                        :NMMMMMMMMMMMMMMMX:    cNNK:    ,KMMMMMMMMMMMMMMMMN:                        
                        :NMMMMMMMMMMMMMMMMO'   ,KXO;    cWMMMMMMMMMMMMMMMMN:                        
                        :NMMMMMMMMMMMMMMMMWo    o0k;   .dMMMMMMMMMMMMMMMMMN:                        
                        :NMMMMMMMMMMMMMMMMM0'   ;xd,   .OMMMMMMMMMMMMMMMMMN:                        
                       ,kWMMMMMMMMMMMMMMMMMX;  .dk:.   ;XMMMMMMMMMMMMMMMMMWk,                       
                    .:kNMMMMMMMMMMMMMMMMMMMx.  ,Kd.    lWMMMMMMMMMMMMMMMMMMMNk:.                    
                  'oKWMMMMMMMMMMMMMMMMMMMMWl  .dNl    .dWMMMMMMMMMMMMMMMMMMMMMWKo'                  
               .;xNMMMMMMMMMMMMMMMMMMMMMMMMk,;kWN:    .dWMMMMMMMMMMMMMMMMMMMMMMMMNk:.               
             'l0WMMMMMMMMMMMMMMMMMMMMMMMWKo'.;0M0'     .xWMMMMMMMMMMMMMMMMMMMMMMMMMW0o'             
          .;xXMMMMMMMMMMMMMMMMMMMMMMMMW0c.   lNMx.      .dNMMMMMMMMMMMMMMMMMMMMMMMMMMMNx;.          
        .l0WMMMMMMMMMMMMMMMMMMMMMMMMNk:.    '0MWl         ,kNMMMMMMMMMMMMMMMMMMMMMMMMMMMW0l.        
     .;xXMMMMMMMMMMMMMMMMMMMMMMMMMXx,      .dWMX;           :0WMMMMMMMMMMMMMMMMMMMMMMMMMMMMXx;.     
   .lOWMMMMMMMMMMMMMMMMMMMMMMMMWKo'        :XMMO.            .cKWMMMMMMMMMMMMMMMMMMMMMMMMMMMMW0l.   
 ;xXMMMMMMMMMMMMMMMMMMMMMMMMMW0c.         .kMMMd               .oXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMXx;.
ONMMMMMMMMMMMMMMMMMMMMMMMMMNO:.           lWMMN:                 'xNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNO
MMMMMMMMMMMMMMMMMMMMMMMMMMXo.            .OMMMK,                   cXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
)" << endl;
                        cout << "Escuchás pasos... Se acerca alguien, .\n";
                        sleep(2);
                        
                        // Sub-decisión
                        cout << "\nLa persona intenta atacarte. ¿Qué hacés?\n";
                        cout << "A) Atacás primero\n";
                        cout << "B) Intentás defenderte\n";
                        cout << "C) Escapás\n";
                        cout << "Elegí una opción (A/B/C): ";
                        cin >> respuesta;
                        
                        if (respuesta == "C" || respuesta == "c") {
                            cout << R"(                                                                                                    
                                                                                                    
                                                                                                    
                                                        .' .lxl.    .                               
                                                     .';;:;,cON0oc:cc.                              
                                                     .l0WWWWNWMWWMWNKkdl.                           
                                                    .ckNMMMMMWMWWWWMWWXl                            
                                                    ;kNWMWWMXKWNko0KXX0O,                           
                                                    .dNWNNW0;:kc;:c'...:.                           
                                                    :0Nk;:Oo  . 'do...                              
                                                  ...'xk. ..     ...;;                              
                                 .clcc:'......   :xxoo0O:,'.        ;d,                             
                               .co;...,:ccccccccckXk,.:o,.      .',od;.                             
                             .;o:. .          .','.'l:.'ll. ... ,:dk,                               
                            ,l:.  .:.               'd;.cd. 'xkl:cc.                                
                           :l.    .cc:c;;;.          ...oo .ollkc.         .;,,:;                   
                          'ol.   'cc. .;;;,:,           .coo;..:.        .cdd;..lc.                 
                        .c;.;:..;:.      .oo.            lx'   'o'       :k;:l. .oc                 
                       ,o'    ,l,       'o:             :d.  .. ,o;    .:;cl,;' .o:                 
                       ;:',   ;d'    ..'l,             ,d;  ,o'  .;,'.:c,. ,;,;cc,                  
                        .:o. ,l'   ,lc..              .ol  'd;    .oc..     ;o;'                    
                          ';,.   .lc' .'.             co. .d:',.   ,.     'c:.                      
                                 ld. .::.           .c:. .dc .:l,       '::'                        
                                 .ll,..          .;cl'  .o:    .:c:,',;cc.                          
                                  .,ll;.        .oOc.  ,o:       .,;;:;.                            
                                    ,:clcl:'.  .ol.. .:l'                                           
                                   .d;  .':c'  :o.  ,dc.                                            
                                   .ol         ....;xx,.                                            
                                   .ol              .;lll:.                                         
               .:ccc'             .lo. .'              ..:ccc;.                                     
              .dl..;l' .          co.  ...,:,.             .'cll'                                   
              .c.   .'locc:;.    :o.      .:olcl:,..           :d,                                  
            .;'     .do. .,:ccc:ld'       ,c, .';ccccc:'.       :d.                                 
           .ol.  .. :d.      ..;kl      'lc.        .';l;.c:     ld.                                
          .oo. .;l;.',..        ..    'cc'               .oo.    .oo.                               
          .d:.;c:.   .,c:cc;'.      .:l'                  .ol.    .oc                               
           ;:::.         .,:cc:c:,;cl;                     .dc     .d:                              
                               .,,,'                        'd:     'x;                             
                                                             ,d,     :x'                            
                                                              ;d' .,col'  .,:;:c'                   
                                                               ::'cc,.'c::c:. .d:                   
                                                                 .::   ';.  .;l;                    
                                                                  cx.     ':c:.                     
                                                                  'o;   .,c,                        
                                                                   .lc;:;.                          
                                                                    .''.                            
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
)" << endl;
                            cout << "Lográs escapar corriendo por un pasillo oscuro.\n";
                            tiempoRestante -= 2;
                        }
                        else if (respuesta == "B" || respuesta == "b" || respuesta == "A" || respuesta == "a") {
                            cout << "Luchás con fuerza, pero perdés mucho tiempo...\n";
                            tiempoRestante = 0; // Pierde todo el tiempo
                        } 
                        else {
                            cout << "Opción no válida. La duda te cuesta caro...\n";
                            tiempoRestante = 0;
                        }
                        
                        cout << "\nPresiona ENTER para continuar...";
                        cin.ignore(1000, '\n');
                        cin.get();
                    } 
                    else {
                        cout << "Opción no válida. El tiempo pasa...\n";
                        tiempoRestante -= 0.5;
                        cout << "\nPresiona ENTER para continuar...";
                        cin.ignore(1000, '\n');
                        cin.get();
                    }
                } // Fin del bucle del juego
                
                // Mostrar resultado final
                system("clear");
                if (escape) {
                    cout << R"(                                                                                                  
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    
      .,:;;;;'   ,:::.     .::::,.   .;'     .,;;:;,.    .;,.     .':::. .;:;;;;;;..,;;;;;. .'.     
       oWOc:ll..xx;,ll.  ;do:;;ld,   cNK;    .kNx::cxx'  ;KNc    .dx;,lc':l:dXKl:o,.kWx::o: c0;     
       cWd     cXo   .  lKl     ..  .o0Xx.    dN:   ,0d. l0XO.   :Xo        ,Kk.   .dNc     :O;     
       lWd. .  '0Xd'   ;Kk.         ;d,dX:    dN:   ,0d ,d;oNl   'OXx,      ,Kk.   .dNc  .  ;x'     
       cNO::o,  .oKXx, cWd         .oc ;Kk.   dWd,;:xd' ll '0O'   .lKXk;    ,Kk.    dNx:cl. ,o.     
       lNd. ..    .cKK:cNx.        :Odcl0Xc   dNx;;;.  ,kdclONo     .c0Xc   ,Kk.    dNc  .. 'c.     
       cNd          :Xo'kX:       .oc...;0O. .dNc      lo...,OK,      ;Kx.  ,Kk.    dNc     ..      
       lWk,',;.;c'.'dO, .xKd;..;:'cd.    dNo..dNc     ;x,    lNx.,l,.'oO;   ;KO'   .xWd'',;.,d,     
      .;llccl:..:lcc:.    ,collc'.::.    ,oc..;o,    .:c.    'll'.:lll:.    ,lc'   .:ollcl; 'l'     
                                                                                                    
        .;::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::;.        
         ..................................................................................         
                                                                                                    
                                                                                                    
                                                                                                    
                                                                                                    )" << endl;
                    cout << "¡Has logrado escapar de la INTERZONA!\n";
                } else {
                    cout << R"(                                                                                                    
                                                                                                    
               .........''.       .'''''''.      .'.''..       .'',.  .''''''''''',''',.            
              .dKKK0KKXXXX0;     ,ONXXXXNNO;     :KXNXKc.    .'xNNWk' :XWNNNXXXXXXXXXNXd.           
            'x0NWO:'',,,,,'.   ,k0NWO;,:OWNKk,   cXWWWWX0d. ,kKNWWWO' cNMMWk,.'''''',',.            
          ,oONNx:'           'dKWWO:.   .;xWW0d, cXWMMMMMNOx0WMWMMM0' cNMMWo                        
          lWMWX:    ':;;;;;. cNWWMd       cWWWNc cXNMMWMMMMWMMWWMMM0' cNMMWOcc::::::;.              
          lWWMN:   .oKXWWWX: cNWWWk'.....'oNWWNc cNWMMMXOKWWKkOXMMM0' cNMWWXO0OO00OOx,              
          cXWMX:     .lNMWK; cNWWMNKKKKKKKNWWWNl cNWWWWo.,0Kc .kMWM0' cNMWWd.  .                    
          .'lXWKkc.   cNMWX; cNWWWO;',,'',xWMMWc cXWMWWo  ..  .kWWM0' :NMWWo                        
            .;lOMXxddoOWMWX; cNWWMd       oMWWNc cNNWWWo      .xMWW0' :NMWWKxdddddddxdd:            
               ;xxxxdxxxxxo. 'dxxx;       ;xdxd' 'odxxd;       :dddc. 'oddddddddddddddx:            
                                                                                                    
                                                                                                    
             :doddddddodd,    ;xddd,      .:ddxl.  ;dddddddddddddddd:..cxxdddddddddddo'             
          .:l0WXxdddddONWOl;. oMMMWl      .kMWWK, .oMMMW0ddddddddodd:..kWMWW0dddddd0MWkc.           
          :NWWWx.     ;KWMW0, dMMMWl      .OMWWK, .dWWMWo             .kMMMNc      oWWWWo           
          :NMMMx.     ;XMWW0, dMMMWl      .OWWMK,..xWMMMx.........    .kMWWNc    ..xWMMWo           
          :NMMMx.     ;XMMM0'.dWMWWo      .OMWWK,..dMMWMNKKKK0KK0k'   .kMMMNc   .xKNWWWWl           
          :NMMMx.     ;XMWW0' .;dNMKxc. 'oOXWO:,. .dMWWMOc::::ccc:.   .kMMMW0dddkNWO:,,,.           
          :NMWWk.     ;KWWW0,   .ldKMXdckWWOo'   ..dMMMMo             .kMMMWOo0WMMW0l;.             
          ,xOKW0;',,,,oXWXOo.      :OKNWXOx'      .dMWMMk:,,,,,,,,',. .kWMMN: ;k0NMWWNo'.           
            .oXXKKXXXKKXKl.          ;OXo.        .lNNNNNXXXXXXXXXXXo..dXNX0:   'ONXXNXK:           
             .'...........            ...          .''.''.'''''...''.  ..'...    .''''...           
                                                                                                    )" << endl;
                    cout << "El tiempo se acabó... no lograste escapar.\n";
                    cout << "Un rayo del cielo cae sobre tu cabeza. No es Dios, no es una bendición, es tu ejecución.\n";
                }
                cout << "\nPresiona ENTER para volver al menú...";
                cin.ignore(1000, '\n');
                cin.get();
                break;
                
            case 2: // Mostrar instrucciones
                system("clear");
                cout << "\n** INSTRUCCIONES **\n";
                cout << "Estás atrapado en un lugar extraño y debés tomar decisiones.\n";
                cout << "Tenés un tiempo limitado para escapar antes de que el juego termine.\n";
                cout << "Cada vez que tomes una decisión, el tiempo disminuirá.\n";
                cout << "El objetivo es escapar antes de que se acabe el tiempo.\n";
                cout << "\nPresiona ENTER para volver al menú...";
                cin.ignore(1000, '\n');
                cin.get();
                break;
                
            case 3: // Salir del juego
                salir = true;
                cout << "Gracias por jugar. ¡Hasta luego!\n";
                sleep(2);
                break;
                
            default: // Opción inválida
                cout << "Opción no válida, intentá de nuevo.\n";
                sleep(1);
        }
    }
    
    return 0;
}
