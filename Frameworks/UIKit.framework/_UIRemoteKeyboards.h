/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIRemoteKeyboards : NSObject <_UIKeyboardArbitrationClient, _UIRemoteKeyboardControllerDelegate, _UIRemoteKeyboardDistributedViewSource> {
    NSMutableArray *_activePIDs;
    NSXPCConnection *_connection;
    BOOL _currentKeyboard;
    _UIKeyboardChangedInformation *_currentState;
    BOOL _expectedSuppression;
    BOOL _expectingInitialState;
    int _externalSuppression;
    BOOL _hadFocusBeforeOverlay;
    BOOL _handlingRemoteEvent;
    BOOL _hasFocus;
    int _hostedCount;
    int _ignoreLayoutSubviews;
    UIView *_keyboardSnapshot;
    NSMutableSet *_pendingKeyboardGrabs;
    int _recursionCheck;
    float _requiredLevel;
    BOOL _takingSnapshot;
    BOOL _updatingHeight;
    NSHashTable *_windowControllers;
}

@property (retain) NSXPCConnection *connection;
@property (readonly, retain) NSArray *currentHostedPIDs;
@property BOOL currentKeyboard;
@property (retain) _UIKeyboardChangedInformation *currentState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) BOOL handlingRemoteEvent;
@property (readonly) unsigned int hash;
@property (readonly) float intersectionHeight;
@property (nonatomic) BOOL isSnapshotting;
@property (readonly) BOOL keyboardActive;
@property (readonly) BOOL keyboardVisible;
@property (readonly) UIWindow *keyboardWindow;
@property (readonly) BOOL oldPathForSnapshot;
@property (readonly) <_UIKeyboardArbitration> *proxy;
@property (readonly) BOOL remoteKeyboardUndocked;
@property (readonly) Class superclass;
@property (readonly) BOOL updatingHeight;

+ (id)createArbiterConnection;
+ (BOOL)enabled;
+ (id)sharedRemoteKeyboards;
+ (BOOL)useSystemService;

- (void)_performOnDistributedControllersExceptSelf:(id /* block */)arg1;
- (void)addHostedWindowView:(id)arg1 fromPID:(int)arg2;
- (BOOL)allowedToShowKeyboard;
- (void)applicationResume:(id)arg1;
- (void)checkConnection;
- (void)checkState;
- (void)cleanSuppression;
- (void)completeMoveKeyboardForWindow:(id)arg1;
- (void)completeTransition:(id)arg1 withInfo:(id)arg2;
- (id)connection;
- (void)controllerDidLayoutSubviews:(id)arg1;
- (id)currentHostedPIDs;
- (BOOL)currentKeyboard;
- (id)currentState;
- (void)dealloc;
- (void)didRemoveDeactivationReason:(id)arg1;
- (void)didSuspend:(id)arg1;
- (void)finishWithHostedWindow;
- (void)forceKeyboardAway;
- (BOOL)handlingRemoteEvent;
- (void)ignoreLayoutNotifications:(id /* block */)arg1;
- (id)init;
- (float)intersectionHeight;
- (BOOL)isOnScreenRotating;
- (BOOL)isSnapshotting;
- (BOOL)keyboardActive;
- (void)keyboardChanged:(id)arg1 shouldConsiderSnapshottingKeyboard:(BOOL)arg2 isLocalEvent:(BOOL)arg3;
- (void)keyboardChangedCompleted;
- (BOOL)keyboardVisible;
- (id)keyboardWindow;
- (Class)keyboardWindowClass;
- (BOOL)needsToShowKeyboardForWindow:(id)arg1;
- (BOOL)oldPathForSnapshot;
- (void)peekApplicationEvent:(id)arg1;
- (void)performOnControllers:(id /* block */)arg1;
- (void)performOnDistributedControllers:(id /* block */)arg1;
- (id)prepareForHostedWindow;
- (void)prepareToMoveKeyboard:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 showing:(BOOL)arg2 forScreen:(id)arg3;
- (id)proxy;
- (void)queue_applicationLostFocusWithCompletion:(id /* block */)arg1;
- (void)queue_failedConnection:(id)arg1;
- (void)queue_keyboardChanged:(id)arg1 onComplete:(id /* block */)arg2;
- (void)queue_keyboardChangedWithCompletion:(id /* block */)arg1;
- (void)queue_keyboardSuppressed:(BOOL)arg1 withCompletion:(id /* block */)arg2;
- (void)queue_keyboardTransition:(id)arg1 event:(unsigned int)arg2 withInfo:(id)arg3 onComplete:(id /* block */)arg4;
- (void)registerController:(id)arg1;
- (void)reloadForSnapshotting;
- (BOOL)remoteKeyboardUndocked;
- (void)resetSnapshotWithWindowCheck:(BOOL)arg1;
- (void)restorePreservedInputViewsIfNecessary;
- (void)sceneUpdated;
- (void)setConnection:(id)arg1;
- (void)setCurrentKeyboard:(BOOL)arg1;
- (void)setCurrentState:(id)arg1;
- (void)setIsSnapshotting:(BOOL)arg1;
- (void)setPlacement:(id)arg1 quietly:(BOOL)arg2 animated:(BOOL)arg3 generateSplitNotification:(BOOL)arg4;
- (void)setSuppressingKeyboard:(BOOL)arg1;
- (void)setWindowEnabled:(BOOL)arg1;
- (void)setWindowLevel:(float)arg1 sceneLevel:(float)arg2 forScreen:(id)arg3;
- (BOOL)shouldAllowInputViewsRestoredForId:(id)arg1;
- (void)startConnection;
- (void)startTransition:(id)arg1 withInfo:(id)arg2;
- (void)stopConnection;
- (void)unregisterController:(id)arg1;
- (void)updateTransition:(id)arg1 withInfo:(id)arg2;
- (BOOL)updatingHeight;
- (void)userSelectedApp:(id)arg1 onCompletion:(id /* block */)arg2;
- (id)viewHostForWindow:(id)arg1;
- (BOOL)wantsToShowKeyboardForWindow:(id)arg1;
- (void)willAddDeactivationReason:(id)arg1;
- (void)willResume:(id)arg1;

@end
