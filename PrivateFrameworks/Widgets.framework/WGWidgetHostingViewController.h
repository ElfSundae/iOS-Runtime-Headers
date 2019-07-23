/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
 */

@interface WGWidgetHostingViewController : UIViewController {
    long long  _activeDisplayMode;
    WGWidgetLifeCycleSequence * _activeLifeCycleSequence;
    NSString * _appBundleID;
    bool  _blacklisted;
    _WGBrokenWidgetView * _brokenView;
    long long  _connectionState;
    UIView * _contentProvidingView;
    double  _cornerRadius;
    <WGWidgetHostingViewControllerDelegate> * _delegate;
    bool  _didRequestViewInset;
    bool  _didUpdate;
    NSTimer * _disconnectionTimer;
    bool  _disconnectsImmediately;
    NSObject<OS_dispatch_queue> * _diskWriteQueue;
    bool  _encodingLayerTree;
    <NSCopying> * _extensionRequest;
    <WGWidgetHostingViewControllerHost> * _host;
    bool  _ignoringParentAppearState;
    bool  _implementsPerformUpdate;
    NSDate * _lastUnanticipatedDisconnectionDate;
    bool  _lockedOut;
    _WGLockedOutWidgetView * _lockedOutView;
    unsigned long long  _maskedCorners;
    NSMapTable * _openAppearanceTransactions;
    NSObject<OS_dispatch_queue> * _proxyConnectionQueue;
    NSObject<OS_dispatch_queue> * _proxyRequestQueue;
    _WGWidgetRemoteViewController * _remoteViewController;
    id /* block */  _remoteViewControllerConnectionHandler;
    id /* block */  _remoteViewControllerDisconnectionHandler;
    NSMutableDictionary * _sequenceIDsToOutstandingWidgetUpdateCompletionHandlers;
    _WGCAPackageView * _snapshotView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _snapshotViewBounds;
    NSObject<OS_dispatch_semaphore> * _viewWillAppearSemaphore;
    NSObject<OS_dispatch_semaphore> * _viewWillDisappearSemaphore;
    WGWidgetInfo * _widgetInfo;
}

