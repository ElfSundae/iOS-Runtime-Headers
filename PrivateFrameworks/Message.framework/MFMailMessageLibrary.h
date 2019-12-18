/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMailMessageLibrary : MFMessageLibrary <EDMessageChangeHookResponder, EDProtectedDataReconciliationHookResponder, EFContentProtectionObserver, EFSignpostable> {
    NSString * _activeAccountClause;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _addedMessagesMapLock;
    bool  _allowedToAccessProtectedData;
    MFFileCompressionQueue * _compressionQueue;
    NSObject<OS_dispatch_queue> * _conversationCalculationQueue;
    NSMutableDictionary * _currentAddedMessagesMap;
    MFPersistenceDatabase_iOS * _database;
    <EFSQLExpressable> * _enabledAccountMailboxesExpression;
    <EFScheduler> * _fileRemovalAfterCompactionScheduler;
    NSObject<OS_dispatch_queue> * _keyBagQueue;
    _MFMailMessageLibraryStatistics * _lastStats;
    MFWeakObjectCache * _libraryMessageCache;
    NSMutableDictionary * _mailboxCache;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _mailboxLock;
    NSCache * _mailboxURLsToMailboxIDs;
    MFMessageChangeManager_iOS * _messageChangeManager;
    NSMutableSet * _messagesToThreadAtUnlock;
    NSString * _nonLocalAccountClause;
    NSCache * _optionsToQueries;
    EDPersistence * _persistence;
    int  _protectedDataAvailability;
    EDMessageQueryParser * _queryParser;
    NSObject<OS_dispatch_queue> * _queue;
    <EFScheduler> * _reconciliationCleanupScheduler;
    MFLibrarySearchableIndex * _searchableIndex;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _searchableIndexLock;
    EDSearchableIndexScheduler * _searchableIndexScheduler;
    NSObject<OS_dispatch_queue> * _statsQueue;
    _Atomic bool  _suspendedUnderLock;
}

@property (nonatomic, readonly) bool allowedToAccessProtectedData;
@property (nonatomic, retain) NSMutableDictionary *currentAddedMessagesMap;
@property (readonly) MFPersistenceDatabase_iOS *database;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <EFScheduler> *fileRemovalAfterCompactionScheduler;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) EDPersistenceHookRegistry *hookRegistry;
@property (readonly) MFMessageChangeManager_iOS *messageChangeManager;
@property (nonatomic, readonly) unsigned long long pendingIndexItemsCount;
@property (readonly) EDPersistence *persistence;
@property (nonatomic, readonly) unsigned long long protectedDataAvailability;
@property (nonatomic, retain) EDMessageQueryParser *queryParser;
@property (nonatomic, retain) <EFScheduler> *reconciliationCleanupScheduler;
@property (nonatomic, retain) EDSearchableIndexScheduler *searchableIndexScheduler;
@property (readonly) unsigned long long signpostID;
@property (readonly) Class superclass;

+ (void)_renameLibraryAtPath:(id)arg1;
+ (bool)canUsePersistence;
+ (id)defaultInstance;
+ (id)defaultPath;
+ (id)log;
+ (id)propertyMapper;
+ (void)removeLibraryOnNextLaunch;
+ (void)setDefaultInstance:(id)arg1;
+ (id)signpostLog;

