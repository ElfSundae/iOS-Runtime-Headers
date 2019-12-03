/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
 */

@interface SDLockHandler : NSObject

+ (void)_deviceLockSetUpMigrationCheck;
+ (void)_deviceLockSetup;
+ (void)_deviceLockSetupMKB;
+ (void)_deviceLockSetupSB;
+ (bool)deviceFirstUnlockedInMKB;
+ (bool)deviceFirstUnlockedInSB;
+ (bool)deviceUnlocked;
+ (void)setupHandlerWithIndexQueue:(id)arg1 pipelineOnly:(bool)arg2 indexEnabled:(bool)arg3 delegate:(id)arg4;
+ (bool)unlockedSinceBoot;

@end
