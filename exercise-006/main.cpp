#include <fmt/chrono.h>
#include <fmt/format.h>

#include <string>
#include <vector>

class Tier
{
   public:
    void iss()
    {
        fmt::println("Fresse wie ein Tier");
    };
};
class Hund : public Tier
{
   public:
    void iss()
    {
        fmt::println("Wuff! Fresse gerade");
    };
};
class Mensch : public Tier
{
   public:
    void iss()
    {
        fmt::println("Esse gerade");
    };
};

int main()
{
    std::vector<Tier*> tiere;
    tiere.push_back(new Tier());
    tiere.push_back(new Hund());
    tiere.push_back(new Mensch());
    for (auto tier: tiere)
    {
        tier->iss();
    }
    return 0;
}