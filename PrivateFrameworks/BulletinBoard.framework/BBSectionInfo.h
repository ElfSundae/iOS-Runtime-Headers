/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBSectionInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString * _appName;
    NSArray * _dataProviderIDs;
    NSString * _displayName;
    BOOL  _displaysCriticalBulletins;
    NSString * _factorySectionID;
    NSArray * _filters;
    BOOL  _hideWeeApp;
    BBSectionIcon * _icon;
    BBSectionInfoSettings * _managedSectionInfoSettings;
    BBSectionInfo * _parentSection;
    NSString * _pathToWeeAppPluginBundle;
    int  _sectionCategory;
    NSString * _sectionID;
    BBSectionInfoSettings * _sectionInfoSettings;
    int  _sectionType;
    NSString * _subsectionID;
    int  _subsectionPriority;
    NSArray * _subsections;
    BOOL  _suppressFromSettings;
    unsigned int  _suppressedSettings;
    unsigned int  _version;
}

@property (nonatomic) unsigned int alertType;
@property (nonatomic) BOOL allowsNotifications;
@property (nonatomic, copy) NSString *appName;
@property (nonatomic) unsigned int bulletinCount;
@property (nonatomic) int carPlaySetting;
@property (nonatomic, copy) NSArray *dataProviderIDs;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic) BOOL displaysCriticalBulletins;
@property (nonatomic) BOOL enabled;
@property (nonatomic, copy) NSString *factorySectionID;
@property (nonatomic, copy) NSArray *filters;
@property (nonatomic) BOOL hideWeeApp;
@property (nonatomic, copy) BBSectionIcon *icon;
@property (nonatomic, readonly, copy) NSData *iconData;
@property (nonatomic, copy) BBSectionInfoSettings *managedSectionInfoSettings;
@property (nonatomic) unsigned int notificationCenterLimit;
@property (nonatomic) BBSectionInfo *parentSection;
@property (nonatomic, copy) NSString *pathToWeeAppPluginBundle;
@property (nonatomic) unsigned int pushSettings;
@property (nonatomic, readonly) BBSectionInfoSettings *readableSettings;
@property (nonatomic) int sectionCategory;
@property (nonatomic, copy) NSString *sectionID;
@property (nonatomic, copy) BBSectionInfoSettings *sectionInfoSettings;
@property (nonatomic) int sectionType;
@property (nonatomic) BOOL showsInLockScreen;
@property (nonatomic) BOOL showsInNotificationCenter;
@property (nonatomic) BOOL showsMessagePreview;
@property (nonatomic) BOOL showsOnExternalDevices;
@property (nonatomic, copy) NSString *subsectionID;
@property (nonatomic) int subsectionPriority;
@property (nonatomic, copy) NSArray *subsections;
@property (nonatomic) BOOL suppressFromSettings;
@property (nonatomic) unsigned int suppressedSettings;
@property (nonatomic, readonly) BOOL usesManagedSettings;
@property (nonatomic) unsigned int version;
@property (nonatomic, readonly) BBSectionInfoSettings *writableSettings;

// Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard

+ (id)defaultSectionInfoForSection:(id)arg1;
+ (id)defaultSectionInfoForType:(int)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addSubsection:(id)arg1;
- (void)_associateDataProviderSectionInfo:(id)arg1;
- (void)_configureWithDefaultsForSectionType:(int)arg1;
- (void)_dissociateDataProviderSectionInfo:(id)arg1;
- (void)_replaceSubsection:(id)arg1;
- (id)_subsectionForID:(id)arg1;
- (unsigned int)alertType;
- (BOOL)allowsNotifications;
- (id)appName;
- (id)awakeAfterUsingCoder:(id)arg1;
- (unsigned int)bulletinCount;
- (int)carPlaySetting;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataProviderIDs;
- (id)description;
- (int)disabledSettingForSetting:(int)arg1;
- (id)displayName;
- (BOOL)displaysCriticalBulletins;
- (id)effectiveSectionInfo;
- (id)effectiveSectionInfoWithFactoryInfo:(id)arg1;
- (BOOL)enabled;
- (void)encodeWithCoder:(id)arg1;
- (id)factorySectionID;
- (id)filters;
- (unsigned int)hash;
- (BOOL)hideWeeApp;
- (id)icon;
- (id)iconData;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDefaultsForSectionType:(int)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)managedSectionInfoSettings;
- (unsigned int)notificationCenterLimit;
- (id)parentSection;
- (id)pathToWeeAppPluginBundle;
- (unsigned int)pushSettings;
- (BOOL)queryAndUseManagedSettings;
- (BOOL)queryAndUseManagedSettingsForSectionID:(id)arg1;
- (id)readableSettings;
- (id)replacementObjectForCoder:(id)arg1;
- (int)sectionCategory;
- (id)sectionID;
- (id)sectionInfoSettings;
- (int)sectionType;
- (void)setAlertType:(unsigned int)arg1;
- (void)setAllowsNotifications:(BOOL)arg1;
- (void)setAppName:(id)arg1;
- (void)setBulletinCount:(unsigned int)arg1;
- (void)setCarPlaySetting:(int)arg1;
- (void)setDataProviderIDs:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setDisplaysCriticalBulletins:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setFactorySectionID:(id)arg1;
- (void)setFilters:(id)arg1;
- (void)setHideWeeApp:(BOOL)arg1;
- (void)setIcon:(id)arg1;
- (void)setManagedSectionInfoSettings:(id)arg1;
- (void)setNotificationCenterLimit:(unsigned int)arg1;
- (void)setParentSection:(id)arg1;
- (void)setPathToWeeAppPluginBundle:(id)arg1;
- (void)setPushSettings:(unsigned int)arg1;
- (void)setSectionCategory:(int)arg1;
- (void)setSectionID:(id)arg1;
- (void)setSectionInfoSettings:(id)arg1;
- (void)setSectionType:(int)arg1;
- (void)setShowsInLockScreen:(BOOL)arg1;
- (void)setShowsInNotificationCenter:(BOOL)arg1;
- (void)setShowsMessagePreview:(BOOL)arg1;
- (void)setShowsOnExternalDevices:(BOOL)arg1;
- (void)setSubsectionID:(id)arg1;
- (void)setSubsectionPriority:(int)arg1;
- (void)setSubsections:(id)arg1;
- (void)setSuppressFromSettings:(BOOL)arg1;
- (void)setSuppressedSettings:(unsigned int)arg1;
- (void)setVersion:(unsigned int)arg1;
- (BOOL)showsInLockScreen;
- (BOOL)showsInNotificationCenter;
- (BOOL)showsMessagePreview;
- (BOOL)showsOnExternalDevices;
- (id)subsectionID;
- (int)subsectionPriority;
- (id)subsections;
- (BOOL)suppressFromSettings;
- (unsigned int)suppressedSettings;
- (void)updateWithDefaultFilters:(id)arg1;
- (void)updateWithDefaultSectionInfo:(id)arg1;
- (BOOL)usesManagedSettings;
- (unsigned int)version;
- (id)writableSettings;

// Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer

- (BOOL)uns_isEnabled;
- (int)uns_notificationSettingForBBSectionInfoSetting:(int)arg1;
- (id)uns_notificationSettings;
- (id)uns_sectionInfoWithAuthorizationOptions:(unsigned int)arg1;

@end
