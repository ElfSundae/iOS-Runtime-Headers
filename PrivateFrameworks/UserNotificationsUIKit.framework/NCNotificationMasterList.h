/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationMasterList : NSObject <NCNotificationListComponent, NCNotificationListRevealCoordinatorDelegate, NCNotificationListViewDataSource, NCNotificationManagementSuggestionManagerDelegate, NCNotificationStructuredSectionListDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate> {
    bool  _adjustsFontForContentSizeCategory;
    <NCNotificationMasterListDelegate> * _delegate;
    bool  _deviceAuthenticated;
    NCNotificationStructuredSectionList * _historySectionList;
    NCNotificationStructuredSectionList * _incomingSectionList;
    NSString * _logDescription;
    NCNotificationListView * _masterListView;
    bool  _missedSectionActive;
    NCNotificationStructuredSectionList * _missedSectionList;
    bool  _notificationHistoryRevealed;
    NCNotificationListCache * _notificationListCache;
    NCNotificationListStalenessEventTracker * _notificationListStalenessEventTracker;
    NSMutableArray * _notificationSections;
    NCNotificationListRevealCoordinator * _revealCoordinator;
    id /* block */  _scrollCompletionBlock;
    double  _scrollCompletionBlockOffsetThreshold;
    bool  _shouldAllowNotificationHistoryReveal;
    NCNotificationManagementSuggestionManager * _suggestionManager;
}

