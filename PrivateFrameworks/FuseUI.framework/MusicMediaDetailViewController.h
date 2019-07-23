/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicMediaDetailViewController : UIViewController <MusicMediaDetailHeaderViewControllerDelegate, MusicMediaDetailSplitViewControllerDelegate, SKUINavigationBarDisplayConfiguring, SKUIProxyScrollViewDelegate> {
    bool  _allowsVisualInsetting;
    MusicMediaDetailTintInformation * _detailTintInformation;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _externalContentInset;
    bool  _hairlineRightInsetIgnoresLayoutInsets;
    MusicHairlineView * _hairlineView;
    double  _hairlineVisuallyInsetHorizontalLayoutInset;
    bool  _hasAttemptedSplitDetailViewControllerCreation;
    bool  _hasReceivedViewDidAppear;
    UIViewController<MusicMediaDetailHeaderContentViewController> * _headerContentViewController;
    double  _headerHeight;
    double  _headerTransitionProgress;
    double  _headerVerticalOffset;
    UIViewController<MusicMediaDetailHeaderViewController> * _headerViewController;
    bool  _isHandlingScrollViewUpdate;
    bool  _isSettingLayoutInsets;
    double  _maximumHeaderHeight;
    double  _maximumHeaderHeightAdditions;
    double  _navigationTitleViewAlphaTransitionProgressDelay;
    SKUIProxyScrollView * _proxyScrollView;
    bool  _showingSplitDetailViewController;
    UIViewController<MusicMediaDetailSplitViewController> * _splitDetailViewController;
    id /* block */  _splitDetailViewControllerCreationBlock;
    UIViewController<MusicMediaDetailSplitViewController> * _splitMainViewController;
    NSMapTable * _splitScrollViewToScrollingContext;
    NSArray * _splitScrollViews;
    bool  _supportsSplitDetailViewController;
    NSMapTable * _viewControllerToClippingView;
    bool  _visuallyInset;
}

@property (nonatomic) bool allowsVisualInsetting;
@property (nonatomic, readonly) UIScrollView *currentPrimaryScrollView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) MusicMediaDetailTintInformation *detailTintInformation;
@property (nonatomic) bool hairlineRightInsetIgnoresLayoutInsets;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIViewController<MusicMediaDetailHeaderContentViewController> *headerContentViewController;
@property (nonatomic, readonly) double headerTransitionProgress;
@property (nonatomic, retain) UIViewController<MusicMediaDetailHeaderViewController> *headerViewController;
@property (nonatomic) double maximumHeaderHeightAdditions;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } maximumHeaderSize;
@property (nonatomic) double navigationTitleViewAlphaTransitionProgressDelay;
@property (getter=isShowingSplitDetailViewController, nonatomic, readonly) bool showingSplitDetailViewController;
@property (nonatomic, readonly) UIViewController<MusicMediaDetailSplitViewController> *splitDetailViewController;
@property (nonatomic, copy) id /* block */ splitDetailViewControllerCreationBlock;
@property (getter=isSplitDetailViewControllerLoaded, nonatomic, readonly) bool splitDetailViewControllerLoaded;
@property (nonatomic, retain) UIViewController<MusicMediaDetailSplitViewController> *splitMainViewController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsSplitDetailViewController;
@property (getter=isVisuallyInset, nonatomic, readonly) bool visuallyInset;

