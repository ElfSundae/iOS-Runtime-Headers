/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCDraftIssuesFeedGroupEmitter : NSObject <FCFeedGroupEmitting> {
    NSString * _issueListID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool emitsSingleRefreshSessionGroups;
@property (nonatomic, readonly) bool emitsSingletonGroups;
@property (nonatomic, readonly, copy) NSSet *emittableGroupTypes;
@property (nonatomic, readonly, copy) NSString *groupEmitterIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isRequiredByFollowingEmitters;
@property (nonatomic, retain) NSString *issueListID;
@property (nonatomic, readonly) long long requiredForYouContentTypes;
@property (nonatomic, readonly) bool requiresHeavyweightContent;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)emitsSingletonGroups;
- (id)emittableGroupTypes;
- (id)groupEmitterIdentifier;
- (id)initWithIssueListID:(id)arg1;
- (id)issueListID;
- (id)operationToEmitGroupWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;
- (void)setIssueListID:(id)arg1;
- (bool)wantsToEmitGroupInContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;
- (bool)wantsToInsertGroup:(id)arg1 withContext:(id)arg2;

@end
