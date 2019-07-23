/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKKeepDaemonAliveAssertion : NSObject {
    NSObject<OS_xpc_object> * _keepaliveConnection;
}

+ (id)assertion;

- (void).cxx_destruct;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_registerForAppActiveNotifications;
- (void)_setupConnection;
- (void)_setupHeartBeatForConnection:(id)arg1;
- (void)_tearDownConnection;
- (void)_unregisterForAppActiveNotifications;
- (void)dealloc;
- (id)init;

@end
