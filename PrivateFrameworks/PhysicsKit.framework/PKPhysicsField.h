/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
 */

@interface PKPhysicsField : NSObject {
    struct shared_ptr<PKCField> { 
        struct PKCField {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _field;
    BOOL  _override;
    void _position;
    PKRegion * _region;
    float  _rotation;
    void _scale;
}

@property (nonatomic) unsigned int categoryBitMask;
@property (nonatomic) void direction;
@property (getter=isEnabled, nonatomic) BOOL enabled;
@property (nonatomic) float falloff;
@property (nonatomic) float minimumRadius;
@property (getter=isOverride, nonatomic) BOOL override;
@property (nonatomic) void position;
@property (nonatomic, retain) id region;
@property (nonatomic) <NSObject> *representedObject;
@property (nonatomic) float rotation;
@property (nonatomic) void scale;
@property (nonatomic) float strength;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<PKCField> { struct PKCField {} *x1; struct __shared_weak_count {} *x2; })_field;
- (unsigned int)categoryBitMask;
- (void)dealloc;
- (void)direction;
- (float)falloff;
- (id)init;
- (BOOL)isActive;
- (BOOL)isEnabled;
- (BOOL)isOverride;
- (float)minimumRadius;
- (BOOL)override;
- (void)position;
- (id)region;
- (id)representedObject;
- (float)rotation;
- (void)scale;
- (void)setActive:(BOOL)arg1;
- (void)setCategoryBitMask:(unsigned int)arg1;
- (void)setDirection;
- (void)setEnabled:(BOOL)arg1;
- (void)setFalloff:(float)arg1;
- (void)setIsOverride:(BOOL)arg1;
- (void)setMinimumRadius:(float)arg1;
- (void)setOverride:(BOOL)arg1;
- (void)setPosition;
- (void)setRegion:(id)arg1;
- (void)setRepresentedObject:(id)arg1;
- (void)setRotation:(float)arg1;
- (void)setScale;
- (void)setStrength:(float)arg1;
- (void)set_field:(struct shared_ptr<PKCField> { struct PKCField {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (float)strength;

@end
