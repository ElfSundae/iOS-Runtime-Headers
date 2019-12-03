/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalLogMaster : NSObject {
    bool  _autoFlush;
    NSObject<OS_dispatch_group> * _dispatchGroup;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _hasValidNotificationRegistrationToken;
    int  _notificationRegistrationToken;
    CalLogNode * _oslogNode;
    CalLogNode * _rootConfigurationNode;
    CalLogNode * _standardOutNode;
    NSArray * _topLevelNodes;
    CalLogNode * _userNotificationNode;
}

@property (nonatomic) bool autoFlush;
@property (nonatomic) bool hasValidNotificationRegistrationToken;
@property (nonatomic) int notificationRegistrationToken;
@property (nonatomic, retain) CalLogNode *oslogNode;
@property (nonatomic, retain) CalLogNode *rootConfigurationNode;
@property (nonatomic, retain) CalLogNode *standardOutNode;
@property (nonatomic, retain) NSArray *topLevelNodes;
@property (nonatomic, retain) CalLogNode *userNotificationNode;

+ (id)sharedLogMaster;

- (void).cxx_destruct;
- (bool)autoFlush;
- (void)configureOSLogNode;
- (void)configureRootConfigurationNode;
- (void)configureStandardOutNode;
- (void)configureUserNotificationNode;
- (id)copyLegacyLoggingDefaultsConvertedToNamespaces;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (int)findMinimumLevel;
- (id)findWhiteList;
- (bool)flush;
- (bool)hasValidNotificationRegistrationToken;
- (id)init;
- (void)loadPreferredConfiguration;
- (int)notificationRegistrationToken;
- (id)oslogNode;
- (void)processEnvelope:(id)arg1;
- (void)registerForConfigUpdateNotifications;
- (void)reloadTopLevelNodes;
- (id)rootConfigurationNode;
- (void)setAutoFlush:(bool)arg1;
- (void)setHasValidNotificationRegistrationToken:(bool)arg1;
- (void)setNotificationRegistrationToken:(int)arg1;
- (void)setOslogNode:(id)arg1;
- (void)setRootConfigurationNode:(id)arg1;
- (void)setStandardOutNode:(id)arg1;
- (void)setTopLevelNodes:(id)arg1;
- (void)setUserNotificationNode:(id)arg1;
- (bool)shouldProcessNamespace:(id)arg1;
- (id)standardOutNode;
- (id)topLevelNodes;
- (id)userNotificationNode;

@end