- (void).cxx_destruct;
- (void)_addViewControllerViewToHierarchy:(id)arg1;
- (void)_applyDetailTintInformation;
- (double)_calculateDisappearanceProgressForHeaderHeight:(double)arg1;
- (id)_calculateHairlineColor;
- (bool)_calculateShowingSplitDetailViewController;
- (bool)_calculateSupportsSplitDetailViewControllerAllowingMakingSplitDetailViewController:(bool)arg1;
- (id)_currentPrimaryScrollView;
- (double)_effectiveHeaderHeightForContentOffset:(struct CGPoint { double x1; double x2; })arg1 externalScrollViewContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (bool)_hasVisibleNavigationBar;
- (double)_minimumHeaderHeight;
- (void)_removeViewControllerViewFromHierarchy:(id)arg1;
- (id)_scrollingContextForSplitScrollView:(id)arg1;
- (void)_setChildLayoutInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)_splitDetailContentScrollView;
- (id)_splitDetailViewController;
- (id)_splitMainContentScrollView;
- (id)_splitMainViewController;
- (void)_updateHairlineProperties;
- (void)_updateHeaderViewFrameWithHeaderHeight:(double)arg1;
- (bool)_updateMaximumHeaderHeight;
- (void)_updateScrollViewConsistentContentOffset:(id)arg1;
- (void)_updateScrollViewWithOriginatingScrollView:(id)arg1 contentOffset:(struct CGPoint { double x1; double x2; })arg2 shouldAlwaysAdjustContentOffset:(bool)arg3;
- (void)_updateScrollViewWithOriginatingScrollView:(id)arg1 shouldAlwaysAdjustContentOffset:(bool)arg2;
- (void)_updateSplitDetailViewControllerVisibility;
- (bool)_updateSplitScrollViews;
- (bool)allowsHairline;
- (bool)allowsShowingSplitDetailViewController;
- (bool)allowsVisualInsetting;
- (id)contentScrollView;
- (id)currentPrimaryScrollView;
- (void)dealloc;
- (id)detailTintInformation;
- (void)detailTintInformationDidChange;
- (bool)hairlineRightInsetIgnoresLayoutInsets;
- (id)headerContentViewController;
- (double)headerTransitionProgress;
- (id)headerViewController;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isShowingSplitDetailViewController;
- (bool)isSplitDetailViewControllerLoaded;
- (bool)isVisuallyInset;
- (double)maximumHeaderHeightAdditions;
- (struct CGSize { double x1; double x2; })maximumHeaderSize;
- (void)maximumMediaDetailHeaderHeightDidChangeForHeaderViewController:(id)arg1;
- (void)mediaDetailSplitViewController:(id)arg1 contentScrollViewWillEndDraggingWithVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)mediaDetailSplitViewControllerContentScrollViewContentSizeDidChange:(id)arg1;
- (void)mediaDetailSplitViewControllerContentScrollViewDidScroll:(id)arg1;
- (void)music_viewInheritedLayoutInsetsDidChange;
- (long long)navigationBarTintAdjustmentMode;
- (id)navigationBarTintColor;
- (id)navigationBarTitleTextTintColor;
- (double)navigationTitleViewAlphaTransitionProgressDelay;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (long long)preferredStatusBarStyle;
- (bool)prefersNavigationBarBackgroundViewHidden;
- (void)scrollViewDidChangeContentInset:(id)arg1;
- (void)setAllowsVisualInsetting:(bool)arg1;
- (void)setDetailTintInformation:(id)arg1;
- (void)setHairlineRightInsetIgnoresLayoutInsets:(bool)arg1;
- (void)setHeaderContentViewController:(id)arg1;
- (void)setHeaderViewController:(id)arg1;
- (void)setMaximumHeaderHeightAdditions:(double)arg1;
- (void)setNavigationTitleViewAlphaTransitionProgressDelay:(double)arg1;
- (void)setNeedsAllowsHairlineUpdate;
- (void)setNeedsAllowsShowingSplitDetailViewControllerUpdate;
- (void)setSplitDetailViewControllerCreationBlock:(id /* block */)arg1;
- (void)setSplitMainViewController:(id)arg1;
- (void)showingSplitDetailViewControllerDidChange;
- (id)splitDetailViewController;
- (id /* block */)splitDetailViewControllerCreationBlock;
- (id)splitMainViewController;
- (unsigned long long)supportedInterfaceOrientations;
- (bool)supportsSplitDetailViewController;
- (void)supportsSplitDetailViewControllerDidChange;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateWithHeaderHeight:(double)arg1 maximumHeaderHeight:(double)arg2 headerVerticalOffset:(double)arg3 transitionProgress:(double)arg4;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)visuallyInsetDidChange;

@end
