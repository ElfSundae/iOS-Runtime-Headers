/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIPreferencesController : NSObject {
    NSTimer *_synchronizePreferencesTimer;
    BOOL dontSynchronizePreferences;
    BOOL isInternalInstall;
}

@property (nonatomic) BOOL dontSynchronizePreferences;
@property (nonatomic) BOOL isInternalInstall;

+ (id)sharedPreferencesController;

- (BOOL)boolForKey:(int)arg1;
- (void)clearSynchronizePreferencesTimer;
- (void)dealloc;
- (id)defaultForKey:(int)arg1;
- (struct { id x1; BOOL x2; BOOL x3; unsigned long long x4; int x5; }*)domainForType:(int)arg1;
- (struct { id x1; BOOL x2; BOOL x3; unsigned long long x4; int x5; }*)domains;
- (BOOL)dontSynchronizePreferences;
- (id)init;
- (BOOL)isInternalInstall;
- (BOOL)isKeyLockedDown:(int)arg1;
- (void)managedKeyboardSettingDidChange:(id)arg1;
- (struct { id x1; int x2; id x3; int x4; }*)preferences;
- (void)preferencesChangedCallback:(id)arg1;
- (void)releaseDontSynchronizePreferences;
- (void)setAutocorrectionEnabled:(BOOL)arg1;
- (void)setCheckSpellingEnabled:(BOOL)arg1;
- (void)setDontSynchronizePreferences:(BOOL)arg1;
- (void)setIsInternalInstall:(BOOL)arg1;
- (void)setPredictionEnabled:(BOOL)arg1;
- (void)setValue:(id)arg1 forKey:(int)arg2;
- (void)setValue:(id)arg1 forManagedKey:(int)arg2;
- (void)synchronizePreferences;
- (void)touchSynchronizePreferencesTimer;
- (id)valueForKey:(int)arg1;
- (id)valueForManagedKey:(int)arg1;

@end
