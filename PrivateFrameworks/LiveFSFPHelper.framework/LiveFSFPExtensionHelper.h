/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LiveFSFPHelper.framework/LiveFSFPHelper
 */

@interface LiveFSFPExtensionHelper : NSFileProviderExtension <NSFileProviderExtension_Private> {
    Class  EnumeratorClass;
    Class  ItemClass;
    bool  _clusterDomain;
    bool  _clusterMaster;
    NSString * _clusterMasterID;
    NSXPCConnection * _conn;
    NSURL * _docPath;
    NSObject<OS_dispatch_queue> * _enumeratorHelperQueue;
    bool  _idsPersist;
    bool  _isDead;
    LiveFSClient * _manager;
    NSURL * _mountPath;
    LiveFSServiceClient * _serviceClient;
    bool  _supportsTagging;
    NSString * connectionURL;
    NSMapTable * enumerators;
    LiveFSLRUCache * itemCache;
    NSMapTable * itemHandleMap;
    NSMapTable * itemIDMap;
    NSString * providerName;
    NSObject<OS_dispatch_queue> * renameUpdateQueue;
    LiveFSThumbnailsServiceSource * thumbnailsServiceSource;
}

@property (getter=isClusterDomain) bool clusterDomain;
@property (getter=isClusterMaster) bool clusterMaster;
@property (readonly) NSString *clusterMasterID;
@property (nonatomic, readonly) NSXPCConnection *conn;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSURL *docPath;
@property (retain) NSObject<OS_dispatch_queue> *enumeratorHelperQueue;
@property (readonly) unsigned long long hash;
@property bool idsPersist;
@property (readonly) bool isDead;
@property (nonatomic, readonly) LiveFSClient *manager;
@property (nonatomic, retain) NSURL *mountPath;
@property (nonatomic, readonly) bool serverSearchUsesCS;
@property (nonatomic, readonly) LiveFSServiceClient *serviceClient;
@property (readonly) Class superclass;
@property bool supportsTagging;
@property (nonatomic, readonly) bool supportsTrash;

+ (id)getNSErrorFromLiveFSErrno:(int)arg1;
+ (id)getNSErrorFromUnknownError:(id)arg1;

- (void).cxx_destruct;
- (id /* block */)LiveFSDefaultMover;
- (id)URLForItemWithIdentifier:(id)arg1;
- (id)URLForItemWithPersistentIdentifier:(id)arg1;
- (bool)_hasManagerOrError:(id*)arg1;
- (bool)_isLoggedInOrError:(id*)arg1;
- (bool)_isLoggedInOrErrorLocked:(id*)arg1;
- (void)addDirContainer:(id)arg1 forContainerID:(id)arg2;
- (void)addFileHandle:(id)arg1 toItem:(id)arg2;
- (void)addItem:(id)arg1 identifier:(id)arg2 fileHandle:(id)arg3;
- (id)clusterDomainItemsOrError:(id*)arg1;
- (id)clusterMasterID;
- (id)conn;
- (void)createDirectoryWithName:(id)arg1 inParentItemIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)deleteItemWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)disconnectWithOptions:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)dispatchOntoRenameQueue:(id /* block */)arg1;
- (id)docPath;
- (void)ensureMountPathSetup;
- (id)enumeratorForContainerItemIdentifier:(id)arg1 error:(id*)arg2;
- (id)enumeratorForSearchQuery:(id)arg1 error:(id*)arg2;
- (id)enumeratorHelperQueue;
- (void)fetchTrashIdentifiersWithCompletionHandler:(id /* block */)arg1;
- (id)fileProviderErrorFromFSError:(id)arg1;
- (id)getEnumeratorForContainer:(id)arg1;
- (id)getItemForFileHandle:(id)arg1;
- (id)getItemForParent:(id)arg1 name:(id)arg2;
- (void)getVolumeInfo;
- (void)handleInterruption;
- (void)handleInvalidation;
- (bool)idsPersist;
- (void)importDocumentAtURL:(id)arg1 toParentItemIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (void)invalidate;
- (bool)isClusterDomain;
- (bool)isClusterMaster;
- (bool)isDead;
- (id)itemAtPath:(id)arg1 parent:(id)arg2;
- (id)itemAtPathLocked:(id)arg1 parent:(id)arg2;
- (id)itemAtPathLocked:(id)arg1 parent:(id)arg2 cachedOnly:(bool)arg3;
- (void)itemChangedAtURL:(id)arg1;
- (id)itemForIdentifier:(id)arg1 error:(id*)arg2;
- (id)itemForIdentifierLocked:(id)arg1 error:(id*)arg2;
- (id)itemForPath:(id)arg1 cachedOnly:(bool)arg2 error:(id*)arg3;
- (id)itemForURL:(id)arg1 cachedOnly:(bool)arg2 error:(id*)arg3;
- (id)itemForURL:(id)arg1 error:(id*)arg2;
- (id)itemPathForURL:(id)arg1;
- (id)makeVolumeListenerEndpointAndReturnError:(id*)arg1;
- (id)makeVolumeListenerEndpointAndReturnErrorLocked:(id*)arg1;
- (id)manager;
- (id)mountPath;
- (id)pathForInodeID:(id)arg1 error:(id*)arg2;
- (id)persistentIdentifierForItemAtURL:(id)arg1;
- (void)providePlaceholderAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)reIDItem:(id)arg1 oldID:(id)arg2;
- (void)removeEnumeratorForContainer:(id)arg1;
- (void)removeEnumeratorForContainerLocked:(id)arg1;
- (void)removeItem:(id)arg1 parent:(id)arg2 name:(id)arg3 fileHandle:(id)arg4;
- (void)renameItemWithIdentifier:(id)arg1 toName:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)reparentItem:(id)arg1 oldID:(id)arg2 oldParent:(id)arg3 oldName:(id)arg4 newParent:(id)arg5 newName:(id)arg6;
- (void)reparentItemWithIdentifier:(id)arg1 toParentItemWithIdentifier:(id)arg2 newName:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)serverSearchUsesCS;
- (id)serviceClient;
- (void)setClusterDomain:(bool)arg1;
- (void)setClusterMaster:(bool)arg1;
- (void)setEnumeratorHelperQueue:(id)arg1;
- (void)setFavoriteRank:(id)arg1 forItemIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setIdsPersist:(bool)arg1;
- (void)setLastUsedDate:(id)arg1 forItemIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setMountPath:(id)arg1;
- (void)setSupportsTagging:(bool)arg1;
- (void)setTagData:(id)arg1 forItemIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)startProvidingItemAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)stopProvidingItemAtURL:(id)arg1;
- (id)supportedServiceSourcesForItemIdentifier:(id)arg1 error:(id*)arg2;
- (bool)supportsTagging;
- (bool)supportsTrash;
- (void)trashItemWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)untrashItemWithIdentifier:(id)arg1 toParentItemIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;

@end
