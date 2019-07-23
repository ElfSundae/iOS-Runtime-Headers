/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

@interface UNSNotificationRecord : NSObject <BSDescriptionProviding> {
    bool  _allowsAlertDestination;
    bool  _allowsCarPlayDestination;
    bool  _allowsDefaultDestinations;
    bool  _allowsLockScreenDestination;
    bool  _allowsNotificationCenterDestination;
    NSArray * _attachments;
    NSString * _audioCategory;
    NSNumber * _audioVolume;
    NSNumber * _badge;
    NSString * _body;
    NSArray * _bodyLocalizationArguments;
    NSString * _bodyLocalizationKey;
    NSString * _categoryIdentifier;
    NSNumber * _contentAvailable;
    NSDate * _contentDate;
    NSDate * _date;
    NSString * _defaultActionTitle;
    NSString * _defaultActionTitleLocalizationKey;
    NSURL * _defaultActionURL;
    NSDate * _expirationDate;
    bool  _hasCriticalAlertSound;
    bool  _hasDefaultAction;
    NSString * _header;
    NSArray * _headerLocalizationArguments;
    NSString * _headerLocalizationKey;
    NSString * _iconApplicationIdentifier;
    NSString * _iconName;
    NSString * _iconPath;
    NSString * _identifier;
    NSString * _launchImageName;
    NSNumber * _mutableContent;
    NSDate * _requestDate;
    bool  _shouldAuthenticateDefaultAction;
    bool  _shouldBackgroundDefaultAction;
    bool  _shouldBadgeApplicationIcon;
    bool  _shouldHideDate;
    bool  _shouldHideTime;
    bool  _shouldIgnoreDoNotDisturb;
    bool  _shouldIgnoreDowntime;
    bool  _shouldIgnoreRingerSwitch;
    bool  _shouldPlaySound;
    bool  _shouldPresentAlert;
    bool  _shouldPreventNotificationDismissalAfterDefaultAction;
    bool  _shouldSoundRepeat;
    bool  _shouldSuppressScreenLightUp;
    bool  _shouldSuppressSyncDismissalWhenRemoved;
    bool  _shouldUseRequestIdentifierForDismissalSync;
    double  _soundMaximumDuration;
    NSString * _subtitle;
    NSArray * _subtitleLocalizationArguments;
    NSString * _subtitleLocalizationKey;
    NSString * _summaryArgument;
    unsigned long long  _summaryArgumentCount;
    NSString * _threadIdentifier;
    NSString * _title;
    NSArray * _titleLocalizationArguments;
    NSString * _titleLocalizationKey;
    NSString * _toneAlertTopic;
    long long  _toneAlertType;
    NSString * _toneFileName;
    NSString * _toneIdentifier;
    unsigned long long  _toneMediaLibraryItemIdentifier;
    NSSet * _topicIdentifiers;
    NSDate * _triggerDate;
    NSDateComponents * _triggerDateComponents;
    CLRegion * _triggerRegion;
    NSString * _triggerRepeatCalendarIdentifier;
    unsigned long long  _triggerRepeatInterval;
    bool  _triggerRepeats;
    double  _triggerTimeInterval;
    NSTimeZone * _triggerTimeZone;
    NSString * _triggerType;
    NSDictionary * _userInfo;
    NSString * _vibrationIdentifier;
    NSDictionary * _vibrationPattern;
}

