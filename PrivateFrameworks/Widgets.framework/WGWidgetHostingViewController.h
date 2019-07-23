/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
 */

@interface WGWidgetHostingViewController : UIViewController {
    int  _activeDisplayMode;
    NSString * _appBundleID;
    BOOL  _blacklisted;
    _WGBrokenWidgetView * _brokenView;
    int  _connectionRequestState;
    UIView * _contentProvidingView;
    float  _cornerRadius;
    <WGWidgetHostingViewControllerDelegate> * _delegate;
    BOOL  _didRequestViewInset;
    BOOL  _didUpdate;
    NSTimer * _disconnectionTimer;
    BOOL  _disconnectsImmediately;
    NSObject<OS_dispatch_queue> * _diskWriteQueue;
    BOOL  _encodingLayerTree;
    <NSCopying> * _extensionRequest;
    <WGWidgetHostingViewControllerHost> * _host;
    BOOL  _ignoringParentAppearState;
    BOOL  _implementsPerformUpdate;
    NSDate * _lastUnanticipatedDisconnectionDate;
    unsigned int  _maskedCorners;
    NSMapTable * _openActiveDisplayModeChangeTransactions;
    NSMapTable * _openAppearanceTransactions;
    id /* block */  _outstandingWidgetUpdateCompletionHandler;
    NSObject<OS_dispatch_queue> * _proxyConnectionQueue;
    NSObject<OS_dispatch_queue> * _proxyDisconnectionQueue;
    NSObject<OS_dispatch_queue> * _proxyRequestQueue;
    _WGWidgetRemoteViewController * _remoteViewController;
    id /* block */  _remoteViewControllerDisconnectionHandler;
    int  _requestState;
    UIView * _snapshotView;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _snapshotViewBounds;
    NSObject<OS_dispatch_semaphore> * _viewWillAppearSemaphore;
    NSObject<OS_dispatch_semaphore> * _viewWillDisappearSemaphore;
    WGWidgetInfo * _widgetInfo;
}

