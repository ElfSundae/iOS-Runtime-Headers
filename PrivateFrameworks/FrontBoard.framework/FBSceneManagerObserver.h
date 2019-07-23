/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSceneManagerObserver : BSZeroingWeakReference <BSDescriptionProviding, FBSceneManagerDelegate, FBSceneManagerInternalObserver> {
    BOOL  _amendSettings;
    BOOL  _createDefaultTransitionContext;
    BOOL  _delegate;
    BOOL  _didCommit;
    BOOL  _didCommitDEPRECATED;
    BOOL  _didCreateScene;
    BOOL  _didDestroy;
    BOOL  _didReceiveActions;
    BOOL  _didSynchronize;
    BOOL  _didUpdateClientSettings;
    BOOL  _hostingPolicyForScene;
    BOOL  _internalObserver;
    BOOL  _willCommit;
    BOOL  _willDestroy;
    BOOL  _willSynchronize;
    BOOL  _willUpdateScene;
}

@property (readonly, copy) NSString *debugDescription;
@property (getter=isDelegate, nonatomic, readonly) BOOL delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (getter=isInternalObserver, nonatomic, readonly) BOOL internalObserver;
@property (nonatomic, readonly) id observer;
@property (readonly) Class superclass;

+ (id)observerWithObserver:(id)arg1;

- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)initWithObject:(id)arg1;
- (id)initWithObserver:(id)arg1;
- (BOOL)isDelegate;
- (BOOL)isInternalObserver;
- (id)observer;
- (void)sceneManager:(id)arg1 amendSettings:(id)arg2 forUpdatingScene:(id)arg3;
- (id)sceneManager:(id)arg1 createDefaultTransitionContextForScene:(id)arg2;
- (void)sceneManager:(id)arg1 didCommitUpdateForScene:(id)arg2 transactionID:(unsigned int)arg3 success:(BOOL)arg4;
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2 withClient:(id)arg3;
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;
- (int)sceneManager:(id)arg1 hostingPolicyForScene:(id)arg2;
- (void)sceneManager:(id)arg1 scene:(id)arg2 didReceiveActions:(id)arg3;
- (void)sceneManager:(id)arg1 scene:(id)arg2 didUpdateClientSettingsWithDiff:(id)arg3 oldClientSettings:(id)arg4 transitionContext:(id)arg5;
- (void)sceneManager:(id)arg1 willCommitUpdateForScene:(id)arg2 transactionID:(unsigned int)arg3;
- (void)sceneManager:(id)arg1 willDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 willUpdateScene:(id)arg2 withSettings:(id)arg3 transitionContext:(id)arg4;
- (void)sceneManagerDidEndSceneUpdateSynchronization:(id)arg1;
- (void)sceneManagerWillBeginSceneUpdateSynchronization:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
