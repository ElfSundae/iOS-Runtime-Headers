/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

@interface RBSInheritanceChangeSet : NSObject <BSXPCSecureCoding> {
    NSSet * _gainedInheritances;
    NSSet * _lostInheritances;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSSet *gainedInheritances;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSSet *lostInheritances;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)gainedInheritances;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithGainedInheritances:(id)arg1 lostInheritances:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)lostInheritances;

@end
