/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

@interface RBSProcessPredicateImpl : NSObject <BSXPCSecureCoding, RBSProcessMatching>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;

- (void)encodeWithBSXPCCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBSXPCCoder:(id)arg1;
- (bool)matchesProcess:(id)arg1;
- (id)processPredicate;

@end
