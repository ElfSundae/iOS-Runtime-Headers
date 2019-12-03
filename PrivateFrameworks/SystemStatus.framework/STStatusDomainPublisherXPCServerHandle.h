/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
 */

@interface STStatusDomainPublisherXPCServerHandle : NSObject <BSDescriptionProviding, STStatusDomainPublisherServerHandle> {
    BSMutableIntegerMap * _dataByDomain;
    BSMutableIntegerMap * _hasSentDataByDomain;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSXPCConnection * _serverXPCConnection;
}

@property (nonatomic, retain) BSMutableIntegerMap *dataByDomain;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) BSMutableIntegerMap *hasSentDataByDomain;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic, retain) NSXPCConnection *serverXPCConnection;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_internalQueue_dataForDomainCreatingIfNecessary:(unsigned long long)arg1;
- (void)_internalQueue_publishData:(id)arg1 forDomain:(unsigned long long)arg2;
- (void)_internalQueue_publishData:(id)arg1 forDomain:(unsigned long long)arg2 dataSendBlock:(id /* block */)arg3 diffSendBlock:(id /* block */)arg4;
- (void)_internalQueue_setupXPCConnectionIfNecessary;
- (id)_newEmptyDataForDomain:(unsigned long long)arg1;
- (void)_resendData;
- (void)_tearDownXPCConnection;
- (id)dataByDomain;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)hasSentDataByDomain;
- (id)init;
- (id)internalQueue;
- (void)publishData:(id)arg1 forDomain:(unsigned long long)arg2;
- (id)publishedDataForDomain:(unsigned long long)arg1;
- (id)serverXPCConnection;
- (void)setDataByDomain:(id)arg1;
- (void)setHasSentDataByDomain:(id)arg1;
- (void)setInternalQueue:(id)arg1;
- (void)setServerXPCConnection:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
