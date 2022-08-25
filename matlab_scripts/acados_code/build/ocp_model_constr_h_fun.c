/* This file was automatically generated by CasADi.
   The CasADi copyright holders make no ownership claim of its contents. */
#ifdef __cplusplus
extern "C" {
#endif

/* How to prefix internal symbols */
#ifdef CASADI_CODEGEN_PREFIX
  #define CASADI_NAMESPACE_CONCAT(NS, ID) _CASADI_NAMESPACE_CONCAT(NS, ID)
  #define _CASADI_NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) CASADI_NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) ocp_model_constr_h_fun_ ## ID
#endif

#include <math.h>

#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int int
#endif

/* Add prefix to internal symbols */
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_s0 CASADI_PREFIX(s0)
#define casadi_s1 CASADI_PREFIX(s1)
#define casadi_s2 CASADI_PREFIX(s2)

/* Symbol visibility in DLLs */
#ifndef CASADI_SYMBOL_EXPORT
  #if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
    #if defined(STATIC_LINKED)
      #define CASADI_SYMBOL_EXPORT
    #else
      #define CASADI_SYMBOL_EXPORT __declspec(dllexport)
    #endif
  #elif defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
    #define CASADI_SYMBOL_EXPORT __attribute__ ((visibility ("default")))
  #else
    #define CASADI_SYMBOL_EXPORT
  #endif
#endif

static const casadi_int casadi_s0[6] = {2, 1, 0, 2, 0, 1};
static const casadi_int casadi_s1[3] = {0, 0, 0};
static const casadi_int casadi_s2[5] = {1, 1, 0, 1, 0};

/* ocp_model_constr_h_fun:(i0[2],i1[2],i2[],i3[])->(o0) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a3, a4, a5, a6, a7, a8, a9;
  a0=-1.2992448806762695e+00;
  a1=-1.1213014125823975e+00;
  a2=4.3503230810165405e-01;
  a3=-2.1948257088661194e-01;
  a4=arg[0]? arg[0][0] : 0;
  a3=(a3*a4);
  a5=-1.1292076855897903e-01;
  a6=arg[0]? arg[0][1] : 0;
  a5=(a5*a6);
  a3=(a3+a5);
  a5=-8.9049226045608521e-01;
  a3=(a3+a5);
  a3=tanh(a3);
  a2=(a2*a3);
  a5=-6.3745099306106567e-01;
  a7=1.3231903314590454e-01;
  a7=(a7*a4);
  a8=2.6679971814155579e-01;
  a8=(a8*a6);
  a7=(a7+a8);
  a8=-2.8194692730903625e-01;
  a7=(a7+a8);
  a7=tanh(a7);
  a5=(a5*a7);
  a2=(a2+a5);
  a5=-2.5888571143150330e-01;
  a8=2.0349122583866119e-02;
  a8=(a8*a4);
  a9=-2.0066815614700317e-01;
  a9=(a9*a6);
  a8=(a8+a9);
  a9=-1.3739595413208008e+00;
  a8=(a8+a9);
  a8=tanh(a8);
  a5=(a5*a8);
  a2=(a2+a5);
  a5=3.9425000548362732e-01;
  a9=-6.4483292400836945e-02;
  a9=(a9*a4);
  a10=7.5899913907051086e-02;
  a10=(a10*a6);
  a9=(a9+a10);
  a10=6.4610019326210022e-02;
  a9=(a9+a10);
  a9=tanh(a9);
  a5=(a5*a9);
  a2=(a2+a5);
  a5=-5.9053450822830200e-01;
  a10=-1.4577077329158783e-01;
  a10=(a10*a4);
  a11=3.2669541239738464e-01;
  a11=(a11*a6);
  a10=(a10+a11);
  a11=-5.1168840378522873e-02;
  a10=(a10+a11);
  a10=tanh(a10);
  a5=(a5*a10);
  a2=(a2+a5);
  a5=-7.0111870765686035e-02;
  a11=1.9018638134002686e-01;
  a11=(a11*a4);
  a12=-4.6246074140071869e-02;
  a12=(a12*a6);
  a11=(a11+a12);
  a12=1.0272084474563599e+00;
  a11=(a11+a12);
  a11=tanh(a11);
  a5=(a5*a11);
  a2=(a2+a5);
  a5=7.9277217388153076e-01;
  a12=8.7538259103894234e-03;
  a12=(a12*a4);
  a13=2.3388664424419403e-01;
  a13=(a13*a6);
  a12=(a12+a13);
  a13=-1.5838532447814941e+00;
  a12=(a12+a13);
  a12=tanh(a12);
  a5=(a5*a12);
  a2=(a2+a5);
  a5=1.7822231352329254e-01;
  a13=2.0580923557281494e-01;
  a13=(a13*a4);
  a14=1.0182004421949387e-01;
  a14=(a14*a6);
  a13=(a13+a14);
  a14=-7.0064330101013184e-01;
  a13=(a13+a14);
  a13=tanh(a13);
  a5=(a5*a13);
  a2=(a2+a5);
  a5=-1.6121980547904968e-01;
  a14=-1.0061395354568958e-02;
  a14=(a14*a4);
  a15=-6.4764477312564850e-02;
  a15=(a15*a6);
  a14=(a14+a15);
  a15=8.5445767641067505e-01;
  a14=(a14+a15);
  a14=tanh(a14);
  a5=(a5*a14);
  a2=(a2+a5);
  a5=-7.1817696094512939e-01;
  a15=-1.9839434325695038e-01;
  a15=(a15*a4);
  a4=8.9949712157249451e-02;
  a4=(a4*a6);
  a15=(a15+a4);
  a4=1.0267651081085205e+00;
  a15=(a15+a4);
  a15=tanh(a15);
  a5=(a5*a15);
  a2=(a2+a5);
  a5=8.5459685325622559e-01;
  a2=(a2+a5);
  a2=tanh(a2);
  a1=(a1*a2);
  a5=4.7669050097465515e-01;
  a4=5.3100768476724625e-02;
  a4=(a4*a3);
  a6=-1.4921776950359344e-02;
  a6=(a6*a7);
  a4=(a4+a6);
  a6=1.0972210019826889e-01;
  a6=(a6*a8);
  a4=(a4+a6);
  a6=5.6724920868873596e-03;
  a6=(a6*a9);
  a4=(a4+a6);
  a6=9.3950107693672180e-03;
  a6=(a6*a10);
  a4=(a4+a6);
  a6=-1.0809352993965149e-01;
  a6=(a6*a11);
  a4=(a4+a6);
  a6=1.0353593528270721e-01;
  a6=(a6*a12);
  a4=(a4+a6);
  a6=2.0917292684316635e-02;
  a6=(a6*a13);
  a4=(a4+a6);
  a6=-1.3745068013668060e-01;
  a6=(a6*a14);
  a4=(a4+a6);
  a6=-5.1688078790903091e-02;
  a6=(a6*a15);
  a4=(a4+a6);
  a6=-2.7477366924285889e+00;
  a4=(a4+a6);
  a4=tanh(a4);
  a5=(a5*a4);
  a1=(a1+a5);
  a5=1.3984001874923706e+00;
  a6=-4.3464258313179016e-01;
  a6=(a6*a3);
  a16=2.4886810779571533e-01;
  a16=(a16*a7);
  a6=(a6+a16);
  a16=-1.0961469411849976e+00;
  a16=(a16*a8);
  a6=(a6+a16);
  a16=-7.7595293521881104e-02;
  a16=(a16*a9);
  a6=(a6+a16);
  a16=-9.7659491002559662e-02;
  a16=(a16*a10);
  a6=(a6+a16);
  a16=4.9455106258392334e-01;
  a16=(a16*a11);
  a6=(a6+a16);
  a16=-6.0883533954620361e-01;
  a16=(a16*a12);
  a6=(a6+a16);
  a16=2.4807900190353394e-01;
  a16=(a16*a13);
  a6=(a6+a16);
  a16=2.1639181673526764e-01;
  a16=(a16*a14);
  a6=(a6+a16);
  a16=1.1276052147150040e-01;
  a16=(a16*a15);
  a6=(a6+a16);
  a16=-4.4445037841796875e-01;
  a6=(a6+a16);
  a6=tanh(a6);
  a5=(a5*a6);
  a1=(a1+a5);
  a5=-2.2023463249206543e-01;
  a16=-1.6021358966827393e-01;
  a16=(a16*a3);
  a17=-1.1110873520374298e-01;
  a17=(a17*a7);
  a16=(a16+a17);
  a17=1.3894487917423248e-01;
  a17=(a17*a8);
  a16=(a16+a17);
  a17=1.6942614689469337e-02;
  a17=(a17*a9);
  a16=(a16+a17);
  a17=-7.3930388689041138e-01;
  a17=(a17*a10);
  a16=(a16+a17);
  a17=-1.3671681284904480e-01;
  a17=(a17*a11);
  a16=(a16+a17);
  a17=1.2139456272125244e+00;
  a17=(a17*a12);
  a16=(a16+a17);
  a17=-2.1165728569030762e-01;
  a17=(a17*a13);
  a16=(a16+a17);
  a17=-2.2370096296072006e-02;
  a17=(a17*a14);
  a16=(a16+a17);
  a17=-4.3565005064010620e-01;
  a17=(a17*a15);
  a16=(a16+a17);
  a17=5.6812226772308350e-01;
  a16=(a16+a17);
  a16=tanh(a16);
  a5=(a5*a16);
  a1=(a1+a5);
  a5=9.9238854646682739e-01;
  a17=-4.2747039347887039e-02;
  a17=(a17*a3);
  a18=-1.7207875847816467e-01;
  a18=(a18*a7);
  a17=(a17+a18);
  a18=-7.0651614665985107e-01;
  a18=(a18*a8);
  a17=(a17+a18);
  a18=3.3992365002632141e-01;
  a18=(a18*a9);
  a17=(a17+a18);
  a18=-2.8017088770866394e-01;
  a18=(a18*a10);
  a17=(a17+a18);
  a18=-1.5177333354949951e-01;
  a18=(a18*a11);
  a17=(a17+a18);
  a18=-6.6919851303100586e-01;
  a18=(a18*a12);
  a17=(a17+a18);
  a18=-5.2947568893432617e-01;
  a18=(a18*a13);
  a17=(a17+a18);
  a18=2.8741940855979919e-01;
  a18=(a18*a14);
  a17=(a17+a18);
  a18=8.8481926918029785e-01;
  a18=(a18*a15);
  a17=(a17+a18);
  a18=-2.2364880144596100e-01;
  a17=(a17+a18);
  a17=tanh(a17);
  a5=(a5*a17);
  a1=(a1+a5);
  a5=5.7936459779739380e-02;
  a18=-4.0876418352127075e-01;
  a18=(a18*a3);
  a19=3.8896048069000244e-01;
  a19=(a19*a7);
  a18=(a18+a19);
  a19=-4.6646680682897568e-02;
  a19=(a19*a8);
  a18=(a18+a19);
  a19=-3.9512774348258972e-01;
  a19=(a19*a9);
  a18=(a18+a19);
  a19=-8.3891355991363525e-01;
  a19=(a19*a10);
  a18=(a18+a19);
  a19=8.9541614055633545e-01;
  a19=(a19*a11);
  a18=(a18+a19);
  a19=-7.4216842651367188e-01;
  a19=(a19*a12);
  a18=(a18+a19);
  a19=2.6276808977127075e-01;
  a19=(a19*a13);
  a18=(a18+a19);
  a19=-1.0327988304197788e-02;
  a19=(a19*a14);
  a18=(a18+a19);
  a19=-3.3543938398361206e-01;
  a19=(a19*a15);
  a18=(a18+a19);
  a19=-3.3100461959838867e-01;
  a18=(a18+a19);
  a18=tanh(a18);
  a5=(a5*a18);
  a1=(a1+a5);
  a5=4.6151039004325867e-01;
  a19=5.0171023607254028e-01;
  a19=(a19*a3);
  a20=6.1993443965911865e-01;
  a20=(a20*a7);
  a19=(a19+a20);
  a20=2.4119514226913452e-01;
  a20=(a20*a8);
  a19=(a19+a20);
  a20=-2.7419921755790710e-01;
  a20=(a20*a9);
  a19=(a19+a20);
  a20=-3.4011772274971008e-01;
  a20=(a20*a10);
  a19=(a19+a20);
  a20=-3.1818893551826477e-01;
  a20=(a20*a11);
  a19=(a19+a20);
  a20=1.3271929323673248e-01;
  a20=(a20*a12);
  a19=(a19+a20);
  a20=5.8408755064010620e-01;
  a20=(a20*a13);
  a19=(a19+a20);
  a20=3.6983817815780640e-01;
  a20=(a20*a14);
  a19=(a19+a20);
  a20=3.8645651936531067e-01;
  a20=(a20*a15);
  a19=(a19+a20);
  a20=5.3588259220123291e-01;
  a19=(a19+a20);
  a19=tanh(a19);
  a5=(a5*a19);
  a1=(a1+a5);
  a5=-4.8367762565612793e-01;
  a20=-7.1789376437664032e-02;
  a20=(a20*a3);
  a21=-2.4075821042060852e-01;
  a21=(a21*a7);
  a20=(a20+a21);
  a21=-6.5996611118316650e-01;
  a21=(a21*a8);
  a20=(a20+a21);
  a21=6.3586854934692383e-01;
  a21=(a21*a9);
  a20=(a20+a21);
  a21=-6.5823358297348022e-01;
  a21=(a21*a10);
  a20=(a20+a21);
  a21=4.4714382290840149e-01;
  a21=(a21*a11);
  a20=(a20+a21);
  a21=1.8302890658378601e-01;
  a21=(a21*a12);
  a20=(a20+a21);
  a21=-1.2029951810836792e-01;
  a21=(a21*a13);
  a20=(a20+a21);
  a21=-3.7990421056747437e-01;
  a21=(a21*a14);
  a20=(a20+a21);
  a21=3.8296884298324585e-01;
  a21=(a21*a15);
  a20=(a20+a21);
  a21=-7.0073497295379639e-01;
  a20=(a20+a21);
  a20=tanh(a20);
  a5=(a5*a20);
  a1=(a1+a5);
  a5=-5.2067321538925171e-01;
  a21=-1.8096096813678741e-01;
  a21=(a21*a3);
  a22=6.2645129859447479e-02;
  a22=(a22*a7);
  a21=(a21+a22);
  a22=-2.0094355940818787e-01;
  a22=(a22*a8);
  a21=(a21+a22);
  a22=1.7580049112439156e-02;
  a22=(a22*a9);
  a21=(a21+a22);
  a22=2.9748860746622086e-02;
  a22=(a22*a10);
  a21=(a21+a22);
  a22=1.7718806862831116e-01;
  a22=(a22*a11);
  a21=(a21+a22);
  a22=-2.0780321955680847e-01;
  a22=(a22*a12);
  a21=(a21+a22);
  a22=-1.1122359335422516e-01;
  a22=(a22*a13);
  a21=(a21+a22);
  a22=4.3663465976715088e-01;
  a22=(a22*a14);
  a21=(a21+a22);
  a22=1.7998607456684113e-01;
  a22=(a22*a15);
  a21=(a21+a22);
  a22=2.3329281806945801e+00;
  a21=(a21+a22);
  a21=tanh(a21);
  a5=(a5*a21);
  a1=(a1+a5);
  a5=-2.2165335714817047e-01;
  a22=-1.1357458680868149e-01;
  a22=(a22*a3);
  a3=-5.2383381128311157e-01;
  a3=(a3*a7);
  a22=(a22+a3);
  a3=-6.9413942098617554e-01;
  a3=(a3*a8);
  a22=(a22+a3);
  a3=-6.7252501845359802e-02;
  a3=(a3*a9);
  a22=(a22+a3);
  a3=-3.7308025360107422e-01;
  a3=(a3*a10);
  a22=(a22+a3);
  a3=6.8361610174179077e-01;
  a3=(a3*a11);
  a22=(a22+a3);
  a3=-1.9725620746612549e-01;
  a3=(a3*a12);
  a22=(a22+a3);
  a3=-5.4264271259307861e-01;
  a3=(a3*a13);
  a22=(a22+a3);
  a3=-5.3253644704818726e-01;
  a3=(a3*a14);
  a22=(a22+a3);
  a3=3.0279079079627991e-01;
  a3=(a3*a15);
  a22=(a22+a3);
  a3=-6.6020041704177856e-01;
  a22=(a22+a3);
  a22=tanh(a22);
  a5=(a5*a22);
  a1=(a1+a5);
  a5=-2.7857857942581177e-01;
  a1=(a1+a5);
  a1=tanh(a1);
  a0=(a0*a1);
  a1=-1.2608680725097656e+00;
  a5=9.4027489423751831e-01;
  a5=(a5*a2);
  a3=-4.9388423562049866e-02;
  a3=(a3*a4);
  a5=(a5+a3);
  a3=6.1424102634191513e-02;
  a3=(a3*a6);
  a5=(a5+a3);
  a3=5.8497649431228638e-01;
  a3=(a3*a16);
  a5=(a5+a3);
  a3=3.4331816434860229e-01;
  a3=(a3*a17);
  a5=(a5+a3);
  a3=-3.1934066209942102e-03;
  a3=(a3*a18);
  a5=(a5+a3);
  a3=2.6793330907821655e-01;
  a3=(a3*a19);
  a5=(a5+a3);
  a3=7.2063523530960083e-01;
  a3=(a3*a20);
  a5=(a5+a3);
  a3=-9.7167718410491943e-01;
  a3=(a3*a21);
  a5=(a5+a3);
  a3=1.4784537553787231e+00;
  a3=(a3*a22);
  a5=(a5+a3);
  a3=-5.2222818136215210e-01;
  a5=(a5+a3);
  a5=tanh(a5);
  a1=(a1*a5);
  a0=(a0+a1);
  a1=-1.4077742099761963e+00;
  a5=-2.7650341391563416e-02;
  a5=(a5*a2);
  a3=5.4216957092285156e-01;
  a3=(a3*a4);
  a5=(a5+a3);
  a3=-7.1613393723964691e-02;
  a3=(a3*a6);
  a5=(a5+a3);
  a3=-3.1272027641534805e-02;
  a3=(a3*a16);
  a5=(a5+a3);
  a3=-9.1069236397743225e-02;
  a3=(a3*a17);
  a5=(a5+a3);
  a3=-1.5940830111503601e-02;
  a3=(a3*a18);
  a5=(a5+a3);
  a3=-3.5488065332174301e-02;
  a3=(a3*a19);
  a5=(a5+a3);
  a3=4.6795923262834549e-02;
  a3=(a3*a20);
  a5=(a5+a3);
  a3=-6.5723663568496704e-01;
  a3=(a3*a21);
  a5=(a5+a3);
  a3=3.4406099468469620e-02;
  a3=(a3*a22);
  a5=(a5+a3);
  a3=-1.5482954978942871e+00;
  a5=(a5+a3);
  a5=tanh(a5);
  a1=(a1*a5);
  a0=(a0+a1);
  a1=8.3587849140167236e-01;
  a5=4.9063277244567871e-01;
  a5=(a5*a2);
  a3=-7.6963029801845551e-02;
  a3=(a3*a4);
  a5=(a5+a3);
  a3=-9.4688946008682251e-01;
  a3=(a3*a6);
  a5=(a5+a3);
  a3=6.0153812170028687e-01;
  a3=(a3*a16);
  a5=(a5+a3);
  a3=-3.3471116423606873e-01;
  a3=(a3*a17);
  a5=(a5+a3);
  a3=-5.2011746168136597e-01;
  a3=(a3*a18);
  a5=(a5+a3);
  a3=-3.5693070292472839e-01;
  a3=(a3*a19);
  a5=(a5+a3);
  a3=-4.9014907330274582e-02;
  a3=(a3*a20);
  a5=(a5+a3);
  a3=5.3309887647628784e-01;
  a3=(a3*a21);
  a5=(a5+a3);
  a3=1.1329919099807739e-01;
  a3=(a3*a22);
  a5=(a5+a3);
  a3=5.3615510463714600e-01;
  a5=(a5+a3);
  a5=tanh(a5);
  a1=(a1*a5);
  a0=(a0+a1);
  a1=1.6752519607543945e+00;
  a5=1.3219350576400757e+00;
  a5=(a5*a2);
  a3=-1.2505698204040527e+00;
  a3=(a3*a4);
  a5=(a5+a3);
  a3=-5.0960415601730347e-01;
  a3=(a3*a6);
  a5=(a5+a3);
  a3=1.0640039294958115e-01;
  a3=(a3*a16);
  a5=(a5+a3);
  a3=-4.0572714805603027e-01;
  a3=(a3*a17);
  a5=(a5+a3);
  a3=-5.7343953847885132e-01;
  a3=(a3*a18);
  a5=(a5+a3);
  a3=1.1049582958221436e+00;
  a3=(a3*a19);
  a5=(a5+a3);
  a3=-7.5450485944747925e-01;
  a3=(a3*a20);
  a5=(a5+a3);
  a3=1.0455824136734009e+00;
  a3=(a3*a21);
  a5=(a5+a3);
  a3=-7.6338523626327515e-01;
  a3=(a3*a22);
  a5=(a5+a3);
  a3=1.0052071809768677e+00;
  a5=(a5+a3);
  a5=tanh(a5);
  a1=(a1*a5);
  a0=(a0+a1);
  a1=1.3496991395950317e+00;
  a5=5.7370525598526001e-01;
  a5=(a5*a2);
  a3=-7.5182569026947021e-01;
  a3=(a3*a4);
  a5=(a5+a3);
  a3=-7.8802436590194702e-01;
  a3=(a3*a6);
  a5=(a5+a3);
  a3=1.9158566370606422e-02;
  a3=(a3*a16);
  a5=(a5+a3);
  a3=-3.3712077140808105e-01;
  a3=(a3*a17);
  a5=(a5+a3);
  a3=-4.3610274791717529e-01;
  a3=(a3*a18);
  a5=(a5+a3);
  a3=1.0607371479272842e-01;
  a3=(a3*a19);
  a5=(a5+a3);
  a3=-2.8798079490661621e-01;
  a3=(a3*a20);
  a5=(a5+a3);
  a3=4.7086626291275024e-01;
  a3=(a3*a21);
  a5=(a5+a3);
  a3=-8.8606290519237518e-02;
  a3=(a3*a22);
  a5=(a5+a3);
  a3=8.0865395069122314e-01;
  a5=(a5+a3);
  a5=tanh(a5);
  a1=(a1*a5);
  a0=(a0+a1);
  a1=-1.0589045286178589e+00;
  a5=-5.5561524629592896e-01;
  a5=(a5*a2);
  a3=9.8189502954483032e-01;
  a3=(a3*a4);
  a5=(a5+a3);
  a3=6.7043036222457886e-01;
  a3=(a3*a6);
  a5=(a5+a3);
  a3=-1.5058282017707825e-01;
  a3=(a3*a16);
  a5=(a5+a3);
  a3=-6.8633764982223511e-02;
  a3=(a3*a17);
  a5=(a5+a3);
  a3=2.2709244862198830e-02;
  a3=(a3*a18);
  a5=(a5+a3);
  a3=-2.2062237560749054e-01;
  a3=(a3*a19);
  a5=(a5+a3);
  a3=1.4386452436447144e+00;
  a3=(a3*a20);
  a5=(a5+a3);
  a3=-9.1771888732910156e-01;
  a3=(a3*a21);
  a5=(a5+a3);
  a3=1.3044291734695435e+00;
  a3=(a3*a22);
  a5=(a5+a3);
  a3=-6.2723881006240845e-01;
  a5=(a5+a3);
  a5=tanh(a5);
  a1=(a1*a5);
  a0=(a0+a1);
  a1=-1.0189472436904907e+00;
  a5=8.8669842481613159e-01;
  a5=(a5*a2);
  a3=-1.7529712617397308e-01;
  a3=(a3*a4);
  a5=(a5+a3);
  a3=6.7524993419647217e-01;
  a3=(a3*a6);
  a5=(a5+a3);
  a3=-8.3396665751934052e-02;
  a3=(a3*a16);
  a5=(a5+a3);
  a3=7.1711057424545288e-01;
  a3=(a3*a17);
  a5=(a5+a3);
  a3=5.7891482114791870e-01;
  a3=(a3*a18);
  a5=(a5+a3);
  a3=-2.0963545143604279e-01;
  a3=(a3*a19);
  a5=(a5+a3);
  a3=5.2996033430099487e-01;
  a3=(a3*a20);
  a5=(a5+a3);
  a3=-4.0797090530395508e-01;
  a3=(a3*a21);
  a5=(a5+a3);
  a3=1.8510521650314331e+00;
  a3=(a3*a22);
  a5=(a5+a3);
  a3=-3.6068403720855713e-01;
  a5=(a5+a3);
  a5=tanh(a5);
  a1=(a1*a5);
  a0=(a0+a1);
  a1=-1.2864154577255249e+00;
  a5=9.0862460434436798e-02;
  a5=(a5*a2);
  a3=5.6055587530136108e-01;
  a3=(a3*a4);
  a5=(a5+a3);
  a3=1.0536767244338989e+00;
  a3=(a3*a6);
  a5=(a5+a3);
  a3=-3.3360984921455383e-01;
  a3=(a3*a16);
  a5=(a5+a3);
  a3=5.7451975345611572e-01;
  a3=(a3*a17);
  a5=(a5+a3);
  a3=4.4372582435607910e-01;
  a3=(a3*a18);
  a5=(a5+a3);
  a3=-6.5314614772796631e-01;
  a3=(a3*a19);
  a5=(a5+a3);
  a3=1.7583872377872467e-01;
  a3=(a3*a20);
  a5=(a5+a3);
  a3=2.0191757380962372e-01;
  a3=(a3*a21);
  a5=(a5+a3);
  a3=1.0317293405532837e+00;
  a3=(a3*a22);
  a5=(a5+a3);
  a3=-4.2041423916816711e-01;
  a5=(a5+a3);
  a5=tanh(a5);
  a1=(a1*a5);
  a0=(a0+a1);
  a1=1.3249791860580444e+00;
  a5=6.9317537546157837e-01;
  a5=(a5*a2);
  a2=2.5080415606498718e-01;
  a2=(a2*a4);
  a5=(a5+a2);
  a2=-6.0900372266769409e-01;
  a2=(a2*a6);
  a5=(a5+a2);
  a2=8.0585807561874390e-01;
  a2=(a2*a16);
  a5=(a5+a2);
  a2=-2.0697966217994690e-01;
  a2=(a2*a17);
  a5=(a5+a2);
  a2=6.0392498970031738e-01;
  a2=(a2*a18);
  a5=(a5+a2);
  a2=4.6084639430046082e-01;
  a2=(a2*a19);
  a5=(a5+a2);
  a2=7.8912854194641113e-02;
  a2=(a2*a20);
  a5=(a5+a2);
  a2=7.3270463943481445e-01;
  a2=(a2*a21);
  a5=(a5+a2);
  a2=1.3324446976184845e-02;
  a2=(a2*a22);
  a5=(a5+a2);
  a2=5.7238662242889404e-01;
  a5=(a5+a2);
  a5=tanh(a5);
  a1=(a1*a5);
  a0=(a0+a1);
  a1=8.7268424034118652e-01;
  a0=(a0+a1);
  if (res[0]!=0) res[0][0]=a0;
  return 0;
}

CASADI_SYMBOL_EXPORT int ocp_model_constr_h_fun(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int ocp_model_constr_h_fun_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int ocp_model_constr_h_fun_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void ocp_model_constr_h_fun_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int ocp_model_constr_h_fun_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void ocp_model_constr_h_fun_release(int mem) {
}

CASADI_SYMBOL_EXPORT void ocp_model_constr_h_fun_incref(void) {
}

CASADI_SYMBOL_EXPORT void ocp_model_constr_h_fun_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int ocp_model_constr_h_fun_n_in(void) { return 4;}

CASADI_SYMBOL_EXPORT casadi_int ocp_model_constr_h_fun_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_real ocp_model_constr_h_fun_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* ocp_model_constr_h_fun_name_in(casadi_int i){
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    case 2: return "i2";
    case 3: return "i3";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* ocp_model_constr_h_fun_name_out(casadi_int i){
  switch (i) {
    case 0: return "o0";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* ocp_model_constr_h_fun_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s0;
    case 2: return casadi_s1;
    case 3: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* ocp_model_constr_h_fun_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s2;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int ocp_model_constr_h_fun_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 4;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif