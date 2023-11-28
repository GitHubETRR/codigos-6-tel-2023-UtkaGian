//The bird of Hermes is my name
//Eating my wings to make me tame
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


void Intro();

class Lightsaber{
    private:
        string Crystal_Colour={""};
        string Appearence={""};
        string Structure={""};
        string Concept={""};
        string Moddifier={""};
        string Properties={""};
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

Lightsaber *Selector(string);

Lightsaber Preset_OBJ();

/*
string Names[27]={
"Sith saber",
"Jedi saber",
"Single bladed",
"Curved hilt",
"Shoto",
"Guard shoto",
"Double bladed",
"Hinged double bladed",
"Double bladed spinning",
"Split saber",
"Pike",
"Dual phase",
"Flickerphase blade",
"Broadsaber",
"Great lightsaber",
"Crossguard",
"Cane",
"Short",
"Lightwip",
"Lightfoil",
"Blaster hybrid",
"Rifle",
"Siclke bladed",
"Train",
"Firesaber",
"Underwater",
"Darksaber",
};*/
int main(){
    string Key = "0";
    Lightsaber *Work=NULL;
    char Control;
    Intro();
    do{
        cout << "\n\nEnter the saber: ";
        getline(cin, Key);
        Work=Selector(Key);
        Work->Print();
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
    cout << "that were used by the force users of our far far away galaxy.\n\n";
    cout << "To have access to the data, you must introduce in the console the name of the saber you want to know about.\n";
    cout << "But be cautious, because if you make a mistake typing the name, the files will not be shown to you\n\n";
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
    cout << "Darksaber\n";
    cout << "\n";
    cout << "Also, we must warn you that this reader is sensitive to capital letters.";
}
//27
/*
int i=0
for (i; i <= 27; i++){
    if (key == Names[i]){
        flag = 1;
        break;
    }
}*/

Lightsaber *Selector(string Key){
    char Flag=0;
    Lightsaber *Select=NULL;
    if(Key=="Sith saber"){
        Select=&Sith_Saber;
        Flag=1;
    }
    if(Key=="Jedi saber"){
        Select=&Jedi_Saber;
        Flag=1;
    }
    if(Key=="Single bladed"){
        Select=&Single_Bladed;
        Flag=1;
    }
    if(Key=="Curved hilt"){
        Select=&Curved_Hilt;
        Flag=1;
    }
    if(Key=="Shoto"){
        Select=&Shoto;
        Flag=1;
    }
    if(Key=="Guard shoto"){
        Select=&Guard_Shoto;
        Flag=1;
    }
    if(Key=="Double bladed"){
        Select=&Double_Bladed;
        Flag=1;
    }
    if(Key=="Hinged double bladed"){
        Select=&Hinged_Double_Bladed;
        Flag=1;
    }
    if(Key=="Double bladed spinning"){
        Select=&Double_Bladed_Spinning;
        Flag=1;
    }
    if(Key=="Split saber"){
        Select=&Split_Saber;
        Flag=1;
    }
    if(Key=="Pike"){
        Select=&Pike;
        Flag=1;
    }
    if(Key=="Dual phase"){
        Select=&Dual_Phase;
        Flag=1;
    }
    if(Key=="Flickerphase blade"){
        Select=&Flickerphase_Blade;
        Flag=1;
    }
    if(Key=="Broadsaber"){
        Select=&Broadsaber;
        Flag=1;
    }
    if(Key=="Great lightsaber"){
        Select=&Great_Lightsaber;
        Flag=1;
    }
    if(Key=="Crossguard"){
        Select=&Crossguard;
        Flag=1;
    }
    if(Key=="Cane"){
        Select=&Cane;
        Flag=1;
    }
    if(Key=="Short"){
        Select=&Short;
        Flag=1;
    }
    if(Key=="Lightwhip"){
        Select=&Lightwhip;
        Flag=1;
    }
    if(Key=="Lightfoil"){
        Select=&Lightfoil;
        Flag=1;
    }
    if(Key=="Blaster hybrid"){
        Select=&Blaster_Hybrid;
        Flag=1;
    }
    if(Key=="Rifle"){
        Select=&Rifle;
        Flag=1;
    }
    if(Key=="Siclke bladed"){
        Select=&Siclke_Bladed;
        Flag=1;
    }
    if(Key=="Train"){
        Select=&Train;
        Flag=1;
    }
    if(Key=="Firesaber"){
        Select=&Firesaber;
        Flag=1;
    }
    if(Key=="Underwater"){
        Select=&Underwater;
        Flag=1;
    }
    if(Key=="Dark saber"){
        Select=&Dark_Saber;
        Flag=1;
    }
    if(Flag==0){
        cout << "You just commited a war crime against the galaxy, a crime of insubordination.\n";
        cout << "Now, we are looking to you...\n";
    }
    return Select;
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
    INP="Three blades making a cross\n";
    Crossguard.W_Str(INP);
    INP="It has two quillons acting as heatsinks\n";
    Crossguard.W_Cpt(INP);
    INP="It uses a cracked crystal\n";
    Crossguard.W_Cpt(INP);
    INP="It has a stronger blades\n";
    Crossguard.W_Prp(INP);
    INP="Cane cammo for lightsaber\n";
    Cane.W_Cpt(INP);
    INP="A shorther blade than a regular saber but still longer than the shoto\n";
    Short.W_Cpt(INP);
    INP="Modified blade with plasma shields that acts as a whip\n";
    Lightwhip.W_Cpt(INP);
    INP="A proto version of the shoto\n";
    Lightfoil.W_Cpt(INP);
    INP="Lightsaber with a hilt that allows to shoot with a blaster\n";
    Blaster_Hybrid.W_Str(INP);
    INP="A rifle that uses lightsabers as chambers for five powerful shots\n";
    Rifle.W_Cpt(INP);
    INP="It has its blade wielded making it a scimitar\n";
    Siclke_Bladed.W_Mod(INP);
    INP="It has a less lethal or directly a non lethal blade\n";
    Train.W_Cpt(INP);
    INP="It uses two kybern crystal\n";
    Underwater.W_Str(INP);
    INP="The crystals allows it to maintain its blade underwater\n";
    Underwater.W_Prp(INP);
    INP="Unstable blade core that spits energy in almost every impact\n";
    Firesaber.W_Cpt(INP);
    INP="It can explode in the hand of the user\n";
    Firesaber.W_Prp(INP);
    INP="It is a physic blade powered with the energy of a kybern crystal\n";
    Dark_Saber.W_Str(INP);

}

void Lightsaber::W_CC(string INPUT){
    Crystal_Colour=Crystal_Colour+INPUT;
}

void Lightsaber::W_App(string INPUT){
    Appearence=Appearence+INPUT;
}

void Lightsaber::W_Str(string INPUT){
    Structure=Structure+INPUT;
}

void Lightsaber::W_Cpt(string INPUT){
    Concept=Concept+INPUT;
}

void Lightsaber::W_Mod(string INPUT){
    Moddifier=Moddifier+INPUT;
}

void Lightsaber::W_Prp(string INPUT){
    Properties=Properties+INPUT;
}

void Lightsaber::Clear(){
    Crystal_Colour={""};
    Appearence={""};
    Structure={""};
    Concept={""};
    Moddifier={""};
    Properties={""};
}

void Lightsaber::Print(){
    if(Crystal_Colour!=""){
        cout << "Crystal colour:\n" << Crystal_Colour;
    }
    if(Appearence!=""){
        cout << "Appearence:\n" << Appearence;
    }
    if(Structure!=""){
        cout << "Structure:\n" << Structure;
    }
    if(Concept!=""){
        cout << "Conecpt:\n" << Concept;
    }
    if(Moddifier!=""){
        cout << "Moddifier:\n" << Moddifier;
    }
    if(Properties!=""){
        cout << "Properties:\n" << Properties;
    }

}
