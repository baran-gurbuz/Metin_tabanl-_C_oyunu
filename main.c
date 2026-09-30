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

void press_key() {

    getchar();
}
void choice_20() {}
void choice_19() {}
void choice_18() {}
void choice_17() {}
void choice_16() {}
void choice_15() {}
void choice_14()    {}
void choice_13()    {}
void choice_12()    {}
void choice_11()    {}
void choice_10() {}
void choice_9() {}
void choice_8() {}
void choice_7() {
    int x;
    typewriter_effect("allen cevap verir:", BLUE);
    typewriter_effect("Çift canlı, 2 farklı türüde aynı yaşamda deneyimleyenlere denir", YELLOW);
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
    typewriter_effect("benim adım allen ve ben bir çift canlıyım", YELLOW);
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
