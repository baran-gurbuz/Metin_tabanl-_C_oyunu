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
    typewriter_effect("Sin(x) in integrali nedir:", BLUE);
    typewriter_effect("\n1- sin(x)\n2- sin(-x)\n3- cos(-x)\n4- -cos(x)\n5- cos(x)\n", GREEN);
    scanf("%d", &x);
    if (x==4) {
        typewriter_effect("Adamın silahını almayı başardın.", BLUE);
        press_key();
        typewriter_effect("Arabayla şehre doğru ilerliyorsun...", BLUE);
    }
    else {
        typewriter_effect("Adamın silahını almayı başaramadın.", BLUE);
        press_key();
        typewriter_effect("Adam seni oracıkta vurdu...", BLUE);
    }
}
void choice_19() {
    int x;
    typewriter_effect("Araba bir dağ kulübesinin önünde duruyor ve araçtan iniyorsunuz", BLUE);
    press_key();
    typewriter_effect("\nAdam seni öldürmeye çalıştığını itiraf ediyor, elinde silah görüyorsun", BLUE);
    typewriter_effect("\n1-KAÇ!\n2-SALDIR!\n", GREEN);
    scanf("%d", &x);
    if (x==1) {
        typewriter_effect("Adam seni silahıyla vurur...", BLUE);
    }
    else if (x==2) {
        typewriter_effect("Adama saldırmaya çalışıyorsun ve boğuşuyorsunuz\n", BLUE);
        choice_20();
    }
}
void choice_18() {
    int x;
    typewriter_effect("Adam giderek garipleşir", BLUE);
    press_key();
    typewriter_effect("\nEn sonunda şehir yolundan sapıp bir dağ yoluna girer", BLUE);
    typewriter_effect("\n1- Arabadan atla\n2- Adama saldır\n3- Bekle\n", GREEN);
    scanf("%d", &x);
    if (x==1) {
        typewriter_effect("Kapı kilitlidir.", BLUE);
        press_key();
        typewriter_effect("Adam silah çıkarır ve seni öldüreceğini söyleyip seni oracıkta vurur...", BLUE);
    }
    else if (x==2) {
        typewriter_effect("Adama saldırıyorsun.", BLUE);
        press_key();
        typewriter_effect("Ufak bir boğuşmanın ardından kaza geçiriyorsunuz ve hayatını kaybediyorsun...", BLUE);
    }
    else if (x==3) {
        typewriter_effect("Bekliyorsun\n", BLUE);
        choice_19();
    }
}
void choice_17() {
    int x;
    typewriter_effect("Tekrardan hafızanda bazı anılar görüyorsun", BLUE);
    press_key();
    typewriter_effect("\nBu anı bir öncekiyle aynı ama seni kovalayan kişi o kadın değil", BLUE);
    press_key();
    typewriter_effect("Bu sefer seni kovalayan kişi bu araçta ki adamdır", RED);
    typewriter_effect("\n1- Arabadan atla\n2- Adama saldır\n3- Adama belli etme\n", GREEN);
    scanf("%d", &x);
    if (x==1) {
        typewriter_effect("Araçtan atlıyorsun. yerde yuvarlanmaya devam ederken arkadan gelen araç hızını alamıyor ve seni eziyor...", BLUE);
    }
    else if (x==2) {
        typewriter_effect("Adama saldırıyorsun.", BLUE);
        press_key();
        typewriter_effect("Afak bir boğuşmanın ardından kaza geçiriyorsunuz ve hayatını kaybediyorsun...", BLUE);
    }
    else if (x==3) {
        choice_18();
    }
}
void choice_16() {
    int x;
    typewriter_effect("Korktuğunu belli etmemeye çalışıyorsun\n", BLUE);
    press_key();
    typewriter_effect("Kadın senle çok cana yakın konuşuyor ve bu tedirginliğini arttırıyor", BLUE);
    typewriter_effect("\n1- Araçtan atla\n2- Sakin kal ve yola devam et\n", GREEN);
    scanf("%d", &x);
    if (x==1) {
        choice_15();
    }
    else if (x==2) {
        typewriter_effect("Kadından korkmana rağmen yolculuğa devam ediyorsun", BLUE);
        press_key();
        typewriter_effect("\nKadın aynı cana yakınlığı koruyor ve şehre yaklaşıyorsunuz", BLUE);
        press_key();
        typewriter_effect("Seni en yakın hastaneye götürüyor", BLUE);
        press_key();
        typewriter_effect("Doktor geçici hafıza kaybın olduğunu söylüyor", BLUE);
        press_key();
        typewriter_effect("Anlaşılan o ki bu durumda ki insanlar uydurma anılar görebiliyormuş\nKadın masum çıkıyor ve o ormana nasıl gittiğini hiçbir zaman anlayamıyorsun...", BLUE);
    }
}
void choice_15() {
    int x;
    typewriter_effect("Araçtan atlıyorsun.\nYere çarptığında tüm vücuduna bir ağrı giriyor", BLUE);
    press_key();
    typewriter_effect("\nKadının aracı panikle aniden durdurduğunu görüyrosun", BLUE);
    typewriter_effect("\n1- Ormana gir\n2- Yolun diğer tarafına doğru koşmaya başla\n", GREEN);
    scanf("%d", &x);
    if (x==1) {
        typewriter_effect("Ormanda ilerlerken kayboluyorsun.\nBirdaha çıkışı hiç bulamıyorsun...", BLUE);
    }
    else if (x==2) {
        typewriter_effect("Aracın geldiği yöne doğru koşmaya başlıyorsun\n", BLUE);
        press_key();
        typewriter_effect("Koşarken kadının sana seslendiğini duyuyorsun ama aldırış etmiyorsun", BLUE);
        press_key();
        typewriter_effect("Tam o sırada başka bir araç daha geliyor\n", BLUE);
        typewriter_effect("Araçta ki adama derdini anlatıyorsun ve seni arabasına alıyor", BLUE);
        press_key();
        typewriter_effect("İlerlerken kadının yanından geçiyorsunuz\nSana şaşkın gözlerle bakıyor", BLUE);
        press_key();
        typewriter_effect("Sizi arabasıyla takip etmeye başlıyor\nAynı yöne gittiğiniz için başka seçeneğinin olmadığını düşünüyorsun\n",BLUE);
        choice_17();
    }
}
void choice_14() {
    int x;
    typewriter_effect("Bunu gören allen çocukça bir üzüntüye kapılıyor ve ağlayacak gibi oluyor", BLUE);
    typewriter_effect("\n1- Allen için yemeği ye\n2- Yemeği yeme\n", GREEN);
    scanf("%d", &x);
    if (x==1) {
        typewriter_effect("Yemek o kadar lezetli ki kendinden geçiyorsun.\nYemeği bırakamayıp hayatı sorgularken yavaşça bir bataklık canavarına dönüşüyorsun.",BLUE);
        typewriter_effect("\nArtık hayatının geri kalanını burada geçireceksin...", BLUE);
    }
    else if (x==2) {
        typewriter_effect("Allen bir anda sinirleniyor ve sana saldırmaya çalışıyor", BLUE);
        press_key();
        typewriter_effect("Doğruca dışarı kaçıyorsun\n", BLUE);
        choice_8();
    }
}
void choice_13() {
    int x;
    typewriter_effect("Allen akşam yemeği hazırlar ve senide masaya davet eder", BLUE);
    press_key();
    typewriter_effect("\nMasaya oturuyorsun, yemek leziz görünüyor", BLUE);
    typewriter_effect("\n1- Yemeği ye\n2- Yemeği yeme\n", GREEN);
    scanf("%d", &x);
    if (x==1) {
        typewriter_effect("Yemek o kadar lezetli ki kendinden geçiyorsun.\nYemeği bırakamayıp hayatı sorgularken yavaşça bir bataklık canavarına dönüşüyorsun.",BLUE);
        typewriter_effect("artık hayatının geri kalanını burada geçireceksin...", BLUE);
    }
    else if (x==2) {
        typewriter_effect("Yemeği yemiyorsun\n", BLUE);
        choice_14();
    }
}
void choice_12() {
    int x;
    typewriter_effect("Dostum, malesef artık eve dönemessin. yani buraya alışsan iyi olur.\nMerak etme burası geldiğin yerden daha iyi bir yer\n", BLUE);
    typewriter_effect("1- Allen ile kal\n2- Kaçmaya çalış\n", GREEN);
    scanf("%d", &x);
    if (x==1) {
        typewriter_effect("Hayatının sonuna kadar allen ile birlikte bataklık canavarlığı yapıyorsun...", BLUE);
    }
    else if (x==2) {choice_8();}
}
void choice_11() {
    int x;
    typewriter_effect("Hayır tabiki de", YELLOW);
    press_key();
    typewriter_effect("\nSeninle en yakın arkadaşlar olarak bu dünyada yaşayacağız ne dersin?\n", YELLOW);
    typewriter_effect("1- Sakince allen ı izle\n2- Kaçmaya çalış\n", GREEN);
    scanf("%d", &x);
    if (x==1) {choice_13();}
    else if (x==2) {
        typewriter_effect("Kaçmaya çalışıyorsun\n", BLUE);
        choice_8();
    }
}
void choice_10() {
    int x;
    typewriter_effect("Adama derdini anlatıyorsun\nAdam seni dinleyip anlıyor", BLUE);
    press_key();
    typewriter_effect("\nAdam sakin bir tavırla istersen seni evine gönderebileceğini söyler ama öncesinde sormak istediğini ekler:\n", BLUE);
    typewriter_effect("Gerçekten bu kadar kötülüğün olduğu bir dünyaya dönmek istiyor musun?", MAGENTA);
    typewriter_effect("\n1- Geri dön\n2- Bu dünyada kal\n", GREEN);
    scanf("%d", &x);
    if (x==1) {
        typewriter_effect("Geri dönmeyi seçiyorsun.", BLUE);
        press_key();
        typewriter_effect("Gir anda kendini yatağına buluyorsun", BLUE);
        press_key();
        typewriter_effect("Artık hafızan yerinde", BLUE);
        press_key();
        typewriter_effect("Az önce yaşadığın her şey bir rüya gibi ciddiyetini yitiriyor", BLUE);
        press_key();
        typewriter_effect("Yatağından kalkıyorsun ve işe gitmek için hazırlanıyorsun", BLUE);
        press_key();
        typewriter_effect("Yıl 1939 ve sen Polonyalı bir yahudisin...",BLUE);
    }
    else if (x==2) {
        typewriter_effect("Adama hak veriyorsun ve bu dünyada kalmayı tercih ediyorsun", BLUE);
        press_key();
        typewriter_effect("Hayatının geri kalanını bu sakin dünyada mutlu bir şekilde geçiriyorsun...", BLUE);
    }
}
void choice_9() {
    int x;
    typewriter_effect("Vadiye doğru gidiyorsun.", BLUE);
    press_key();
    typewriter_effect("\nÜzüm bağlarının arasından geçerken mest oluyorsun.", BLUE);
    press_key();
    typewriter_effect("Çok daha uzakta, buğday tarlaları arasında bir ev görüyorsun", BLUE);
    press_key();
    typewriter_effect("Eve giriyorsun ve karşında yerde uzanan bir aslan görüyorsun\n", BLUE);
    typewriter_effect("1- Aslanla konuşmaya çalış\n2- Kaç!\n", GREEN);
    scanf("%d", &x);
    if (x==1) {
        typewriter_effect("Aslan gerçek bir aslandır", BLUE);
        press_key();
        typewriter_effect("Sen onunla konuşmaya çalışırken yerinden kalkıyor ve seni bir pençede öldürüyor", BLUE);
    }
    else if (x==2) {
        typewriter_effect("Kapıyı açıp tam kaçacakken karşında yaşlı bir adam görüyorsun\n", BLUE);
        choice_10();
    }
}
void choice_8() {

    int x;
    typewriter_effect("Yaratıktan kurtuluyorsun. bir anlığına sakinleşip etrafına bakıyorsun\n", BLUE);
    press_key();
    typewriter_effect("Karşında yemyeşil bir vadi uzanıyor", BLUE);
    press_key();
    typewriter_effect("Çimlerin bittiği yerde üzüm bağları başlıyor", BLUE);
    press_key();
    typewriter_effect("Burası adeta cennet!", BLUE);
    typewriter_effect("\nHemen arka tarafında da karanlık bir orman var", BLUE);
    press_key();
    typewriter_effect("Burası geldiğin yer\n", BLUE);
    typewriter_effect("1- Vaadiye doğru git\n2- Ormana doğru git\n", GREEN);
    scanf("%d", &x);
    if (x == 1) {choice_9();}
    else if (x == 2) {
        typewriter_effect("Ormana doğru gitmeye karar veriyosun", BLUE);
        press_key();
        typewriter_effect("Bir süre ilerledikten sonra geldiğin bataklığı buluyorsun.\nBataklık tepende duruyor", BLUE);
        press_key();
        typewriter_effect("Yukarı zıplayarak bataklığın içine giriyorsun.\nÇırpınarak kendini yukarı çekiyorsun", BLUE);
        press_key();
        typewriter_effect("Kendini ne kadar yukarı çekersen çek başın bataklığın dışına ulaşamıyor", BLUE);
        press_key();
        typewriter_effect("Nefesin bitiyor ve kemiklerin sonsuza kadar bataklığın içinde kalıyor", BLUE);
    }
}
void choice_7() {
    int x;
    typewriter_effect("Allen cevap verir:", BLUE);
    typewriter_effect("\nÇift canlı, 2 farklı türüde aynı yaşamda deneyimleyenlere denir\n", YELLOW);
    press_key();
    typewriter_effect("Artık sende bir çift canlı olacaksın\nBenimle birlikte bu diyarda yaşayabilirsin",YELLOW);
    press_key();
    typewriter_effect("Savaşların olmadığı, bolluğun olduğu bir dünya.\nTek şart günde 2 saat noyunca bataklık canavarı olarak bataklığa düşenleri bu tarafa çekiceksin\n", YELLOW);
    typewriter_effect("1- 'Bu delilik, ben geri dönüyorum'(Reddet)\n2- 'Bu kadar kötülüğün olduğu bir dünyada yaşayacağıma burada kalırım daha iyi'(Kabul et)\n", GREEN);
    scanf("%d", &x);
    if (x == 1) {choice_8(); } else {
        typewriter_effect("Kalmayı tercih ediyorsun",BLUE);
        press_key();
        typewriter_effect("Hayatının geri kalanını allen ile birlikte bu diyarlarda sakince geçiriyorsun...", BLUE);
    }

}
void choice_6() {
    int x;
    typewriter_effect("Yaratık konuşmaya başlar:", BLUE);
    press_key();
    typewriter_effect("\nBenim adım allen ve ben bir çift canlıyım", YELLOW);
    press_key();
    typewriter_effect("Biraz garip davranan allen sana konuşmanı beklercesine bakıyordur", BLUE);
    press_key();
    typewriter_effect("1- 'Çift canlı nedir?'\n2- 'Bana zarar verecek misin?'\n3- 'Benim eve dönmem lazım, yardım et!'\n",GREEN);
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
    typewriter_effect("Kısa bir yürüyüşün ardından canavar bir mağaraya giriyor", BLUE);
    press_key();
    typewriter_effect("1- İçeri gir\n2- Dışarıda kalıp etrafı incele\n", GREEN);
    scanf("%d", &x);
    if (x==1) {
        typewriter_effect("İçerisi çok şık dizayn edilmiş, tıpkı lüks bir şehir evi gibidir. ",BLUE);
        press_key();
        typewriter_effect("Yaratık sana bakarken bir anda insana dönüşür\n", BLUE);
        choice_6();
    }
    else if (x==2) {
        choice_8();
    }
}
void choice_4() {
    int x;
    typewriter_effect("Yolda giderken aklına bazı anılar gelmeye başlar", BLUE);
    press_key();
    typewriter_effect("Anıların birinde seni kovalayan ve en sonunda kafana vurup bayıltan birisini hatırlıyorsun", BLUE);
    press_key();
    typewriter_effect("Bu kişi yanındaki kadındır!!!\n", RED);
    typewriter_effect("1- Araçtan atla\n2- Kadına bir şey çaktırma\n",GREEN);
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
    typewriter_effect("Bataklıktan garip sesler geldiğini fark ediyorsun ama ilerlemeye devam edip bataklığı arkanda bırakıyorsun", BLUE);
    press_key();
    press_key();
    typewriter_effect("Orman gittikçe sıkılaşıyor ve en sonunda bir asfalt yola çıkıyorsun", BLUE);
    press_key();
    typewriter_effect("1- Yolu sola doğru takip et\n2- Yolu sağa doğru takip et\n", GREEN);
    scanf("%d", &x);
    press_key();
    typewriter_effect("Bir araba yaklaşıyor.\nAracı yaşlı bir kadın sürüyor.", BLUE);
    press_key();
    typewriter_effect("Kadına derdini anlatıyorsun. seni araca alıyor ve şehre doğru gidiyorsunuz\n", BLUE);
    choice_4();
}
void choice_3() {
    int x;
    typewriter_effect("Bataklığın altında sanki bir şey ayağını tutuyormuş gibi hissediyorsun\nBir şey seni aşağı doğru çekiyor",BLUE);
    press_key();
    typewriter_effect("Artık tümüyle bataklık içindesin",BLUE);
    press_key();
    typewriter_effect("Tam öldüğünü düşünürken bir anda düşmeye başlıyorsun ve yere kapaklanıyorsun", BLUE);
    press_key();
    typewriter_effect("Burası bataklığın altında farklı bir dünya", BLUE);
    press_key();
    typewriter_effect("Ayağa kalkıp etrafına bakıyorsun ve tam karşında yeşil bir canavar görüyorsun\n", BLUE);
    typewriter_effect("1- Arkana bakmadan kaç\n2- Yaratıkla konuşmaya çalış\n", GREEN);
    scanf("%d", &x);
    if (x==1) {
        typewriter_effect("Ne olduğunu anlamadan koşmaya başlıyorsun\n", BLUE);
        press_key();
        choice_8();
    }
    else if (x==2) {
        typewriter_effect("Yaratık onu takip etmeni istercesine hareketler yapıp yürümeye başlıyor\n", BLUE);
        press_key();
        choice_5();
    }
}
void choice_1() {

    int x;
    typewriter_effect("Yol bir bataklığa çıkıyor", BLUE);
    press_key();
    typewriter_effect("1- Bataklığın içinden geç\n2- Bataklığın etrafından dolan\n",GREEN);
    scanf("%d", &x);
    if (x==1) {
        typewriter_effect("Bataklığın içinden geçiyorsun", BLUE);
        press_key();
        press_key();
        typewriter_effect("Bataklık sandığından daha derin ve batmaya başlıyorsun\n", BLUE);
        choice_3();
    }
    else if (x==2) {
        typewriter_effect("Bataklığın etrafından dolanıyorsun\n", BLUE);
        choice_2();
    }
}

int main() {

    typewriter_effect("Yavaşça gözlerini açıyorsun", BLUE);
    press_key();
    typewriter_effect("Ağaçların göğe uzanan dalları ve gökyüzünün maviliği gözlerini kamaştırıyor", BLUE);
    press_key();
    typewriter_effect("Hafızanda hiçbir şey yok",BLUE);
    press_key();
    typewriter_effect("Ayağa kalkıyorsun ve etrafına bakınıyorsun", BLUE);
    press_key();
    typewriter_effect("Burası bir orman. Yavaşça yürümeye başlıyorsun. Karşına bir patika çıkıyor",BLUE);
    press_key();
    typewriter_effect("Patikayı takip ediyorusn. Buraya nasıl geldiğin hakkında hiçbir fikrin yok", BLUE);
    press_key();
    choice_1();

    return 0;
}