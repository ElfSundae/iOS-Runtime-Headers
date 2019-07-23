/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIApplicationSceneSettings : FBSSceneSettings <UIApplicationSceneSettings>

@property (nonatomic, readonly) BOOL canShowAlerts;
@property (nonatomic, readonly) unsigned int deactivationReasons;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BOOL deviceOrientationEventsEnabled;
@property (getter=isEffectivelyBackgrounded, nonatomic, readonly) BOOL effectivelyBackgrounded;
@property (nonatomic, readonly, retain) NSNumber *forcedStatusBarHidden;
@property (nonatomic, readonly, retain) NSNumber *forcedStatusBarStyle;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL idleModeEnabled;
@property (nonatomic, readonly) int statusBarStyleOverridesToSuppress;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BOOL underLock;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (BOOL)canShowAlerts;
- (unsigned int)deactivationReasons;
- (BOOL)deviceOrientationEventsEnabled;
- (id)forcedStatusBarHidden;
- (id)forcedStatusBarStyle;
- (BOOL)idleModeEnabled;
- (BOOL)isUISubclass;
- (id)keyDescriptionForSetting:(unsigned int)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (int)statusBarStyleOverridesToSuppress;
- (BOOL)underLock;
- (id)valueDescriptionForFlag:(int)arg1 object:(id)arg2 ofSetting:(unsigned int)arg3;

// Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard

- (BOOL)isEffectivelyBackgrounded;

@end
