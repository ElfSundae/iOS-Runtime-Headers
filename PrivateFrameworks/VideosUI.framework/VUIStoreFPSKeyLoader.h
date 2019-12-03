/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIStoreFPSKeyLoader : NSObject {
    NSData * _certificateData;
    NSURL * _certificateURL;
    TVPContentKeySession * _contentKeySession;
    NSObject<VUIStoreFPSKeyLoaderDelegate> * _delegate;
    bool  _didSkipRentalCheckout;
    TVPPlaybackReportingEventCollection * _eventCollection;
    bool  _hasLoadedAnyStreamingKeyRequests;
    NSDate * _keyExpirationDate;
    NSMutableDictionary * _keyIdentifierPenaltyBox;
    NSURL * _keyServerURL;
    NSNumber * _rentalID;
    NSDate * _rentalPlaybackStartDate;
    NSMutableArray * _requestsAwaitingCertFetch;
    TVPContentKeyRequest * _savedRequestToUseForStopping;
    NSNumber * _secureInvalidationDSID;
    NSURL * _secureInvalidationNonceURL;
    long long  _state;
    bool  _usesKeyIdentifierPenaltyBox;
}

@property (nonatomic, retain) NSData *certificateData;
@property (nonatomic, copy) NSURL *certificateURL;
@property (nonatomic, retain) TVPContentKeySession *contentKeySession;
@property (nonatomic) NSObject<VUIStoreFPSKeyLoaderDelegate> *delegate;
@property (nonatomic) bool didSkipRentalCheckout;
@property (nonatomic, retain) TVPPlaybackReportingEventCollection *eventCollection;
@property (nonatomic) bool hasLoadedAnyStreamingKeyRequests;
@property (nonatomic, retain) NSDate *keyExpirationDate;
@property (nonatomic, retain) NSMutableDictionary *keyIdentifierPenaltyBox;
@property (nonatomic, copy) NSURL *keyServerURL;
@property (nonatomic, retain) NSNumber *rentalID;
@property (nonatomic, retain) NSDate *rentalPlaybackStartDate;
@property (nonatomic, retain) NSMutableArray *requestsAwaitingCertFetch;
@property (nonatomic, retain) TVPContentKeyRequest *savedRequestToUseForStopping;
@property (nonatomic, retain) NSNumber *secureInvalidationDSID;
@property (nonatomic, retain) NSURL *secureInvalidationNonceURL;
@property (nonatomic) long long state;
@property (nonatomic) bool usesKeyIdentifierPenaltyBox;

+ (void)_loadAndCacheCertificateDataForValidURL:(id)arg1 completion:(id /* block */)arg2;
+ (void)_loadFPSURLsFromStoreBagWithCompletion:(id /* block */)arg1;
+ (void)initialize;
+ (void)preFetchFPSCertificate;

- (void).cxx_destruct;
- (id)_bodyJSONDataForRequests:(id)arg1 isStopRequest:(bool)arg2;
- (id)_errorForStoreResponseStatus:(long long)arg1 deviceLimit:(id)arg2;
- (void)_failKeyRequests:(id)arg1 withError:(id)arg2;
- (void)_generateKeyRequestDataForKeyRequests:(id)arg1 completion:(id /* block */)arg2;
- (void)_generateSecureInvalidationDataForFirstRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)_generateSecureInvalidationDataForRequests:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleResponseDict:(id)arg1 forKeyRequest:(id)arg2;
- (void)_handleResponseDicts:(id)arg1 forKeyRequests:(id)arg2;
- (void)_handleResponseForKeyRequests:(id)arg1 responseData:(id)arg2 URLResponse:(id)arg3 error:(id)arg4;
- (void)_invalidateValidKeyRequestsInBatches:(id)arg1 completion:(id /* block */)arg2;
- (id)_jsonDictionaryForRequest:(id)arg1 isStopRequest:(bool)arg2;
- (void)_loadCertificateDataWithCompletion:(id /* block */)arg1;
- (void)_loadNonceDataForRequests:(id)arg1 completion:(id /* block */)arg2;
- (void)_sendKeyRequestsToServer:(id)arg1 isStopRequest:(bool)arg2 isSecureInvalidationRequest:(bool)arg3 completion:(id /* block */)arg4;
- (void)_startKeyRequests:(id)arg1 completion:(id /* block */)arg2;
- (void)_startKeyRequestsInBatches:(id)arg1 completion:(id /* block */)arg2;
- (id)certificateData;
- (id)certificateURL;
- (id)contentKeySession;
- (id)delegate;
- (bool)didSkipRentalCheckout;
- (id)eventCollection;
- (bool)hasLoadedAnyStreamingKeyRequests;
- (id)initWithCertificateURL:(id)arg1 keyServerURL:(id)arg2;
- (void)invalidateKeysWithRequests:(id)arg1 completion:(id /* block */)arg2;
- (id)keyExpirationDate;
- (id)keyIdentifierPenaltyBox;
- (id)keyServerURL;
- (void)loadFairPlayStreamingKeyRequests:(id)arg1 completion:(id /* block */)arg2;
- (void)removeAllEntriesFromKeyIdentifierPenaltyBox;
- (id)rentalID;
- (id)rentalPlaybackStartDate;
- (id)requestsAwaitingCertFetch;
- (id)savedRequestToUseForStopping;
- (id)secureInvalidationDSID;
- (id)secureInvalidationNonceURL;
- (void)sendStopRequest;
- (void)setCertificateData:(id)arg1;
- (void)setCertificateURL:(id)arg1;
- (void)setContentKeySession:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidSkipRentalCheckout:(bool)arg1;
- (void)setEventCollection:(id)arg1;
- (void)setHasLoadedAnyStreamingKeyRequests:(bool)arg1;
- (void)setKeyExpirationDate:(id)arg1;
- (void)setKeyIdentifierPenaltyBox:(id)arg1;
- (void)setKeyServerURL:(id)arg1;
- (void)setRentalID:(id)arg1;
- (void)setRentalPlaybackStartDate:(id)arg1;
- (void)setRequestsAwaitingCertFetch:(id)arg1;
- (void)setSavedRequestToUseForStopping:(id)arg1;
- (void)setSecureInvalidationDSID:(id)arg1;
- (void)setSecureInvalidationNonceURL:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setUsesKeyIdentifierPenaltyBox:(bool)arg1;
- (long long)state;
- (bool)usesKeyIdentifierPenaltyBox;

@end
