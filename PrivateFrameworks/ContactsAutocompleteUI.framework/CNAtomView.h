/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
 */

@interface CNAtomView : UIDefaultKeyboardInput <CNAtomViewResembling> {
    CNModernAtomIconView * _accessoryIconView;
    UIActivityIndicatorView * _activityIndicator;
    CNModernAtomBackgroundView * _background;
    CNModernAtomIconView * _badgeIconView;
    UIView * _baselineView;
    bool  _cachedIsWrappingEnabled;
    UIView * _compositingView;
    unsigned long long  _disabledPresentationOptions;
    UIColor * _effectiveTintColor;
    double  _firstLineIndent;
    bool  _isPrimaryAddressAtom;
    UILabel * _label;
    unsigned long long  _presentationOptions;
    double  _scalingFactor;
    bool  _selected;
    bool  _separatorHidden;
    bool  _separatorIsLeftAligned;
    NSString * _title;
    UIFont * _titleFont;
    UIView * _titleLabelFillView;
    bool  _wrappingSupported;
}

@property (nonatomic, readonly) CNModernAtomIconView *accessoryIconView;
@property (nonatomic, readonly) UIActivityIndicatorView *activityIndicator;
@property (nonatomic, readonly) CNModernAtomBackgroundView *backgroundView;
@property (nonatomic, readonly) CNModernAtomIconView *badgeIconView;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } baselinePoint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property (nonatomic, readonly) unsigned long long effectivePresentationOptions;
@property (nonatomic, readonly) UIColor *effectiveTintColor;
@property (nonatomic) double firstLineIndent;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidesVIPIndicator;
@property (nonatomic) bool isPrimaryAddressAtom;
@property (nonatomic) unsigned long long presentationOptions;
@property (nonatomic) double scale;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } selectionFrame;
@property (nonatomic) bool separatorHidden;
@property (nonatomic) bool separatorIsLeftAligned;
@property (nonatomic) int separatorStyle;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UIFont *titleFont;
@property (nonatomic, readonly) UILabel *titleLabel;

+ (id)_SMSTintColor;
+ (id)_badgeImagesForPresentationOptions:(unsigned long long)arg1 iconOrder:(const unsigned long long*)arg2 orderingLength:(unsigned long long)arg3 tintColor:(id)arg4 large:(bool)arg5 variant:(int)arg6;
+ (id)_defaultLabelAttributesWithFont:(id)arg1 wrappingEnabled:(bool)arg2;
+ (id)_defaultLabelAttributesWithWrappingEnabled:(bool)arg1;
+ (id)_defaultTintColor;
+ (id)_failureTintColor;
+ (struct CGPoint { double x1; double x2; })defaultBaselinePoint;
+ (id)defaultFont;
+ (double)defaultHeight;
+ (double)horizontalPadding;
+ (bool)presentationOptions:(unsigned long long*)arg1 encodedIntoAddress:(id)arg2;
+ (id)primaryAtomFont;

- (void).cxx_destruct;
- (id)_centeredTextAttachmentWithImage:(id)arg1;
- (id)_chevronTextAttachment;
- (void)_invalidatePresentationOptions;
- (double)_leftInset;
- (double)_leftPadding;
- (int)_preferredIconVariant;
- (double)_rightInset;
- (double)_rightPadding;
- (void)_setEffectiveTintColor:(id)arg1;
- (void)_setPresentationOption:(unsigned long long)arg1 enabled:(bool)arg2;
- (void)_updateActivityIndicator;
- (void)_updateCompositingFilters;
- (void)_updateFontIfNecessary;
- (void)_updateIconViewsSemanticContentAttribute;
- (void)_updateLabelAttributes;
- (void)_updateSubviewsForWrapping;
- (id)accessoryIconView;
- (id)activityIndicator;
- (void)appendPresentationOption:(unsigned long long)arg1;
- (id)backgroundView;
- (id)badgeIconView;
- (struct CGPoint { double x1; double x2; })baselinePoint;
- (void)clearPresentationOption:(unsigned long long)arg1;
- (id)description;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (unsigned long long)effectivePresentationOptions;
- (id)effectiveTintColor;
- (double)firstLineIndent;
- (bool)hidesVIPIndicator;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 presentationOptions:(unsigned long long)arg2 separatorStyle:(int)arg3 wrappingSupported:(bool)arg4;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isPrimaryAddressAtom;
- (bool)isSelected;
- (bool)isWrappingEnabled;
- (void)layoutSubviews;
- (void)performBuildInAnimationFromTextColor:(id)arg1 withDuration:(double)arg2;
- (double)preferredWidth;
- (double)preferredWidthWithSizeConstraints:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)presentationOptions;
- (double)scale;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })selectionFrame;
- (bool)separatorHidden;
- (bool)separatorIsLeftAligned;
- (int)separatorStyle;
- (void)setFirstLineIndent:(double)arg1;
- (void)setHidesVIPIndicator:(bool)arg1;
- (void)setIsPrimaryAddressAtom:(bool)arg1;
- (void)setPresentationOptions:(unsigned long long)arg1;
- (void)setScale:(double)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setSelected:(bool)arg1 animated:(bool)arg2 style:(unsigned long long)arg3;
- (void)setSeparatorHidden:(bool)arg1;
- (void)setSeparatorIsLeftAligned:(bool)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleFont:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)tintColorDidChange;
- (id)title;
- (id)titleFont;
- (id)titleLabel;
- (id)viewForLastBaselineLayout;

@end
