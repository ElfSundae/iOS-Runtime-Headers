/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardUISettings : _UISettings {
    bool  _didShowHUD;
    int  _lastVolume;
    bool  _nextPage;
}

+ (bool)enabled;
+ (void)hideViaNotification;
+ (void)loadSettings;
+ (id)sharedInstance;

- (bool)_isShowingHUD;
- (id)_sharedHUD;
- (void)cancel;
- (void)hide;
- (id)initWithDefaultValues;
- (void)next;
- (void)pressRingerButton;
- (void)previous;
- (void)saveSettings;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)settingsHUDConfiguration;
- (void)show;
- (void)show:(bool)arg1;
- (id)valueForKey:(id)arg1;

@end
