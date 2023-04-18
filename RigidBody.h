#include "Quaternion.h"
#include "Matrix3x3.h"

typedef struct RigidBody{
    float fMass;
    Matrix3x3 mInertia;
    Matrix3x3 mInertiaInverse;
    Vector3 vPosition;
    Vector3 vVelocity;
    Vector3 vVelocityBody;
    Vector3 vAngularVelocity;
    Vector3 vEulerAngles;
    float fSpeed;
    Quaternion qQuaternion;
    Vector3 vForces;
    Vector3 vMomments;
} RigidBody, *pRigidBody;