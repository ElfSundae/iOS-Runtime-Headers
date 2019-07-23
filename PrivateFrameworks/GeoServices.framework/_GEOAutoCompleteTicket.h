/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOAutoCompleteTicket : NSObject <GEOMapServiceCompletionTicket> {
    GEOSearchRequest *_searchRequest;
    GEOMapServiceTraits *_traits;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSDictionary *responseUserInfo;
@property (readonly) Class superclass;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;

- (void)applyToSuggestionEntry:(id)arg1 withAutocompleteSearchResultMuid:(unsigned long long)arg2;
- (void)applyToSuggestionList:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (id)description;
- (id)initWithAutoCompleteRequest:(id)arg1 traits:(id)arg2;
- (BOOL)isRapEnabled;
- (BOOL)matchesFragment:(id)arg1;
- (id)responseUserInfo;
- (void)submitWithAutoCompletionHandler:(id /* block */)arg1 networkActivity:(id /* block */)arg2;
- (id)traits;

@end
