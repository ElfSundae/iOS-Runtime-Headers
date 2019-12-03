/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMBottomBar : UIView <CAMExpandableMenuButtonDelegate, CEKApertureButtonDelegate> {
    CAMHDRButton * _HDRButton;
    CAMExpandableMenuButton * __expandedMenuButton;
    CEKApertureButton * _apertureButton;
    long long  _backgroundStyle;
    UIView * _backgroundView;
    CAMCreativeCameraButton * _creativeCameraButton;
    PUReviewScreenDoneButton * _doneButton;
    CAMFlashButton * _flashButton;
    CAMFlipButton * _flipButton;
    CAMImageWell * _imageWell;
    long long  _layoutStyle;
    CAMLivePhotoButton * _livePhotoButton;
    CAMModeDial * _modeDial;
    UIButton * _reviewButton;
    CUShutterButton * _shutterButton;
    CUShutterButton * _stillDuringVideoButton;
    CAMTimerButton * _timerButton;
    CAMUtilityBar * _utilityBar;
    double  _utilityBarExtensionDistance;
    <CAMControlVisibilityUpdateDelegate> * _visibilityUpdateDelegate;
}

@property (nonatomic, retain) CAMHDRButton *HDRButton;
@property (setter=_setExpandedMenuButton:, nonatomic, retain) CAMExpandableMenuButton *_expandedMenuButton;
@property (nonatomic, retain) CEKApertureButton *apertureButton;
@property (nonatomic) long long backgroundStyle;
@property (nonatomic, readonly) UIView *backgroundView;
@property (nonatomic, retain) CAMCreativeCameraButton *creativeCameraButton;
@property (nonatomic, retain) PUReviewScreenDoneButton *doneButton;
@property (nonatomic, retain) CAMFlashButton *flashButton;
@property (nonatomic, retain) CAMFlipButton *flipButton;
@property (nonatomic, retain) CAMImageWell *imageWell;
@property (nonatomic) long long layoutStyle;
@property (nonatomic, retain) CAMLivePhotoButton *livePhotoButton;
@property (nonatomic, retain) CAMModeDial *modeDial;
@property (nonatomic, retain) UIButton *reviewButton;
@property (nonatomic, retain) CUShutterButton *shutterButton;
@property (nonatomic, retain) CUShutterButton *stillDuringVideoButton;
@property (nonatomic, retain) CAMTimerButton *timerButton;
@property (nonatomic, retain) CAMUtilityBar *utilityBar;
@property (nonatomic) double utilityBarExtensionDistance;
@property (nonatomic) <CAMControlVisibilityUpdateDelegate> *visibilityUpdateDelegate;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })shutterButtonAlignmentRectInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forLayoutStyle:(long long)arg2;
+ (bool)wantsVerticalBarForLayoutStyle:(long long)arg1;

- (void).cxx_destruct;
- (id)HDRButton;
- (void)_commonCAMBottomBarInitializationInitWithLayoutStyle:(long long)arg1;
- (id)_currentMenuButtons;
- (void)_ensureSubviewOrdering;
- (id)_expandedMenuButton;
- (void)_iterateViewsInHUDManager:(id)arg1 forHUDItem:(id /* block */)arg2;
- (void)_layoutCreativeCameraButtonForLayoutStyle:(long long)arg1;
- (void)_layoutDoneButtonForLayoutStyle:(long long)arg1;
- (void)_layoutFlipButtonForLayoutStyle:(long long)arg1;
- (void)_layoutImageWellForLayoutStyle:(long long)arg1;
- (void)_layoutMenuButtons:(id)arg1 apply:(bool)arg2 withExpandedMenuButton:(id)arg3 collapsingMenuButton:(id)arg4 collapsingFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg5;
- (void)_layoutModeDialForLayoutStyle:(long long)arg1;
- (void)_layoutReviewButtonForLayoutStyle:(long long)arg1;
- (void)_layoutShutterButtonForLayoutStyle:(long long)arg1;
- (void)_layoutStillDuringVideoButtonForLayoutStyle:(long long)arg1;
- (void)_layoutUtilityBarForLayoutStyle:(long long)arg1;
- (double)_opacityForBackgroundStyle:(long long)arg1;
- (void)_setExpandedMenuButton:(id)arg1;
- (void)_updateControlVisibilityAnimated:(bool)arg1;
- (void)_updateCreativeCameraButtonTappableEdgeInsets;
- (void)_updateFlipButtonTappableEdgeInsets;
- (void)_updateImageWellTappableEdgeInsets;
- (id)apertureButton;
- (void)apertureButtonNeedsLayout:(id)arg1 animated:(bool)arg2;
- (long long)backgroundStyle;
- (id)backgroundView;
- (void)collapseMenuButton:(id)arg1 animated:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })collapsedFrameForMenuButton:(id)arg1;
- (id)creativeCameraButton;
- (id)doneButton;
- (void)expandMenuButton:(id)arg1 animated:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })expandedFrameForMenuButton:(id)arg1;
- (id)flashButton;
- (id)flipButton;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)hudItemForAccessibilityHUDManager:(id)arg1;
- (id)imageWell;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithLayoutStyle:(long long)arg1;
- (long long)layoutStyle;
- (void)layoutSubviews;
- (id)livePhotoButton;
- (id)modeDial;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)reviewButton;
- (void)selectedByAccessibilityHUDManager:(id)arg1;
- (void)setApertureButton:(id)arg1;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setBackgroundStyle:(long long)arg1 animated:(bool)arg2;
- (void)setCreativeCameraButton:(id)arg1;
- (void)setDoneButton:(id)arg1;
- (void)setFlashButton:(id)arg1;
- (void)setFlipButton:(id)arg1;
- (void)setHDRButton:(id)arg1;
- (void)setImageWell:(id)arg1;
- (void)setLayoutStyle:(long long)arg1;
- (void)setLivePhotoButton:(id)arg1;
- (void)setModeDial:(id)arg1;
- (void)setReviewButton:(id)arg1;
- (void)setShutterButton:(id)arg1;
- (void)setStillDuringVideoButton:(id)arg1;
- (void)setTimerButton:(id)arg1;
- (void)setUtilityBar:(id)arg1;
- (void)setUtilityBarExtensionDistance:(double)arg1;
- (void)setVisibilityUpdateDelegate:(id)arg1;
- (id)shutterButton;
- (id)stillDuringVideoButton;
- (id)timerButton;
- (id)touchingRecognizersToCancel;
- (id)utilityBar;
- (double)utilityBarExtensionDistance;
- (id)visibilityUpdateDelegate;

@end
