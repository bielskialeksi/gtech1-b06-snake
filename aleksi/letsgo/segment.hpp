#include <cstddef>
using namespace std;
class Segment {
    private :
        int pos_x;
        int pos_y;
        int dir;
    public :
        Segment(int pos_x, int pos_y,int dir);
        ~Segment();
        Segment* next;
        int GetPOS_X(void);
        int GetPOS_Y(void);
        Segment * GetNext(void);
        int GetDir(void);
        void Setdir(int dir);
};