@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (nonatomic, readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCNotificationMasterListDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDeviceAuthenticated, nonatomic) bool deviceAuthenticated;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NCNotificationStructuredSectionList *historySectionList;
@property (nonatomic, retain) NCNotificationStructuredSectionList *incomingSectionList;
@property (nonatomic, copy) NSString *logDescription;
@property (nonatomic, retain) NCNotificationListView *masterListView;
@property (getter=isMissedSectionActive, nonatomic) bool missedSectionActive;
@property (nonatomic, retain) NCNotificationStructuredSectionList *missedSectionList;
@property (nonatomic, readonly) unsigned long long notificationCount;
@property (getter=isNotificationHistoryRevealed, nonatomic) bool notificationHistoryRevealed;
@property (nonatomic, retain) NCNotificationListCache *notificationListCache;
@property (nonatomic, retain) NCNotificationListStalenessEventTracker *notificationListStalenessEventTracker;
@property (nonatomic, retain) NSMutableArray *notificationSections;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (nonatomic, retain) NCNotificationListRevealCoordinator *revealCoordinator;
@property (nonatomic, copy) id /* block */ scrollCompletionBlock;
@property (nonatomic) double scrollCompletionBlockOffsetThreshold;
@property (nonatomic) bool shouldAllowNotificationHistoryReveal;
@property (nonatomic, retain) NCNotificationManagementSuggestionManager *suggestionManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_insertNotificationRequest:(id)arg1;
- (bool)_isNotificationRequestForHistorySection:(id)arg1;
- (bool)_isNotificationRequestForIncomingSection:(id)arg1;
- (void)_migrateNotificationsFromList:(id)arg1 toList:(id)arg2 passingTest:(id /* block */)arg3 hideToList:(bool)arg4 clearRequests:(bool)arg5;
- (id)_newMissedSectionListForReason:(unsigned long long)arg1;
- (id)_newNotificationSectionListWithTitle:(id)arg1 notificationListViewRevealed:(bool)arg2 logDescription:(id)arg3;
- (void)_regroupAllNotificationGroups;
- (id)_sectionForNotificationRequest:(id)arg1;
- (void)_setupNotificationSectionLists;
- (bool)_shouldDNDDelayDeliveryOfNotificationRequest:(id)arg1;
- (void)_sortNotificationGroupsIfNecessary;
- (void)_updateVisibleRectForContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (bool)adjustForContentSizeCategoryChange;
- (void)adjustForLegibilitySettingsChange:(id)arg1;
- (bool)adjustsFontForContentSizeCategory;
- (void)collapseGroupForNotificationRequest:(id)arg1 withCompletion:(id /* block */)arg2;
- (unsigned long long)count;
- (id)delegate;
- (void)expandGroupForNotificationRequest:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)forwardInvocation:(id)arg1;
- (id)historySectionList;
- (id)incomingSectionList;
- (id)init;
- (void)insertNotificationRequest:(id)arg1;
- (bool)isDeviceAuthenticated;
- (bool)isMissedSectionActive;
- (bool)isNotificationHistoryRevealed;
- (void)listViewControllerPresentedByUserAction;
- (id)logDescription;
- (id)masterListView;
- (void)migrateNotifications;
- (id)missedSectionList;
- (void)modifyNotificationRequest:(id)arg1;
- (unsigned long long)notificationCount;
- (id)notificationListCache;
- (void)notificationListComponentRequestsClearingAllNotificationRequests:(id)arg1;
- (void)notificationListRevealCoordinator:(id)arg1 updatedRevealState:(bool)arg2;
- (bool)notificationListRevealCoordinatorShouldAllowReveal:(id)arg1;
- (id)notificationListStalenessEventTracker;
- (double)notificationListView:(id)arg1 heightForItemAtIndex:(unsigned long long)arg2;
- (id)notificationListView:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2;
- (bool)notificationListViewIsGroup:(id)arg1;
- (unsigned long long)notificationListViewNumberOfItems:(id)arg1;
- (void)notificationManagementSuggestionManager:(id)arg1 requestsPresentingNotificationManagementViewType:(unsigned long long)arg2 forNotificationRequest:(id)arg3 withPresentingView:(id)arg4;
- (id)notificationManagementSuggestionManager:(id)arg1 requestsSectionSettingsForSectionIdentifier:(id)arg2;
- (void)notificationManagementSuggestionManager:(id)arg1 requestsUpdatingContentForNotificationRequest:(id)arg2;
- (id)notificationRequestWithNotificationIdentifier:(id)arg1 sectionIdentifier:(id)arg2;
- (id)notificationSections;
- (id)notificationStructuredSectionList:(id)arg1 requestsAuxiliaryOptionsContentProviderForNotificationRequest:(id)arg2 isLongLook:(bool)arg3;
- (void)notificationStructuredSectionList:(id)arg1 requestsScrollingToContentOffset:(double)arg2 withCompletion:(id /* block */)arg3;
- (bool)notificationStructuredSectionList:(id)arg1 shouldFilterNotificationRequest:(id)arg2;
- (bool)notificationStructuredSectionList:(id)arg1 shouldScrollToTopForGroupList:(id)arg2;
- (void)recycleView:(id)arg1;
- (void)reloadNotificationRequest:(id)arg1;
- (void)removeNotificationRequest:(id)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (id)revealCoordinator;
- (void)revealCoordinatorDidScrollToReveal:(id)arg1;
- (id /* block */)scrollCompletionBlock;
- (double)scrollCompletionBlockOffsetThreshold;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceAuthenticated:(bool)arg1;
- (void)setHistorySectionList:(id)arg1;
- (void)setIncomingSectionList:(id)arg1;
- (void)setLogDescription:(id)arg1;
- (void)setMasterListView:(id)arg1;
- (void)setMissedSectionActive:(bool)arg1;
- (void)setMissedSectionList:(id)arg1;
- (void)setNotificationHistoryRevealed:(bool)arg1;
- (void)setNotificationListCache:(id)arg1;
- (void)setNotificationListStalenessEventTracker:(id)arg1;
- (void)setNotificationSections:(id)arg1;
- (void)setRevealCoordinator:(id)arg1;
- (void)setScrollCompletionBlock:(id /* block */)arg1;
- (void)setScrollCompletionBlockOffsetThreshold:(double)arg1;
- (void)setShouldAllowNotificationHistoryReveal:(bool)arg1;
- (void)setSuggestionManager:(id)arg1;
- (bool)shouldAllowNotificationHistoryReveal;
- (id)subListsForNotificationListRevealCoordinator:(id)arg1;
- (id)suggestionManager;
- (void)toggleFilteringForSectionIdentifier:(id)arg1 shouldFilter:(bool)arg2;
- (void)toggleMissedSectionActive:(bool)arg1 reason:(unsigned long long)arg2;
- (void)updateNotificationSectionSettings:(id)arg1 previousSectionSettings:(id)arg2;

@end
