/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

@interface CNAutocompleteQuery : NSObject <CNCancelable> {
    CNCancelationToken * _cancelationToken;
    CNAutocompleteDelegateWrapper * _delegate;
    <CNCancelable> * _delegateToken;
    <CNAutocompleteProbeProvider> * _probeProvider;
    CNAutocompleteFetchRequest * _request;
    <CNScheduler> * _scheduler;
    <CNAutocompleteSearchProvider> * _searchProvider;
    CNAutocompleteUserSession * _userSession;
}

@property (retain) CNCancelationToken *cancelationToken;
@property (readonly, copy) NSString *debugDescription;
@property (retain) CNAutocompleteDelegateWrapper *delegate;
@property <CNCancelable> *delegateToken;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) <CNAutocompleteProbeProvider> *probeProvider;
@property (copy) CNAutocompleteFetchRequest *request;
@property (retain) <CNScheduler> *scheduler;
@property (retain) <CNAutocompleteSearchProvider> *searchProvider;
@property (readonly) Class superclass;
@property (retain) CNAutocompleteUserSession *userSession;

+ (void)configureNetworkActivityHandlersForBuilder:(id)arg1 query:(id)arg2;
+ (void)configureNetworkForBuilder:(id)arg1 query:(id)arg2;
+ (void)configureNetworkPolicyForBuilder:(id)arg1 query:(id)arg2;
+ (id)observableForQuery:(id)arg1;
+ (id)observableWithSupplementalResultsForQuery:(id)arg1;
+ (id)queryWithRequest:(id)arg1 searchProvider:(id)arg2 delegate:(id)arg3 probeProvider:(id)arg4 scheduler:(id)arg5 userSession:(id)arg6 delegateToken:(id)arg7;
+ (bool)searchTypeSupportsSuppressionOfAlreadyChosenAddresses:(unsigned long long)arg1;
+ (bool)shouldPerformQueryForRequest:(id)arg1;
+ (bool)shouldSuppressAddressesAlreadyChosenForRequest:(id)arg1;

- (void).cxx_destruct;
- (void)cancel;
- (id)cancelationToken;
- (id)delegate;
- (id)delegateToken;
- (id)execute;
- (id)initWithRequest:(id)arg1 searchProvider:(id)arg2 delegate:(id)arg3 probeProvider:(id)arg4 scheduler:(id)arg5 userSession:(id)arg6 delegateToken:(id)arg7;
- (id)makeDelegateWrapperWithDelegate:(id)arg1 forRequest:(id)arg2 userSession:(id)arg3;
- (id)probeProvider;
- (id)request;
- (id)scheduler;
- (void)searchOperationEncounteredError:(id)arg1;
- (void)searchOperationReportedResults:(id)arg1;
- (void)searchOperationsHaveBegunNetworkActivity;
- (void)searchOperationsHaveEndedNetworkActivity;
- (void)searchOperationsHaveFinished;
- (id)searchProvider;
- (void)setCancelationToken:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateToken:(id)arg1;
- (void)setProbeProvider:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setScheduler:(id)arg1;
- (void)setSearchProvider:(id)arg1;
- (void)setUserSession:(id)arg1;
- (id)userSession;

@end
