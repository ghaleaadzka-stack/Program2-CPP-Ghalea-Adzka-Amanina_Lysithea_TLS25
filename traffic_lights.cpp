#include <iostream>
using namespace std;

string getLampu(int t)
{
    int cycle = 103; // hijau 20 + kuning 3 + merah 80
    int start = 45;  // mulai di detik 45 (kuning)
    int pos = (t - start) % cycle;

    if (pos < 3)
        return "Kuning"; // 0-2
    else if (pos < 83)
        return "Merah"; // 3-82
    else
        return "Hijau"; // 83-102
}

int main()
{
    int times[] = {80, 135, 150, 212};
    for (int t : times)
    {
        cout << "Detik " << t << " -> " << getLampu(t) << endl;
    }
    return 0;
}
