/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSSceneTransitionContext : NSObject <BSDescriptionProviding, BSXPCCoding, NSCopying, NSMutableCopying> {
    NSSet * _actions;
    bool  _allowCPUThrottling;
    BKSAnimationFenceHandle * _animationFence;
    BSAnimationSettings * _animationSettings;
    BSProcessHandle * _originatingProcess;
    BSMutableSettings * _otherSettings;
    BSMutableSettings * _transientLocalClientSettings;
    FBSceneUpdateContext * _updateContext;
    FBWatchdogTransitionContext * _watchdogTransitionContext;
}

@property (nonatomic, copy) NSSet *actions;
@property (nonatomic) bool allowCPUThrottling;
@property (nonatomic, retain) BKSAnimationFenceHandle *animationFence;
@property (nonatomic, copy) BSAnimationSettings *animationSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) BSProcessHandle *originatingProcess;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) BSMutableSettings *transientLocalClientSettings;
@property (nonatomic, retain) FBSceneUpdateContext *updateContext;
@property (nonatomic, readonly) FBSceneUpdateContext *updateContext;
@property (nonatomic) double watchdogScaleFactor;
@property (nonatomic, retain) FBWatchdogTransitionContext *watchdogTransitionContext;
@property (nonatomic, readonly) FBWatchdogTransitionContext *watchdogTransitionContext;

// Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices

+ (id)transitionContext;

- (void).cxx_destruct;
- (bool)_isEmpty;
- (id)actions;
- (id)animationFence;
- (id)animationSettings;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)hash;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)originatingProcess;
- (id)otherSettings;
- (void)setActions:(id)arg1;
- (void)setAnimationFence:(id)arg1;
- (void)setAnimationSettings:(id)arg1;
- (void)setOriginatingProcess:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)transientLocalClientSettings;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

// Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard

+ (long long)_mapNewPolicyFromOldPolicy:(long long)arg1;
+ (long long)_mapOldPolicyFromNewPolicy:(long long)arg1;

- (bool)allowCPUThrottling;
- (bool)runWatchdogIndependently;
- (void)setAllowCPUThrottling:(bool)arg1;
- (void)setRunWatchdogIndependently:(bool)arg1;
- (void)setUpdateContext:(id)arg1;
- (void)setWatchdogExtension:(double)arg1;
- (void)setWatchdogPolicy:(long long)arg1;
- (void)setWatchdogScaleFactor:(double)arg1;
- (void)setWatchdogTransitionContext:(id)arg1;
- (id)updateContext;
- (double)watchdogExtension;
- (long long)watchdogPolicy;
- (double)watchdogScaleFactor;
- (id)watchdogTransitionContext;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

- (void)setWatchdogScaleFactor:(double)arg1;
- (double)watchdogScaleFactor;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (bool)isUISubclass;

@end