@property (nonatomic, readonly) int activeDisplayMode;
@property (nonatomic, copy) NSString *appBundleID;
@property (nonatomic, readonly) BSAuditToken *auditToken;
@property (getter=_isBlacklisted, setter=_setBlacklisted:, nonatomic) BOOL blacklisted;
@property (getter=_brokenView, setter=_setBrokenView:, nonatomic, retain) _WGBrokenWidgetView *brokenView;
@property (getter=isBrokenViewVisible, nonatomic, readonly) BOOL brokenViewVisible;
@property (getter=_connectionRequestState, setter=_setConnectionRequestState:, nonatomic) int connectionRequestState;
@property (getter=_containerIdentifier, nonatomic, readonly, copy) NSString *containerIdentifier;
@property (getter=_contentProvidingView, setter=_setContentProvidingView:, nonatomic, retain) UIView *contentProvidingView;
@property (nonatomic) float cornerRadius;
@property (nonatomic) <WGWidgetHostingViewControllerDelegate> *delegate;
@property (getter=_didRequestViewInset, setter=_setDidRequestViewInset:, nonatomic) BOOL didRequestViewInset;
@property (getter=_didUpdate, setter=_setDidUpdate:, nonatomic) BOOL didUpdate;
@property (getter=_disconnectionTimer, setter=_setDisconnectionTimer:, nonatomic) NSTimer *disconnectionTimer;
@property (nonatomic) BOOL disconnectsImmediately;
@property (getter=_diskWriteQueue, nonatomic, readonly) NSObject<OS_dispatch_queue> *diskWriteQueue;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (getter=_isEncodingLayerTree, setter=_setEncodingLayerTree:, nonatomic) BOOL encodingLayerTree;
@property (getter=_extensionRequest, setter=_setExtensionRequest:, nonatomic, copy) <NSCopying> *extensionRequest;
@property (nonatomic) <WGWidgetHostingViewControllerHost> *host;
@property (nonatomic, readonly) UIImage *icon;
@property (getter=_isIgnoringParentAppearState, setter=_setIgnoringParentAppearState:, nonatomic) BOOL ignoringParentAppearState;
@property (setter=_setImplementsPerformUpdate:, nonatomic) BOOL implementsPerformUpdate;
@property (nonatomic, readonly) int largestAvailableDisplayMode;
@property (getter=_lastUnanticipatedDisconnectionDate, setter=_setLastUnanticipatedDisconnectionDate:, nonatomic, retain) NSDate *lastUnanticipatedDisconnectionDate;
@property (nonatomic) unsigned int maskedCorners;
@property (getter=_openActiveDisplayModeChangeTransactions, nonatomic, readonly) NSMapTable *openActiveDisplayModeChangeTransactions;
@property (getter=_openAppearanceTransactions, nonatomic, readonly) NSMapTable *openAppearanceTransactions;
@property (getter=_outstandingWidgetUpdateCompletionHandler, setter=_setOutstandingWidgetUpdateCompletionHandler:, nonatomic, copy) id /* block */ outstandingWidgetUpdateCompletionHandler;
@property (getter=_proxyConnectionQueue, nonatomic, readonly) NSObject<OS_dispatch_queue> *proxyConnectionQueue;
@property (getter=_proxyDisconnectionQueue, nonatomic, readonly) NSObject<OS_dispatch_queue> *proxyDisconnectionQueue;
@property (getter=_proxyRequestQueue, nonatomic, readonly) NSObject<OS_dispatch_queue> *proxyRequestQueue;
@property (getter=_remoteViewController, setter=_setRemoteViewController:, nonatomic, retain) _WGWidgetRemoteViewController *remoteViewController;
@property (getter=_remoteViewControllerDisconnectionHandler, setter=_setRemoteViewControllerDisconnectionHandler:, nonatomic, copy) id /* block */ remoteViewControllerDisconnectionHandler;
@property (getter=isRemoteViewVisible, nonatomic, readonly) BOOL remoteViewVisible;
@property (nonatomic) int requestState;
@property (nonatomic, readonly) UIImage *settingsIcon;
@property (getter=isSnapshotLoaded, nonatomic, readonly) BOOL snapshotLoaded;
@property (getter=_snapshotView, setter=_setSnapshotView:, nonatomic, retain) UIView *snapshotView;
@property (getter=_snapshotViewBounds, setter=_setSnapshotBounds:, nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } snapshotViewBounds;
@property (nonatomic) int userSpecifiedDisplayMode;
@property (getter=_viewWillAppearSemaphore, setter=_setViewWillAppearSemaphore:, nonatomic, retain) NSObject<OS_dispatch_semaphore> *viewWillAppearSemaphore;
@property (getter=_viewWillDisappearSemaphore, setter=_setViewWillDisappearSemaphore:, nonatomic, retain) NSObject<OS_dispatch_semaphore> *viewWillDisappearSemaphore;
@property (nonatomic, readonly, copy) NSString *widgetIdentifier;
@property (nonatomic, readonly) WGWidgetInfo *widgetInfo;

+ (void)setWidgetSnapshotTimestampsEnabled:(BOOL)arg1;

