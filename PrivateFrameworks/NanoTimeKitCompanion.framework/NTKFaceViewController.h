/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKFaceViewController : UIViewController <NTKClockHardwareInput, NTKClockIconZoomAnimator, NTKComplicationPickerViewDataSource, NTKFaceEditViewDelegate, NTKFaceObserver, NTKFaceViewDelegate> {
    BOOL  _animatingVariant;
    NSCache * _appearanceVariantsCache;
    BOOL  _becomeLiveOnUnfreeze;
    int  _dataMode;
    unsigned int  _delayedAnimationValue;
    NTKDelayedBlock * _delayedFreezeBlock;
    <NTKFaceViewControllerDelegate> * _delegate;
    BOOL  _deviceLocked;
    NTKFaceEditView * _editView;
    BOOL  _editingComplications;
    NTKFace * _face;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _faceLaunchRect;
    NTKFaceView * _faceView;
    BOOL  _frozen;
    BOOL  _hasGoneLive;
    BOOL  _hasRemovedUnadornedSnapshot;
    BOOL  _hasUsedUnadornedSnapshot;
    NSCache * _informationVariantsCache;
    NSString * _lastTappedSlotIdentifier;
    BOOL  _newValueWhileAnimating;
    NSMutableDictionary * _normalComplicationControllers;
    NSDate * _pauseDate;
    NTKComplicationController * _pptComplicationController;
    NTKComplicationDisplayWrapperView * _pptComplicationDisplay;
    BOOL  _readyToApplyConfiguration;
    NSDate * _scrubDate;
    BOOL  _shouldShowSnapshot;
    BOOL  _showContentForUnadornedSnapshot;
    BOOL  _showsCanonicalContent;
    BOOL  _showsLockedUI;
    UIImageView * _snapshotView;
    UIViewController<NTKClockStatusBarViewController> * _statusBarViewController;
    BOOL  _supressesNonSnapshotUI;
    NSObject<OS_dispatch_source> * _time_travel_update_timer;
    BOOL  _wantsRemoveUnadorned;
    UIView * _zoomingContainerView;
    UIView * _zoomingIconCircleView;
    UIView * _zoomingIconTimeView;
}

@property (nonatomic) int dataMode;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NTKFaceViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NTKFace *face;
@property (nonatomic, readonly) NTKFaceView *faceView;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSDate *pauseDate;
@property (nonatomic) BOOL shouldShowSnapshot;
@property (nonatomic) BOOL showContentForUnadornedSnapshot;
@property (nonatomic) BOOL showsCanonicalContent;
@property (nonatomic) BOOL showsLockedUI;
@property (nonatomic, retain) UIViewController<NTKClockStatusBarViewController> *statusBarViewController;
@property (readonly) Class superclass;
@property (nonatomic) BOOL supressesNonSnapshotUI;

+ (float)_complicationPickerAlphaForTransitionFraction:(float)arg1;
+ (void)initialize;

