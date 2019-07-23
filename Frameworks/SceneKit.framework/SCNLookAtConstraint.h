/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNLookAtConstraint : SCNConstraint {
    BOOL _gimbalLockEnabled;
    SCNNode *_target;
}

@property (nonatomic) BOOL gimbalLockEnabled;
@property (nonatomic, readonly) SCNNode *target;

+ (id)lookAtConstraintWithTarget:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void)_customDecodingOfSCNLookAtConstraint:(id)arg1;
- (void)_customEncodingOfSCNLookAtConstraint:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)gimbalLockEnabled;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1;
- (void)setGimbalLockEnabled:(BOOL)arg1;
- (id)target;

@end
