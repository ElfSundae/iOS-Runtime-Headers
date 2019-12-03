/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface NewMSPQuery : NSObject <MSPContainerObserver, MSPQueryDelegate> {
    NSArray * _cachedContents;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    MSPContainer * _container;
    unsigned long long  _contentVersion;
    <MSPQueryDelegate> * _delegate;
    id /* block */  _filterBlock;
    bool  _isReady;
    NSLock * _lock;
    NewMSPQuery * _parentQuery;
    NSObject<OS_dispatch_queue> * _processingQueue;
}

@property (nonatomic, retain) NSArray *cachedContents;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, readonly) MSPContainer *container;
@property (readonly) unsigned long long contentVersion;
@property (readonly) NSArray *contents;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MSPQueryDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ filterBlock;
@property (readonly) unsigned long long hash;
@property bool isReady;
@property (nonatomic, retain) NSLock *lock;
@property (nonatomic, retain) NewMSPQuery *parentQuery;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *processingQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_notifyDelegate:(id /* block */)arg1;
- (void)addOrUpdateObject:(id)arg1 completion:(id /* block */)arg2;
- (void)addOrUpdateObjects:(id)arg1 completion:(id /* block */)arg2;
- (id)cachedContents;
- (id)callbackQueue;
- (id)container;
- (void)container:(id)arg1 didEditWithNewContents:(id)arg2 orderedEdits:(id)arg3 cause:(long long)arg4 context:(id)arg5;
- (void)containerDidEraseContents:(id)arg1 fromStorageTypes:(unsigned long long)arg2;
- (unsigned long long)contentVersion;
- (id)contents;
- (id)delegate;
- (void)fetchContentsWithHandler:(id /* block */)arg1;
- (id /* block */)filterBlock;
- (id)initWithContainer:(id)arg1 delegate:(id)arg2;
- (id)initWithContainer:(id)arg1 delegate:(id)arg2 filteredWithBlock:(id /* block */)arg3;
- (id)initWithParentQuery:(id)arg1 container:(id)arg2 delegate:(id)arg3 filteredWithBlock:(id /* block */)arg4;
- (bool)isObject:(id)arg1 equalTo:(id)arg2;
- (bool)isReady;
- (id)lock;
- (void)moveObject:(id)arg1 afterObject:(id)arg2 completion:(id /* block */)arg3;
- (void)moveObject:(id)arg1 beforeObject:(id)arg2 completion:(id /* block */)arg3;
- (void)moveObject:(id)arg1 toIndex:(long long)arg2 completion:(id /* block */)arg3;
- (void)moveObjectToBack:(id)arg1 completion:(id /* block */)arg2;
- (void)moveObjectToFront:(id)arg1 completion:(id /* block */)arg2;
- (id)parentQuery;
- (void)processContents;
- (void)processContentsUsingBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)processContentsWithCompletion:(id /* block */)arg1;
- (id)processingQueue;
- (void)queryContentsDidChange:(id)arg1 contentsVersion:(unsigned long long)arg2;
- (void)queryContentsDidLoad:(id)arg1 contentsVersion:(unsigned long long)arg2;
- (void)removeObject:(id)arg1 completion:(id /* block */)arg2;
- (void)removeObjects:(id)arg1 completion:(id /* block */)arg2;
- (void)setCachedContents:(id)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setContents:(id)arg1 completion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)setFilterBlock:(id /* block */)arg1;
- (void)setIsReady:(bool)arg1;
- (void)setLock:(id)arg1;
- (void)setParentQuery:(id)arg1;
- (void)setProcessingQueue:(id)arg1;
- (id)subQueryFilteredWithBlock:(id /* block */)arg1;

@end
