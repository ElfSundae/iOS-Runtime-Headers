/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDDeviceSetupManager : HMFObject {
    <HMFLocking> * _lock;
    int  _proxSetupNotificationToken;
    bool  _running;
}

@property (getter=isRunning, readonly) bool running;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)dealloc;
- (id)followUpController;
- (id)init;
- (bool)isRunning;
- (void)startAdvertising;
- (void)stopAdvertising;

@end