@property (nonatomic, readonly) long long activeDisplayMode;
@property (getter=_activeLifeCycleSequence, nonatomic, readonly) WGWidgetLifeCycleSequence *activeLifeCycleSequence;
@property (nonatomic, copy) NSString *appBundleID;
@property (nonatomic, readonly) BSAuditToken *auditToken;
@property (getter=_isBlacklisted, setter=_setBlacklisted:, nonatomic) bool blacklisted;
@property (getter=_brokenView, setter=_setBrokenView:, nonatomic, retain) _WGBrokenWidgetView *brokenView;
@property (getter=isBrokenViewVisible, nonatomic, readonly) bool brokenViewVisible;
@property (getter=_connectionState, setter=_setConnectionState:, nonatomic) long long connectionState;
@property (getter=_containerIdentifier, nonatomic, readonly, copy) NSString *containerIdentifier;
@property (getter=_contentProvidingView, setter=_setContentProvidingView:, nonatomic, retain) UIView *contentProvidingView;
@property (nonatomic) double cornerRadius;
@property (nonatomic) <WGWidgetHostingViewControllerDelegate> *delegate;
@property (getter=_didRequestViewInset, setter=_setDidRequestViewInset:, nonatomic) bool didRequestViewInset;
@property (getter=_didUpdate, setter=_setDidUpdate:, nonatomic) bool didUpdate;
@property (getter=_disconnectionTimer, setter=_setDisconnectionTimer:, nonatomic) NSTimer *disconnectionTimer;
@property (nonatomic) bool disconnectsImmediately;
@property (getter=_diskWriteQueue, nonatomic, readonly) NSObject<OS_dispatch_queue> *diskWriteQueue;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (getter=_isEncodingLayerTree, setter=_setEncodingLayerTree:, nonatomic) bool encodingLayerTree;
@property (getter=_extensionRequest, setter=_setExtensionRequest:, nonatomic, copy) <NSCopying> *extensionRequest;
@property (nonatomic) <WGWidgetHostingViewControllerHost> *host;
@property (getter=_isIgnoringParentAppearState, setter=_setIgnoringParentAppearState:, nonatomic) bool ignoringParentAppearState;
@property (setter=_setImplementsPerformUpdate:, nonatomic) bool implementsPerformUpdate;
@property (nonatomic, readonly) long long largestAvailableDisplayMode;
@property (getter=_lastUnanticipatedDisconnectionDate, setter=_setLastUnanticipatedDisconnectionDate:, nonatomic, retain) NSDate *lastUnanticipatedDisconnectionDate;
@property (getter=isLockedOut, nonatomic, readonly) bool lockedOut;
@property (getter=_lockedOutView, setter=_setLockedOutView:, nonatomic, retain) _WGLockedOutWidgetView *lockedOutView;
@property (nonatomic) unsigned long long maskedCorners;
@property (getter=_openAppearanceTransactions, nonatomic, readonly) NSMapTable *openAppearanceTransactions;
@property (getter=_proxyConnectionQueue, nonatomic, readonly) NSObject<OS_dispatch_queue> *proxyConnectionQueue;
@property (getter=_proxyRequestQueue, nonatomic, readonly) NSObject<OS_dispatch_queue> *proxyRequestQueue;
@property (getter=_remoteViewController, setter=_setRemoteViewController:, nonatomic, retain) _WGWidgetRemoteViewController *remoteViewController;
@property (getter=_remoteViewControllerConnectionHandler, setter=_setRemoteViewControllerConnectionHandler:, nonatomic, copy) id /* block */ remoteViewControllerConnectionHandler;
@property (getter=_remoteViewControllerDisconnectionHandler, setter=_setRemoteViewControllerDisconnectionHandler:, nonatomic, copy) id /* block */ remoteViewControllerDisconnectionHandler;
@property (getter=isRemoteViewVisible, nonatomic, readonly) bool remoteViewVisible;
@property (getter=_sequenceIDsToOutstandingWidgetUpdateCompletionHandlers, setter=_setSequenceIDsToOutstandingWidgetUpdateCompletionHandlers:, nonatomic, retain) NSMutableDictionary *sequenceIDsToOutstandingWidgetUpdateCompletionHandlers;
@property (getter=isSnapshotLoaded, nonatomic, readonly) bool snapshotLoaded;
@property (getter=_snapshotView, setter=_setSnapshotView:, nonatomic, retain) _WGCAPackageView *snapshotView;
@property (getter=_snapshotViewBounds, setter=_setSnapshotBounds:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } snapshotViewBounds;
@property (nonatomic) long long userSpecifiedDisplayMode;
@property (getter=_viewWillAppearSemaphore, setter=_setViewWillAppearSemaphore:, nonatomic, retain) NSObject<OS_dispatch_semaphore> *viewWillAppearSemaphore;
@property (getter=_viewWillDisappearSemaphore, setter=_setViewWillDisappearSemaphore:, nonatomic, retain) NSObject<OS_dispatch_semaphore> *viewWillDisappearSemaphore;
@property (nonatomic, readonly, copy) NSString *widgetIdentifier;
@property (nonatomic, readonly) WGWidgetInfo *widgetInfo;

+ (bool)_canWidgetHostCaptureSnapshotForSequence:(id)arg1;
+ (bool)_canWidgetHostConnectRemoteViewControllerByCancellingDisappearanceForSequence:(id)arg1;
+ (bool)_canWidgetHostConnectRemoteViewControllerByRequestingForSequence:(id)arg1 disconnectionTimer:(id)arg2 connectionState:(long long)arg3;
+ (bool)_canWidgetHostDisconnectRemoteViewControllerForSequence:(id)arg1 disconnectionTimer:(id)arg2 coalesce:(bool)arg3;
+ (bool)_canWidgetHostEndSequenceByDisconnectingRemoteViewControllerForSequence:(id)arg1;
+ (bool)_canWidgetHostInsertRemoteViewForSequence:(id)arg1;
+ (bool)_canWidgetHostRequestRemoteViewControllerForSequence:(id)arg1;
+ (void)setWidgetSnapshotTimestampsEnabled:(bool)arg1;

