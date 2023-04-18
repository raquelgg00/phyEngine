#include "Vector3.h"

class Quaternion {
    public: 
        float n;        //number (scalar) part
        Vector3 v;       //vector part: v.x, v.y, v.z

        Quaternion(void);
        Quaternion(float e0, float e1, float e2, float e3);
};