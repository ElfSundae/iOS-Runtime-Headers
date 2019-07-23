/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDimmingKnockoutBackdropView : UIView <UIAlertControllerBackgroundView> {
    int _style;
    UIVisualEffectView *backdropView;
    UIView *dimmingKnockoutView;
}

@property float cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property int style;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_dimmingKnockoutBackgroundColorForBackdropStyle:(int)arg1;
- (id)_filterForBackdropStyle:(int)arg1;
- (id)_visualEffectForStyle:(int)arg1;
- (float)cornerRadius;
- (id)initWithStyle:(int)arg1;
- (void)layoutSubviews;
- (void)setAlpha:(float)arg1;
- (void)setCornerRadius:(float)arg1;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setPressed:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setStyle:(int)arg1;
- (int)style;

@end
