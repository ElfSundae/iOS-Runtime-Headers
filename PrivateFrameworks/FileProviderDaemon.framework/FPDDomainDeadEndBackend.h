/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

@interface FPDDomainDeadEndBackend : NSObject <FPDDomainBackend> {
    FPDDomain * _domain;
}

@property (readonly) NSObject<OS_dispatch_queue> *backendQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSArray *rootURLs;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)URLForItemID:(id)arg1 creatingPlaceholderIfMissing:(bool)arg2 ignoreAlternateContentsURL:(bool)arg3 request:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)backendQueue;
- (id)createIndexerWithExtension:(id)arg1 enabled:(bool)arg2 error:(id*)arg3;
- (void)createItemBasedOnTemplate:(id)arg1 fields:(unsigned long long)arg2 urlWrapper:(id)arg3 options:(unsigned long long)arg4 bounceOnCollision:(bool)arg5 request:(id)arg6 completionHandler:(id /* block */)arg7;
- (id)createRootByImportingURL:(id)arg1 error:(id*)arg2;
- (void)currentMaterializedSetSyncAnchorWithCompletionHandler:(id /* block */)arg1;
- (void)dumpStateTo:(id)arg1 limitNumberOfItems:(bool)arg2;
- (void)enumerateMaterializedSetFromSyncAnchor:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)enumerateWithSettings:(id)arg1 lifetimeExtender:(id)arg2 observer:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)evictItemAtURL:(id)arg1 request:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)evictItemWithID:(id)arg1 request:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchFSItemsForItemIdentifiers:(id)arg1 materializingIfNeeded:(bool)arg2 request:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)fetchOperationServiceOrEndpointWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithDomain:(id)arg1;
- (void)invalidate;
- (bool)isAllowedToProvideItemID:(id)arg1 toConsumerWithIdentifier:(id)arg2;
- (bool)isProviderForURL:(id)arg1;
- (void)itemChangedAtURL:(id)arg1 request:(id)arg2;
- (void)itemForItemID:(id)arg1 request:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)itemForURL:(id)arg1 request:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)itemIDForURL:(id)arg1 request:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)needsRootCreation;
- (void)reimportItemsBelowItemWithID:(id)arg1 removeCachedItems:(bool)arg2 markItemDataless:(bool)arg3 completionHandler:(id /* block */)arg4;
- (bool)removeAllFilesWithError:(id*)arg1;
- (void)resolveProviderItemID:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)rootURLs;
- (bool)startAndGetSyncAnchor:(id*)arg1;
- (id)startProvidingItemAtURL:(id)arg1 readingOptions:(unsigned long long)arg2 request:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)updateRootAfterDomainChangeWithError:(id*)arg1;
- (void)valuesForAttributes:(id)arg1 forURL:(id)arg2 request:(id)arg3 completionHandler:(id /* block */)arg4;

@end
