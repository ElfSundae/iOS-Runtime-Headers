/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
 */

@interface NCSnippetDataSourceManager : NSObject <BBObserverDelegate, _NCSnippetDataSourceManager> {
    NSMutableDictionary *_bulletinIDsToTodayData;
    NSMutableDictionary *_bulletinIDsToTomorrowData;
    NSObject<OS_dispatch_queue> *_bulletinRequestQueue;
    NCSnippetDataSource *_coreRoutineDataSource;
    BOOL _isBulletinServerConnected;
    BBObserver *_observer;
    <_NCParentDataSourceManager> *_parentDataSourceManager;
    NSMutableDictionary *_sectionIDsToDatumIDs;
    NSMutableDictionary *_sectionIDsToSectionInfos;
    id /* block */ _startCompletion;
    NCSnippetDataSource *_todayDataSource;
    NCSnippetDataSource *_tomorrowDataSource;
}

@property (nonatomic, readonly) NSArray *dataSources;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) <_NCParentDataSourceManager> *parentDataSourceManager;
@property (readonly) Class superclass;

- (void)_addBulletin:(id)arg1 forFeed:(unsigned int)arg2;
- (void)_addSection:(id)arg1 completion:(id /* block */)arg2;
- (void)_removeDatumWithIdentifier:(id)arg1;
- (void)_removeSectionWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)_replaceDatumWithBulletin:(id)arg1 forFeed:(unsigned int)arg2;
- (id)_sectionInfoWithIdentifier:(id)arg1;
- (void)_start:(id /* block */)arg1;
- (void)_stop:(id /* block */)arg1;
- (void)_updateSection:(id)arg1 completion:(id /* block */)arg2;
- (id)dataSources;
- (void)dealloc;
- (id)init;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned int)arg3;
- (void)observer:(id)arg1 modifyBulletin:(id)arg2 forFeed:(unsigned int)arg3;
- (void)observer:(id)arg1 noteInvalidatedBulletinIDs:(id)arg2;
- (void)observer:(id)arg1 noteServerConnectionStateChanged:(BOOL)arg2;
- (void)observer:(id)arg1 removeBulletin:(id)arg2;
- (id)parentDataSourceManager;
- (void)setParentDataSourceManager:(id)arg1;

@end
