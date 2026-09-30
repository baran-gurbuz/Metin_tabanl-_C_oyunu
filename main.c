#include <stdio.h>
#include <unistd.h>

// ANSI Renk Kodları
#define RESET       "\033[0m"
#define RED        "\033[31m"
#define GREEN      "\033[32m"
#define YELLOW     "\033[33m"
#define BLUE       "\033[34m"
#define MAGENTA    "\033[35m"
#define CYAN       "\033[36m"
#define WHITE      "\033[37m"
#define BOLD       "\033[1m"

void typewriter_effect(const char *text, const char *color) {
    // Renk kodunu baştan uygula
    if (color != NULL) {
        printf("%s", color);
    }

    // Her karakteri tek tek yazdır
    for (int i = 0; text[i] != '\0'; i++) {
        putchar(text[i]);
        fflush(stdout);  // Buffer'ı boşalt, anında yazdır
        usleep(40 * 1000);  // Milisaniyeden mikrosaniyeye çevir
    }

    // Renk kodunu sıfırla
    if (color != NULL) {
        printf("%s", RESET);
    }
}
void choice_8();
void choice_15();

void press_key() {
    getchar();
}
void choice_20() {
    int x;
    typewriter_effect("sin(x) in integrali nedir:", BLUE);
    typewriter_effect("\n1- sin(x)\n2- sin(-x)\n3- cos(-xh)\n4- -cos(x)\n5- cos(x)\n", GREEN);
    scanf("%d", &x);
    if (x==4) {
        typewriter_effect("adamın silahını almayı başardın.", BLUE);
        press_key();
        typewriter_effect("arabayla şehre doğru ilerliyorsun...", BLUE);
    }
    else {
        typewriter_effect("adamın silahını almayı başaramadın.", BLUE);
        press_key();
        typewriter_effect("adam seni oracıkta vurdu...", BLUE);
    }
}
void choice_19() {
    int x;
    typewriter_effect("araba bir dağ kulübesinin önünde duruyor ve araçtan iniyorsunuz", BLUE);
    press_key();
    typewriter_effect("\nadam seni öldürmeye çalıştığını itiraf ediyor, elinde silah görüyorsun", BLUE);
    typewriter_effect("\n1-KAÇ!\n2-SALDIR!\n", GREEN);
    scanf("%d", &x);
    if (x==1) {
        typewriter_effect("adam seni silahıyla vurur...", BLUE);
    }
    else if (x==2) {
        typewriter_effect("adama saldırmaya çalışıyorsun ve boğuşuyorsunuz\n", BLUE);
        choice_20();
    }
}
void choice_18() {
    int x;
    typewriter_effect("adam giderek garipleşir", BLUE);
    press_key();
    typewriter_effect("\nen sonunda şehir yolunda sapıp bir dağ yoluna girer", BLUE);
    typewriter_effect("\n1-arabadan atla\n2-adama saldır\n3-bekle\n", GREEN);
    scanf("%d", &x);
    if (x==1) {
        typewriter_effect("kapı kilitlidir.", BLUE);
        press_key();
        typewriter_effect("adam silah çıkarır ve seni öldüreceğini söyleyip seni oracıkta vurur...", BLUE);
    }
    else if (x==2) {
        typewriter_effect("adama saldırıyorsun.", BLUE);
        press_key();
        typewriter_effect("ufak bir boğuşmanın ardında kaza geçiriyorsunuz ve hayatını kaybediyorsun...", BLUE);
    }
    else if (x==3) {
        typewriter_effect("bekliyorsun\n", BLUE);
        choice_19();
    }
}
void choice_17() {
    int x;
    typewriter_effect("tekrardan hafızanda bazı anılar görüyorsun", BLUE);
    press_key();
    typewriter_effect("\nbu anı bir öncekiyle aynı ama seni kovalayan kişi o kadın değil", BLUE);
    press_key();
    typewriter_effect("bu sefer seni kovalayan kişi bu araçtaki adam", BLUE);
    typewriter_effect("\n1-arabadan atla\n2-adama saldır\n3-adama belli etme\n", GREEN);
    scanf("%d", &x);
    if (x==1) {
        typewriter_effect("araçtan atlıyorsun. yerde yuvarlanmaya devam ederken arkadan gelen araç hızını alamıyor ve seni eziyor...", BLUE);
    }
    else if (x==2) {
        typewriter_effect("adama saldırıyorsun.", BLUE);
        press_key();
        typewriter_effect("ufak bir boğuşmanın ardında kaza geçiriyorsunuz ve hayatını kaybediyorsun...", BLUE);
    }
    else if (x==3) {
        choice_18();
    }
}
void choice_16() {
    int x;
    typewriter_effect("korktuğunu belli etmemeye çalışıyorsun\n", BLUE);
    press_key();
    typewriter_effect("kadın senle çok cana yakın konuşuyor ve bu tedirhinliğini arttırıyor", BLUE);
    typewriter_effect("\n1-araçtan atla\n2-sakin kal ve yola devam et\n", GREEN);
    scanf("%d", &x);
    if (x==1) {
        choice_15();
    }
    else if (x==2) {
        typewriter_effect("kadından korkmana rağmen yolculuğa devam ediyorsun", BLUE);
        press_key();
        typewriter_effect("\nkadın aynı cana yakınlığı koruyor ve şehre yaklaşıyorsunuz", BLUE);
        press_key();
        typewriter_effect("seni en yakın hastaneye getiriyor", BLUE);
        press_key();
        typewriter_effect("doktor geçici hafıza kaybın olduğunu söylüyor", BLUE);
        press_key();
        typewriter_effect("anlaşılan o ki bu durumdaki insanlar uydurma anılar görebiliyormuş\n kadın masum çıkıyor ve o ormana nasıl gittiğini hiçbirzaman bulamıyorsun...", BLUE);
    }
}
void choice_15() {
    int x;
    typewriter_effect("araçtan atlıyorsun.\nyere çarptığında tüm vücuduna bir ağrı giriyor", BLUE);
    press_key();
    typewriter_effect("\nkadının aracı panikle aniden durdurduğunu görüyrosun", BLUE);
    typewriter_effect("\n1-ormana gir\n2-yolun diğer tarafına doğru koşmaya başla\n", GREEN);
    scanf("%d", &x);
    if (x==1) {
        typewriter_effect("ormanda ilerlerken kayboluyorsun.\nbirdaha çıkışı hiç bulamıyorsun...", BLUE);
    }
    else if (x==2) {
        typewriter_effect("aracın geldiği yöne doğru koşmaya başlıyorsun\n", BLUE);
        press_key();
        typewriter_effect("koşarken kadının sana seslendiğini duyuyorsun ama aldırış etmiyorsun", BLUE);
        press_key();
        typewriter_effect("tam o sırada başka bir araç daha geliyor\n", BLUE);
        typewriter_effect("araçtaki adama derdini anlatıyorsun ve seni arabasına alıyor", BLUE);
        press_key();
        typewriter_effect("ilerlerken kadının yanından geçiyorsunuz\n sana şaşkın gözlerle bakıyor", BLUE);
        press_key();
        typewriter_effect("sizi arabasıyla takip etmeye başlıyor\naynı yöne gittiğiniz için başka seçeneğinin olmadığını düşünüyorsun\n",BLUE);
        choice_17();
    }
}
void choice_14() {
    int x;
    typewriter_effect("bunu gören allen çocukça bir üzüntüye kapılıyor ve ağlayacak gibi oluyor", BLUE);
    typewriter_effect("\n1-allen için yemeği ye\n2-yemeği yeme\n", GREEN);
    scanf("%d", &x);
    if (x==1) {
        typewriter_effect("yemek o kadar lezetliki kendinden geçiyorsun.\nyemeği bırakamayıp hayatı sorgularken yavaşça bir bataklık canavarına dönüşüyorsun.",BLUE);
        typewriter_effect("\nartık hayatının geri kalanını burada geçireceksin...", BLUE);
    }
    else if (x==2) {
        typewriter_effect("allen bir anda sinirleniyor ve sana saldırmaya çalışıyor", BLUE);
        press_key();
        typewriter_effect("doğruca dışarı kaçıyorsun\n", BLUE);
        choice_8();
    }
}
void choice_13() {
    int x;
    typewriter_effect("allen akşam yemeği hazırlar ve senide masaya davet eder", BLUE);
    press_key();
    typewriter_effect("\nmasaya oturuyorsun, yemek leziz görünüyor", BLUE);
    typewriter_effect("\n1-yemeği ye\n2-yemeği yeme\n", GREEN);
    scanf("%d", &x);
    if (x==1) {
        typewriter_effect("yemek o kadar lezetliki kendinden geçiyorsun.\nyemeği bırakamayıp hayatı sorgularken yavaşça bir bataklık canavarına dönüşüyorsun.",BLUE);
        typewriter_effect("artık hayatının geri kalanını burada geçireceksin...", BLUE);
    }
    else if (x==2) {
        typewriter_effect("yemeği yemiyorsun\n", BLUE);
        choice_14();
    }
}
void choice_12() {
    int x;
    typewriter_effect("dostum, malesef artık eve dönemessin. yani buraya alışsan iyi olur.\nmerak etme burası geldiğin yerden daha iyi bir yer\n", BLUE);
    typewriter_effect("1-allen ile kal\n2- kaçmaya çalış\n", GREEN);
    scanf("%d", &x);
    if (x==1) {
        typewriter_effect("hayatının snonua kadar allen ile birlikte bataklık canavarlığı yapıyorsun...", BLUE);
    }
    else if (x==2) {choice_8();}
}
void choice_11() {
    int x;
    typewriter_effect("hayır tabiki de", YELLOW);
    press_key();
    typewriter_effect("\nseninle en yakın arkadaşlar olarak bu dünyada yaşayacağız ne dersin?\n", YELLOW);
    typewriter_effect("1-sakince allen ı izle\n2-kaçmaya çalış\n", GREEN);
    scanf("%d", &x);
    if (x==1) {choice_13();}
    else if (x==2) {
        typewriter_effect("kaçmaya çalışıyorsun\n", BLUE);
        choice_8();
    }
}
void choice_10() {
    int x;
    typewriter_effect("adama derdini anlatıyorsun\nadam seni dinleyip anlıyor", BLUE);
    press_key();
    typewriter_effect("\nadam sakin bir tavırla istersen seni gönderebileceğini söyler ama öncesinde sormak istediğini ekler:\n", BLUE);
    typewriter_effect("gerçekten bu kadar kötülüğün olduğu bir dünyaya dönmek istiyormusun?", MAGENTA);
    typewriter_effect("\n1-geri dön\n2-bu dünyada kal\n", GREEN);
    scanf("%d", &x);
    if (x==1) {
        typewriter_effect("geri dönmeyi seçiyorsun.", BLUE);
        press_key();
        typewriter_effect("bir anda kendini yatağına buluyorsun", BLUE);
        press_key();
        typewriter_effect("artık hafızan yerinde", BLUE);
        press_key();
        typewriter_effect("az önce yaşadığın herşey bir rüya gibi ciddiyetini yitiriyor", BLUE);
        press_key();
        typewriter_effect("yatağından kalkıyorsun ve işe gitmek için hazırlanıyorsun", BLUE);
        press_key();
        typewriter_effect("yıl 1939 ve sen polonyalı bir yahudisin...",BLUE);
    }
    else if (x==2) {
        typewriter_effect("adama hak veriyorsun ve bu dünyada kalmayı tercih ediyorsun", BLUE);
        press_key();
        typewriter_effect("hayatının geri kalanını bu sakin dünyada mutlu bir hayatla geçiriyorsun...", BLUE);
    }
}
void choice_9() {
    int x;
    typewriter_effect("vadiye doğru gidiyorsun.", BLUE);
    press_key();
    typewriter_effect("\nüzüm bağlarının arasından geçerken mest oluyorsun.", BLUE);
    press_key();
    typewriter_effect("çok daha uzakta, buğday tarlaları arasında bir ev görüyorsun", BLUE);
    press_key();
    typewriter_effect("eve giriyorsun ve karşında yerde uzanan bir aslan görüyorsun\n", BLUE);
    typewriter_effect("1-aslanla knouşmaya çalış\n2-kaç!\n", GREEN);
    scanf("%d", &x);
    if (x==1) {
        typewriter_effect("aslan gerçek bir aslandır", BLUE);
        press_key();
        typewriter_effect("sen onunla konuşmaya çalışırken yerinden kalkıyor veseni bir pençede öldürüyor", BLUE);
    }
    else if (x==2) {
        typewriter_effect("kapıyı açıp tam kaçacakken karşında yaşlı bir adam görüyorsun\n", BLUE);
        choice_10();
    }
}
void choice_8() {

    int x;
    typewriter_effect("yaratıktan kurtuluyorsun. bir anlığına sakinleşip etrafına bakıyorsun\n", BLUE);
    press_key();
    typewriter_effect("karşında yemyeşil bir vadi uzanıyor", BLUE);
    press_key();
    typewriter_effect("çimlerin bittiği yerde üzüm bağları başlıyor", BLUE);
    press_key();
    typewriter_effect("burası adeta cennet!", BLUE);
    typewriter_effect("\nhemen arka tarafında da karanlık bir orman var", BLUE);
    press_key();
    typewriter_effect("burası geldiğin yer\n", BLUE);
    typewriter_effect("1-vaadiye doğru git\n2-ormana doğru git\n", GREEN);
    scanf("%d", &x);
    if (x == 1) {choice_9();}
    else if (x == 2) {
        typewriter_effect("ormana doğru gitmeye karar veriyosun", BLUE);
        press_key();
        typewriter_effect("bir süre ilerledikten sonra geldiğin bataklığı buluyorsun.\nbataklık tepende duruyor", BLUE);
        press_key();
        typewriter_effect("yukarı zıplayarak bataklığın içine giriyorsun.\nçırpınarak kendini yukarı çekiyorsun", BLUE);
        press_key();
        typewriter_effect("kendini ne kadar yukarı çekersen çek başın bataklığın dışına ulaşamıyor", BLUE);
        press_key();
        typewriter_effect("nefesin bitiyor ve kemiklerin sonsuza kadar bataklığın içinde kalıyor", BLUE);
    }
}
void choice_7() {
    int x;
    typewriter_effect("allen cevap verir:", BLUE);
    typewriter_effect("\nÇift canlı, 2 farklı türüde aynı yaşamda deneyimleyenlere denir\n", YELLOW);
    press_key();
    typewriter_effect("artık sende bir çift canlı olacaksın\nbenimle birlikte bu diyarda yaşayabilirsin",YELLOW);
    press_key();
    typewriter_effect("savaşların olmadığı, bolluğun olduğu bir dünya.\ntek şart günde 2 saat noyunca bataklık canavarı olarak bataklığa düşenleri bu tarafa çekiceksin\n", YELLOW);
    typewriter_effect("1-'bu delilik, ben geri dönüyorum'(reddet)\n2-'bu kadar kötülüğün olduğu bir dünyada yaşayacağıma burada kalırım daha iyi'(kabul et)\n", GREEN);
    scanf("%d", &x);
    if (x == 1) {choice_8(); } else {
        typewriter_effect("kalmayı tercih ediyorsun",BLUE);
        press_key();
        typewriter_effect("hayatının geri kalanını allen ile birlikte bu diyarlarda sakince geçiriyorsun...", BLUE);
    }

}
void choice_6() {
    int x;
    typewriter_effect("yaratık konuşmaya başlar:", BLUE);
    press_key();
    typewriter_effect("\nbenim adım allen ve ben bir çift canlıyım", YELLOW);
    press_key();
    typewriter_effect("biraz garip davranan allen sana konuşmanı beklercesine bakıyordur", BLUE);
    press_key();
    typewriter_effect("1-'çift canlı nedir'\n2-'bana zarar vericekmisin'\n3-'benim eve dönmem lazım, yardım et'\n",GREEN);
    scanf("%d", &x);
    if (x==1) {
        choice_7();
    }
    else if (x==2) {
        choice_11();
    }
    else if (x==3) {
        choice_12();
    }
}

