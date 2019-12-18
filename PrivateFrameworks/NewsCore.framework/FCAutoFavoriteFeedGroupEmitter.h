/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCAutoFavoriteFeedGroupEmitter : NSObject <FCFeedGroupEmitting>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool emitsSingleRefreshSessionGroups;
@property (nonatomic, readonly) bool emitsSingletonGroups;
@property (nonatomic, readonly, copy) NSSet *emittableGroupTypes;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isRequiredByFollowingEmitters;
@property (nonatomic, readonly) long long requiredForYouContentTypes;
@property (nonatomic, readonly) bool requiresHeavyweightContent;
@property (nonatomic, readonly) bool shouldEmitContentInFavoritesOnlyMode;
@property (readonly) Class superclass;

+ (id)groupEmitterIdentifier;

- (id)emittableGroupTypes;
- (id)operationToEmitGroupWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;
- (long long)requiredForYouContentTypes;
- (bool)shouldEmitContentInFavoritesOnlyMode;
- (bool)wantsToEmitGroupInContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;
- (bool)wantsToInsertGroupInContext:(id)arg1;

@end
