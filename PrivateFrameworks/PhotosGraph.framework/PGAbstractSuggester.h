/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGAbstractSuggester : NSObject <PGSuggester> {
    PGSuggestionSession * _session;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) PGSuggestionSession *session;
@property (readonly) Class superclass;

+ (id)assetCollectionFilteringSharedAssetsForAssetCollection:(id)arg1 loggingConnection:(id)arg2;
+ (id)sharingSuggestionResultsForMomentNodes:(id)arg1;
+ (id)suggestedPersonLocalIdentifiersFromSharingSuggestionResults:(id)arg1 forMomentNodes:(id)arg2 containsUnverifiedPersons:(bool*)arg3;
+ (id)suggesterWithSession:(id)arg1;
+ (id)suggestionSubtypes;
+ (id)suggestionTypes;

- (void).cxx_destruct;
- (id)initWithSession:(id)arg1;
- (id)reasonsForSuggestion:(id)arg1;
- (id)session;
- (void)setSession:(id)arg1;
- (id)suggestionsWithOptions:(id)arg1 progress:(id /* block */)arg2;

@end