@property (nonatomic) bool allowsAlertDestination;
@property (nonatomic) bool allowsCarPlayDestination;
@property (nonatomic) bool allowsDefaultDestinations;
@property (nonatomic) bool allowsLockScreenDestination;
@property (nonatomic) bool allowsNotificationCenterDestination;
@property (nonatomic, copy) NSArray *attachments;
@property (nonatomic, copy) NSString *audioCategory;
@property (nonatomic, copy) NSNumber *audioVolume;
@property (nonatomic, copy) NSNumber *badge;
@property (nonatomic, copy) NSString *body;
@property (nonatomic, copy) NSArray *bodyLocalizationArguments;
@property (nonatomic, copy) NSString *bodyLocalizationKey;
@property (nonatomic, copy) NSString *categoryIdentifier;
@property (nonatomic, copy) NSNumber *contentAvailable;
@property (nonatomic, copy) NSDate *contentDate;
@property (nonatomic, copy) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSString *defaultActionTitle;
@property (nonatomic, copy) NSString *defaultActionTitleLocalizationKey;
@property (nonatomic, copy) NSURL *defaultActionURL;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic, readonly) bool hasAlertContent;
@property (nonatomic, readonly) bool hasBadge;
@property (nonatomic) bool hasCriticalAlertSound;
@property (nonatomic) bool hasDefaultAction;
@property (nonatomic, readonly) bool hasPendingTrigger;
@property (nonatomic, readonly) bool hasSound;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *header;
@property (nonatomic, copy) NSArray *headerLocalizationArguments;
@property (nonatomic, copy) NSString *headerLocalizationKey;
@property (nonatomic, copy) NSString *iconApplicationIdentifier;
@property (nonatomic, copy) NSString *iconName;
@property (nonatomic, copy) NSString *iconPath;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *launchImageName;
@property (nonatomic, copy) NSNumber *mutableContent;
@property (nonatomic, copy) NSDate *requestDate;
@property (nonatomic) bool shouldAuthenticateDefaultAction;
@property (nonatomic) bool shouldBackgroundDefaultAction;
@property (nonatomic) bool shouldBadgeApplicationIcon;
@property (nonatomic) bool shouldHideDate;
@property (nonatomic) bool shouldHideTime;
@property (nonatomic) bool shouldIgnoreDoNotDisturb;
@property (nonatomic) bool shouldIgnoreDowntime;
@property (nonatomic) bool shouldIgnoreRingerSwitch;
@property (nonatomic) bool shouldPlaySound;
@property (nonatomic) bool shouldPresentAlert;
@property (nonatomic) bool shouldPreventNotificationDismissalAfterDefaultAction;
@property (nonatomic) bool shouldSoundRepeat;
@property (nonatomic) bool shouldSuppressScreenLightUp;
@property (nonatomic) bool shouldSuppressSyncDismissalWhenRemoved;
@property (nonatomic) bool shouldUseRequestIdentifierForDismissalSync;
@property (nonatomic) double soundMaximumDuration;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSArray *subtitleLocalizationArguments;
@property (nonatomic, copy) NSString *subtitleLocalizationKey;
@property (nonatomic, copy) NSString *summaryArgument;
@property (nonatomic) unsigned long long summaryArgumentCount;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *threadIdentifier;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSArray *titleLocalizationArguments;
@property (nonatomic, copy) NSString *titleLocalizationKey;
@property (nonatomic, copy) NSString *toneAlertTopic;
@property (nonatomic) long long toneAlertType;
@property (nonatomic, copy) NSString *toneFileName;
@property (nonatomic, copy) NSString *toneIdentifier;
@property (nonatomic) unsigned long long toneMediaLibraryItemIdentifier;
@property (nonatomic, copy) NSSet *topicIdentifiers;
@property (nonatomic, copy) NSDate *triggerDate;
@property (nonatomic, copy) NSDateComponents *triggerDateComponents;
@property (nonatomic, copy) CLRegion *triggerRegion;
@property (nonatomic, copy) NSString *triggerRepeatCalendarIdentifier;
@property (nonatomic) unsigned long long triggerRepeatInterval;
@property (nonatomic) bool triggerRepeats;
@property (nonatomic) double triggerTimeInterval;
@property (nonatomic, copy) NSTimeZone *triggerTimeZone;
@property (nonatomic, copy) NSString *triggerType;
@property (nonatomic, copy) NSDictionary *userInfo;
@property (nonatomic, copy) NSString *vibrationIdentifier;
@property (nonatomic, copy) NSDictionary *vibrationPattern;

