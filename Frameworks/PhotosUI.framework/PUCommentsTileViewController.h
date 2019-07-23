/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUCommentsTileViewController : PUTileViewController <PUAssetViewModelChangeObserver, PUCommentsTableDataControllerDelegate> {
    _UIDynamicValueAnimation *__appearanceAnimation;
    float __contentBaseline;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } __contentEdgeInsets;
    BOOL __isShowing;
    float __keyboardOverlap;
    BOOL __needsGestureRecognizerUpdate;
    UIPanGestureRecognizer *__panGestureRecognizer;
    PUCommentsTableDataController *__tableDataController;
    UITableView *__tableView;
    _UIDynamicValueAnimation *__targetPositionAnimation;
    unsigned int __targetScrollPosition;
    PUAssetViewModel *_assetViewModel;
    <PUCommentsTileViewControllerDelegate> *_delegate;
    struct { 
        BOOL respondsToViewHostingGestureRecognizers; 
        BOOL respondsToShouldUseCompactSeparators; 
    } _delegateFlags;
    BOOL _isInTableLayoutUpdateBlock;
}

@property (setter=_setAppearanceAnimation:, nonatomic, retain) _UIDynamicValueAnimation *_appearanceAnimation;
@property (setter=_setContentBaseline:, nonatomic) float _contentBaseline;
@property (setter=_setContentEdgeInsets:, nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } _contentEdgeInsets;
@property (setter=_setIsShowing:, nonatomic) BOOL _isShowing;
@property (setter=_setKeyboardOverlap:, nonatomic) float _keyboardOverlap;
@property (setter=_setNeedsGestureRecognizerUpdate:, nonatomic) BOOL _needsGestureRecognizerUpdate;
@property (setter=_setPanGestureRecognizer:, nonatomic, retain) UIPanGestureRecognizer *_panGestureRecognizer;
@property (setter=_setTableDataController:, nonatomic, retain) PUCommentsTableDataController *_tableDataController;
@property (setter=_setTableView:, nonatomic, retain) UITableView *_tableView;
@property (setter=_setTargetPositionAnimation:, nonatomic, retain) _UIDynamicValueAnimation *_targetPositionAnimation;
@property (setter=_setTargetScrollPosition:, nonatomic) unsigned int _targetScrollPosition;
@property (nonatomic, retain) PUAssetViewModel *assetViewModel;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUCommentsTileViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (BOOL)canShowCommentsForAsset:(id)arg1;

- (void).cxx_destruct;
- (id)_appearanceAnimation;
- (void)_assertInsideTableLayoutUpdateBlock;
- (void)_cancelAppearanceAnimation;
- (void)_cancelTargetPositionAnimation;
- (float)_contentBaseline;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_contentEdgeInsets;
- (void)_installTableView;
- (void)_invalidateGestureRecognizer;
- (BOOL)_isShowing;
- (float)_keyboardOverlap;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (BOOL)_needsGestureRecognizerUpdate;
- (BOOL)_needsUpdate;
- (id)_panGestureRecognizer;
- (void)_performTableLayoutUpdates:(id /* block */)arg1 animated:(BOOL)arg2;
- (void)_performTableLayoutUpdates:(id /* block */)arg1 animated:(BOOL)arg2 duration:(double)arg3 animationOptions:(unsigned int)arg4;
- (void)_setAppearanceAnimation:(id)arg1;
- (void)_setContentBaseline:(float)arg1;
- (void)_setContentEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)_setIsShowing:(BOOL)arg1;
- (void)_setIsShowing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setKeyboardOverlap:(float)arg1;
- (void)_setNeedsGestureRecognizerUpdate:(BOOL)arg1;
- (void)_setPanGestureRecognizer:(id)arg1;
- (void)_setTableDataController:(id)arg1;
- (void)_setTableView:(id)arg1;
- (void)_setTargetPositionAnimation:(id)arg1;
- (void)_setTargetScrollPosition:(unsigned int)arg1;
- (void)_startWatchingKeyboard;
- (void)_stopWatchingKeyboard;
- (id)_tableDataController;
- (id)_tableView;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_tableViewInsetsToAccomodateKeyboard;
- (float)_tableViewOffsetToAccomodateKeyboard;
- (id)_targetPositionAnimation;
- (unsigned int)_targetScrollPosition;
- (void)_updateCommentsOffset;
- (void)_updateGestureRecognizerIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateTableDataController;
- (void)_updateTableViewMetricsAnimated:(BOOL)arg1 duration:(double)arg2 animationOptions:(unsigned int)arg3;
- (void)_updateVisibilityAnimated:(BOOL)arg1;
- (BOOL)allowsTapAtLocationFromProvider:(id)arg1;
- (void)applyLayoutInfo:(id)arg1;
- (id)assetViewModel;
- (void)becomeReusable;
- (void)commentsTableDataController:(id)arg1 didChangeEditing:(BOOL)arg2;
- (void)commentsTableDataController:(id)arg1 presentViewController:(id)arg2;
- (void)commentsTableDataController:(id)arg1 tableViewDidScroll:(id)arg2;
- (BOOL)commentsTableDataControllerShouldBeginEditing:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)didChangeActive;
- (void)setAssetViewModel:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end
