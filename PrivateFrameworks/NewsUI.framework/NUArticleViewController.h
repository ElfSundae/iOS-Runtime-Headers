/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUArticleViewController : UIViewController <NUANFDebugSettingsObserver, NUBarCompressible, NULoadable, SXAnalyticsReporting, SXScrollViewControllerDelegate> {
    NUArticleAdManager * _adManager;
    <SXAnalyticsReporting> * _analyticsReporting;
    NSString * _anchorFragment;
    <NUArticleDataProvider> * _articleDataProvider;
    bool  _articleIsPresentingFullscreen;
    FCObservable * _articleViewStyler;
    long long  _contentScale;
    NSString * _contentSizeCategory;
    <NUANFDebugSettingsProvider> * _debugSettingsProvider;
    <NUDocumentSectionBlueprintProvider> * _documentSectionBlueprintProvider;
    <NUEndOfArticleDataProvider> * _endOfArticleDataProvider;
    NFEventManager * _eventManager;
    bool  _isShowingDeferredHardPayall;
    <NUArticleKeyCommandManager> * _keyCommandManager;
    <NULoadingDelegate> * _loadingDelegate;
    NSHashTable * _loadingListeners;
    NFMultiDelegate * _multiScrollViewDelegate;
    unsigned long long  _presentationMode;
    UIScrollView * _scrollView;
    SXScrollViewController * _scrollViewController;
}

@property (nonatomic, readonly) NUArticleAdManager *adManager;
@property (nonatomic) <SXAnalyticsReporting> *analyticsReporting;
@property (nonatomic, copy) NSString *anchorFragment;
@property (nonatomic, readonly) <NUArticleDataProvider> *articleDataProvider;
@property (nonatomic) bool articleIsPresentingFullscreen;
@property (nonatomic, readonly) FCObservable *articleViewStyler;
@property (nonatomic) long long contentScale;
@property (nonatomic, retain) NSString *contentSizeCategory;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <NUANFDebugSettingsProvider> *debugSettingsProvider;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <NUDocumentSectionBlueprintProvider> *documentSectionBlueprintProvider;
@property (nonatomic, readonly) <NUEndOfArticleDataProvider> *endOfArticleDataProvider;
@property (nonatomic, readonly) NFEventManager *eventManager;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isShowingDeferredHardPayall;
@property (nonatomic, readonly) <NUArticleKeyCommandManager> *keyCommandManager;
@property (nonatomic) <NULoadingDelegate> *loadingDelegate;
@property (nonatomic, readonly) NSHashTable *loadingListeners;
@property (nonatomic, readonly) NFMultiDelegate *multiScrollViewDelegate;
@property (nonatomic) unsigned long long presentationMode;
@property (nonatomic, readonly) UIResponder *responder;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic, readonly) SXScrollViewController *scrollViewController;
@property (readonly) Class superclass;

+ (id)_parentOrPresentingViewControllerFor:(id)arg1;

- (void).cxx_destruct;
- (bool)accessibilityShouldScrollForScrollViewController:(id)arg1 defaultValue:(bool)arg2;
- (id)adManager;
- (id)analyticsReporting;
- (id)anchorFragment;
- (id)articleDataProvider;
- (bool)articleIsPresentingFullscreen;
- (id)articleViewStyler;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (long long)contentScale;
- (id)contentSizeCategory;
- (id)currentPresentationAttributes;
- (id)debugSettingsProvider;
- (id)documentSectionBlueprintProvider;
- (id)endOfArticleDataProvider;
- (id)eventManager;
- (id)initWithArticleDataProvider:(id)arg1 scrollViewController:(id)arg2 articleAdManager:(id)arg3 appStateMonitor:(id)arg4 keyCommandManager:(id)arg5 loadingListeners:(id)arg6 headerBlueprintProvider:(id)arg7 debugSettingsProvider:(id)arg8;
- (bool)isPreviewingOrShowingHardPaywall;
- (bool)isShowingDeferredHardPayall;
- (id)keyCommandManager;
- (id)loadingDelegate;
- (id)loadingListeners;
- (id)multiScrollViewDelegate;
- (double)navigationBarHeightForScrollViewController:(id)arg1;
- (long long)preferredStatusBarStyle;
- (bool)prefersStatusBarHidden;
- (unsigned long long)presentationMode;
- (void)reportEvent:(id)arg1;
- (bool)resignFirstResponder;
- (id)responder;
- (void)restoreScrollPositionIfNeeded;
- (void)scrollToTopAnimated:(bool)arg1;
- (id)scrollView;
- (id)scrollViewController;
- (void)scrollViewController:(id)arg1 enableNavigation:(bool)arg2;
- (bool)scrollViewController:(id)arg1 shouldOccludeAccessibilityElement:(id)arg2;
- (void)scrollViewControllerDidLayoutContent:(id)arg1;
- (void)scrollViewControllerDismissFullscreen:(id)arg1;
- (void)scrollViewControllerRequestsFullscreen:(id)arg1;
- (void)setAnalyticsReporting:(id)arg1;
- (void)setAnchorFragment:(id)arg1;
- (void)setArticleIsPresentingFullscreen:(bool)arg1;
- (void)setContentScale:(long long)arg1;
- (void)setContentSizeCategory:(id)arg1;
- (void)setIsShowingDeferredHardPayall:(bool)arg1;
- (void)setLoadingDelegate:(id)arg1;
- (void)setPresentationMode:(unsigned long long)arg1;
- (void)testingConditionEnabled:(bool)arg1;
- (double)toolBarHeightForScrollViewController:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updatePresentationAttributes;
- (void)updateScrollViewControllerWithContentOverlayBlueprint:(id)arg1 topOffset:(double)arg2;
- (void)updateScrollViewControllerWithFooterBlueprint:(id)arg1;
- (void)updateScrollViewControllerWithHeaderBlueprint:(id)arg1;
- (void)updateTextSelectionForPaywallPresentation;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewportDebuggingEnabled:(bool)arg1;

@end
