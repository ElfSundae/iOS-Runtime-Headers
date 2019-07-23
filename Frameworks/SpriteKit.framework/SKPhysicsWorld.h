/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKPhysicsWorld : NSObject <NSCoding> {
    <SKPhysicsContactDelegate> *_contactDelegate;
    struct CGVector { 
        float dx; 
        float dy; 
    } _gravity;
    float speed;
}

@property (nonatomic) <SKPhysicsContactDelegate> *contactDelegate;
@property (nonatomic) struct CGVector { float x1; float x2; } gravity;
@property (nonatomic) float speed;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)copyWithZone:(struct _NSZone { }*)arg1;

- (void)addBody:(id)arg1;
- (void)addJoint:(id)arg1;
- (id)bodies;
- (id)bodyAlongRayStart:(struct CGPoint { float x1; float x2; })arg1 end:(struct CGPoint { float x1; float x2; })arg2;
- (id)bodyAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)bodyInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)contactDelegate;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateBodiesAlongRayStart:(struct CGPoint { float x1; float x2; })arg1 end:(struct CGPoint { float x1; float x2; })arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateBodiesAtPoint:(struct CGPoint { float x1; float x2; })arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateBodiesInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 usingBlock:(id /* block */)arg2;
- (id)fields;
- (struct CGVector { float x1; float x2; })gravity;
- (BOOL)hasBodies;
- (BOOL)hasFields;
- (id)initWithCoder:(id)arg1;
- (void)removeAllBodies;
- (void)removeAllJoints;
- (void)removeBody:(id)arg1;
- (void)removeJoint:(id)arg1;
- (void)sampleFields;
- (void)sampleFieldsAt;
- (void)setContactDelegate:(id)arg1;
- (void)setGravity:(struct CGVector { float x1; float x2; })arg1;
- (void)setSpeed:(float)arg1;
- (float)speed;
- (BOOL)stepWithTime:(double)arg1 velocityIterations:(unsigned int)arg2 positionIterations:(unsigned int)arg3;

@end