- (void).cxx_destruct;
- (void)_abortActiveSequence;
- (id)_activeLifeCycleSequence;
- (void)_attemptReconnectionAfterUnanticipatedDisconnection;
- (void)_beginRemoteViewControllerAppearanceTransitionIfNecessary:(bool)arg1 semaphore:(id)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)_beginSequenceWithReason:(id)arg1 completion:(id /* block */)arg2 updateHandler:(id /* block */)arg3;
- (id)_brokenView;
- (bool)_canInsertRemoteView:(id*)arg1;
- (id)_cancelTouches;
- (void)_captureLayerTree:(id /* block */)arg1;
- (void)_captureSnapshotAndBeginDisappearanceTransitionForSequence:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_connectRemoteViewControllerForReason:(id)arg1 sequence:(id)arg2 completionHandler:(id /* block */)arg3;
- (long long)_connectionState;
- (id)_containerIdentifier;
- (id)_contentProvidingView;
- (bool)_didRequestViewInset;
- (bool)_didUpdate;
- (void)_disconnectRemoteViewControllerForReason:(id)arg1 sequence:(id)arg2 coalesce:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)_disconnectRemoteViewControllerForSequence:(id)arg1 completion:(id /* block */)arg2;
- (id)_disconnectionTimer;
- (void)_disconnectionTimerDidFire:(id)arg1;
- (id)_diskWriteQueue;
- (void)_endRemoteViewControllerAppearanceTransitionIfNecessary;
- (void)_endRemoteViewControllerAppearanceTransitionIfNecessaryWithCompletion:(id /* block */)arg1;
- (void)_endSequence:(id)arg1 withReason:(id)arg2 completion:(id /* block */)arg3;
- (void)_enqueueDisconnectionRequestForSequence:(id)arg1 endTransitionBlock:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)_enqueueRemoteServiceRequest:(id /* block */)arg1 withDescription:(id)arg2;
- (void)_enqueueRequest:(id /* block */)arg1 inQueue:(id)arg2 trampolinedToMainQueue:(bool)arg3 withDescription:(id)arg4;
- (id)_extensionRequest;
- (void)_finishDisconnectingRemoteViewControllerForSequence:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (bool)_hasOutstandingUpdateRequestForSequence:(id)arg1;
- (void)_initiateNewSequenceIfNecessary;
- (void)_insertAppropriateContentView;
- (void)_insertBrokenView;
- (void)_insertContentProvidingSubview:(id)arg1 sequence:(id)arg2 completion:(id /* block */)arg3;
- (void)_insertLockedOutViewWithExplanation:(id)arg1;
- (void)_insertSnapshotViewIfAppropriate;
- (void)_insertSnapshotWithCompletionHandler:(id /* block */)arg1;
- (void)_invalidateDisconnectionTimer;
- (void)_invalidateSnapshotWithForce:(bool)arg1 removingSnapshotFilesForActiveDisplayMode:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)_invalidateVisibleFrame;
- (bool)_isActiveSequence:(id)arg1;
- (bool)_isBlacklisted;
- (bool)_isEncodingLayerTree;
- (bool)_isIgnoringParentAppearState;
- (id)_lastUnanticipatedDisconnectionDate;
- (void)_loadSnapshotViewFromDiskIfNecessary:(id /* block */)arg1;
- (id)_lockedOutView;
- (bool)_managingContainerIsVisible;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_marginInsets;
- (struct CGSize { double x1; double x2; })_maxSizeForDisplayMode:(long long)arg1;
- (void)_noteOutstandingUpdateRequestForSequence:(id)arg1;
- (id)_openAppearanceTransactions;
- (void)_packageViewFromURL:(id)arg1 reply:(id /* block */)arg2;
- (void)_packageViewWithBlock:(id /* block */)arg1 reply:(id /* block */)arg2;
- (void)_performUpdateForSequence:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)_proxyConnectionQueue;
- (id)_proxyRequestQueue;
- (void)_purgeLegacySnapshotsIfNecessary;
- (void)_registerUpdateRequestCompletionHandler:(id /* block */)arg1 forSequence:(id)arg2;
- (id)_remoteViewController;
- (id /* block */)_remoteViewControllerConnectionHandler;
- (id /* block */)_remoteViewControllerDisconnectionHandler;
- (void)_removeAllSnapshotFilesDueToIssue:(bool)arg1;
- (void)_removeAllSnapshotFilesForActiveDisplayMode;
- (void)_removeAllSnapshotFilesInActiveDisplayModeForContentSizeCategory:(id)arg1;
- (void)_removeAllSnapshotFilesMatchingPredicate:(id)arg1 dueToIssue:(bool)arg2;
- (void)_removeItemAsynchronouslyAtURL:(id)arg1;
- (void)_removeItemAtURL:(id)arg1;
- (void)_requestInsertionOfRemoteViewAfterViewWillAppearForSequence:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_requestRemoteViewControllerForSequence:(id)arg1 completionHander:(id /* block */)arg2;
- (void)_requestVisibilityStateUpdateForPossiblyAppearing:(bool)arg1 sequence:(id)arg2;
- (void)_rowHeightDidChange:(id)arg1;
- (void)_scheduleDisconnectionTimerForSequence:(id)arg1 endTransitionBlock:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)_sequenceIDsToOutstandingWidgetUpdateCompletionHandlers;
- (void)_setBlacklisted:(bool)arg1;
- (void)_setBrokenView:(id)arg1;
- (void)_setConnectionState:(long long)arg1;
- (void)_setContentProvidingView:(id)arg1;
- (void)_setDidRequestViewInset:(bool)arg1;
- (void)_setDidUpdate:(bool)arg1;
- (void)_setDisconnectionTimer:(id)arg1;
- (void)_setEncodingLayerTree:(bool)arg1;
- (void)_setExtensionRequest:(id)arg1;
- (void)_setIgnoringParentAppearState:(bool)arg1;
- (void)_setImplementsPerformUpdate:(bool)arg1;
- (void)_setLargestAvailableDisplayMode:(long long)arg1;
- (void)_setLastUnanticipatedDisconnectionDate:(id)arg1;
- (void)_setLockedOutView:(id)arg1;
- (void)_setRemoteViewController:(id)arg1;
- (void)_setRemoteViewControllerConnectionHandler:(id /* block */)arg1;
- (void)_setRemoteViewControllerDisconnectionHandler:(id /* block */)arg1;
- (void)_setSequenceIDsToOutstandingWidgetUpdateCompletionHandlers:(id)arg1;
- (void)_setSnapshotBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setSnapshotView:(id)arg1;
- (void)_setViewWillAppearSemaphore:(id)arg1;
- (void)_setViewWillDisappearSemaphore:(id)arg1;
- (void)_setupRequestQueue;
- (bool)_shouldRemoveSnapshotWhenNotVisible;
- (id)_snapshotIdentifierForLayoutMode:(long long)arg1;
- (id)_snapshotView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_snapshotViewBounds;
- (void)_synchronizeGeometryWithSnapshot;
- (void)_updatePreferredContentSizeWithHeight:(double)arg1;
- (id /* block */)_updateRequestForSequence:(id)arg1;
- (void)_updateWidgetWithCompletionHandler:(id /* block */)arg1;
- (void)_validateSnapshotViewForActiveLayoutMode;
- (id)_viewWillAppearSemaphore;
- (id)_viewWillDisappearSemaphore;
- (id)_widgetSnapshotURLForLayoutMode:(long long)arg1 ensuringDirectoryExists:(bool)arg2;
- (id)_widgetSnapshotURLForSnapshotIdentifier:(id)arg1;
- (id)_widgetSnapshotURLForSnapshotIdentifier:(id)arg1 ensuringDirectoryExists:(bool)arg2;
- (long long)activeDisplayMode;
- (id)appBundleID;
- (id)auditToken;
- (double)cornerRadius;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (bool)disconnectsImmediately;
- (id)displayName;
- (void)handleReconnectionRequest:(id)arg1;
- (id)host;
- (bool)implementsPerformUpdate;
- (id)initWithWidgetInfo:(id)arg1 delegate:(id)arg2 host:(id)arg3;
- (void)invalidateCachedSnapshotWithCompletionHandler:(id /* block */)arg1;
- (void)invalidateCachedSnapshotWithURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)isBrokenViewVisible;
- (bool)isLinkedOnOrAfterSystemVersion:(id)arg1;
- (bool)isLockedOut;
- (bool)isRemoteViewVisible;
- (bool)isSnapshotLoaded;
- (long long)largestAvailableDisplayMode;
- (void)managingContainerDidDisappear:(id)arg1;
- (void)managingContainerWillAppear:(id)arg1;
- (unsigned long long)maskedCorners;
- (void)maximumSizeDidChangeForDisplayMode:(long long)arg1;
- (void)requestIconWithHandler:(id /* block */)arg1;
- (void)requestSettingsIconWithHandler:(id /* block */)arg1;
- (void)setActiveDisplayMode:(long long)arg1;
- (void)setAppBundleID:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisconnectsImmediately:(bool)arg1;
- (void)setHost:(id)arg1;
- (void)setLockedOut:(bool)arg1 withExplanation:(id)arg2;
- (void)setMaskedCorners:(unsigned long long)arg1;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setUserSpecifiedDisplayMode:(long long)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)traitCollectionDidChange:(id)arg1;
- (long long)userSpecifiedDisplayMode;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)widget:(id)arg1 didTerminateWithError:(id)arg2;
- (id)widgetIdentifier;
- (id)widgetInfo;

@end
