#include "studentc.h"

std::ostream& Student::arr_out(std::ostream& os) const
{
    int i;
    size_t lim = scores.size();
    if (lim > 0)
    {
        for (i = 0; i < lim; i++)
        {
            os << scores[i] << "  ";
            if (i % 5 == 4)
                os << std::endl;
        }
        if (i % 5 != 0)
            os << std::endl;
    }
    else
    {
        os << "empty array";
    }
    return os;
}

double Student::Average() const
{
    if (scores.size() > 0)
        return scores.sum() / scores.size();
    else
        return 0.0;
}

const std::string& Student::Name() const
{
    return name;
}

double& Student::operator[](int i)
{
    return scores[i];    //use valarray<double>::operator[]()
}

double Student::operator[](int i) const
{
    return scores[i];  
}

std::istream& operator>>(std::istream& is, Student& stu)
{
    is >> stu.name;
    return is;
}

//use string friend getline(ostream & , const string &)
std::istream& getline(std::istream& is, Student& stu)
{
    getline(is, stu.name);
    return is;
}

//use string version of operator<<()
std::ostream& operator<<(std::ostream& os, const Student& stu)
{
    os << "Scores for : " << stu.name << ":\n";
    stu.arr_out(os);        //use private method for scores
    return os;
}
