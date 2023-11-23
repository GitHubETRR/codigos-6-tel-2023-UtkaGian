/*
C++:
Programa clasificador de sables laser con propiedades heredadas
(disipadores, estructura, número de hojas, materiales, época, color del cristal, estado)
Incluir la posibilidad de crear sables personalizados que hereden propiedades peesttablecidas según sus características
A futuro implementar una interfaz gráfica con ilustraciones para armarlo de forma interactiva
y generar respuestas predeterminadas según el sable creado
*/
#include <iostream>
#include <iomanip>
using namespace std;

void Selector(string);

void Intro();

class Lightsaber{
    private:
        string Crystal_Colour=NULL;
        string Appearence=NULL;
        string Structure=NULL;
        string Concept=NULL;
        string Moddifier=NULL;
        string Properties=NULL;
    public:
        void W_CC(string);
        void W_App(string);
        void W_Str(string);
        void W_Cpt(string);
        void W_Mod(string);
        void W_Prp(string);
        void Clear();
        void Print();
};

Lightsaber Sith_Saber, Jedi_Saber, Single_Bladed;
Lightsaber Curved_Hilt, Shoto, Guard_Shoto;
Lightsaber Double_Bladed, Hinged_Double_Bladed, Double_Bladed_Spinning;
Lightsaber Split_Saber, Pike, Dual_Phase;
Lightsaber Flickerphase_Blade, Broadsaber, Great_Lightsaber;
Lightsaber Crossguard, Cane, Short;
Lightsaber Lightwhip, Lightfoil, Blaster_Hybrid;
Lightsaber Rifle, Siclke_Bladed, Train;
Lightsaber Firesaber, Underwater, Dark_Saber;



Lightsaber Preset_OBJ();

int main(){
    string Key = "0";
    char Control;
    Intro();
    do{
        cout << "\n\nEnter the saber: ";
        getline(cin, Key);
        Selector(Key);
        cout << "\n\nIf you want to know about another saber, put a 'R' in the console,\nelse put whatever you want.";
        cout << "Put the control letter: ";
        cin >> Control;
        fflush(stdin);
        cout << "\n";
    }while((Control == 'R')||(Control == 'r'));
    return 0;
}

void Intro(){
    cout << "Welcome to the lightsaber database, here you can find the basic information about some of the lightsabers\n";
    cout << "that were used by the force users of out far far away galaxy.\n\n";
    cout << "To have access to the data, you must introduce in the console the name of the saber you want to know about.\n";
    cout << "But be cautious, because if you make a mistake typing the name the files will not be shown to you\n\n";
    cout << "Here are the keywords to call the sabers: \n";
    cout << "Sith saber\n";
    cout << "Jedi saber\n";
    cout << "Single bladed\n";
    cout << "Curved hilt\n";
    cout << "Shoto\n";
    cout << "Guard shoto\n";
    cout << "Double bladed\n";
    cout << "Hinged double bladed\n";
    cout << "Double bladed spinning\n";
    cout << "Split saber\n";
    cout << "Pike\n";
    cout << "Dual phase\n";
    cout << "Flickerphase blade\n";
    cout << "Broadsaber\n";
    cout << "Great lightsaber\n";
    cout << "Crossguard\n";
    cout << "Cane\n";
    cout << "Short\n";
    cout << "Lightwip\n";
    cout << "Lightfoil\n";
    cout << "Blaster hybrid\n";
    cout << "Rifle\n";
    cout << "Siclke bladed\n";
    cout << "Train\n";
    cout << "Firesaber\n";
    cout << "Underwater\n";
    cout << "Dark saber\n";
    cout << "Darth Maul saber\n";
    cout << "Darth Vader saber\n";
    cout << "Kylo Ren saber\n\n";
    cout << "Also, we must warn you that this reader is sensitive to capital letters.";
}

