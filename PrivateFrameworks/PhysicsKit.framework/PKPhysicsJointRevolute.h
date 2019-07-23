/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
 */

@interface PKPhysicsJointRevolute : PKPhysicsJoint {
    struct CGPoint { 
        float x; 
        float y; 
    }  _anchor;
    struct b2RevoluteJoint { int (**x1)(); int x2; struct b2Joint {} *x3; struct b2Joint {} *x4; struct b2JointEdge { struct b2Body {} *x_5_1_1; struct b2Joint {} *x_5_1_2; struct b2JointEdge {} *x_5_1_3; struct b2JointEdge {} *x_5_1_4; } x5; struct b2JointEdge { struct b2Body {} *x_6_1_1; struct b2Joint {} *x_6_1_2; struct b2JointEdge {} *x_6_1_3; struct b2JointEdge {} *x_6_1_4; } x6; struct b2Body {} *x7; struct b2Body {} *x8; bool x9; bool x10; void *x11; struct b2Vec2 { float x_12_1_1; float x_12_1_2; } x12; struct b2Vec2 { float x_13_1_1; float x_13_1_2; } x13; struct b2Vec3 { float x_14_1_1; float x_14_1_2; float x_14_1_3; } x14; float x15; bool x16; float x17; float x18; bool x19; float x20; float x21; float x22; int x23; int x24; struct b2Vec2 { float x_25_1_1; float x_25_1_2; } x25; struct b2Vec2 { float x_26_1_1; float x_26_1_2; } x26; struct b2Vec2 { float x_27_1_1; float x_27_1_2; } x27; struct b2Vec2 { float x_28_1_1; float x_28_1_2; } x28; float x29; float x30; float x31; float x32; struct b2Mat33 { struct b2Vec3 { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_33_1_1; struct b2Vec3 { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_33_1_2; struct b2Vec3 { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_33_1_3; } x33; } * _joint;
    struct b2RevoluteJointDef { 
        int type; 
        void *userData; 
        struct b2Body {} *bodyA; 
        struct b2Body {} *bodyB; 
        bool collideConnected; 
        struct b2Vec2 { 
            float x; 
            float y; 
        } localAnchorA; 
        struct b2Vec2 { 
            float x; 
            float y; 
        } localAnchorB; 
        float referenceAngle; 
        bool enableLimit; 
        float lowerAngle; 
        float upperAngle; 
        bool enableMotor; 
        float motorSpeed; 
        float maxMotorTorque; 
    }  _jointDef;
}

@property (readonly) struct CGPoint { float x1; float x2; } anchor;
@property (nonatomic) float frictionTorque;
@property (nonatomic) float lowerAngleLimit;
@property (nonatomic) float rotationSpeed;
@property (nonatomic) BOOL shouldEnableLimits;
@property (nonatomic) float upperAngleLimit;

+ (id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(struct CGPoint { float x1; float x2; })arg3;

- (id).cxx_construct;
- (struct b2Joint { int (**x1)(); int x2; struct b2Joint {} *x3; struct b2Joint {} *x4; struct b2JointEdge { struct b2Body {} *x_5_1_1; struct b2Joint {} *x_5_1_2; struct b2JointEdge {} *x_5_1_3; struct b2JointEdge {} *x_5_1_4; } x5; struct b2JointEdge { struct b2Body {} *x_6_1_1; struct b2Joint {} *x_6_1_2; struct b2JointEdge {} *x_6_1_3; struct b2JointEdge {} *x_6_1_4; } x6; struct b2Body {} *x7; struct b2Body {} *x8; bool x9; bool x10; void *x11; }*)_joint;
- (struct b2JointDef { int x1; void *x2; struct b2Body {} *x3; struct b2Body {} *x4; bool x5; }*)_jointDef;
- (struct CGPoint { float x1; float x2; })anchor;
- (void)create;
- (void)encodeWithCoder:(id)arg1;
- (float)frictionTorque;
- (id)initWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(struct CGPoint { float x1; float x2; })arg3;
- (id)initWithCoder:(id)arg1;
- (float)lowerAngleLimit;
- (float)rotationSpeed;
- (void)setFrictionTorque:(float)arg1;
- (void)setLowerAngleLimit:(float)arg1;
- (void)setRotationSpeed:(float)arg1;
- (void)setShouldEnableLimits:(BOOL)arg1;
- (void)setUpperAngleLimit:(float)arg1;
- (void)set_joint:(struct b2Joint { int (**x1)(); int x2; struct b2Joint {} *x3; struct b2Joint {} *x4; struct b2JointEdge { struct b2Body {} *x_5_1_1; struct b2Joint {} *x_5_1_2; struct b2JointEdge {} *x_5_1_3; struct b2JointEdge {} *x_5_1_4; } x5; struct b2JointEdge { struct b2Body {} *x_6_1_1; struct b2Joint {} *x_6_1_2; struct b2JointEdge {} *x_6_1_3; struct b2JointEdge {} *x_6_1_4; } x6; struct b2Body {} *x7; struct b2Body {} *x8; bool x9; bool x10; void *x11; }*)arg1;
- (BOOL)shouldEnableLimits;
- (float)upperAngleLimit;

@end
