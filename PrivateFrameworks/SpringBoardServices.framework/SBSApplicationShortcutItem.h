/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSApplicationShortcutItem : NSObject <BSXPCCoding, NSCopying> {
    unsigned int _activationMode;
    NSString *_bundleIdentifierToLaunch;
    SBSApplicationShortcutIcon *_icon;
    NSString *_localizedSubtitle;
    NSString *_localizedTitle;
    NSString *_type;
    NSData *_userInfoData;
}

@property (nonatomic) unsigned int activationMode;
@property (nonatomic, copy) NSString *bundleIdentifierToLaunch;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) SBSApplicationShortcutIcon *icon;
@property (nonatomic, copy) NSString *localizedSubtitle;
@property (nonatomic, copy) NSString *localizedTitle;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSDictionary *userInfo;
@property (nonatomic, retain) NSData *userInfoData;

// Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices

+ (unsigned int)_activationModeForString:(id)arg1;
+ (int)_iconTypeForString:(id)arg1;
+ (id)staticShortcutItemWithDictionary:(id)arg1 localizationHandler:(id /* block */)arg2;

- (unsigned int)activationMode;
- (id)bundleIdentifierToLaunch;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned int)hash;
- (id)icon;
- (id)initWithXPCDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)localizedSubtitle;
- (id)localizedTitle;
- (void)setActivationMode:(unsigned int)arg1;
- (void)setBundleIdentifierToLaunch:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setLocalizedSubtitle:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setType:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setUserInfoData:(id)arg1;
- (id)type;
- (id)userInfo;
- (id)userInfoData;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

+ (id)shortcutItemWithGKQuickAction:(id)arg1;

- (BOOL)_gkIsGameCenterQuickAction;

@end
