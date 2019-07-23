/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKPaymentWebServiceTargetDevice : NSObject <IDSServiceDelegate, PKPaymentWebServiceArchiver, PKPaymentWebServiceTargetDeviceProtocol> {
    NPKCompanionAgentConnection *_companionAgentConnection;
    unsigned int _context;
    <NPKPaymentWebServiceTargetDeviceDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableDictionary *_outstandingRequests;
    IDSService *_provisioningService;
    NSObject<OS_dispatch_queue> *_responseQueue;
}

@property (nonatomic, retain) NPKCompanionAgentConnection *companionAgentConnection;
@property (nonatomic) unsigned int context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NPKPaymentWebServiceTargetDeviceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic, retain) NSMutableDictionary *outstandingRequests;
@property (nonatomic, retain) IDSService *provisioningService;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *responseQueue;
@property (readonly) Class superclass;

+ (id)bridgedClientInfoHTTPHeader;

- (void).cxx_destruct;
- (id)_sendProtobuf:(id)arg1 responseExpected:(BOOL)arg2;
- (id)_sendProtobuf:(id)arg1 responseExpected:(BOOL)arg2 extraOptions:(id)arg3;
- (void)_setOrResetCleanupTimerForRequest:(id)arg1;
- (id)_supportedRegionsForWebService:(id)arg1;
- (void)archiveBackgroundContext:(id)arg1;
- (void)archiveContext:(id)arg1;
- (id)bridgedClientInfo;
- (id)companionAgentConnection;
- (void)configurationDataResponse:(id)arg1;
- (unsigned int)context;
- (id)delegate;
- (id)deviceDescriptionForPaymentWebService:(id)arg1;
- (id)deviceName;
- (id)deviceRegion;
- (void)didRegisterResponse:(id)arg1;
- (void)downloadAllPaymentPassesForPaymentWebService:(id)arg1;
- (void)dumpLogsResponse:(id)arg1;
- (void)dumpLogsWithCompletion:(id /* block */)arg1;
- (void)handlePendingRemovalOfPassWithUniqueID:(id)arg1 completion:(id /* block */)arg2;
- (void)handlePreferredAID:(id)arg1 forPassWithUniqueID:(id)arg2 completion:(id /* block */)arg3;
- (void)handleValueAddedServiceTransactions:(id)arg1;
- (id)init;
- (id)initWithContext:(unsigned int)arg1 responseQueue:(id)arg2;
- (id)internalQueue;
- (void)noteProvisioningInProgress:(BOOL)arg1;
- (id)outstandingRequests;
- (int)paymentSupportedInCurrentRegionForWebService:(id)arg1;
- (void)paymentWebService:(id)arg1 addPaymentPass:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (BOOL)paymentWebService:(id)arg1 canProvisionPaymentPassWithPrimaryAccountIdentifier:(id)arg2;
- (void)paymentWebService:(id)arg1 configurationDataWithCompletionHandler:(id /* block */)arg2;
- (void)paymentWebService:(id)arg1 deleteApplicationWithAID:(id)arg2;
- (void)paymentWebService:(id)arg1 didRegisterWithRegionMap:(id)arg2;
- (id)paymentWebService:(id)arg1 filterVerificationChannels:(id)arg2;
- (BOOL)paymentWebService:(id)arg1 hasPassesOfType:(unsigned int)arg2;
- (void)paymentWebService:(id)arg1 provisioningDataWithCompletionHandler:(id /* block */)arg2;
- (void)paymentWebService:(id)arg1 queueConnectionToTrustedServiceManagerForPushTopic:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)paymentWebService:(id)arg1 registrationDataWithAuthToken:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)paymentWebService:(id)arg1 setNewAuthRandomIfNecessary:(id /* block */)arg2;
- (void)paymentWebService:(id)arg1 signData:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)paymentWebService:(id)arg1 validateAddPreconditionsWithCompletion:(id /* block */)arg2;
- (void)paymentWebServiceDidUpdateConfiguration:(id)arg1;
- (void)pendingRemovalResponse:(id)arg1;
- (void)preconditionNotMet:(id)arg1;
- (void)preferredAIDRequest:(id)arg1;
- (void)preferredAIDResponse:(id)arg1;
- (void)provisioningDataResponse:(id)arg1;
- (id)provisioningService;
- (void)queueTSMConnectionResponse:(id)arg1;
- (void)registrationDataResponse:(id)arg1;
- (void)removeAIDsFromSecureElement:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)responseQueue;
- (void)secureElementCardsWithCompletion:(id /* block */)arg1;
- (void)secureElementGetAppletsResponse:(id)arg1;
- (void)secureElementRemoveAppletsResponse:(id)arg1;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)setCompanionAgentConnection:(id)arg1;
- (void)setContext:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInternalQueue:(id)arg1;
- (void)setNewAuthRandomIfNecessaryAtBeginningOfProvisioningFlow:(id /* block */)arg1;
- (void)setNewAuthRandomIfNecessaryResponse:(id)arg1;
- (void)setOutstandingRequests:(id)arg1;
- (void)setProvisioningService:(id)arg1;
- (void)setResponseQueue:(id)arg1;
- (void)signDataResponse:(id)arg1;
- (BOOL)supportsAutomaticPassPresentation;
- (void)updatePaymentPass:(id)arg1;
- (void)updatePushToken:(id)arg1;

@end
