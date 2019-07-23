/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIVisualEffectView : UIView <NSSecureCoding, UIInteractionProgressObserver> {
    BOOL __adaptsToInterfaceStyle;
    NSUUID *_animationUUID;
    _UIVisualEffectBackdropView *_backdropSubview;
    _UIVisualEffectFilterView *_colorBurnSubview;
    _UIVisualEffectFilterView *_colorSubview;
    _UIVisualEffectContentView *_contentView;
    float _cornerRadius;
    _UIVisualEffectFilterView *_darkeningSubview;
    UIVisualEffect *_effect;
    NSArray *_effectConfigViews;
    struct { 
        unsigned int hasHadAlphaAnimated : 1; 
        unsigned int suppressReportingEmptyContentView : 1; 
        unsigned int interactiveAnimationInFlight : 1; 
        unsigned int interactiveAnimationCompleted : 1; 
    } _effectViewFlags;
    UIVisualEffect *_finalEffect;
    _UIVisualEffectFilterView *_grayscaleSubview;
    NSString *_groupName;
    UIVisualEffect *_initialEffect;
    UIView *_maskView;
    UIVisualEffect *_overrideEffect;
    double _pausedTime;
}

@property (setter=_setAdaptsToInterfaceStyle:, nonatomic) BOOL _adaptsToInterfaceStyle;
@property (setter=_setCornerRadius:, nonatomic) float _cornerRadius;
@property (setter=_setGroupName:, nonatomic, copy) NSString *_groupName;
@property (nonatomic, readonly) UIVisualEffect *_trueEffect;
@property (nonatomic, retain) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) UIVisualEffect *effect;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIVisualEffect *overrideEffect;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (BOOL)_adaptsToInterfaceStyle;
- (void)_applyCornerRadiusToSubviews;
- (void)_applyGroupNameToSubviews;
- (void)_commonInit;
- (void)_configureForCurrentEffect;
- (void)_configureForEffectConfig:(id)arg1;
- (void)_configureForEffectSettings:(id)arg1;
- (float)_cornerRadius;
- (void)_createContentViewIfNecessary;
- (id)_groupName;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_rebuildEffectViewForCurrentEffect;
- (void)_setAdaptsToInterfaceStyle:(BOOL)arg1;
- (void)_setCornerRadius:(float)arg1;
- (void)_setEffect:(id)arg1;
- (void)_setGroupName:(id)arg1;
- (void)_setTintOpacity:(float)arg1;
- (void)_setupEffectsViewsForSettings:(id)arg1;
- (id)_trueEffect;
- (void)_updateEffectForAccessibilityChanges:(id)arg1;
- (id)_whatsWrongWithThisEffect;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (id)contentView;
- (void)dealloc;
- (id)effect;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEffect:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)interactionProgress:(id)arg1 didEnd:(BOOL)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
- (id)maskView;
- (id)overrideEffect;
- (void)setContentView:(id)arg1;
- (void)setEffect:(id)arg1;
- (void)setEffect:(id)arg1 withInteractionProgress:(id)arg2;
- (void)setMaskView:(id)arg1;
- (void)setOverrideEffect:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidMoveToSuperview;

@end