void Selector (string Key){
    char Flag=0;
    if(Key=="Sith saber"){
        Sith_Saber Out;
        Out.Data_SS();
        Flag=1;
    }
    if(Key=="Jedi saber"){
        Jedi_Saber Out;
        Out.Data_JS();
        Flag=1;
    }
    if(Key=="Single bladed"){
        Single_Bladed Out;
        Out.Print_SB();
        Flag=1;
    }
    if(Key=="Curved hilt"){
        Curved_Hilt Out;
        Out.Print_CH();
        Flag=1;
    }
    if(Key=="Shoto"){
        Shoto Out;
        Out.Print_S();
        Flag=1;
    }
    if(Key=="Guard shoto"){
        Guard_Shoto Out;
        Out.Print_GS();
        Flag=1;
    }
    if(Key=="Double bladed"){
        Double_Bladed Out;
        Out.Print_DB();
        Flag=1;
    }
    if(Key=="Hinged double bladed"){
        Hinged_Double_Bladed Out;
        Out.Print_HDB();
        Flag=1;
    }
    if(Key=="Double bladed spinning"){
        Double_Bladed_Spinning Out;
        Out.Print_DBS();
        Flag=1;
    }
    if(Key=="Split saber"){
        Split_Saber Out;
        Out.Print_SS();
        Flag=1;
    }
    if(Key=="Pike"){
        Pike Out;
        Out.Print_PDS();
        Flag=1;
    }
    if(Key=="Dual phase"){
        Dual_Phase Out;
        Out.Print_DP();
        Flag=1;
    }
    if(Key=="Flickerphase blade"){
        Flickerphase_Blade Out;
        Out.Print_FB();
        Flag=1;
    }
    if(Key=="Broadsaber"){
        Broadsaber Out;
        Out.Print_B();
        Flag=1;
    }
    if(Key=="Great lightsaber"){
        Great_Lightsaber Out;
        Out.Print_GL();
        Flag=1;
    }
    if(Key=="Crossguard"){
        Crossguard Out;
        Out.Print_C();
        Flag=1;
    }
    if(Key=="Cane"){
        Cane Out;
        Out.Print_Ca();
        Flag=1;
    }
    if(Key=="Short"){
        Short Out;
        Out.Print_S();
        Flag=1;
    }
    if(Key=="Lightwhip"){
        Lightwhip Out;
        Out.Print_W();
        Flag=1;
    }
    if(Key=="Lightfoil"){
        Lightfoil Out;
        Out.Print_L();
        Flag=1;
    }
    if(Key=="Blaster hybrid"){
        Blaster_Hybrid Out;
        Out.Print_BH();
        Flag=1;
    }
    if(Key=="Rifle"){
        Rifle Out;
        Out.Print_R();
        Flag=1;
    }
    if(Key=="Siclke bladed"){
        Sickle_Bladed Out;
        Out.Print_SBl();
        Flag=1;
    }
    if(Key=="Train"){
        Train Out;
        Out.Print_T();
        Flag=1;
    }
    if(Key=="Firesaber"){
        Firesaber Out;
        Out.Print_F();
        Flag=1;
    }
    if(Key=="Underwater"){
        Underwater Out;
        Out.Print_U();
        Flag=1;
    }
    if(Key=="Dark saber"){
        Dark_Saber Out;
        Out.Print_DS();
        Flag=1;
    }
    if(Key=="Darth Maul saber"){
        Darth_Maul_Saber Out;
        Out.Print_DM();
        Flag=1;
    }
    if(Key=="Darth Vader saber"){
        Darth_Vader_Saber Out;
        Out.Print_DV();
        Flag=1;
    }
    if(Key=="Kylo Ren saber"){
        Kylo_Ren_Saber Out;
        Out.Print_KR();
        Flag=1;
    }
    if(Flag==0){
        cout << "You just commited a war crime against the galaxy, a crime of insubordination.\n";
        cout << "Now, we are looking to you...\n";
    }
}

Lightsaber Preset_OBJ(){
    string INP="Red\n";
    Sith_Saber.W_CC(INP);
    INP="Solid\n";
    Sith_Saber.W_App(INP);
    INP="Fancy\n";
    Jedi_Saber.W_App(INP);
    INP="The convencional regular saber\n";
    Single_Bladed.W_Str(INP);
    INP="It has a regular curved hilt\n";
    Curved_Hilt.W_Cpt(INP);
    INP="Allow a more agressive way of combat\n";
    Curved_Hilt.W_Prp(INP);
    Split_Saber=Curved_Hilt;
    INP="Considerably short blade\n";
    Shoto.W_Cpt(INP);
    Guard_Shoto.W_Cpt(INP);
    INP="Tonfa hilt\n";
    Guard_Shoto.W_Mod(INP);
    INP="Blades in both ends\n";
    Double_Bladed.W_Str(INP);
    Split_Saber.W_Str(INP);
    INP="Two single blade sabers with a joint point\n";
    Hinged_Double_Bladed=Double_Bladed;
    Hinged_Double_Bladed.W_Cpt(INP);
    Split_Saber.W_Cpt(INP);
    INP="Double bladed with a rotative hilt\n";
    Double_Bladed_Spinning=Double_Bladed;
    Double_Bladed_Spinning.W_Cpt(INP);
    INP="Better degree control, able to spin and larger blades\n";
    Double_Bladed_Spinning.W_Prp(INP);
    INP="Curved hilts\n";
    Split_Saber.W_Mod(INP);
    Pike=Shoto;
    Pike=Double_Bladed;
    INP="Double saber with shoto blades\n";
    Pike.W_Cpt(INP);
    INP="A lightsaber with more than one kybern crystal\n";
    Dual_Phase.W_Str(INP);
    INP="The different crystals gives it more power and the option of change the large of the blade\n";
    Dual_Phase.W_Prp(INP);
    INP="It has a cracked kybern crystal inside\n";
    Flickerphase_Blade.W_Str(INP);
    INP="It would explode in combat\n";
    Flickerphase_Blade.W_Prp(INP);
    INP="It has a broader and flatter hilt\n";
    Broadsaber.W_Str(INP);
    INP="It has a larger blade\n";
    Broadsaber.W_Prp(INP);
    INP="It does not have an omnidirectional cutting edge\n";
    Broadsaber.W_Prp(INP);
    INP="It is a stronger, bigger and heavier lightsaber than the standar ones\n";
    Great_Lightsaber.W_Cpt(INP);

}