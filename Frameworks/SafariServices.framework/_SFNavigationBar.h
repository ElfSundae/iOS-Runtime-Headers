/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFNavigationBar : UIView <UIGestureRecognizerDelegate, _SFFluidProgressViewDelegate, _SFNavigationBarURLButtonDelegate, _UIBasicAnimationFactory> {
    NSArray * _URLAccessoryItems;
    UIView * _URLContainer;
    UIImageView * _URLFadeOut;
    float  _URLHeight;
    SFCrossfadingLabel * _URLLabel;
    _SFNavigationBarURLButton * _URLOutline;
    float  _URLWidth;
    NSAttributedString * _attributedTextWhenExpanded;
    _SFNavigationBarBackdrop * _backdrop;
    BOOL  _backdropGroupDisabled;
    NSString * _backdropGroupName;
    UIButton * _cancelButton;
    float  _cancelButtonIntrinsicWidth;
    UIButton * _compressedBarButton;
    float  _contentUnderStatusBarHeight;
    UIView * _controlsContainer;
    BOOL  _controlsHidden;
    _UIBackdropViewSettings * _customBackdropSettings;
    <_SFNavigationBarDelegate> * _delegate;
    UIButton * _doneButton;
    UIView * _doneButtonContainer;
    BOOL  _expanded;
    float  _expandedURLHeight;
    UILabel * _expandedURLLabel;
    float  _expandedURLWidth;
    UIButton * _fakeClearButton;
    float  _fakeSelectionEndOffset;
    float  _fakeSelectionStartOffset;
    UIView * _fakeTextFieldSelectionView;
    UIView * _inputAccessoryView;
    unsigned int  _inputMode;
    _SFNavigationBarItem * _item;
    UIView * _labelScalingContainer;
    _SFNavigationBarLabelsContainer * _labelsContainer;
    SFCrossfadingImageView * _lockView;
    BOOL  _lockViewNeedsUpdate;
    float  _maximumHeight;
    float  _minimumBackdropHeight;
    float  _offsetOfURLInExpandedURL;
    UIColor * _preferredBarTintColor;
    BOOL  _preferredBarTintColorIsDark;
    BOOL  _preferredBarTintColorIsExtreme;
    BOOL  _preferredBarTintColorIsGreen;
    UIColor * _preferredControlsTintColor;
    _SFFluidProgressView * _progressView;
    _SFDimmingButton * _readerAppearanceButton;
    UILabel * _readerAvailabilityLabel;
    NSTimer * _readerAvailabilityLabelHideTimer;
    _SFNavigationBarReaderButton * _readerButton;
    BOOL  _readerButtonWillShow;
    _SFDimmingButton * _reloadButton;
    UILongPressGestureRecognizer * _reloadLongPressGestureRecognizer;
    SFCrossfadingImageView * _searchIndicator;
    UIView * _separator;
    _SFDimmingButton * _stopButton;
    BOOL  _suppressesBlur;
    UITextField * _textField;
    unsigned int  _tintStyle;
    _SFToolbar * _toolbar;
    BOOL  _unifiedFieldShowsProgressView;
    BOOL  _usesContainedAppearance;
    BOOL  _usesNarrowLayout;
    BOOL  _usesUnscaledBackdrop;
    BOOL  _usingLightControls;
    int  _visibleRightButtonType;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } URLOutlineFrameInNavigationBarSpace;
@property (getter=isBackdropGroupDisabled, nonatomic) BOOL backdropGroupDisabled;
@property (nonatomic, copy) NSString *backdropGroupName;
@property (nonatomic) float contentUnderStatusBarHeight;
@property (getter=_controlsAlpha, nonatomic, readonly) float controlsAlpha;
@property (getter=areControlsHidden, nonatomic) BOOL controlsHidden;
@property (nonatomic, retain) _UIBackdropViewSettings *customBackdropSettings;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_SFNavigationBarDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isExpanded, nonatomic) BOOL expanded;
@property (nonatomic) BOOL hasToolbar;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIView *inputAccessoryView;
@property (nonatomic, readonly) BOOL isShowingPreferredControlsTintColor;
@property (nonatomic, retain) _SFNavigationBarItem *item;
@property (nonatomic) float maximumHeight;
@property (nonatomic) float minimumBackdropHeight;
@property (nonatomic, retain) UIColor *preferredBarTintColor;
@property (nonatomic, retain) UIColor *preferredControlsTintColor;
@property (nonatomic, readonly) UIButton *readerAppearanceButton;
@property (nonatomic, readonly) UIButton *reloadButton;
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressesBlur;
@property (nonatomic, readonly) UITextField *textField;
@property (nonatomic) unsigned int tintStyle;
@property (nonatomic, readonly) _SFToolbar *toolbar;
@property (nonatomic) BOOL unifiedFieldShowsProgressView;
@property (nonatomic) BOOL updatesBackdrop;
@property (nonatomic) BOOL usesContainedAppearance;
@property (nonatomic) BOOL usesNarrowLayout;
@property (nonatomic) BOOL usesUnscaledBackdrop;
@property (getter=isUsingLightControls, nonatomic) BOOL usingLightControls;
@property (nonatomic, readonly) float visualHeight;

