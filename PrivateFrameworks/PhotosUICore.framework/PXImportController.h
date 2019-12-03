/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXImportController : PXObservable <PHImportServiceImporterDelegate, PHImportSourceObserver, PXChangeObserver, PXImportAssetsDataSourceManagerDelegate, PXMutableImportController> {
    bool  _alreadyImportedItemsSelectable;
    NSTimer * _assetLoadingPowerAssertionTimer;
    PXImportAssetsDataSourceManager * _dataSourceManager;
    PXImportDeleteAction * _deleteAction;
    unsigned int  _deleteAssetsPowerAssertionIdentifier;
    id /* block */  _deleteCompletionHandler;
    bool  _deletingAssets;
    bool  _hasLoadedAssets;
    bool  _hasLoadedInitialBatchOfAssets;
    bool  _hasReceivedImportSourceAssetChanges;
    unsigned short  _imageFormat;
    unsigned int  _importAssetsPowerAssertionIdentifier;
    NSObject<PXImportControllerImportCompletionDelegate> * _importCompletionDelegate;
    id /* block */  _importCompletionHandler;
    PHAssetCollection * _importDestinationAlbum;
    PXImportMediaProvider * _importMediaProvider;
    NSProgress * _importProgress;
    PXImportSessionInfo * _importSessionInfo;
    PHImportSource * _importSource;
    bool  _importingAssets;
    NSTimer * _initialBatchOfAssetsTimer;
    bool  _isLoadingInitialBatchOfAssets;
    NSArray * _lastSelectedModels;
    PXSelectionSnapshot * _lastSelectionSnapshot;
    unsigned int  _loadAssetsPowerAssertionIdentifier;
    bool  _loadingContent;
    bool  _loadingInitialBatchOfAssets;
    PXImportMediaLoadingCoordinator * _mediaLoadingCoordinator;
    NSMutableSet * _otherDataSourceManagers;
    NSObject<OS_dispatch_queue> * _otherDataSourceManagersQueue;
    PHPhotoLibrary * _photoLibrary;
    PXPowerController * _powerController;
    PXSectionedSelectionManager * _selectionManager;
    NSMutableDictionary * _sharedViewModelsById;
    NSObject<OS_dispatch_queue> * _sharedViewModelsUpdateQueue;
    bool  _userRequiredToTrustHostOnSourceDevice;
}

@property (nonatomic) bool alreadyImportedItemsSelectable;
@property (nonatomic, retain) NSTimer *assetLoadingPowerAssertionTimer;
@property (nonatomic, readonly) PXImportAssetsDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) PXImportDeleteAction *deleteAction;
@property (nonatomic) unsigned int deleteAssetsPowerAssertionIdentifier;
@property (nonatomic, copy) id /* block */ deleteCompletionHandler;
@property (getter=isDeletingAssets, nonatomic, readonly) bool deletingAssets;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasLoadedAssets;
@property (nonatomic) bool hasLoadedInitialBatchOfAssets;
@property (nonatomic) bool hasReceivedImportSourceAssetChanges;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned short imageFormat;
@property (nonatomic) unsigned int importAssetsPowerAssertionIdentifier;
@property (nonatomic) NSObject<PXImportControllerImportCompletionDelegate> *importCompletionDelegate;
@property (nonatomic, copy) id /* block */ importCompletionHandler;
@property (nonatomic, retain) PHAssetCollection *importDestinationAlbum;
@property (nonatomic, readonly) PXImportMediaProvider *importMediaProvider;
@property (nonatomic, retain) NSProgress *importProgress;
@property (nonatomic, retain) PXImportSessionInfo *importSessionInfo;
@property (nonatomic, readonly) PHImportSource *importSource;
@property (getter=isImportingAssets, nonatomic, readonly) bool importingAssets;
@property (nonatomic, retain) NSTimer *initialBatchOfAssetsTimer;
@property (nonatomic) bool isLoadingInitialBatchOfAssets;
@property (nonatomic, retain) PXSelectionSnapshot *lastSelectionSnapshot;
@property (nonatomic) unsigned int loadAssetsPowerAssertionIdentifier;
@property (getter=isLoadingContent, nonatomic, readonly) bool loadingContent;
@property (getter=isLoadingInitialBatchOfAssets, nonatomic, readonly) bool loadingInitialBatchOfAssets;
@property (nonatomic, readonly) PXImportMediaLoadingCoordinator *mediaLoadingCoordinator;
@property (nonatomic, readonly) NSMutableSet *otherDataSourceManagers;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *otherDataSourceManagersQueue;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, retain) PXPowerController *powerController;
@property (nonatomic, readonly) PXSectionedSelectionManager *selectionManager;
@property (nonatomic, readonly) NSMutableDictionary *sharedViewModelsById;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *sharedViewModelsUpdateQueue;
@property (readonly) Class superclass;
@property (getter=isUserRequiredToTrustHostOnSourceDevice, nonatomic) bool userRequiredToTrustHostOnSourceDevice;

+ (id)assetsForModels:(id)arg1;
+ (void)favoriteAssetsFromImportResults:(id)arg1 photoLibrary:(id)arg2;
+ (id)importFilesAtURLs:(id)arg1 photoLibrary:(id)arg2 collection:(id)arg3 checkDuplicates:(bool)arg4 referenced:(bool)arg5 delegate:(id)arg6 completionHandler:(id /* block */)arg7;
+ (id)importOperationQueue;
+ (id)itemsConstrainedByAvailableDiskSpaceFromItems:(id)arg1 additionalBytesRequired:(inout long long*)arg2;
+ (void)registerPXImportControllerNotificationsReceiver:(struct NSObject { Class x1; }*)arg1;
+ (void)unregisterPXImportControllerNotificationsReceiver:(struct NSObject { Class x1; }*)arg1;