- (void).cxx_destruct;
- (bool)allowsAlertDestination;
- (bool)allowsCarPlayDestination;
- (bool)allowsDefaultDestinations;
- (bool)allowsLockScreenDestination;
- (bool)allowsNotificationCenterDestination;
- (id)attachments;
- (id)audioCategory;
- (id)audioVolume;
- (id)badge;
- (id)body;
- (id)bodyLocalizationArguments;
- (id)bodyLocalizationKey;
- (id)categoryIdentifier;
- (id)contentAvailable;
- (id)contentDate;
- (id)date;
- (id)debugDescription;
- (id)defaultActionTitle;
- (id)defaultActionTitleLocalizationKey;
- (id)defaultActionURL;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)dictionaryRepresentation;
- (id)expirationDate;
- (bool)hasAlertContent;
- (bool)hasBadge;
- (bool)hasCriticalAlertSound;
- (bool)hasDefaultAction;
- (bool)hasPendingTrigger;
- (bool)hasSound;
- (unsigned long long)hash;
- (id)header;
- (id)headerLocalizationArguments;
- (id)headerLocalizationKey;
- (id)iconApplicationIdentifier;
- (id)iconName;
- (id)iconPath;
- (id)identifier;
- (id)init;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSimilar:(id)arg1;
- (id)launchImageName;
- (id)mutableContent;
- (id)requestDate;
- (void)setAllowsAlertDestination:(bool)arg1;
- (void)setAllowsCarPlayDestination:(bool)arg1;
- (void)setAllowsDefaultDestinations:(bool)arg1;
- (void)setAllowsLockScreenDestination:(bool)arg1;
- (void)setAllowsNotificationCenterDestination:(bool)arg1;
- (void)setAttachments:(id)arg1;
- (void)setAudioCategory:(id)arg1;
- (void)setAudioVolume:(id)arg1;
- (void)setBadge:(id)arg1;
- (void)setBody:(id)arg1;
- (void)setBodyLocalizationArguments:(id)arg1;
- (void)setBodyLocalizationKey:(id)arg1;
- (void)setCategoryIdentifier:(id)arg1;
- (void)setContentAvailable:(id)arg1;
- (void)setContentDate:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDefaultActionTitle:(id)arg1;
- (void)setDefaultActionTitleLocalizationKey:(id)arg1;
- (void)setDefaultActionURL:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setHasCriticalAlertSound:(bool)arg1;
- (void)setHasDefaultAction:(bool)arg1;
- (void)setHeader:(id)arg1;
- (void)setHeaderLocalizationArguments:(id)arg1;
- (void)setHeaderLocalizationKey:(id)arg1;
- (void)setIconApplicationIdentifier:(id)arg1;
- (void)setIconName:(id)arg1;
- (void)setIconPath:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLaunchImageName:(id)arg1;
- (void)setMutableContent:(id)arg1;
- (void)setRequestDate:(id)arg1;
- (void)setShouldAuthenticateDefaultAction:(bool)arg1;
- (void)setShouldBackgroundDefaultAction:(bool)arg1;
- (void)setShouldBadgeApplicationIcon:(bool)arg1;
- (void)setShouldHideDate:(bool)arg1;
- (void)setShouldHideTime:(bool)arg1;
- (void)setShouldIgnoreDoNotDisturb:(bool)arg1;
- (void)setShouldIgnoreDowntime:(bool)arg1;
- (void)setShouldIgnoreRingerSwitch:(bool)arg1;
- (void)setShouldPlaySound:(bool)arg1;
- (void)setShouldPresentAlert:(bool)arg1;
- (void)setShouldPreventNotificationDismissalAfterDefaultAction:(bool)arg1;
- (void)setShouldSoundRepeat:(bool)arg1;
- (void)setShouldSuppressScreenLightUp:(bool)arg1;
- (void)setShouldSuppressSyncDismissalWhenRemoved:(bool)arg1;
- (void)setShouldUseRequestIdentifierForDismissalSync:(bool)arg1;
- (void)setSoundMaximumDuration:(double)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitleLocalizationArguments:(id)arg1;
- (void)setSubtitleLocalizationKey:(id)arg1;
- (void)setSummaryArgument:(id)arg1;
- (void)setSummaryArgumentCount:(unsigned long long)arg1;
- (void)setThreadIdentifier:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLocalizationArguments:(id)arg1;
- (void)setTitleLocalizationKey:(id)arg1;
- (void)setToneAlertTopic:(id)arg1;
- (void)setToneAlertType:(long long)arg1;
- (void)setToneFileName:(id)arg1;
- (void)setToneIdentifier:(id)arg1;
- (void)setToneMediaLibraryItemIdentifier:(unsigned long long)arg1;
- (void)setTopicIdentifiers:(id)arg1;
- (void)setTriggerDate:(id)arg1;
- (void)setTriggerDateComponents:(id)arg1;
- (void)setTriggerRegion:(id)arg1;
- (void)setTriggerRepeatCalendarIdentifier:(id)arg1;
- (void)setTriggerRepeatInterval:(unsigned long long)arg1;
- (void)setTriggerRepeats:(bool)arg1;
- (void)setTriggerTimeInterval:(double)arg1;
- (void)setTriggerTimeZone:(id)arg1;
- (void)setTriggerType:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setVibrationIdentifier:(id)arg1;
- (void)setVibrationPattern:(id)arg1;
- (bool)shouldAuthenticateDefaultAction;
- (bool)shouldBackgroundDefaultAction;
- (bool)shouldBadgeApplicationIcon;
- (bool)shouldHideDate;
- (bool)shouldHideTime;
- (bool)shouldIgnoreDoNotDisturb;
- (bool)shouldIgnoreDowntime;
- (bool)shouldIgnoreRingerSwitch;
- (bool)shouldPlaySound;
- (bool)shouldPresentAlert;
- (bool)shouldPreventNotificationDismissalAfterDefaultAction;
- (bool)shouldSoundRepeat;
- (bool)shouldSuppressScreenLightUp;
- (bool)shouldSuppressSyncDismissalWhenRemoved;
- (bool)shouldUseRequestIdentifierForDismissalSync;
- (double)soundMaximumDuration;
- (id)subtitle;
- (id)subtitleLocalizationArguments;
- (id)subtitleLocalizationKey;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)summaryArgument;
- (unsigned long long)summaryArgumentCount;
- (id)threadIdentifier;
- (id)title;
- (id)titleLocalizationArguments;
- (id)titleLocalizationKey;
- (id)toneAlertTopic;
- (long long)toneAlertType;
- (id)toneFileName;
- (id)toneIdentifier;
- (unsigned long long)toneMediaLibraryItemIdentifier;
- (id)topicIdentifiers;
- (id)triggerDate;
- (id)triggerDateComponents;
- (id)triggerRegion;
- (id)triggerRepeatCalendarIdentifier;
- (unsigned long long)triggerRepeatInterval;
- (bool)triggerRepeats;
- (double)triggerTimeInterval;
- (id)triggerTimeZone;
- (id)triggerType;
- (id)userInfo;
- (id)vibrationIdentifier;
- (id)vibrationPattern;
- (bool)willNotifyUser;

@end
