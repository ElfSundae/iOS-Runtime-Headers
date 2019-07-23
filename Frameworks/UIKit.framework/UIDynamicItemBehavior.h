/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDynamicItemBehavior : UIDynamicBehavior {
    BOOL _allowsRotation;
    BOOL _anchored;
    float _angularResistance;
    NSMapTable *_cachedAngularVelocities;
    NSMapTable *_cachedLinearVelocities;
    float _charge;
    float _density;
    float _elasticity;
    float _friction;
    float _resistance;
    struct { 
        unsigned int elasticityChanged : 1; 
        unsigned int frictionChanged : 1; 
        unsigned int densityChanged : 1; 
        unsigned int resistanceChanged : 1; 
        unsigned int angularResistanceChanged : 1; 
        unsigned int rotationEnabledChanged : 1; 
        unsigned int useDefaultViewPropertiesApplierChanged : 1; 
        unsigned int chargeChanged : 1; 
        unsigned int dynamicChanged : 1; 
    } _stateFlags;
    BOOL _useDefaultViewPropertiesApplier;
}

@property (nonatomic) BOOL allowsRotation;
@property (getter=isAnchored, nonatomic) BOOL anchored;
@property (nonatomic) float angularResistance;
@property (nonatomic) float charge;
@property (nonatomic) float density;
@property (nonatomic) float elasticity;
@property (nonatomic) float friction;
@property (nonatomic, readonly, copy) NSArray *items;
@property (nonatomic) float resistance;

+ (BOOL)_isPrimitiveBehavior;

- (void).cxx_destruct;
- (float)_angleForItem:(id)arg1;
- (float)_angularResistanceForItem:(id)arg1;
- (void)_associate;
- (void)_configureBody:(id)arg1 forView:(id)arg2;
- (float)_densityForItem:(id)arg1;
- (void)_dissociate;
- (float)_elasticityForItem:(id)arg1;
- (float)_frictionForItem:(id)arg1;
- (float)_massForItem:(id)arg1;
- (struct CGPoint { float x1; float x2; })_positionForItem:(id)arg1;
- (void)_reevaluate:(unsigned int)arg1;
- (float)_resistanceForItem:(id)arg1;
- (BOOL)_rotationEnabledForItem:(id)arg1;
- (void)_setAngle:(float)arg1 forItem:(id)arg2;
- (void)_setPosition:(struct CGPoint { float x1; float x2; })arg1 forItem:(id)arg2;
- (void)addAngularVelocity:(float)arg1 forItem:(id)arg2;
- (void)addItem:(id)arg1;
- (void)addLinearVelocity:(struct CGPoint { float x1; float x2; })arg1 forItem:(id)arg2;
- (BOOL)allowsRotation;
- (float)angularResistance;
- (float)angularVelocityForItem:(id)arg1;
- (void)applyImpulse:(struct CGPoint { float x1; float x2; })arg1 toItem:(id)arg2;
- (float)charge;
- (float)density;
- (id)description;
- (float)elasticity;
- (float)friction;
- (id)init;
- (id)initWithItems:(id)arg1;
- (BOOL)isAnchored;
- (id)items;
- (struct CGPoint { float x1; float x2; })linearVelocityForItem:(id)arg1;
- (void)removeItem:(id)arg1;
- (float)resistance;
- (void)setAllowsRotation:(BOOL)arg1;
- (void)setAnchored:(BOOL)arg1;
- (void)setAngularResistance:(float)arg1;
- (void)setCharge:(float)arg1;
- (void)setDensity:(float)arg1;
- (void)setElasticity:(float)arg1;
- (void)setFriction:(float)arg1;
- (void)setResistance:(float)arg1;
- (void)setUseDefaultViewPropertiesApplier:(BOOL)arg1;
- (BOOL)useDefaultViewPropertiesApplier;

@end
