/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFContactsSearchResultsModel : NSObject <_MFSearchResultsConsumer> {
    NSArray *_enteredRecipients;
    BOOL _favorMobileNumbers;
    struct __CFSet { } *_finishedResultTypes;
    NSArray *_infrequentRecentSearchResults;
    NSMutableDictionary *_localSearchResultsByAddress;
    unsigned int _preferredType;
    NSOperationQueue *_queue;
    NSMutableDictionary *_recentRecipientsByAddress;
    NSArray *_recentSearchResults;
    int _resetCount;
    struct __CFArray { } *_resultTypesPriorityOrder;
    struct __CFArray { } *_resultTypesSortOrder;
    NSMutableDictionary *_serverSearchResultsByAddress;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *enteredRecipients;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)_addBestRecipientsForRecipients:(id)arg1 excluding:(id)arg2 toArray:(id)arg3;
- (void)_addResults:(id)arg1 ofType:(unsigned int)arg2;
- (void)_appendSortedResultsOfType:(unsigned int)arg1 excluding:(id)arg2 toResults:(id)arg3;
- (id)_bestRecipientForAddress:(id)arg1 fallback:(id)arg2;
- (id)_dictionaryForResultType:(unsigned int)arg1;
- (BOOL)_didFinishSearchForType:(unsigned int)arg1;
- (void)_enumerateSearchResultTypesInSortOrderUsingBlock:(id /* block */)arg1;
- (void)_finishSearchOfType:(unsigned int)arg1;
- (BOOL)_isResetting;
- (BOOL)_shouldProcessResultsAfterFinishingType:(unsigned int)arg1;
- (void)addResults:(id)arg1 ofType:(unsigned int)arg2;
- (void)dealloc;
- (id)enteredRecipients;
- (id)init;
- (id)initWithFavorMobileNumbers:(BOOL)arg1;
- (id)initWithResultTypeSortOrderComparator:(int (*)arg1 resultTypePriorityComparator:(int (*)arg2 favorMobileNumbers:(BOOL)arg3;
- (void)processAddedResultsOfType:(unsigned int)arg1 completion:(id /* block */)arg2;
- (void)reset;
- (void)setEnteredRecipients:(id)arg1;

@end