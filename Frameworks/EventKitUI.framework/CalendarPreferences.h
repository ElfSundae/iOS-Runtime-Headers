/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface CalendarPreferences : NSObject {
    BOOL _drawDebugViewColors;
    CalPreferences *_preferences;
}

@property (nonatomic, retain) NSArray *calendarUUIDsExcludedFromNotifications;
@property (nonatomic, retain) NSNumber *dayViewHourScale;
@property (nonatomic) unsigned int debugOccurrenceViewIconOverload;
@property (nonatomic, retain) NSArray *deselectedCalendarSyncHashes;
@property (nonatomic) BOOL disableContinuity;
@property (nonatomic) BOOL disableTodayPushes;
@property (nonatomic) BOOL drawDebugViewColors;
@property (nonatomic) BOOL hideInlineDayViewInEventDetails;
@property (nonatomic) BOOL immediateAlarmCreation;
@property (nonatomic) BOOL largeListViewDisclosingEventDetails;
@property (nonatomic, retain) NSNumber *lastConfirmedSplashScreenVersionViewed;
@property (nonatomic, retain) NSNumber *lastSuspendTime;
@property (nonatomic, retain) NSNumber *lastViewMode;
@property (nonatomic, retain) NSNumber *lastViewedDate;
@property (nonatomic, retain) NSNumber *locationSearchResultLimit;
@property (nonatomic, retain) NSString *overlayCalendarID;
@property (nonatomic) unsigned int promptForCommentWhenDeclining;
@property (nonatomic) BOOL requestSyncOnApplicationLaunch;
@property (nonatomic, retain) NSString *searchString;
@property (getter=isShortResumeToTodayTimeout, nonatomic) BOOL shortResumeToTodayTimeout;
@property (nonatomic) BOOL showDebugGridOverlay;
@property (nonatomic) BOOL showDetailedListView;
@property (nonatomic) BOOL showEventsInPhoneMonthView;
@property (nonatomic) BOOL showExperimentalUI;
@property (nonatomic) BOOL showListView;
@property (nonatomic) BOOL showMonthDividedListView;
@property (nonatomic) BOOL showWeekNumbers;
@property (nonatomic) BOOL showWindowDebugButton;
@property (nonatomic, retain) NSDate *simulatedCurrentDate;
@property (nonatomic) BOOL swipeToDeleteEnabled;
@property (nonatomic) BOOL viewedTimeZoneAutomatic;
@property (nonatomic, retain) NSNumber *weekStart;
@property (nonatomic, retain) NSNumber *weekViewHourScale;

+ (id)sharedPreferences;

- (void).cxx_destruct;
- (id)calendarUUIDsExcludedFromNotifications;
- (id)dayViewHourScale;
- (unsigned int)debugOccurrenceViewIconOverload;
- (id)deselectedCalendarIDsFromCalendars:(id)arg1;
- (id)deselectedCalendarSyncHashes;
- (BOOL)disableContinuity;
- (BOOL)disableTodayPushes;
- (BOOL)drawDebugViewColors;
- (BOOL)hideInlineDayViewInEventDetails;
- (BOOL)immediateAlarmCreation;
- (id)init;
- (BOOL)isShortResumeToTodayTimeout;
- (BOOL)largeListViewDisclosingEventDetails;
- (id)lastConfirmedSplashScreenVersionViewed;
- (id)lastSuspendTime;
- (id)lastViewMode;
- (id)lastViewedDate;
- (id)locationSearchResultLimit;
- (id)overlayCalendarID;
- (unsigned int)promptForCommentWhenDeclining;
- (BOOL)requestSyncOnApplicationLaunch;
- (id)searchString;
- (void)setCalendarUUIDsExcludedFromNotifications:(id)arg1;
- (void)setDayViewHourScale:(id)arg1;
- (void)setDebugOccurrenceViewIconOverload:(unsigned int)arg1;
- (void)setDeselectedCalendarIDs:(id)arg1;
- (void)setDeselectedCalendarSyncHashes:(id)arg1;
- (void)setDisableContinuity:(BOOL)arg1;
- (void)setDisableTodayPushes:(BOOL)arg1;
- (void)setDrawDebugViewColors:(BOOL)arg1;
- (void)setHideInlineDayViewInEventDetails:(BOOL)arg1;
- (void)setImmediateAlarmCreation:(BOOL)arg1;
- (void)setLargeListViewDisclosingEventDetails:(BOOL)arg1;
- (void)setLastConfirmedSplashScreenVersionViewed:(id)arg1;
- (void)setLastSuspendTime:(id)arg1;
- (void)setLastViewMode:(id)arg1;
- (void)setLastViewedDate:(id)arg1;
- (void)setLocationSearchResultLimit:(id)arg1;
- (void)setOverlayCalendarID:(id)arg1;
- (void)setPromptForCommentWhenDeclining:(unsigned int)arg1;
- (void)setRequestSyncOnApplicationLaunch:(BOOL)arg1;
- (void)setSearchString:(id)arg1;
- (void)setShortResumeToTodayTimeout:(BOOL)arg1;
- (void)setShowDebugGridOverlay:(BOOL)arg1;
- (void)setShowDetailedListView:(BOOL)arg1;
- (void)setShowEventsInPhoneMonthView:(BOOL)arg1;
- (void)setShowExperimentalUI:(BOOL)arg1;
- (void)setShowListView:(BOOL)arg1;
- (void)setShowMonthDividedListView:(BOOL)arg1;
- (void)setShowWeekNumbers:(BOOL)arg1;
- (void)setShowWindowDebugButton:(BOOL)arg1;
- (void)setSimulatedCurrentDate:(id)arg1;
- (void)setSwipeToDeleteEnabled:(BOOL)arg1;
- (void)setViewedTimeZoneAutomatic:(BOOL)arg1;
- (void)setWeekStart:(id)arg1;
- (void)setWeekViewHourScale:(id)arg1;
- (BOOL)showDebugGridOverlay;
- (BOOL)showDetailedListView;
- (BOOL)showEventsInPhoneMonthView;
- (BOOL)showExperimentalUI;
- (BOOL)showListView;
- (BOOL)showMonthDividedListView;
- (BOOL)showWeekNumbers;
- (BOOL)showWindowDebugButton;
- (id)simulatedCurrentDate;
- (BOOL)swipeToDeleteEnabled;
- (BOOL)viewedTimeZoneAutomatic;
- (id)weekStart;
- (id)weekViewHourScale;

@end
