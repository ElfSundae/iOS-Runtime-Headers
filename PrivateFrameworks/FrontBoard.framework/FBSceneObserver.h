/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSceneObserver : NSObject <BSDescriptionProviding, FBSceneDelegate, FBSceneObserver> {
    struct { 
        bool clientSettingsUpdated; 
        bool didReceiveActions; 
    }  _delegateFlags;
    bool  _isDelegate;
    <FBSceneObserver> * _observer;
    unsigned long long  _observerAddress;
    Class  _observerClass;
    struct { 
        bool contentStateDidChange; 
        bool updatePrepared; 
        bool updateApplied; 
        bool updateCompleted; 
        bool clientSettingsUpdated; 
        bool didInvalidate; 
    }  _observerFlags;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <FBSceneDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <FBSceneObserver> *observer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_initWithObserver:(id)arg1;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDelegate:(id)arg1;
- (id)initWithObserver:(id)arg1;
- (bool)isDelegate;
- (bool)isEqual:(id)arg1;
- (id)observer;
- (void)scene:(id)arg1 didApplyUpdateWithContext:(id)arg2;
- (void)scene:(id)arg1 didCompleteUpdateWithContext:(id)arg2 error:(id)arg3;
- (void)scene:(id)arg1 didPrepareUpdateWithContext:(id)arg2;
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)sceneContentStateDidChange:(id)arg1;
- (void)sceneDidInvalidate:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