- (void).cxx_destruct;
- (void)PPTCleanupLastComplication;
- (void)PPTCreateComplication:(id)arg1 forSlot:(id)arg2 synchronously:(BOOL)arg3;
- (id)PPTDescriptionForComplication:(id)arg1;
- (void)PPTPrepareComplicationTest;
- (id)PPTUniqueComplicationsToSlotForCurrentFace;
- (void)_applyConfigurationWithDuration:(double)arg1;
- (void)_clearFaceLaunchRect;
- (void)_clearLastTappedComplication;
- (void)_configureForEditMode:(int)arg1;
- (void)_configureForTransitionFraction:(float)arg1 fromEditMode:(int)arg2 toEditMode:(int)arg3;
- (void)_configureLisaForSelectedSlot:(id)arg1 editMode:(int)arg2 animated:(BOOL)arg3;
- (void)_configureViewsForSelectedSlot:(id)arg1 editMode:(int)arg2;
- (id)_controllerForComplication:(id)arg1 slot:(id)arg2;
- (id)_dailySnapshot;
- (id)_deactivatePickerViewForSlot:(id)arg1;
- (void)_defaultCleanupAfterZoom;
- (void)_defaultPrepareToZoomWithIconView:(id)arg1 minDiameter:(float)arg2 maxDiameter:(float)arg3;
- (void)_defaultSetZoomFraction:(float)arg1 iconDiameter:(float)arg2;
- (void)_endTransitionToValue:(int)arg1 forEditMode:(int)arg2;
- (void)_ensureComplication:(id)arg1 forSlot:(id)arg2;
- (void)_ensureNormalComplication:(id)arg1 forSlot:(id)arg2;
- (void)_ensureNotLive;
- (void)_ensurePauseDate;
- (id)_ensurePickerViewForSlot:(id)arg1;
- (void)_faceSnapshotDidChange:(id)arg1;
- (void)_handleDeviceLockChange;
- (BOOL)_handlePhysicalButton:(unsigned int)arg1 event:(unsigned int)arg2;
- (void)_handleStatusBarChange;
- (void)_insertNormalComplicationDisplay:(id)arg1 controller:(id)arg2 forSlot:(id)arg3;
- (id)_keylineLabelTextForOption:(id)arg1 customEditMode:(int)arg2;
- (id)_newNormalDisplayForComplicationController:(id)arg1 slot:(id)arg2;
- (void)_populateFaceViewEditOptionsFromFace;
- (void)_removeComplicationForSlot:(id)arg1;
- (void)_removeNormalComplicationForSlot:(id)arg1 andDisconnectDisplay:(BOOL)arg2;
- (void)_setDataMode:(int)arg1 becomeLiveOnUnfreeze:(BOOL)arg2;
- (void)_setFaceViewResourceDirectoryFromFace;
- (void)_setupEditViewForComplications;
- (void)_setupEditViewForCustomEditMode:(int)arg1;
- (void)_setupEditing;
- (BOOL)_shouldShowComplicationPickerForSlot:(id)arg1;
- (void)_showStatusBarAfterWake;
- (void)_tearDownEditing;
- (void)_transitionFraction:(float)arg1 fromValue:(int)arg2 toValue:(int)arg3 forEditMode:(int)arg4;
- (id)_unadornedSnapshot;
- (void)_updateComplicationLisaGesture;
- (void)_updateFaceAndViewWithOption:(id)arg1 forMode:(int)arg2 resourcePath:(id)arg3 slot:(id)arg4;
- (void)_updateInteractivityOfComplicationDisplays;
- (BOOL)_wheelChangedWithEvent:(id)arg1;
- (void)_wrapperViewTapped:(id)arg1;
- (id)blurSourceImage;
- (BOOL)canStopEditing;
- (void)cleanupAfterOrb:(BOOL)arg1;
- (void)cleanupAfterZoom;
- (void)complicationPickerView:(id)arg1 getDisplay:(id*)arg2 controller:(id*)arg3 forComplication:(id)arg4;
- (id)complicationPickerView:(id)arg1 layoutRuleForComplicationDisplay:(id)arg2;
- (void)configureWithDuration:(double)arg1 block:(id /* block */)arg2;
- (id)currentComplicationApplicationIdentifiers;
- (BOOL)dailySnapshotShowsComplication:(id)arg1 forSlot:(id)arg2;
- (int)dataMode;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)disableSlowMode;
- (void)editView:(id)arg1 didScrollToFraction:(float)arg2 fromEditMode:(int)arg3 toEditMode:(int)arg4;
- (void)editView:(id)arg1 didStopAtEditMode:(int)arg2;
- (void)editView:(id)arg1 didTapKeylineForKey:(id)arg2 editMode:(int)arg3;
- (void)editView:(id)arg1 keylineDidBreathe:(float)arg2 forKey:(id)arg3 editMode:(int)arg4;
- (void)editView:(id)arg1 keylineDidRubberBand:(float)arg2 forKey:(id)arg3 editMode:(int)arg4;
- (void)editViewWillBeginScrolling:(id)arg1;
- (void)enableSlowMode;
- (void)enumerateComplicationControllersAndDisplaysWithBlock:(id /* block */)arg1;
- (id)face;
- (void)face:(id)arg1 didChangeOptionsForEditMode:(int)arg2;
- (void)faceConfigurationDidChange:(id)arg1;
- (void)faceResourceDirectoryDidChange:(id)arg1;
- (id)faceView;
- (BOOL)faceViewComplicationIsEmptyForSlot:(id)arg1;
- (void)faceViewDidHideOrShowComplicationSlot;
- (void)faceViewDidLayoutSubviews;
- (void)faceViewDidReloadSnapshotContentViews;
- (void)faceViewDidScrubToDate:(id)arg1 forced:(BOOL)arg2;
- (void)faceViewRequestedLaunchFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)faceViewUpdatedResourceDirectory:(id)arg1 wantsToTransferOwnership:(BOOL)arg2;
- (void)faceViewWantsComplicationKeylineFramesReloaded;
- (void)faceViewWantsCustomKeylineFramesReloadedForEditMode:(int)arg1;
- (void)faceViewWantsStatusBarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)faceViewWantsUnadornedSnapshotViewRemoved;
- (void)faceViewWillEnterTimeTravel;
- (void)faceViewWillExitTimeTravel;
- (void)faceViewWillUnloadSnapshotContentViews;
- (void)freeze;
- (void)freezeAfterDelay:(double)arg1;
- (void)getComplicationController:(id*)arg1 andDisplay:(id*)arg2 forSlot:(id)arg3;
- (void)handleOrdinaryScreenWake;
- (void)handleWristRaiseScreenWake;
- (void)hideFaceEditingUIAnimated:(BOOL)arg1;
- (id)initWithFace:(id)arg1 configuration:(id /* block */)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })launchRectForComplicationApplicationIdentifier:(id)arg1;
- (void)loadView;
- (id)pauseDate;
- (void)performComplicationBackgroundDataRefresh;
- (void)performWristRaiseAnimation;
- (void)prepareForOrb;
- (void)prepareToZoomWithIconView:(id)arg1 minDiameter:(float)arg2 maxDiameter:(float)arg3;
- (void)setDataMode:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNextRenderIsFirstAfterWake;
- (void)setPauseDate:(id)arg1;
- (void)setShouldShowSnapshot:(BOOL)arg1;
- (void)setShowContentForUnadornedSnapshot:(BOOL)arg1;
- (void)setShowsCanonicalContent:(BOOL)arg1;
- (void)setShowsLockedUI:(BOOL)arg1;
- (void)setStatusBarViewController:(id)arg1;
- (void)setSupressesNonSnapshotUI:(BOOL)arg1;
- (void)setZoomFraction:(float)arg1 iconDiameter:(float)arg2;
- (BOOL)shouldLoadLiveFaceAtNextScreenOff;
- (BOOL)shouldShowSnapshot;
- (BOOL)showContentForUnadornedSnapshot;
- (void)showEditingUIAnimated:(BOOL)arg1;
- (BOOL)showsCanonicalContent;
- (BOOL)showsLockedUI;
- (id)statusBarViewController;
- (BOOL)supressesNonSnapshotUI;
- (void)unfreeze;
- (void)viewDidLayoutSubviews;

@end
