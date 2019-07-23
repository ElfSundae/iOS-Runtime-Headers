/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface PARRequest : NSObject <NSSecureCoding> {
    NSDictionary * _headerItems;
    NSString * _keyboardInputMode;
    bool  _pretend;
    unsigned long long  _queryId;
    NSArray * _queryItems;
    double  _scale;
    unsigned long long  _triggerEvent;
    bool  _verboseReply;
}

@property (nonatomic, readonly) unsigned long long clientQueryId;
@property (nonatomic, copy) NSDictionary *headerItems;
@property (nonatomic, copy) NSString *keyboardInputMode;
@property (nonatomic) bool pretend;
@property (nonatomic, readonly) unsigned long long queryId;
@property (nonatomic, copy) NSArray *queryItems;
@property (nonatomic) double scale;
@property (nonatomic) unsigned long long triggerEvent;
@property (nonatomic) bool verboseReply;

+ (id)cardRequestWithURL:(id)arg1;
+ (id)cardRequestWithURL:(id)arg1 queryId:(unsigned long long)arg2;
+ (id)flightRequestForQuery:(id)arg1 date:(id)arg2 appBundleId:(id)arg3;
+ (id)lookupRequestWithString:(id)arg1 queryContext:(id)arg2 domain:(id)arg3 lookupSelectionType:(long long)arg4 appBundleId:(id)arg5;
+ (id)lookupRequestWithString:(id)arg1 queryContext:(id)arg2 domain:(id)arg3 lookupSelectionType:(long long)arg4 appBundleId:(id)arg5 queryId:(unsigned long long)arg6;
+ (id)moreResultsRequestWithURL:(id)arg1;
+ (id)moreResultsRequestWithURL:(id)arg1 queryId:(unsigned long long)arg2;
+ (id)searchRequestWithEngagedSuggestion:(id)arg1 queryId:(unsigned long long)arg2;
+ (id)searchRequestWithString:(id)arg1;
+ (id)searchRequestWithString:(id)arg1 triggerEvent:(unsigned long long)arg2;
+ (id)searchRequestWithString:(id)arg1 triggerEvent:(unsigned long long)arg2 queryId:(unsigned long long)arg3;
+ (bool)supportsSecureCoding;
+ (id)zeroKeywordRequest;
+ (id)zeroKeywordRequest:(unsigned long long)arg1;

- (void).cxx_destruct;
- (unsigned long long)clientQueryId;
- (void)encodeWithCoder:(id)arg1;
- (id)headerItems;
- (id)initWithCoder:(id)arg1;
- (id)keyboardInputMode;
- (bool)pretend;
- (unsigned long long)queryId;
- (id)queryItems;
- (Class)responseClass;
- (double)scale;
- (void)setHeaderItems:(id)arg1;
- (void)setKeyboardInputMode:(id)arg1;
- (void)setPretend:(bool)arg1;
- (void)setQueryId:(unsigned long long)arg1;
- (void)setQueryItems:(id)arg1;
- (void)setScale:(double)arg1;
- (void)setTriggerEvent:(unsigned long long)arg1;
- (void)setVerboseReply:(bool)arg1;
- (unsigned long long)triggerEvent;
- (bool)verboseReply;

@end
