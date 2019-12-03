/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFWorkflowTrustedResources : RLMObject <NSCopying> {
    RLMArray<WFRealmAccessResourcePermissionState> * _accessResourcePermissionStates;
    RLMArray<WFTrustedJavaScriptDomain> * _trustedDomains;
    RLMLinkingObjects * _workflows;
}

@property (retain) RLMArray<WFRealmAccessResourcePermissionState> *accessResourcePermissionStates;
@property (retain) RLMArray<WFTrustedJavaScriptDomain> *trustedDomains;
@property (readonly) RLMLinkingObjects *workflows;

+ (id)linkingObjectsProperties;
+ (id)requiredProperties;

- (void).cxx_destruct;
- (id)accessResourcePermissionStates;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setAccessResourcePermissionStates:(id)arg1;
- (void)setTrustedDomains:(id)arg1;
- (id)trustedDomains;
- (id)workflows;

@end
