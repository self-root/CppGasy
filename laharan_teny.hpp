#ifndef LAHARANTENY
#define LAHARANTENY

#include "base.hpp"
#include <fstream>

namespace Gasy
{
    kilasy laharan_teny
    {
    miafina:
        teny *_str = tsy_manondro_mankaizan;
        habeany _size = 0;

    tsy_afenina:
        laharan_teny();
        laharan_teny(tsy_miova teny * s_);
        laharan_teny(tsy_miova laharan_teny & t_);
        ~laharan_teny();
        foana adikao_mitovy(tsy_miova teny * t_);
        habeany ny_halavany() tsy_miova;
        foana reset();
        foana swap();
        teny *cstr() tsy_miova;

        // operators
        laharan_teny &operatera = (tsy_miova teny * t);
        laharan_teny &operatera = (tsy_miova laharan_teny & l_);
        laharan_teny operatera + (tsy_miova laharan_teny & l_);
        laharan_teny operatera + (tsy_miova teny * t_);
        laharan_teny &operatera += (tsy_miova laharan_teny & l_);
        laharan_teny &operatera += (tsy_miova teny * t_);
        eny_na_tsia operatera == (tsy_miova teny * t_1) tsy_miova;
        eny_na_tsia operatera == (tsy_miova laharan_teny & t_1) tsy_miova;
        eny_na_tsia operatera != (tsy_miova laharan_teny & t_1) tsy_miova;
        eny_na_tsia operatera != (tsy_miova teny * t_1) tsy_miova;
        namana std::ostream &operatera << (std::ostream & out, tsy_miova laharan_teny &l_);
        tsy_miova teny operatera[](tsy_miova isa_natoraly i_) tsy_miova;
    };
} // namespace Gasy
#endif // LAHARANTENY
