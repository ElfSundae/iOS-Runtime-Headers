/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

@interface CPSApplicationStateMonitor : NSObject {
    NSString * _bundleIdentifier;
    NSObject<OS_dispatch_queue> * _stateObserverQueue;
    CARObserverHashTable * _stateObservers;
    UIWindowScene * _windowScene;
}

@property (getter=isApplicationActive, nonatomic, readonly) bool applicationActive;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, retain) CARObserverHashTable *stateObservers;
@property (nonatomic) UIWindowScene *windowScene;

- (void).cxx_destruct;
- (void)_notifyObserversForeground:(bool)arg1;
- (void)_sceneDidEnterBackground:(id)arg1;
- (void)_sceneWillEnterForeground:(id)arg1;
- (void)addApplicationStateObserver:(id)arg1;
- (id)bundleIdentifier;
- (void)dealloc;
- (id)initWithWindowScene:(id)arg1;
- (bool)isApplicationActive;
- (void)removeApplicationStateObserver:(id)arg1;
- (void)setStateObservers:(id)arg1;
- (void)setWindowScene:(id)arg1;
- (id)stateObservers;
- (id)windowScene;

@end
