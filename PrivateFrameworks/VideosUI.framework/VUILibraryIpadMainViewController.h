/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUILibraryIpadMainViewController : VUILibraryFetchControllerViewController <UIGestureRecognizerDelegate, VUILibraryCategoryMenuViewModelDelegate, VUILibrarySplitViewControllerDelegate> {
    bool  _areLocalMediaItemsAvailable;
    VUILibraryCategoryMenuViewModel * _categoryViewModel;
    VUIDownloadViewController * _downloadViewController;
    VUILibrarySplitViewController * _librarySplitViewController;
    NSSet * _validCategories;
}

@property (nonatomic) bool areLocalMediaItemsAvailable;
@property (nonatomic, retain) VUILibraryCategoryMenuViewModel *categoryViewModel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) VUIDownloadViewController *downloadViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VUILibrarySplitViewController *librarySplitViewController;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSSet *validCategories;

- (void).cxx_destruct;
- (void)_accountsChanged:(id)arg1;
- (void)_addMediaLibraryNotificationObservers;
- (void)_addNotificationObserversWithDeviceLibrary:(id)arg1;
- (id)_deviceMediaLibrary;
- (void)_deviceMediaLibraryUpdateStateDidChange:(id)arg1;
- (bool)_isDeviceMediaLibraryInitialUpdateInProgress;
- (void)_networkReachabilityDidChange:(id)arg1;
- (void)_removeMediaLibraryNotificationObservers;
- (void)_removeNotificationObserversWithDeviceLibrary:(id)arg1;
- (void)_setupDownloadViewController;
- (void)_startMonitoringDeviceMediaLibraryInitialUpdate;
- (void)_stopMonitoringDeviceMediaLibraryInitialUpdate;
- (void)_updateVisibleViewControllerForCategories:(id)arg1 error:(id)arg2;
- (bool)areLocalMediaItemsAvailable;
- (id)categoryViewModel;
- (void)categoryViewModel:(id)arg1 categoriesDidChange:(id)arg2;
- (void)categoryViewModel:(id)arg1 fetchDidCompleteWithCategories:(id)arg2 error:(id)arg3;
- (void)dealloc;
- (id)downloadViewController;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithMediaLibrary:(id)arg1;
- (id)librarySplitViewController;
- (void)librarySplitViewControllerShouldDismiss:(id)arg1;
- (void)loadView;
- (void)setAreLocalMediaItemsAvailable:(bool)arg1;
- (void)setCategoryViewModel:(id)arg1;
- (void)setDownloadViewController:(id)arg1;
- (void)setLibrarySplitViewController:(id)arg1;
- (void)setValidCategories:(id)arg1;
- (id)validCategories;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (bool)vui_ppt_isLoading;

@end
