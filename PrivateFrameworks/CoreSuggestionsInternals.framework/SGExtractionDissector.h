/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGExtractionDissector : SGPipelineDissector {
    SGAsset * _asset;
    <SGReverseTemplateJS> * _reverseTemplateJS;
    NSXPCConnection * _xpcConnection;
}

+ (id)addParams:(id)arg1 toParameterizedString:(id)arg2;
+ (id)addParams:(id)arg1 toParameterizedString:(id)arg2 allowAlternatives:(BOOL)arg3;
+ (id)addressDictionaryToString:(id)arg1;
+ (id)parseISO8601:(id)arg1;

- (void).cxx_destruct;
- (void)dissectInternal:(id)arg1 inContext:(id)arg2;
- (id)entityForOutputItem:(id)arg1 templateShortname:(id)arg2 parentEntity:(id)arg3 outputIssueTypes:(id)arg4 outputInfos:(id)arg5;
- (id)eventsFromSchemaOrgItems:(id)arg1;
- (id)init;
- (id)jsonLdOutputFromEntity:(id)arg1;
- (id)packedEntityForJS:(id)arg1;
- (BOOL)shouldIgnorePipelineEntity:(id)arg1;

@end
