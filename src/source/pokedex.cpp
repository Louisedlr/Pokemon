#include "../include/pokedex.hpp"

std::vector<Pokemon> fill_pokedex()
{
    std::vector<std::string> plante        = {"plante"};
    std::vector<std::string> plante_poison = {"plante", "poison"};
    std::vector<std::string> feu           = {"feu"};
    std::vector<std::string> feu_vol       = {"feu", "vol"};
    std::vector<std::string> eau           = {"eau"};
    std::vector<std::string> normal_vol    = {"normal", "vol"};
    std::vector<std::string> normal        = {"normal"};
    std::vector<std::string> electrik      = {"electrik"};
    std::vector<std::string> normal_fee    = {"normal", "fee"};
    std::vector<std::string> eau_vol       = {"eau", "vol"};
    std::vector<std::string> dragon        = {"dragon"};
    std::vector<std::string> dragon_vol    = {"dragon", "vol"};
    std::vector<std::string> psy           = {"psy"};
    std::vector<std::string> insecte       = {"insecte"};
    std::vector<std::string> insecte_vol   = {"insecte", "vol"};
    Pokemon                  bulbizarre("Bulbizarre", plante_poison);
    Pokemon                  herbizarre("Herbizarre", plante_poison);
    Pokemon                  florizarre("Florizarre", plante_poison);
    Pokemon                  salameche("Salameche", feu);
    Pokemon                  reptincel("Reptincel", feu);
    Pokemon                  dracaufeu("Dracaufeu", feu_vol);
    Pokemon                  carapuce("Carapuce", eau);
    Pokemon                  carabaffe("Carabaffe", eau);
    Pokemon                  tortank("Tortank", eau);
    Pokemon                  chenipan("Chenipan", insecte);
    Pokemon                  chrysacier("chrysacier", insecte);
    Pokemon                  papilusion("Papilusion", insecte_vol);
    // Pokemon                  aspicot;
    // Pokemon                  coconfort;
    // Pokemon                  dardagnan;
    Pokemon              rocoul("Rocoul", normal_vol);
    Pokemon              roucoups("Roucoups", normal_vol);
    Pokemon              roucarnage("Roucarnage", normal_vol);
    Pokemon              rattata("Rattata", normal);
    Pokemon              rattatac("Rattatac", normal);
    Pokemon              pikachu("Pikachu", electrik);
    Pokemon              raichu("Raichu", electrik);
    Pokemon              goupix("Goupix", feu);
    Pokemon              feunard("feunard", feu);
    Pokemon              rondoudou("Rondoudou", normal_fee);
    Pokemon              grodoudou("grodoudou", normal_fee);
    Pokemon              ponyta("Ponyta", feu);
    Pokemon              galopa("galopa", feu);
    Pokemon              otaria("Otaria", eau);
    Pokemon              magicarpe("Magicarpe", eau);
    Pokemon              leviator("Leviator", eau_vol);
    Pokemon              metamorph("Metamorph", normal);
    Pokemon              evoli("Evoli", normal);
    Pokemon              minidraco("Minidraco", dragon);
    Pokemon              draco("Draco", dragon);
    Pokemon              dracolosse("dracolosse", dragon_vol);
    Pokemon              mewtwo("Mewtwo", psy);
    Pokemon              mew("Mew", psy);
    std::vector<Pokemon> pokedex = {bulbizarre};
    // pokedex.push_back(bulbizarre);

    pokedex = {rattata, rocoul, roucoups, rattatac, roucarnage, bulbizarre, salameche, carapuce, pikachu, evoli, goupix, ponyta, magicarpe, rondoudou, minidraco, herbizarre, reptincel, carabaffe, raichu, feunard, grodoudou, galopa, otaria, draco, florizarre, dracaufeu, tortank, leviator, mew, dracolosse, mewtwo};

    return pokedex;
}
