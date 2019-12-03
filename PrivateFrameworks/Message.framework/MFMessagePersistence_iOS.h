/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMessagePersistence_iOS : EDMessagePersistence <EDMessageChangeHookResponder, EFLoggable> {
    MFMailMessageLibrary * _library;
    MFMessageTransformer * _libraryMessageTransformer;
    EDMailDropMetadataGeneratorFactory * _maildropContentItemGeneratorFactory;
    <EFScheduler> * _networkContentLoadScheduler;
    EFLazyCache * _obsoleteMessageIDHeaderHashToDatabaseIDMap;
    <EFScheduler> * _offlineContentLoadScheduler;
    MFMailMessageLibraryQueryTransformer * _queryTransformer;
    NSObject<OS_dispatch_queue> * _requestSummaryQueue;
    <MFMessageSummaryLoaderProvider> * _summaryLoaderProvider;
    NSMutableDictionary * _summaryLoaders;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _summaryLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) MFMailMessageLibrary *library;
@property (nonatomic, retain) MFMessageTransformer *libraryMessageTransformer;
@property (nonatomic, retain) EDMailDropMetadataGeneratorFactory *maildropContentItemGeneratorFactory;
@property (nonatomic, retain) <EFScheduler> *networkContentLoadScheduler;
@property (nonatomic, retain) <EFScheduler> *offlineContentLoadScheduler;
@property (nonatomic, retain) MFMailMessageLibraryQueryTransformer *queryTransformer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *requestSummaryQueue;
@property (nonatomic, retain) <MFMessageSummaryLoaderProvider> *summaryLoaderProvider;
@property (readonly) Class superclass;

+ (id)log;

- (void).cxx_destruct;
- (unsigned long long)_countOfMessagesMatchingCriteria:(id)arg1 includingDuplicates:(bool)arg2;
- (void)_iterateMessagesMatchingQuery:(id)arg1 cancelationToken:(id)arg2 resultHandler:(id)arg3 monitor:(id)arg4;
- (id)_requestSummaryForLibraryMessage:(id)arg1;
- (id)cachedDatabaseIDsDictionaryForMessageIDHashes:(id)arg1;
- (long long)countOfMessagesMatchingQuery:(id)arg1;
- (long long)countOfMessagesWithMessageIDHeaderHash:(id)arg1 matchingQuery:(id)arg2;
- (id)enabledAccountMailboxesExpression;
- (id)groupedMessagesCountByMailboxMatchingQuery:(unsigned long long)arg1 variable:(id)arg2;
- (id)initWithMailboxPersistence:(id)arg1 database:(id)arg2 hookRegistry:(id)arg3 library:(id)arg4;
- (void)iterateMessagesMatchingQuery:(id)arg1 batchSize:(long long)arg2 firstBatchSize:(long long)arg3 limit:(long long)arg4 cancelationToken:(id)arg5 handler:(id /* block */)arg6;
- (void)iteratePersistedMessagesMatchingQuery:(id)arg1 limit:(long long)arg2 cancelationToken:(id)arg3 handler:(id /* block */)arg4;
- (id)library;
- (id)libraryMessageForMessageObjectID:(id)arg1;
- (id)libraryMessageTransformer;
- (id)maildropContentItemGeneratorFactory;
- (id)messagesForPersistedMessages:(id)arg1 mailboxScope:(id)arg2;
- (id)networkContentLoadScheduler;
- (id)offlineContentLoadScheduler;
- (id)persistedMessageForOutgoingMessage:(id)arg1 isDraft:(bool)arg2;
- (id)persistedMessagesForDatabaseIDs:(id)arg1 requireProtectedData:(bool)arg2 temporarilyUnavailableDatabaseIDs:(id*)arg3;
- (void)persistenceDidChangeMessageIDHeaderHash:(id)arg1 oldConversationID:(long long)arg2 message:(id)arg3 generationWindow:(id)arg4;
- (id)queryTransformer;
- (id)requestContentForMessageObjectID:(id)arg1 requestID:(unsigned long long)arg2 options:(id)arg3 delegate:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)requestSummaryForMessageObjectID:(id)arg1;
- (id)requestSummaryQueue;
- (void)setLibrary:(id)arg1;
- (void)setLibraryMessageTransformer:(id)arg1;
- (void)setMaildropContentItemGeneratorFactory:(id)arg1;
- (void)setNetworkContentLoadScheduler:(id)arg1;
- (void)setOfflineContentLoadScheduler:(id)arg1;
- (void)setQueryTransformer:(id)arg1;
- (void)setRequestSummaryQueue:(id)arg1;
- (void)setSummaryLoaderProvider:(id)arg1;
- (id)summaryLoaderProvider;

@end
