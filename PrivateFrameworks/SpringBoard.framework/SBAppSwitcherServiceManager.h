/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBAppSwitcherServiceManager : NSObject {
    SBAppSwitcherServiceSet * _services;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)registerService:(id)arg1;
- (id)registeredServicesSnapshot;
- (void)unregisterService:(id)arg1;

@end
