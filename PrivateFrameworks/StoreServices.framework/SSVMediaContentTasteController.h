/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVMediaContentTasteController : NSObject {
    NSObject<OS_dispatch_queue> * _accessSerialQueue;
    NSObject<OS_dispatch_queue> * _calloutSerialQueue;
    NSMutableDictionary * _contentTasteItemsToRetry;
    unsigned long long  _currentResponseRevisionID;
    int  _exponentialBackOffSeconds;
    BOOL  _havePendingRetryOperation;
    int  _itemsDidChangeNotifyToken;
    unsigned long long  _lastNotificationReceivedResponseRevisionID;
    long long  _pendingMutateRequestCount;
    NSMutableDictionary * _playlistGlobalIDToContentTasteItem;
    NSMutableDictionary * _playlistGlobalIDToPendingContentTasteItem;
    NSMutableDictionary * _storeAdamIDToContentTasteItem;
    NSMutableDictionary * _storeAdamIDToPendingContentTasteItem;
}

+ (id)defaultMediaTasteController;

- (void).cxx_destruct;
- (void)_contentTasteForItemUpdate:(id)arg1 finishedWithError:(id)arg2;
- (void)_handleContentTasteItemsUpdateResponse:(id)arg1 allowNotifications:(BOOL)arg2;
- (BOOL)_isRetryableError:(id)arg1;
- (void)_refreshContentTasteItems;
- (void)_retryOperationForItemUpdates:(id)arg1 finishedWithError:(id)arg2;
- (void)_scheduleContentTasteUpdateOperationForFailedItems;
- (void)_sendUpdateWithItemUpdates:(id)arg1 completionHandler:(id /* block */)arg2;
- (unsigned int)contentTasteTypeForPlaylistGlobalID:(id)arg1;
- (unsigned int)contentTasteTypeForStoreAdamID:(long long)arg1;
- (void)dealloc;
- (id)init;
- (void)setContentTasteType:(unsigned int)arg1 forPlaylistGlobalID:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)setContentTasteType:(unsigned int)arg1 forStoreAdamID:(long long)arg2 withContentType:(unsigned int)arg3 completionHandler:(id /* block */)arg4;

@end
