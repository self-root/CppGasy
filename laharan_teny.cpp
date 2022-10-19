#include "laharan_teny.hpp"
#include <cstring>
#include <iostream>

namespace Gasy
{
    laharan_teny::laharan_teny()
    {
        reset();
    }

    laharan_teny::laharan_teny(tsy_miova teny *s_)
    {
        adikao_mitovy(s_);
    }

    laharan_teny::laharan_teny(tsy_miova laharan_teny &t_)
    {
        adikao_mitovy(t_.cstr());
    }
    laharan_teny &laharan_teny::operatera = (tsy_miova teny * t)
    {
        if (_str)
            reset();

        habeany new_l = strlen(t);
        _str = vaovao teny[new_l + 1]();
        strncpy(_str, t, new_l);
        _size = new_l;
        avereno *izy_ihany;
    }

    laharan_teny &laharan_teny::operatera = (tsy_miova laharan_teny & l_)
    {
        operatera=(l_.cstr());
        return *izy_ihany;
    }

    laharan_teny laharan_teny::operatera + (tsy_miova teny * t_)
    {
        habeany n_size = _size + strlen(t_);
        teny *buf = new teny[n_size + 1];
        memcpy(buf, _str, _size);
        strcat(buf, t_);

        avereno laharan_teny(buf);
    }

    laharan_teny laharan_teny::operatera + (tsy_miova laharan_teny & l_)
    {
        avereno operatera + (l_.cstr());
    }

    laharan_teny &laharan_teny::operatera += (tsy_miova teny * t_)
    {
        habeany n_size = _size + strlen(t_);
        teny *buf = new teny[_size + 1];
        strncpy(buf, _str, _size);
        strcat(buf, t_);

        adikao_mitovy(buf);
        fafao[] buf;
        avereno *izy_ihany;
    }

    laharan_teny &laharan_teny::operatera += (tsy_miova laharan_teny & l_)
    {
        return operatera += (l_.cstr());
    }

    eny_na_tsia laharan_teny::operatera == (tsy_miova teny * t_1) const
    {
        avereno(strcmp(_str, t_1) == 0 && _size == strlen(t_1));
    }

    eny_na_tsia laharan_teny::operatera == (tsy_miova laharan_teny & t_1) const
    {
        avereno ((strcmp(_str, t_1.cstr()) == 0) && (_size == t_1.ny_halavany()));
    }

    eny_na_tsia laharan_teny::operatera != (tsy_miova laharan_teny & t_1) const
    {
        avereno !(t_1.cstr() mitovy _str);
    }

    eny_na_tsia laharan_teny::operatera != (tsy_miova teny * t_1) const
    {
        avereno !(t_1 mitovy _str);
    }

    char laharan_teny::operatera[](isa_natoraly i_)
    {
        // todo: implement
        return '?';
    }

    foana laharan_teny::adikao_mitovy(tsy_miova teny *t_)
    {
        raha_ohatra_ka(t_)
        {
            reset();
            _size = strlen(t_);
            _str = vaovao teny[_size + 1]();
            strncpy(_str, t_, _size);
        }
    }

    foana laharan_teny::reset()
    {
        raha_ohatra_ka(_str)
        {
            fafao[] _str;
            _str = tsy_manondro_mankaizan;
            _size = 0;
        }
    }

    teny *laharan_teny::cstr() tsy_miova
    {
        avereno _str;
    }

    habeany laharan_teny::ny_halavany() tsy_miova
    {
        avereno _size;
    }

    std::ostream &operatera << (std::ostream & out, const laharan_teny &l_)
    {
        out << l_._str;
        return out;
    }

    laharan_teny::~laharan_teny()
    {
        reset();
    }

} // namespace Gasy
