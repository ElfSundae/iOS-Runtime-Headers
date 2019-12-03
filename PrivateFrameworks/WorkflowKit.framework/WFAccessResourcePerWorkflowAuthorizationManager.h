/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFAccessResourcePerWorkflowAuthorizationManager : NSObject

+ (void)setAccessResourcesToAuthorizedIfNotDetermined:(id)arg1 otherActions:(id)arg2;
+ (void)setAccessResourcesToAuthorizedIfNotDeterminedInActions:(id)arg1 existingActions:(id)arg2 forReference:(id)arg3 inDatabase:(id)arg4;
+ (void)setAccessResourcesToAuthorizedIfNotDeterminedInWorkflow:(id)arg1 forReference:(id)arg2 inDatabase:(id)arg3;
+ (void)setNotDeterminedAccessResourcesAuthorizedInAction:(id)arg1 forReference:(id)arg2 inDatabase:(id)arg3 existingAccessResources:(id)arg4;
+ (void)setStatusForAllAccessResourcesTo:(long long)arg1 inWorkflow:(id)arg2 forReference:(id)arg3 inDatabase:(id)arg4;

@end
