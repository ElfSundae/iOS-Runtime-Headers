/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASyncGetAnchors : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSDictionary *customVocabSources;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL includeAllKnownAnchors;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic, copy) NSArray *sources;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)getAnchors;
+ (id)getAnchorsWithDictionary:(id)arg1 context:(id)arg2;

- (id)customVocabSources;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)includeAllKnownAnchors;
- (void)setCustomVocabSources:(id)arg1;
- (void)setIncludeAllKnownAnchors:(BOOL)arg1;
- (void)setSources:(id)arg1;
- (id)sources;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (BOOL)af_bufferingAllowedDuringActiveSession;

@end
