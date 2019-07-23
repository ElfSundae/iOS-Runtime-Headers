/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLToneStoreDownloadStoreServicesController : NSObject <SSDownloadManagerObserver, SSPurchaseManagerDelegate, TLToneStoreDownloadController> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSString * _accessQueueLabel;
    NSHashTable * _observers;
    NSString * _storeAccountName;
    SSDownloadManager * _storeDownloadManager;
    SSPurchaseManager * _storePurchaseManager;
    NSMutableDictionary * _toneStoreDownloadsByStoreDownloadPersistentIdentifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *storeAccountName;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_assertRunningOnAccessQueue;
- (void)_handleAccountStoreDidChangeNotification:(id)arg1;
- (void)_handleToneManagerContentsDidChangeNotification:(id)arg1;
- (void)_notifyObserversOfCheckingForDownloadsFinishedWithoutNeedToIssueAnyDownload;
- (void)_notifyObserversOfStartedToneStoreDownloads:(id)arg1 progressedToneStoreDownload:(id)arg2 finishedToneStoreDownloads:(id)arg3;
- (void)_notifyObserversOfUpdatedStoreAccountName:(id)arg1;
- (void)_openToneStoreWithStoreItemKind:(id)arg1;
- (void)_performBlockOnAccessQueue:(id /* block */)arg1;
- (void)_updateStoreAccountName;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (id)init;
- (void)openAlertToneStore;
- (void)openRingtoneStore;
- (void)purchaseManager:(id)arg1 didFinishPurchasesWithResponses:(id)arg2;
- (void)redownloadAllTones;
- (void)removeObserver:(id)arg1;
- (id)storeAccountName;

@end
