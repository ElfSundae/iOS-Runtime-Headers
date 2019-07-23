/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASyncDeepSyncVerificationResult : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic, copy) NSString *result;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;

+ (id)deepSyncVerificationResult;
+ (id)deepSyncVerificationResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)key;
- (bool)requiresResponse;
- (id)result;
- (void)setKey:(id)arg1;
- (void)setResult:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
