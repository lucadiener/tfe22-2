#include <fmt/chrono.h>
#include <fmt/format.h>

#include <string>

class Person
{
   public:
    Person(std::string Name, std::string Adresse, std::string Telefon) : m_name(Name), m_adr(Adresse), m_tel(Telefon)
    {
    }
    std::string getName()
    {
        return m_name;
    }
    std::string getAdr()
    {
        return m_adr;
    }
    std::string getTel()
    {
        return m_tel;
    }
    virtual void info()
    {
        fmt::println("Name: {}",m_name);
        fmt::println(" Adresse: {}",m_adr);
        fmt::println(" Telefon: {}",m_tel);
    }

   private:
    std::string m_name;
    std::string m_adr;
    std::string m_tel;
};
class Kunde : public Person
{
   public:
    Kunde(std::string name, std::string adresse, std::string telefon, std::string kundennummer)
        : Person(name, adresse, telefon), m_kundenNummer(kundennummer)
    {
    }
    std::string getKundenNummer()
    {
        return m_kundenNummer;
    }
    void info()
    {
        fmt::println("Name         : {}",getName());
        fmt::println(" Adresse     : {}",getAdr());
        fmt::println(" Telefon     : {}",getTel());
        fmt::println(" Kundennummer: {}",m_kundenNummer);
    }
   private:
    std::string m_kundenNummer;
};

void personPrinter(Person& pers) {
    fmt::println("------------------");
    pers.info();
} 
auto main(int argc, char **argv) -> int
{
    /**
     * The {fmt} lib is a cross platform library for printing and formatting text
     * it is much more convenient than std::cout and printf
     * More info at https://fmt.dev/latest/api.html
     */
    fmt::print("Hello, {}!\n", "World");
    Person p("Hugo","Entenhausen","1234");
    Kunde k("Petra","Freiburg","0815","4711");

    p.info();
    k.info();
    fmt::println("Kundennummer: {}",k.getKundenNummer());
    //fmt::println("Kundennummer: {}",p.getKundenNummer());
    personPrinter(p);
    personPrinter(k);
    /* INSERT YOUR CODE HERE */

    return 0; /* exit gracefully*/
}