- (void).cxx_destruct;
- (BOOL)_attemptReconnectionAfterUnanticipatedDisconnection;
- (void)_beginRemoteViewControllerAppearanceTransitionIfNecessary:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_beginRemoteViewControllerAppearanceTransitionIfNecessary:(BOOL)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (id)_brokenView;
- (BOOL)_canDisconnectRemoteViewController:(id*)arg1;
- (BOOL)_canInsertRemoteView;
- (BOOL)_canRequestRemoteViewController:(id*)arg1;
- (id)_cancelTouches;
- (void)_captureAndInsertSnapshotAndDisconnectRemoteViewControllerForReason:(id)arg1 completion:(id /* block */)arg2;
- (void)_captureLayerTree:(id /* block */)arg1;
- (id /* block */)_completionHandlerForUpdateRequest;
- (void)_connectAndInsertRemoteViewForReason:(id)arg1 completion:(id /* block */)arg2 updateHandler:(id /* block */)arg3;
- (int)_connectionRequestState;
- (id)_containerIdentifier;
- (id)_contentProvidingView;
- (float)_contentWidth;
- (BOOL)_didRequestViewInset;
- (BOOL)_didUpdate;
- (void)_disconnectRemoteViewController:(id /* block */)arg1;
- (void)_disconnectRemoteViewControllerForReason:(id)arg1 coalesce:(BOOL)arg2 completionHandler:(id /* block */)arg3;
- (id)_disconnectionTimer;
- (void)_disconnectionTimerDidFire:(id)arg1;
- (id)_diskWriteQueue;
- (void)_endConnectionRequestState:(int)arg1;
- (void)_endRemoteViewControllerAppearanceTransitionIfNecessary;
- (void)_endRemoteViewControllerAppearanceTransitionIfNecessaryWithCompletion:(id /* block */)arg1;
- (void)_endRequestState:(int)arg1;
- (void)_enqueueRemoteServiceRequest:(id /* block */)arg1 withDescription:(id)arg2;
- (void)_enqueueRequest:(id /* block */)arg1 inQueue:(id)arg2 trampolinedToMainQueue:(BOOL)arg3 withDescription:(id)arg4;
- (id)_extensionRequest;
- (void)_finishDisconnectingRemoteViewControllerWithError:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleRequestedViewHeight:(float)arg1 usingAutolayout:(BOOL)arg2 requestIdentifier:(id)arg3;
- (BOOL)_hasOutstandingUpdateRequest;
- (void)_insertAppropriateContentView;
- (void)_insertContentProvidingSubview:(id)arg1 completion:(id /* block */)arg2;
- (void)_insertRemoteViewAfterViewWillAppearWithCompletion:(id /* block */)arg1;
- (void)_invalidateDisconnectionTimer;
- (void)_invalidateSnapshotWithForce:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (BOOL)_isBlacklisted;
- (BOOL)_isEncodingLayerTree;
- (BOOL)_isIgnoringParentAppearState;
- (id)_lastUnanticipatedDisconnectionDate;
- (void)_loadSnapshotViewFromDiskIfNecessary:(id /* block */)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_marginInsets;
- (struct CGSize { float x1; float x2; })_maxSizeForDisplayMode:(int)arg1;
- (void)_noteOutstandingUpdateRequest;
- (id)_openActiveDisplayModeChangeTransactions;
- (id)_openAppearanceTransactions;
- (id /* block */)_outstandingWidgetUpdateCompletionHandler;
- (void)_packageViewFromURL:(id)arg1 reply:(id /* block */)arg2;
- (void)_packageViewWithBlock:(id /* block */)arg1 reply:(id /* block */)arg2;
- (id)_proxyConnectionQueue;
- (id)_proxyDisconnectionQueue;
- (id)_proxyRequestQueue;
- (void)_registerUpdateRequestCompletionHandler:(id /* block */)arg1;
- (id)_remoteViewController;
- (id /* block */)_remoteViewControllerDisconnectionHandler;
- (void)_removeAllSnapshotsDueToIssue:(BOOL)arg1;
- (void)_removeAllSnapshotsForActiveDisplayMode;
- (void)_removeAllSnapshotsMatchingPredicate:(id)arg1 dueToIssue:(BOOL)arg2;
- (void)_removeItemAtURL:(id)arg1;
- (id /* block */)_request:(id /* block */)arg1 withDescription:(id)arg2 forQueue:(id)arg3 trampolinedToMainQueue:(BOOL)arg4;
- (void)_requestRemoteViewController:(id /* block */)arg1;
- (void)_rowHeightDidChange:(id)arg1;
- (void)_setBlacklisted:(BOOL)arg1;
- (void)_setBrokenView:(id)arg1;
- (void)_setConnectionRequestState:(int)arg1;
- (void)_setContentProvidingView:(id)arg1;
- (void)_setDidRequestViewInset:(BOOL)arg1;
- (void)_setDidUpdate:(BOOL)arg1;
- (void)_setDisconnectionTimer:(id)arg1;
- (void)_setEncodingLayerTree:(BOOL)arg1;
- (void)_setExtensionRequest:(id)arg1;
- (void)_setIgnoringParentAppearState:(BOOL)arg1;
- (void)_setImplementsPerformUpdate:(BOOL)arg1;
- (void)_setLargestAvailableDisplayMode:(int)arg1;
- (void)_setLastUnanticipatedDisconnectionDate:(id)arg1;
- (void)_setOutstandingWidgetUpdateCompletionHandler:(id /* block */)arg1;
- (void)_setRemoteViewController:(id)arg1;
- (void)_setRemoteViewControllerDisconnectionHandler:(id /* block */)arg1;
- (void)_setSnapshotBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setSnapshotView:(id)arg1;
- (void)_setSnapshotView:(id)arg1 forLayoutMode:(int)arg2;
- (void)_setViewWillAppearSemaphore:(id)arg1;
- (void)_setViewWillDisappearSemaphore:(id)arg1;
- (void)_setupRequestQueue;
- (id)_snapshotIdentifierForLayoutMode:(int)arg1;
- (id)_snapshotView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_snapshotViewBounds;
- (float)_updatePreferredContentSizeWithHeight:(float)arg1;
- (void)_updateWidgetWithCompletionHandler:(id /* block */)arg1;
- (void)_validateSnapshotViewForActiveLayoutMode;
- (float)_validatedHeightForHeight:(float)arg1 enforcingDisplayMode:(BOOL)arg2;
- (id)_viewWillAppearSemaphore;
- (id)_viewWillDisappearSemaphore;
- (id)_widgetSnapshotURLForLayoutMode:(int)arg1 ensuringDirectoryExists:(BOOL)arg2;
- (int)activeDisplayMode;
- (id)appBundleID;
- (id)auditToken;
- (void)captureSnapshotAndBeginDisappearanceTransitionWithCompletionHandler:(id /* block */)arg1;
- (void)connectRemoteViewControllerForReason:(id)arg1 completionHandler:(id /* block */)arg2;
- (float)cornerRadius;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (BOOL)disconnectsImmediately;
- (id)displayName;
- (void)handleReconnectionRequest:(id)arg1;
- (id)host;
- (id)icon;
- (BOOL)implementsPerformUpdate;
- (id)initWithWidgetInfo:(id)arg1 host:(id)arg2;
- (void)insertSnapshotWithCompletionHandler:(id /* block */)arg1;
- (void)invalidateCachedSnapshotWithCompletionHandler:(id /* block */)arg1;
- (BOOL)isBrokenViewVisible;
- (BOOL)isLinkedOnOrAfterSystemVersion:(id)arg1;
- (BOOL)isRemoteViewVisible;
- (BOOL)isSnapshotLoaded;
- (int)largestAvailableDisplayMode;
- (unsigned int)maskedCorners;
- (void)maximumSizeDidChangeForDisplayMode:(int)arg1;
- (void)performUpdateWithCompletionHandler:(id /* block */)arg1;
- (void)requestInsertionOfRemoteViewAfterViewWillAppearWithCompletionHandler:(id /* block */)arg1;
- (int)requestState;
- (void)setActiveDisplayMode:(int)arg1;
- (void)setAppBundleID:(id)arg1;
- (void)setCornerRadius:(float)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisconnectsImmediately:(BOOL)arg1;
- (void)setHost:(id)arg1;
- (void)setMaskedCorners:(unsigned int)arg1;
- (void)setPreferredContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setRequestState:(int)arg1;
- (void)setUserSpecifiedDisplayMode:(int)arg1;
- (id)settingsIcon;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (int)userSpecifiedDisplayMode;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)widget:(id)arg1 didTerminateWithError:(id)arg2;
- (id)widgetIdentifier;
- (id)widgetInfo;

@end
