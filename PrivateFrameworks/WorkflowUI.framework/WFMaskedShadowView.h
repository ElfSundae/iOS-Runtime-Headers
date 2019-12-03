/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFMaskedShadowView : UIView <WFActionEventObserver> {
    WFAction * _action;
    bool  _actionRunning;
    bool  _attributesChanged;
    UIColor * _borderColor;
    CAShapeLayer * _borderLayer;
    double  _borderWidth;
    double  _cornerRadius;
    long long  _mode;
    UIColor * _runningShadowColor;
    UIColor * _shadowColor;
}

@property (nonatomic) WFAction *action;
@property (nonatomic, retain) UIColor *borderColor;
@property (nonatomic) CAShapeLayer *borderLayer;
@property (nonatomic) double borderWidth;
@property (nonatomic) double cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long mode;
@property (nonatomic, retain) UIColor *runningShadowColor;
@property (nonatomic, retain) UIColor *shadowColor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)action;
- (void)actionRunningStateDidChange:(id)arg1;
- (void)applyAttributes;
- (void)attributesDidChange;
- (id)borderColor;
- (id)borderLayer;
- (double)borderWidth;
- (double)cornerRadius;
- (void)layoutSubviews;
- (long long)mode;
- (id)runningShadowColor;
- (void)setAction:(id)arg1;
- (void)setBorderColor:(id)arg1;
- (void)setBorderLayer:(id)arg1;
- (void)setBorderWidth:(double)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setMode:(long long)arg1;
- (void)setRunningShadowColor:(id)arg1;
- (void)setShadowColor:(id)arg1;
- (id)shadowColor;
- (void)updateShadowColorAnimated:(bool)arg1;

@end
