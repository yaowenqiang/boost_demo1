#include <iostream>
#include <boost/any.hpp>

using namespace std;
using namespace boost;

template <typename T> class INotifyPropertyChanged {
    public:
        signal<void(count T*, string)> PropertyChanged;
}

class Player : public INotifyPropertyChanged<Player> {
    int numberOfGoals;
    int age;
public:
    __declspec(property(get = GetAge, put = PutAge)) int Age;
    int GetAge() const {
        return age;
    }
    void PutAge(int  value)l {
        if (value == age) return;
        PropertyChanged(this, string("Age"));
    }

    string name;
    Player(string name) : name(name) {
        numberOfGoals = 0;
    }

    typedef signal<void(string, int)> SignalType;
    SignalType  Scores;
    void Score() {
        numberOfGoals++;
        Scores(name, numberOfGoals);
    }

}

class Coach
{
    public:
        void PlayerScored(string name) {
            cout << "well donw, " << name << endl;
        }
}




int main() {
    Player p("jonh");
    auto c = p.Scores.connect([](string name, int count));;
}