+ (float)defaultHeight;
+ (float)minimumHeight;
+ (float)separatorHeight;

- (void).cxx_destruct;
- (float)URLFieldHorizontalMargin;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })URLOutlineFrameInNavigationBarSpace;
- (id)_EVCertLockAndTextColor;
- (id)_URLControlsColor;
- (float)_URLFieldHorizontalMargin;
- (void)_URLTapped:(id)arg1;
- (id)_URLTextColor;
- (id)_backdropInputSettings;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (void)_cancelButtonTapped:(id)arg1;
- (void)_compressedBarTapped;
- (void)_configureNavigationBarRightButtonTintedImages;
- (float)_controlsAlpha;
- (float)_customButtonHorizontalPadding;
- (id)_dimmingButtonWithAction:(SEL)arg1;
- (void)_doneButtonTapped:(id)arg1;
- (id)_editingLabelFont;
- (float)_editingScaleFactor;
- (id)_expandedURLLabelParagraphStyle;
- (id)_fadeOutImageWithSize:(struct CGSize { float x1; float x2; })arg1 opaquePoint:(struct CGPoint { float x1; float x2; })arg2 transparentPoint:(struct CGPoint { float x1; float x2; })arg3 leftCapWidth:(float)arg4 topCapWidth:(float)arg5;
- (void)_hideReaderAvailabilityLabelAnimated:(BOOL)arg1;
- (void)_hideReaderAvailabilityLabelNow;
- (void)_hideReaderAvailabilityLabelSoon;
- (id)_hitTestCandidateViews;
- (int)_inferredNavigationBarRightButtonType;
- (id)_legibilityColorForBarTintColor:(id)arg1;
- (id)_lockImageUsingMiniatureVersion:(BOOL)arg1;
- (float)_minimumXForLabelOfWidth:(float)arg1 centeredInOutlineOfWidth:(float)arg2 leftAlignedToMinimumX:(float)arg3 maximumX:(float)arg4;
- (id)_navigationBarRightButtonWithType:(int)arg1;
- (id)_newNavigationButtonWithImage:(id)arg1 insets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg2 action:(SEL)arg3;
- (id)_placeholderColor;
- (id)_placeholderText;
- (void)_readerAppearanceButtonPressed;
- (void)_readerButtonTapped:(id)arg1;
- (void)_reloadButtonLongPressed:(id)arg1;
- (void)_reloadButtonPressed;
- (BOOL)_shouldShowPreferredBarTintColor;
- (float)_squishTransformFactor;
- (void)_stopButtonPressed;
- (float)_textFieldTopMargin;
- (id)_timingFunctionForAnimation;
- (id)_tintForLockImage:(BOOL)arg1;
- (void)_transitionFromView:(id)arg1 toView:(id)arg2 animated:(BOOL)arg3;
- (void)_updateActiveURLLabelAccessory;
- (void)_updateBackdropFrame;
- (void)_updateBackdropGroupName;
- (void)_updateBackdropStyle;
- (void)_updateBarTintColorMetrics;
- (void)_updateControlTints;
- (void)_updateFakeViews;
- (void)_updateLockIconHasEVCertificateTint;
- (void)_updateLockViewIfNeeded;
- (void)_updateNavigationBarRightButtonType;
- (void)_updateNavigationBarRightButtonsAlpha;
- (void)_updateNavigationBarRightButtonsVisibility;
- (void)_updatePlaceholderText;
- (void)_updateProgressView;
- (void)_updateReaderButtonSelected;
- (void)_updateReaderButtonTint;
- (void)_updateReaderButtonVisibility;
- (void)_updateReaderButtonVisibilityAnimated:(BOOL)arg1 showAvailabilityText:(BOOL)arg2 adjustURLLabels:(BOOL)arg3;
- (void)_updateSearchIndicator;
- (void)_updateSeparatorAlpha;
- (void)_updateShowsLockIcon;
- (void)_updateShowsSearchIndicator;
- (void)_updateText;
- (void)_updateTextColor;
- (void)_updateTextFieldFrame;
- (void)_updateTextMetrics;
- (void)_updateTintColorForControls;
- (void)_updateToolbarAlpha;
- (void)_updateURLOutlineColor;
- (id)_viewToInsertProgressBarIn;
- (BOOL)areControlsHidden;
- (void)backdropDidApplySettings:(id)arg1;
- (id)backdropGroupName;
- (BOOL)canBecomeFirstResponder;
- (void)clearEphemeralUI;
- (float)contentUnderStatusBarHeight;
- (id)customBackdropSettings;
- (void)dealloc;
- (id)delegate;
- (void)fluidProgressViewDidShowProgress:(id)arg1;
- (void)fluidProgressViewWillShowProgress:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)hasToolbar;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inputMode:(unsigned int)arg2;
- (id)inputAccessoryView;
- (BOOL)isBackdropGroupDisabled;
- (BOOL)isExpanded;
- (BOOL)isShowingPreferredControlsTintColor;
- (BOOL)isUsingLightControls;
- (id)item;
- (void)layoutSubviews;
- (float)maximumHeight;
- (float)minimumBackdropHeight;
- (void)navigationBarURLButtonDidReceiveCopyCommand:(id)arg1;
- (void)navigationBarURLButtonDidReceivePasteCommand:(id)arg1;
- (BOOL)navigationBarURLButtonShouldCopy:(id)arg1;
- (BOOL)navigationBarURLButtonShouldPaste:(id)arg1;
- (id)newTextField;
- (float)placeholderHorizontalInset;
- (id)preferredBarTintColor;
- (id)preferredControlsTintColor;
- (id)readerAppearanceButton;
- (id)reloadButton;
- (void)setBackdropGroupDisabled:(BOOL)arg1;
- (void)setBackdropGroupName:(id)arg1;
- (void)setContentUnderStatusBarHeight:(float)arg1;
- (void)setControlsHidden:(BOOL)arg1;
- (void)setCustomBackdropSettings:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExpanded:(BOOL)arg1;
- (void)setExpanded:(BOOL)arg1 textFieldSelectionRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setHasToolbar:(BOOL)arg1;
- (void)setInputAccessoryView:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setMaximumHeight:(float)arg1;
- (void)setMinimumBackdropHeight:(float)arg1;
- (void)setPreferredBarTintColor:(id)arg1;
- (void)setPreferredControlsTintColor:(id)arg1;
- (void)setSuppressesBlur:(BOOL)arg1;
- (void)setTextFieldPlaceHolderColor:(id)arg1;
- (void)setTintStyle:(unsigned int)arg1;
- (void)setUnifiedFieldShowsProgressView:(BOOL)arg1;
- (void)setUpdatesBackdrop:(BOOL)arg1;
- (void)setUsesContainedAppearance:(BOOL)arg1;
- (void)setUsesNarrowLayout:(BOOL)arg1;
- (void)setUsesUnscaledBackdrop:(BOOL)arg1;
- (void)setUsingLightControls:(BOOL)arg1;
- (void)squishExternalView:(id)arg1 withUntransformedFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 minimumScale:(float)arg3;
- (BOOL)suppressesBlur;
- (id)textField;
- (id)textForNavigationBarURLButton:(id)arg1;
- (void)tintColorDidChange;
- (unsigned int)tintStyle;
- (id)toolbar;
- (id)toolbarPlacedOnTop;
- (BOOL)unifiedFieldShowsProgressView;
- (void)updateToolbarTintColor;
- (BOOL)updatesBackdrop;
- (BOOL)usesContainedAppearance;
- (BOOL)usesNarrowLayout;
- (BOOL)usesUnscaledBackdrop;
- (float)visualHeight;

@end