- (void).cxx_destruct;
- (id)UIDsToDeleteInMailbox:(id)arg1;
- (id)_activeAccountsClause;
- (bool)_addAddressesFromRecipientsForMessages:(id)arg1 toSet:(id)arg2 connection:(id)arg3;
- (void)_addMessageToThreadAtUnlock:(long long)arg1;
- (bool)_addRecipients:(id)arg1 toMessageWithDatabaseID:(long long)arg2 cache:(id)arg3 connection:(id)arg4;
- (id)_addThreadingInfoWithContext:(id)arg1 usingDatabaseConnection:(id)arg2;
- (unsigned int)_attachmentCountForAggregatedMailboxes:(id)arg1;
- (bool)_canAccessProtectedData;
- (bool)_canSelectMessagesWithOptions:(unsigned int)arg1 connection:(id)arg2;
- (void)_cancelPendingJournalReconciliation;
- (void)_collectStatistics_nts;
- (unsigned int)_computeUnreadCountForMailboxes:(id)arg1;
- (id)_copyReferenceHashesWithoutMessagesForMessageWithConversation:(id)arg1;
- (bool)_deleteMessages:(id)arg1 andCleanUpAddresses:(id)arg2 subjects:(id)arg3 summaries:(id)arg4 connection:(id)arg5;
- (bool)_deleteMessagesWithWhereClause:(id)arg1 deletedMessages:(id)arg2 connection:(id)arg3;
- (bool)_deleteRows:(id)arg1 fromTable:(id)arg2 connection:(id)arg3;
- (id)_equalToMailboxIDsFromCriterion:(id)arg1;
- (id)_existingValuesForColumn:(id)arg1 table:(id)arg2 fromValues:(id)arg3 connection:(id)arg4;
- (long long)_findOrCreateDatabaseIDForAddress:(id)arg1 comment:(id)arg2 cache:(id)arg3 connection:(id)arg4;
- (long long)_findOrCreateDatabaseIDForSubject:(id)arg1 cache:(id)arg2 connection:(id)arg3;
- (long long)_findOrCreateDatabaseIDForSummary:(id)arg1 cache:(id)arg2 connection:(id)arg3;
- (long long)_findOrCreateDatabaseIDForValue:(id)arg1 inTable:(id)arg2 column:(id)arg3 cache:(id)arg4 connection:(id)arg5;
- (id)_firstDateForQuery:(id)arg1 inMailbox:(id)arg2;
- (unsigned int)_flaggedCountForAggregatedMailboxes:(id)arg1;
- (id)_getReferencesForHashesWithOwners:(id)arg1;
- (unsigned int)_includesMeCountForAggregatedMailboxes:(id)arg1;
- (id)_indexSetOfMessagesDeleted;
- (bool)_insertThreadReferences:(id)arg1 toMessageWithLibraryID:(long long)arg2 usingDatabaseConnection:(id)arg3;
- (long long)_int64ForQuery:(id)arg1 connection:(id)arg2 textArgument:(id)arg3;
- (int)_integerForQuery:(id)arg1 withTextArgument:(id)arg2;
- (void)_iterateStatement:(id)arg1 connection:(id)arg2 withProgressMonitor:(id)arg3 andRowHandler:(int (*)arg4 context:(const struct { id x1; id x2; id x3; unsigned int x4; float x5; unsigned long long x6; double x7; unsigned int x8; unsigned int x9; struct sqlite3 {} *x10; bool x11; id x12; bool x13; }*)arg5;
- (id)_keyForOptions:(unsigned int)arg1 protectedDataAvailable:(bool)arg2 mailboxAvailable:(bool)arg3 mailboxCached:(bool)arg4;
- (long long)_libraryIDForOldestKnownMessageInMailbox:(id)arg1;
- (id)_libraryMessageCache;
- (id)_libraryMessageWithLibraryID:(long long)arg1 wasCached:(bool*)arg2;
- (void)_logStatistics;
- (id)_mailboxesClauseForAccounts:(id)arg1;
- (long long)_maxRowIDInSet:(id)arg1;
- (id)_messageForRow:(id)arg1 options:(unsigned int)arg2 timestamp:(unsigned long long)arg3 connection:(id)arg4 isProtectedDataAvailable:(bool)arg5;
- (id)_messagesForMailbox:(id)arg1 olderThanNumberOfDays:(int)arg2 limit:(unsigned long long)arg3;
- (id)_nonLocalAccountsClause;
- (void)_notifyDidCompact:(bool)arg1 messages:(id)arg2 mailboxes:(id)arg3;
- (struct sqlite3_stmt { }*)_prepareBatchStatement:(id)arg1 pattern:(id)arg2 libraryIDs:(long long*)arg3 batchSize:(unsigned long long)arg4;
- (struct sqlite3_stmt { }*)_prepareBatchStatement:(id)arg1 pattern:(id)arg2 objects:(id*)arg3 count:(unsigned long long)arg4;
- (id)_queryForMailboxesIDsFromMailboxes:(id)arg1;
- (id)_recipientsForMessageWithDatabaseID:(long long)arg1 connection:(id)arg2;
- (id)_recipientsForMessagesWithDatabaseIDs:(id)arg1 includeTo:(bool)arg2 includeCC:(bool)arg3 includeBCC:(bool)arg4;
- (void)_removeSearchableItemsWithLibraryIDs:(id)arg1;
- (void)_scheduleIncrementalVacuum;
- (void)_scheduleJournalReconciliation;
- (void)_schedulePeriodicStatisticsLogging;
- (id)_selectClauseForOptions:(unsigned int)arg1 protectedDataAvailable:(bool)arg2;
- (id)_selectExpressionForMessageWithAvailableTables:(unsigned int)arg1;
- (void)_sendMessagesForStatement:(id)arg1 connection:(id)arg2 to:(id)arg3 options:(unsigned int)arg4 timestamp:(unsigned long long)arg5;
- (bool)_setMessageData:(id)arg1 libraryID:(long long)arg2 part:(id)arg3 partial:(bool)arg4 complete:(bool)arg5 connection:(id)arg6;
- (void)_setProtectedDataAvailabilityState:(unsigned long long)arg1;
- (bool)_setSummary:(id)arg1 forMessageWithRowID:(long long)arg2 connection:(id)arg3;
- (void)_setSuspendedUnderLock:(bool)arg1;
- (bool)_shouldLogDatabaseStats;
- (id)_stringsForIndexSet:(id)arg1;
- (bool)_writeEmlxFile:(id)arg1 withBodyData:(id)arg2 protectionClass:(int)arg3;
- (id)accountForMessage:(id)arg1;
- (id)addMessages:(id)arg1 withMailbox:(id)arg2 newMessagesByOldMessage:(id)arg3 remoteIDs:(id)arg4 setFlags:(unsigned long long)arg5 addPOPUIDs:(bool)arg6 dataSectionsByMessage:(id)arg7 generationWindow:(id)arg8;
- (long long)addReferenceForContext:(id)arg1 usingDatabaseConnection:(id)arg2 generationWindow:(id)arg3 mergeHandler:(id /* block */)arg4;
- (id)allMailboxURLStrings;
- (unsigned int)allNonDeleteCountForMailbox:(id)arg1 includeServerSearchResults:(bool)arg2 includeThreadSearchResults:(bool)arg3;
- (id)allUIDsInMailbox:(id)arg1;
- (bool)allowedToAccessProtectedData;
- (bool)areMessageContentsLocallyAvailable:(id)arg1 fullContentsAvailble:(bool*)arg2;
- (unsigned int)attachmentCountForMailbox:(id)arg1;
- (unsigned int)attachmentCountForMailboxes:(id)arg1;
- (id)attachmentsDirectoryURLForMessage:(id)arg1;
- (id)attachmentsDirectoryURLForMessage:(id)arg1 inMailboxFileURL:(id)arg2;
- (id)bodyDataAtPath:(id)arg1 headerData:(id*)arg2;
- (id)bodyDataForMessage:(id)arg1;
- (id)bodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 isComplete:(bool*)arg3;
- (bool)canProvideMinimumRemoteID;
- (bool)checkDatabaseConsistency;
- (bool)cleanupProtectedTables;
- (void)clearServerSearchFlagsForMessagesWithLibraryIDs:(id)arg1;
- (void)closeDatabaseConnections;
- (void)compactMailbox:(id)arg1;
- (void)compactMessages:(id)arg1 permanently:(bool)arg2;
- (void)contentProtectionStateChanged:(int)arg1 previousState:(int)arg2;
- (id)conversationIDsOfMessagesInSameThreadAsMessageWithLibraryID:(long long)arg1 messageIDHash:(long long)arg2;
- (long long)conversationIdForMessageIds:(id)arg1;
- (id)copyMessageInfosForConversationsContainingMessagesMatchingCriterion:(id)arg1 forMailbox:(id)arg2;
- (id)copyMessageInfosForMailbox:(id)arg1;
- (id)copyMessageInfosMatchingCriterion:(id)arg1;
- (id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned int)arg2 inRemoteMailbox:(id)arg3;
- (long long)countDistinctMessagesMatchingCriterion:(id)arg1;
- (unsigned long long)countMessagesMatchingCriterion:(id)arg1;
- (long long)countOfMessagesMissingFromThreadContainingMessage:(id)arg1;
- (unsigned int)countOfRelatedMessagesMatchingCriterion:(id)arg1 forConversationsContainingMessagesMatchingCriterion:(id)arg2 forMailboxCriterion:(id)arg3;
- (long long)createLibraryIDForAccount:(id)arg1;
- (id)currentAddedMessagesMap;
- (id)dataConsumerForMessage:(id)arg1;
- (id)dataConsumerForMessage:(id)arg1 isPartial:(bool)arg2;
- (id)dataConsumerForMessage:(id)arg1 part:(id)arg2;
- (id)dataConsumerForMessage:(id)arg1 part:(id)arg2 incomplete:(bool)arg3;
- (id)dataForMimePart:(id)arg1 isComplete:(bool*)arg2;
- (id)dataPathForMessage:(id)arg1;
- (id)dataPathForMessage:(id)arg1 part:(id)arg2;
- (id)dataPathForMessage:(id)arg1 type:(int)arg2;
- (id)database;
- (id)dateOfOldestNonIndexedNonSearchResultMessageInMailbox:(id)arg1;
- (id)dateOfOldestNonSearchResultMessageInMailbox:(id)arg1;
- (void)dealloc;
- (void)deleteAccount:(id)arg1;
- (long long)deleteAttachmentsForMessage:(id)arg1 inMailboxFileURL:(id)arg2;
- (void)deleteDataForMessage:(id)arg1;
- (void)deleteMailboxes:(id)arg1 account:(id)arg2;
- (void)deletePOPUID:(id)arg1 inMailbox:(id)arg2;
- (unsigned int)deletedCountForMailbox:(id)arg1;
- (void)didFinishPersistenceDidAddMessages:(id)arg1;
- (id)enabledAccountMailboxesExpression;
- (id)fileAttributesForMessage:(id)arg1;
- (id)fileRemovalAfterCompactionScheduler;
- (id)filterContiguousMessages:(id)arg1 forCriterion:(id)arg2 options:(unsigned int)arg3;
- (id)firstMessageMatchingCriterion:(id)arg1;
- (unsigned int)flaggedCountForMailbox:(id)arg1;
- (unsigned long long)flagsForConversationId:(long long)arg1;
- (id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2;
- (id)getDetailsForAllMessagesFromMailbox:(id)arg1;
- (id)getDetailsForMessages:(unsigned long long)arg1 absoluteBottom:(unsigned long long)arg2 topOfDesiredRange:(unsigned long long)arg3 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg4 fromMailbox:(id)arg5;
- (id)getDetailsForMessagesWithRemoteIDInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 fromMailbox:(id)arg2;
- (id)groupedMessagesCountByMailboxMatchingQuery:(unsigned long long)arg1 variable:(id)arg2;
- (id)groupedMessagesCountForCriterion:(id)arg1 groupBy:(unsigned long long)arg2;
- (void)handleFailedMigration;
- (bool)hasCompleteDataForMimePart:(id)arg1;
- (id)headerDataAtPath:(id)arg1;
- (id)headerDataForMessage:(id)arg1;
- (id)hiddenPOPUIDsInMailbox:(id)arg1;
- (id)hookRegistry;
- (unsigned int)includesMeCountForMailbox:(id)arg1;
- (void)increaseProtectionOnFileForMessage:(id)arg1;
- (id)indexableMessagesWhere:(id)arg1 sortedBy:(id)arg2 limit:(long long)arg3 options:(unsigned int)arg4;
- (unsigned long long)indexedCountForMailbox:(id)arg1 limit:(unsigned long long)arg2;
- (id)initWithPath:(id)arg1;
- (id)initWithPath:(id)arg1 inMemoryIdentifier:(id)arg2 userAgent:(id)arg3;
- (void)invalidateAccount:(id)arg1;
- (void)invalidateAndWait;
- (bool)isProtectedDataAvailable:(id)arg1;
- (void)iterateMessagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2 handler:(id /* block */)arg3;
- (void)iterateMessagesMatchingCriterion:(id)arg1 withResultHandler:(id)arg2 options:(unsigned int)arg3 withMonitor:(id)arg4;
- (void)iterateMessagesMatchingQuery:(id)arg1 withResultHandler:(id)arg2 options:(unsigned int)arg3 withMonitor:(id)arg4;
- (void)iterateStatement:(struct sqlite3_stmt { }*)arg1 connection:(id)arg2 withProgressMonitor:(id)arg3 andRowHandler:(int (*)arg4 context:(void*)arg5;
- (void)journalReconciliationFailed;
- (void)journalWasReconciled;
- (long long)libraryIDForAccount:(id)arg1;
- (id)loadData:(id)arg1 forMessage:(id)arg2 usingBlock:(id /* block */)arg3;
- (id)loadMeetingDataForMessage:(id)arg1;
- (id)loadMeetingExternalIDForMessage:(id)arg1;
- (id)loadMeetingMetadataForMessage:(id)arg1;
- (long long)loadMoreMessagesForThreadContainingMessage:(id)arg1 hasNoMoreMessages:(bool*)arg2;
- (long long)mailboxIDForURLString:(id)arg1;
- (long long)mailboxIDForURLString:(id)arg1 createIfNecessary:(bool)arg2;
- (id)mailboxURLForMessage:(id)arg1;
- (id)mailboxURLsForIDs:(id)arg1;
- (id)mailboxUidForMessage:(id)arg1;
- (unsigned int)maximumRemoteIDForMailbox:(id)arg1;
- (id)messageChangeManager;
- (bool)messageDataExistsInDatabaseForMessageLibraryID:(long long)arg1 part:(id)arg2 length:(unsigned long long*)arg3;
- (id)messageIdsForConversationId:(long long)arg1 limit:(unsigned long long)arg2;
- (id)messageWithLibraryID:(long long)arg1 options:(unsigned int)arg2 inMailbox:(id)arg3 temporarilyUnavailable:(bool*)arg4;
- (id)messageWithMessageID:(id)arg1 inMailbox:(id)arg2;
- (id)messageWithMessageID:(id)arg1 options:(unsigned int)arg2 inMailbox:(id)arg3;
- (id)messageWithRemoteID:(id)arg1 inRemoteMailbox:(id)arg2;
- (id)messagesForMailbox:(id)arg1 limit:(unsigned long long)arg2;
- (id)messagesForMailbox:(id)arg1 olderThanNumberOfDays:(int)arg2;
- (id)messagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2;
- (id)messagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (id)messagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 success:(bool*)arg4;
- (id)messagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2 success:(bool*)arg3;
- (id)messagesWithMessageIDHeader:(id)arg1;
- (id)messagesWithSummariesForMailbox:(id)arg1 fromRowID:(long long)arg2 limit:(unsigned int)arg3;
- (id)messagesWithSummariesForMailbox:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)messagesWithoutSummariesForMailbox:(id)arg1;
- (id)messagesWithoutSummariesForMailbox:(id)arg1 fromRowID:(long long)arg2 limit:(unsigned int)arg3;
- (bool)migrate;
- (unsigned int)minimumRemoteIDForMailbox:(id)arg1;
- (id)missingReferencesForConversationContainingMessage:(id)arg1;
- (unsigned long long)mostRecentStatusCountForMailbox:(id)arg1;
- (unsigned int)nonDeletedCountForAggregatedMailboxes:(id)arg1;
- (unsigned int)nonDeletedCountForAggregatedMailboxes:(id)arg1 includeServerSearchResults:(bool)arg2 includeThreadSearchResults:(bool)arg3;
- (unsigned int)nonDeletedCountForMailbox:(id)arg1;
- (unsigned int)nonDeletedCountForMailbox:(id)arg1 includeServerSearchResults:(bool)arg2 includeThreadSearchResults:(bool)arg3;
- (void)notifyConversation:(long long)arg1 hasMergedIntoConversation:(long long)arg2;
- (void)notifyNewDataAvailableForMessages:(id)arg1;
- (long long)oldestKnownConversationInMailbox:(id)arg1;
- (id)oldestKnownMessageInMailbox:(id)arg1;
- (id)oldestMessageInMailbox:(id)arg1;
- (id)orderedBatchOfMessagesEndingAtRowId:(long long)arg1 limit:(unsigned int)arg2 success:(bool*)arg3;
- (unsigned long long)pendingIndexItemsCount;
- (void)performIncrementalVacuumForSchema:(id)arg1;
- (id)persistence;
- (void)persistenceDidAddMessages:(id)arg1 generationWindow:(id)arg2;
- (void)persistenceDidReconcileProtectedData;
- (unsigned long long)protectedDataAvailability;
- (void)pruneConversationTables:(double)arg1;
- (id)queryForCriterion:(id)arg1 connection:(id)arg2 options:(unsigned int)arg3;
- (id)queryForCriterion:(id)arg1 connection:(id)arg2 options:(unsigned int)arg3 baseTable:(unsigned int)arg4;
- (id)queryForCriterion:(id)arg1 connection:(id)arg2 options:(unsigned int)arg3 baseTable:(unsigned int)arg4 isSubquery:(bool)arg5;
- (id)queryForCriterion:(id)arg1 connection:(id)arg2 options:(unsigned int)arg3 baseTable:(unsigned int)arg4 isSubquery:(bool)arg5 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6;
- (id)queryForCriterion:(id)arg1 connection:(id)arg2 options:(unsigned int)arg3 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (id)queryParser;
- (void)rebuildActiveAccountMailboxesExpression:(id)arg1;
- (void)rebuildActiveAccountsClauseWithActiveAccounts:(id)arg1 inactiveAccounts:(id)arg2;
- (void)rebuildActiveAccountsClausesAndExpressionsWithAccounts:(id)arg1;
- (void)recomputeUnreadCountForMailboxWithURL:(id)arg1;
- (id)reconciliationCleanupScheduler;
- (id)referencesFromHeaders:(id)arg1;
- (void)reindexAllSearchableItemsWithAcknowledgementHandler:(id /* block */)arg1;
- (void)reindexSearchableItemsWithIdentifiers:(id)arg1 acknowledgementHandler:(id /* block */)arg2;
- (void)reloadMailboxCacheIfNecessaryWithConnection:(id)arg1;
- (id)remoteStoreForMessage:(id)arg1;
- (void)removeAllMessagesFromMailbox:(id)arg1 removeMailbox:(bool)arg2 andNotify:(bool)arg3;
- (void)removeSearchableItemsForAccount:(id)arg1;
- (void)removeSearchableItemsForAccount:(id)arg1 mailboxID:(long long)arg2;
- (void)removeSearchableItemsForMailbox:(id)arg1;
- (void)removeSearchableItemsForMessages:(id)arg1;
- (bool)renameMailboxes:(id)arg1 to:(id)arg2;
- (void)renameOrRemoveDatabaseIfNeeded;
- (void)scheduleRecurringActivity;
- (id)searchableIndex;
- (id)searchableIndexScheduler;
- (void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned int)arg3;
- (void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned int)arg3 baseTable:(unsigned int)arg4;
- (void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned int)arg3 baseTable:(unsigned int)arg4 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5;
- (void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned int)arg3 baseTable:(unsigned int)arg4 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5 success:(bool*)arg6;
- (void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned int)arg3 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (id)sendersByLibraryIDForConversation:(long long)arg1 mailbox:(id)arg2 limit:(long long)arg3;
- (id)sequenceIdentifierForMailbox:(id)arg1;
- (id)sequenceIdentifierForMessagesWithRemoteIDs:(id)arg1 inMailbox:(id)arg2;
- (id)serverSearchResultMessagesForMailbox:(id)arg1;
- (unsigned long long)serverUnreadOnlyOnServerCountForMailbox:(id)arg1;
- (void)setConversationInfo:(long long)arg1 syncKey:(id)arg2 flags:(unsigned long long)arg3;
- (void)setCurrentAddedMessagesMap:(id)arg1;
- (void)setData:(id)arg1 forMessage:(id)arg2 isPartial:(bool)arg3;
- (void)setData:(id)arg1 forMessageToAppend:(id)arg2;
- (void)setFileRemovalAfterCompactionScheduler:(id)arg1;
- (void)setFlags:(unsigned long long)arg1 forConversationId:(long long)arg2;
- (void)setFlags:(unsigned long long)arg1 forMessage:(id)arg2;
- (id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)setFlagsFromDictionary:(id)arg1 forMessagesInMailboxURLString:(id)arg2;
- (void)setLastSyncAndMostRecentStatusCount:(long long)arg1 forMailbox:(id)arg2;
- (void)setMessage:(id)arg1 isPartial:(bool)arg2;
- (void)setMostRecentStatusCount:(unsigned long long)arg1 forMailbox:(id)arg2;
- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(bool)arg2 isEncrypted:(bool)arg3 forMessage:(id)arg4;
- (void)setQueryParser:(id)arg1;
- (void)setReconciliationCleanupScheduler:(id)arg1;
- (void)setSearchableIndexScheduler:(id)arg1;
- (void)setSequenceIdentifier:(id)arg1 forMailbox:(id)arg2;
- (void)setSequenceIdentifier:(id)arg1 forMessageWithLibraryID:(long long)arg2;
- (void)setSequenceIdentifier:(id)arg1 forMessagesWithRemoteIDs:(id)arg2 inMailbox:(id)arg3;
- (void)setServerUnreadOnlyOnServerCount:(unsigned long long)arg1 forMailbox:(id)arg2;
- (void)setStoredIntegerPropertyWithName:(id)arg1 value:(id)arg2;
- (void)setSummary:(id)arg1 forMessage:(id)arg2;
- (bool)shouldCancel;
- (unsigned long long)signpostID;
- (id)sqlQueryWithConversionLogForQuery:(id)arg1;
- (void)start;
- (long long)statusCountDeltaForMailbox:(id)arg1;
- (id)storedIntegerPropertyWithName:(id)arg1;
- (id)stringForQuery:(id)arg1;
- (id)stringForQuery:(id)arg1 monitor:(id)arg2;
- (id)stringFromAllMailboxUnreadCount;
- (id)syncedConversations;
- (unsigned int)totalCountForMailbox:(id)arg1;
- (unsigned int)unreadCountForAggregatedMailboxes:(id)arg1;
- (unsigned int)unreadCountForAggregatedMailboxes:(id)arg1 matchingCriterion:(id)arg2;
- (unsigned int)unreadCountForMailbox:(id)arg1;
- (unsigned int)unreadCountForMailbox:(id)arg1 matchingCriterion:(id)arg2;
- (unsigned long long)unseenCountForMailbox:(id)arg1;
- (void)updateAdditionalThreadingInfoForSentMessageWithHeaders:(id)arg1 externalConversationID:(long long)arg2;
- (id)updateFlagsForMessages:(id)arg1 changes:(id)arg2 transformer:(id /* block */)arg3;
- (void)updateFlagsForMessagesInPlace:(id)arg1 success:(bool*)arg2;
- (void)updateThreadingInfoForMessage:(id)arg1 fromHeaders:(id)arg2;
- (id)urlForMailboxID:(long long)arg1;
- (void)willStartPersistenceDidAddMessages:(id)arg1;

@end
