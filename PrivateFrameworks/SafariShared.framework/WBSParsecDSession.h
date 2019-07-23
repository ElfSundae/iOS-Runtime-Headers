/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSParsecDSession : NSObject <PARSessionDelegate, WBSParsecSearchSession> {
    WBSCompletionQuery * _currentQuery;
    long long  _currentQueryID;
    <WBSParsecSearchSessionDelegate> * _delegate;
    WBSParsecDFeedbackDispatcher * _feedbackDispatcher;
    GEOUserSessionEntity * _geoUserSessionEntity;
    PARSession * _parsecdSession;
    NSObject<OS_dispatch_queue> * _requestProcessingQueue;
    float  _uiScale;
    BOOL  _valid;
}

@property (nonatomic, retain) WBSCompletionQuery *currentQuery;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WBSParsecSearchSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <WBSParsecFeedbackDispatcher> *feedbackDispatcher;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) PARSession *parsecdSession;
@property (readonly) Class superclass;
@property (setter=setUIScale:, nonatomic) float uiScale;
@property (getter=isValid, nonatomic, readonly) BOOL valid;

+ (id)sharedCorrectionsProcessor;
+ (id)sharedDomainPolicyProvider;
+ (id)sharedPARSession;
+ (BOOL)shouldUseSearchFoundation;

- (void).cxx_destruct;
- (void)_didReceiveResponse:(id)arg1 error:(id)arg2 forTask:(id)arg3 query:(id)arg4;
- (id)_parsecResultsFromRawResponse:(id)arg1 identifiersToSFSearchResults:(id)arg2 identifiersToSFResultSections:(id)arg3;
- (id)_parsecResultsFromResponse:(id)arg1;
- (void)_startUpdatingAutoFillDataInBackgroundFromBag:(id)arg1;
- (void)_updateAutoFillCorrectionSetsIfNeededFromNewBag:(id)arg1;
- (void)_updateAutoFillTLDsIfNeededFromNewBag:(id)arg1;
- (id)currentQuery;
- (id)delegate;
- (id)feedbackDispatcher;
- (void)fetchCardDetailsForResult:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)init;
- (id)initWithParsecdSession:(id)arg1;
- (BOOL)isValid;
- (id)parsecdSession;
- (void)session:(id)arg1 bag:(id)arg2 didLoadWithError:(id)arg3;
- (void)setCurrentQuery:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setParsecdSession:(id)arg1;
- (void)setUIScale:(float)arg1;
- (float)uiScale;

@end
