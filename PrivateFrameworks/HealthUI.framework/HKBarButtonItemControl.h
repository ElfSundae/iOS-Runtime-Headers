/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKBarButtonItemControl : UIControl {
    UIBarButtonItem * _barButtonItem;
    UIControl * _barButtonItemControl;
    BOOL  _collapseHeight;
    float  _horizontalMargin;
    int  _preferredHeight;
    UIToolbar * _toolbar;
}

@property (nonatomic, readonly) UIBarButtonItem *barButtonItem;
@property (nonatomic, readonly) UIControl *barButtonItemControl;
@property (nonatomic) BOOL collapseHeight;
@property (nonatomic) float horizontalMargin;
@property (nonatomic) int preferredHeight;
@property (nonatomic, readonly) UIToolbar *toolbar;

- (void).cxx_destruct;
- (void)_barButtonAction:(id)arg1;
- (id)barButtonItem;
- (id)barButtonItemControl;
- (BOOL)collapseHeight;
- (float)horizontalMargin;
- (id)initWithSystemItem:(int)arg1 preferredHeight:(float)arg2 collapseHeight:(BOOL)arg3;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (BOOL)isEnabled;
- (void)layoutSubviews;
- (int)preferredHeight;
- (void)setBackgroundColor:(id)arg1;
- (void)setCollapseHeight:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setHorizontalMargin:(float)arg1;
- (void)setPreferredHeight:(int)arg1;
- (void)setTintColor:(id)arg1;
- (id)toolbar;

@end