void choice_5() {
    int x;
    typewriter_effect("kısa bir yürüyüşün ardından canavar bir mağaraya giriyor", BLUE);
    press_key();
    typewriter_effect("1-içeri gir\n2-dışarıda kalıp etrafı incele\n", GREEN);
    scanf("%d", &x);
    if (x==1) {
        typewriter_effect("içerisi çok şık dizayn edilimiş, tıpkı lüks bir şehir evi gibidir. ",BLUE);
        press_key();
        typewriter_effect("yaratık sana bakarken bir anda insana dönüşür\n", BLUE);
        choice_6();
    }
    else if (x==2) {
        choice_8();
    }
}
void choice_4() {
    int x;
    typewriter_effect("yolda giderken aklına bazı anılar gelmeye başlar", BLUE);
    press_key();
    typewriter_effect("anıların birinde seni kovalayan ve en sonunda kafana vurup bayıltan birisini hatırlıyorsun", BLUE);
    press_key();
    typewriter_effect("bu kişi yanındaki kadındır!!!\n", RED);
    typewriter_effect("1-araçtan atla\n2-kadına bişey çaktırma\n",GREEN);
    scanf("%d", &x);
    if (x==1) {
        choice_15();
    }
    else if (x==2) {
        choice_16();
    }
}
void choice_2() {
    int x;
    typewriter_effect("bataklıktan garip sesler geldiğini fark ediyprsun ama ilerlemeye devam edip bataklığı arkanda bırakıyorsun", BLUE);
    press_key();
    press_key();
    typewriter_effect("orman gittikçe sıkılaşıyor ve en sonunda bir asfalt yola çıkıyorsun", BLUE);
    press_key();
    typewriter_effect("1-yolu sola doğru takip et\n2-yolu sağa doğru takip et\n", GREEN);
    scanf("%d", &x);
    press_key();
    typewriter_effect("bir araba yaklaşıyor.\n aracı yaşlı bir kadın sürüyor.", BLUE);
    press_key();
    typewriter_effect("kadına derdini anlatıyorsun. seni araca alıyor ve şehre doğru gidiyorsunuz\n", BLUE);
    choice_4();
}
void choice_3() {
    int x;
    typewriter_effect("bataklığın altında sanki birşey ayağını tutuyormuş gibi hissediyorsun\nbişey seni aşağı doğru çekiyor",BLUE);
    press_key();
    typewriter_effect("artık tümüyle bataklık içindesin",BLUE);
    press_key();
    typewriter_effect("tam öldüğünü düşünürken bir anda düşmeye başlıyorsun ve yere kapaklanıyorsun", BLUE);
    press_key();
    typewriter_effect("burası bataklığın altında farklı bir dünya", BLUE);
    press_key();
    typewriter_effect("ayağa kalkıp etrafına bakıyorsun ve tam karşında yeşil bir canavar görüyorsun\n", BLUE);
    typewriter_effect("1-arkana bakmadan kaç\n2-yaratıkla konuşmaya çalış\n", GREEN);
    scanf("%d", &x);
    if (x==1) {
        typewriter_effect("ne olduğunu anlamadan koşmaya başlıyorsun\n", BLUE);
        press_key();
        choice_8();
    }
    else if (x==2) {
        typewriter_effect("yaratık onu takip etmeni istercesine hareketler yapıp yürümeye başlıyor\n", BLUE);
        press_key();
        choice_5();
    }
}
void choice_1() {

    int x;
    typewriter_effect("yol bir bataklığa çıkıyor", BLUE);
    press_key();
    typewriter_effect("1-bataklığın içinden geç\n2-bataklığın etrafından dolan\n",GREEN);
    scanf("%d", &x);
    if (x==1) {
        typewriter_effect("bataklığın içinden geçiyorsun", BLUE);
        press_key();
        press_key();
        typewriter_effect("bataklık sandığından daha derin ve batmaya başlıyorsun\n", BLUE);
        choice_3();
    }
    else if (x==2) {
        typewriter_effect("bataklığın etrafından dolanıyorsun\n", BLUE);
        choice_2();
    }
}

int main() {

    typewriter_effect("Yavaşça gözlerini açıyorsun", BLUE);
    press_key();
    typewriter_effect("ağaçların göğe uzanan dalları ve gökyüzünün maviliği gözlerini kamaştırıyor", BLUE);
    press_key();
    typewriter_effect("hafızanda hiçbir şey yok",BLUE);
    press_key();
    typewriter_effect("ayağa kalkıyorsun ve etrafına bakınıyorsun", BLUE);
    press_key();
    typewriter_effect("burası bir orman. yavaşça yürümeye başlıyorsun. karşına bir patika çıkıyor",BLUE);
    press_key();
    typewriter_effect("patikayı takip ediyorusn. buraya nasıl geldiğin hakkında hiçbir fikrin yok", BLUE);
    press_key();
    choice_1();

    return 0;
}