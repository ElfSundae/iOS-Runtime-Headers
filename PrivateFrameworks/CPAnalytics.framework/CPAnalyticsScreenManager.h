/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
 */

@interface CPAnalyticsScreenManager : NSObject <CPAnalyticsDynamicPropertyProvider> {
    long long  _appVisiblePeriodSignpostID;
    CPAnalytics * _cpAnalyticsInstance;
    NSDate * _currentScreenStartTime;
    NSString * _currentTabIdentifierDescription;
    NSMutableArray * _currentlyOpenViews;
    long long  _foregroundEventCount;
    NSSet * _namesOfViewsToIgnore;
    NSSet * _namesOfViewsToTrack;
    NSMutableArray * _priorViews;
    unsigned long long  _priorViewsMaxIndex;
    long long  _screensViewCount;
}

@property (nonatomic) long long appVisiblePeriodSignpostID;
@property (nonatomic) CPAnalytics *cpAnalyticsInstance;
@property (nonatomic, retain) NSDate *currentScreenStartTime;
@property (nonatomic, retain) NSString *currentTabIdentifierDescription;
@property (nonatomic, retain) NSMutableArray *currentlyOpenViews;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long foregroundEventCount;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSSet *namesOfViewsToIgnore;
@property (nonatomic, retain) NSSet *namesOfViewsToTrack;
@property (nonatomic, retain) NSMutableArray *priorViews;
@property (nonatomic, readonly) unsigned long long priorViewsMaxIndex;
@property (nonatomic) long long screensViewCount;
@property (readonly) Class superclass;

+ (id)_combinedViewName:(id)arg1 withID:(id)arg2;
+ (bool)_isValidCurrentTabIdentifierEvent:(id)arg1;
+ (bool)_isValidScreenViewEvent:(id)arg1;
+ (id)_viewNameFromCombined:(id)arg1;

- (void).cxx_destruct;
- (void)_handleUnknownViewIfNeeded:(id)arg1;
- (void)_initializeScreenViewTrackers:(id)arg1;
- (void)_resetSessionWithTime:(id)arg1;
- (id)_screenViewNameAt:(unsigned long long)arg1;
- (void)_sendCPAnalyticsScreenViewEventWithEndTime:(id)arg1;
- (void)_trackView:(id)arg1 withEventName:(id)arg2 viewID:(id)arg3 eventTime:(id)arg4;
- (void)_updateAppLifeCycle:(id)arg1;
- (void)_updateCurrentScreenToViewName:(id)arg1 withEventTime:(id)arg2;
- (void)_updateScreenTracking:(id)arg1;
- (void)_updateTabTracking:(id)arg1;
- (long long)appVisiblePeriodSignpostID;
- (id)cpAnalyticsInstance;
- (id)currentScreenStartTime;
- (id)currentScreenViewName;
- (id)currentTabIdentifierDescription;
- (id)currentlyOpenViews;
- (long long)foregroundEventCount;
- (struct NSObject { Class x1; }*)getDynamicProperty:(id)arg1 forEventName:(id)arg2 withPayload:(id)arg3;
- (id)initWithConfig:(id)arg1 cpAnalyticsInstance:(id)arg2;
- (id)lastScreenName;
- (id)namesOfViewsToIgnore;
- (id)namesOfViewsToTrack;
- (id)priorViews;
- (unsigned long long)priorViewsMaxIndex;
- (void)processEvent:(id)arg1;
- (long long)screensViewCount;
- (void)setAppVisiblePeriodSignpostID:(long long)arg1;
- (void)setCpAnalyticsInstance:(id)arg1;
- (void)setCurrentScreenStartTime:(id)arg1;
- (void)setCurrentTabIdentifierDescription:(id)arg1;
- (void)setCurrentlyOpenViews:(id)arg1;
- (void)setForegroundEventCount:(long long)arg1;
- (void)setNamesOfViewsToIgnore:(id)arg1;
- (void)setNamesOfViewsToTrack:(id)arg1;
- (void)setPriorViews:(id)arg1;
- (void)setScreensViewCount:(long long)arg1;

@end
