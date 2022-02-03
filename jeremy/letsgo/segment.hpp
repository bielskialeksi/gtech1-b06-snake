using namespace std;
class Segment {
    private :
        Segment* next;
        int pos_x;
        int pos_y;
        int dir;
    public :
        int GetPOS_X(void);
        int GetPOS_Y(void);
        int GetDIR(void);
        Segment(int pos_x, int pos_y, int dir);
        ~Segment();
};