- (void).cxx_destruct;
- (bool)alreadyImportedItemsSelectable;
- (id)assetLoadingPowerAssertionTimer;
- (void)assetLoadingPowerAssertionTimerFired;
- (void)capabilitiesDidChangeForImportSource:(id)arg1;
- (void)completedImportRecord:(id)arg1;
- (id)createDataSourceManager;
- (id)dataSourceManager;
- (void)dealloc;
- (id)deleteAction;
- (unsigned int)deleteAssetsPowerAssertionIdentifier;
- (id /* block */)deleteCompletionHandler;
- (void)deleteItems:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)deselectItem:(id)arg1;
- (void)finishDeletingItems;
- (void)finishImportingWithResults:(id)arg1;
- (void)handleImportSourceModifiedAssets;
- (bool)hasLoadedAssets;
- (bool)hasLoadedInitialBatchOfAssets;
- (bool)hasReceivedImportSourceAssetChanges;
- (unsigned short)imageFormat;
- (long long)importAsset:(id)arg1 asDuplicateOfLibraryAsset:(id)arg2 applyToAll:(bool*)arg3;
- (unsigned int)importAssetsPowerAssertionIdentifier;
- (id)importCompletionDelegate;
- (id /* block */)importCompletionHandler;
- (id)importDestinationAlbum;
- (void)importItems:(id)arg1 configuration:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)importMediaProvider;
- (id)importProgress;
- (id)importSessionInfo;
- (id)importSource;
- (void)importSource:(id)arg1 didAddAssets:(id)arg2;
- (void)importSource:(id)arg1 didDeleteAsset:(id)arg2;
- (void)importSource:(id)arg1 didRemoveAssets:(id)arg2;
- (void)importSource:(id)arg1 didUpdateAsset:(id)arg2 propertyMask:(unsigned short)arg3;
- (id)initWithImportSource:(id)arg1 photoLibrary:(id)arg2 imageFormat:(unsigned short)arg3;
- (id)initialBatchOfAssetsTimer;
- (bool)isDeletingAssets;
- (bool)isImportingAssets;
- (bool)isLoadingContent;
- (bool)isLoadingInitialBatchOfAssets;
- (bool)isLoadingInitialBatchOfAssets;
- (bool)isUserRequiredToTrustHostOnSourceDevice;
- (id)lastSelectionSnapshot;
- (void)loadAssets;
- (unsigned int)loadAssetsPowerAssertionIdentifier;
- (id)mediaLoadingCoordinator;
- (id)mutableChangeObject;
- (void)nameDidChangeForImportSource:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)otherDataSourceManagers;
- (id)otherDataSourceManagersQueue;
- (void)performChanges:(id /* block */)arg1;
- (id)photoLibrary;
- (id)powerController;
- (void)removeDataSourceManager:(id)arg1;
- (void)restartTimedAssetsLoadingPowerAssertion;
- (void)selectItem:(id)arg1;
- (id)selectedItems;
- (id)selectionManager;
- (void)sendActionProgress:(double)arg1;
- (void)setAlreadyImportedItemsSelectable:(bool)arg1;
- (void)setAssetLoadingPowerAssertionTimer:(id)arg1;
- (void)setDeleteAction:(id)arg1;
- (void)setDeleteAssetsPowerAssertionIdentifier:(unsigned int)arg1;
- (void)setDeleteCompletionHandler:(id /* block */)arg1;
- (void)setDeletingAssets:(bool)arg1;
- (void)setHasLoadedAssets:(bool)arg1;
- (void)setHasLoadedInitialBatchOfAssets:(bool)arg1;
- (void)setHasReceivedImportSourceAssetChanges:(bool)arg1;
- (void)setImportAssetsPowerAssertionIdentifier:(unsigned int)arg1;
- (void)setImportCompletionDelegate:(id)arg1;
- (void)setImportCompletionHandler:(id /* block */)arg1;
- (void)setImportDestinationAlbum:(id)arg1;
- (void)setImportProgress:(id)arg1;
- (void)setImportSessionInfo:(id)arg1;
- (void)setImportingAssets:(bool)arg1;
- (void)setInitialBatchOfAssetsTimer:(id)arg1;
- (void)setIsLoadingInitialBatchOfAssets:(bool)arg1;
- (void)setLastSelectionSnapshot:(id)arg1;
- (void)setLoadAssetsPowerAssertionIdentifier:(unsigned int)arg1;
- (void)setLoadingContent:(bool)arg1;
- (void)setLoadingInitialBatchOfAssets:(bool)arg1;
- (void)setPowerController:(id)arg1;
- (void)setSelected:(bool)arg1 forItems:(id)arg2;
- (void)setUserRequiredToTrustHostOnSourceDevice:(bool)arg1;
- (id)sharedViewModelsById;
- (id)sharedViewModelsUpdateQueue;
- (void)shutdown;
- (void)startInitialBatchOfAssetsTimerWithTimeout:(double)arg1;
- (void)startObservingImportProgress;
- (void)stopImport;
- (void)stopObservingImportProgress;
- (void)stopTimedAssetsLoadingPowerAssertion;
- (void)userHasTrustedHostForImportSource:(id)arg1;
- (void)userRequiredToTrustHostForImportSource:(id)arg1;
- (id)viewModelMapForImportAssetsDataSourceManager:(id)arg1;

@end
