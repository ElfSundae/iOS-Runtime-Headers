/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXVideoInteractionManager : NSObject <SXVideoTransitionObserver> {
    NSMutableSet * _controls;
    NSMutableSet * _gestureRecognizers;
    NSMapTable * _interactionHandlerFactories;
    NSMapTable * _interactionHandlers;
    NSMapTable * _interactionObserverFactories;
    NSMapTable * _interactionObservers;
    NSMapTable * _registeredHandlers;
    NSMapTable * _registeredObservers;
}

@property (nonatomic, readonly) NSMutableSet *controls;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMutableSet *gestureRecognizers;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMapTable *interactionHandlerFactories;
@property (nonatomic, readonly) NSMapTable *interactionHandlers;
@property (nonatomic, readonly) NSMapTable *interactionObserverFactories;
@property (nonatomic, readonly) NSMapTable *interactionObservers;
@property (nonatomic, readonly) NSMapTable *registeredHandlers;
@property (nonatomic, readonly) NSMapTable *registeredObservers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)configureControl:(id)arg1 withHandler:(id)arg2 observer:(id)arg3;
- (void)configureControlInteractionManagementForVideo:(id)arg1;
- (void)configureGestureRecognizer:(id)arg1 withHandler:(id)arg2 observer:(id)arg3;
- (void)configureGestureRecognizerInteractionManagementForVideo:(id)arg1;
- (id)controls;
- (id)gestureRecognizers;
- (id)init;
- (id)interactionHandlerFactories;
- (id)interactionHandlerForInteractionWithControl:(id)arg1 forVideo:(id)arg2;
- (id)interactionHandlerForInteractionWithGestureRecognizer:(id)arg1 forVideo:(id)arg2;
- (id)interactionHandlers;
- (id)interactionObserverFactories;
- (id)interactionObserverForInteractionWithControl:(id)arg1 forVideo:(id)arg2;
- (id)interactionObserverForInteractionWithGestureRecognizer:(id)arg1 forVideo:(id)arg2;
- (id)interactionObservers;
- (void)registerControl:(id)arg1 withInteractionHandler:(id)arg2;
- (void)registerControl:(id)arg1 withInteractionHandlerFactory:(id)arg2;
- (void)registerControl:(id)arg1 withInteractionObserver:(id)arg2;
- (void)registerControl:(id)arg1 withInteractionObserverFactory:(id)arg2;
- (void)registerGestureRecognizer:(id)arg1 withInteractionHandler:(id)arg2;
- (void)registerGestureRecognizer:(id)arg1 withInteractionHandlerFactory:(id)arg2;
- (void)registerGestureRecognizer:(id)arg1 withInteractionObserver:(id)arg2;
- (void)registerGestureRecognizer:(id)arg1 withInteractionObserverFactory:(id)arg2;
- (id)registeredHandlers;
- (id)registeredObservers;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
