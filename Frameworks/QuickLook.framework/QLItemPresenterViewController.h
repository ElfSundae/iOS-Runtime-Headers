/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLItemPresenterViewController : QLItemAggregatedViewController <QLDownloadingItemViewControllerDelegate, QLItemViewControllerPresentingDelegate> {
    id  _contents;
    QLPreviewContext * _context;
    QLDownloadingItemViewController * _downloadingController;
    QLErrorItemViewController * _errorViewController;
    bool  _failureOccurred;
    NSString * _hostApplicationBundleIdentifier;
    bool  _isPeekingSession;
    bool  _isReadyForDisplay;
    id /* block */  _loadingCompletionHandler;
    QLLoadingItemViewController * _loadingViewController;
    QLItem * _previewItem;
    QLItemViewController * _previewProvider;
    bool  _printing;
    id /* block */  _readyBlock;
    DMFApplicationPolicyMonitor * _screenTimeApplicationMonitor;
    DMFCategoryPolicyMonitor * _screenTimeCategoryMonitor;
    QLScreenTimeItemViewController * _screenTimeController;
    bool  _shouldDeferAppearanceUpdates;
    bool  _shouldHandleLoadingView;
}

@property (retain) id contents;
@property (retain) QLPreviewContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) QLDownloadingItemViewController *downloadingController;
@property (nonatomic, retain) QLErrorItemViewController *errorViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *hostApplicationBundleIdentifier;
@property (readonly) QLItemPresenterViewController *itemPresenterViewController;
@property (nonatomic, copy) id /* block */ loadingCompletionHandler;
@property (nonatomic, retain) QLLoadingItemViewController *loadingViewController;
@property (nonatomic, retain) QLItem *previewItem;
@property (nonatomic, retain) QLItemViewController *previewProvider;
@property (nonatomic) bool printing;
@property (nonatomic, retain) DMFApplicationPolicyMonitor *screenTimeApplicationMonitor;
@property (nonatomic, retain) DMFCategoryPolicyMonitor *screenTimeCategoryMonitor;
@property (nonatomic, retain) QLScreenTimeItemViewController *screenTimeController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelAllDeferredApperanceUpdates;
- (void)_didReceiveNewScreenTimeApplicationPolicies:(id)arg1 error:(id)arg2;
- (void)_didReceiveNewScreenTimeCategoryPolicy:(id)arg1 error:(id)arg2;
- (void)_didReceiveNewScreenTimePolicy:(long long)arg1;
- (void)_hideScreenTimeViewControllerIfNeeded;
- (void)_performLoadingCompletionHandlerWithError:(id)arg1;
- (void)_performReadyBlockIfNedded;
- (bool)_processIsEntitledToCheckScreenTimePolicy;
- (bool)_processIsEntitledToConfigureScreenTime;
- (void)_queryScreenTimeCategoryPolicy;
- (void)_queryScreenTimePolicyForBundleIdentifier:(id)arg1;
- (void)_setupScreenTimeApplicationHandling;
- (void)_setupScreenTimeCategoryHandling;
- (void)_setupScreenTimeHandling;
- (bool)_shouldApplyScreenTimeMoviePolicyForItem:(id)arg1;
- (void)_showLoadingViewControllerDeferredIfNeeded;
- (void)_showReadyToDisplayPreviewViewControllerDeferredIfNeeded:(id)arg1;
- (void)_showScreenTimeViewController;
- (void)_startLoadingPreviewWithContents:(id)arg1;
- (id)additionalItemViewControllerDescription;
- (bool)canAnimateFromDetailViewToFullScreenPreview;
- (id)contents;
- (id)context;
- (id)downloadingController;
- (void)downloadingItemViewControllerDidFinishLoadingPreviewItem:(id)arg1 withContents:(id)arg2;
- (id)errorViewController;
- (id)hostApplicationBundleIdentifier;
- (id)init;
- (id)initForPrinting:(bool)arg1;
- (id)initWithHostApplicationBundleIdentifier:(id)arg1;
- (bool)isLoaded;
- (bool)isLoading;
- (void)isReadyForDisplayWithCompletionHandler:(id /* block */)arg1;
- (id)itemPresenterViewController;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (id /* block */)loadingCompletionHandler;
- (bool)loadingFailed;
- (id)loadingViewController;
- (void)previewDidAppear:(bool)arg1;
- (void)previewDidDisappear:(bool)arg1;
- (id)previewItem;
- (void)previewItemViewController:(id)arg1 didFailWithError:(id)arg2;
- (id)previewProvider;
- (void)previewWillAppear:(bool)arg1;
- (void)previewWillDisappear:(bool)arg1;
- (bool)printing;
- (id)screenTimeApplicationMonitor;
- (id)screenTimeCategoryMonitor;
- (id)screenTimeController;
- (id)screenTimePolicyBundleIdentifier;
- (void)setAppearance:(id)arg1 animated:(bool)arg2;
- (void)setContents:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDownloadingController:(id)arg1;
- (void)setErrorViewController:(id)arg1;
- (void)setHostApplicationBundleIdentifier:(id)arg1;
- (void)setLoadingCompletionHandler:(id /* block */)arg1;
- (void)setLoadingViewController:(id)arg1;
- (void)setPreviewItem:(id)arg1;
- (void)setPreviewProvider:(id)arg1;
- (void)setPrinting:(bool)arg1;
- (void)setScreenTimeApplicationMonitor:(id)arg1;
- (void)setScreenTimeCategoryMonitor:(id)arg1;
- (void)setScreenTimeController:(id)arg1;
- (void)showErrorViewController;
- (void)showPreviewProviderViewController;
- (void)showPreviewViewController:(id)arg1;
- (void)showPreviewViewController:(id)arg1 animatingWithCrossfade:(bool)arg2;
- (void)showPreviewViewController:(id)arg1 animatingWithCrossfade:(bool)arg2 updatingIsReadyForDisplay:(bool)arg3;
- (void)transitionDidFinish:(bool)arg1 didComplete:(bool)arg2;
- (void)transitionDidStart:(bool)arg1;
- (void)transitionWillFinish:(bool)arg1 didComplete:(bool)arg2;

@end
