/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

@interface RBSTerminateContext : NSObject <BSXPCSecureCoding, NSCopying> {
    NSArray * _attributes;
    unsigned long long  _exceptionCode;
    unsigned int  _exceptionDomain;
    NSString * _explanation;
    bool  _graceful;
    unsigned char  _maximumRole;
    unsigned char  _maximumTerminationResistance;
    bool  _preventIfBeingDebugged;
    NSSet * _preventingEndowmentNamespaces;
    unsigned long long  _reportType;
}

@property (nonatomic, copy) NSArray *attributes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long exceptionCode;
@property (nonatomic) unsigned int exceptionDomain;
@property (nonatomic, copy) NSString *explanation;
@property (nonatomic) bool graceful;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned char maximumRole;
@property (nonatomic) unsigned char maximumTerminationResistance;
@property (nonatomic) bool preventIfBeingDebugged;
@property (nonatomic, retain) NSSet *preventingEndowmentNamespaces;
@property (nonatomic) unsigned long long reportType;
@property (nonatomic, readonly) bool shouldTerminatePlugIns;
@property (readonly) Class superclass;

+ (id)defaultContext;
+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)attributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (unsigned long long)exceptionCode;
- (unsigned int)exceptionDomain;
- (id)explanation;
- (bool)graceful;
- (id)init;
- (id)initWithBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned char)maximumRole;
- (unsigned char)maximumTerminationResistance;
- (bool)preventIfBeingDebugged;
- (id)preventingEndowmentNamespaces;
- (unsigned long long)reportType;
- (void)setAttributes:(id)arg1;
- (void)setExceptionCode:(unsigned long long)arg1;
- (void)setExceptionDomain:(unsigned int)arg1;
- (void)setExplanation:(id)arg1;
- (void)setGraceful:(bool)arg1;
- (void)setMaximumRole:(unsigned char)arg1;
- (void)setMaximumTerminationResistance:(unsigned char)arg1;
- (void)setPreventIfBeingDebugged:(bool)arg1;
- (void)setPreventingEndowmentNamespaces:(id)arg1;
- (void)setReportType:(unsigned long long)arg1;
- (bool)shouldTerminatePlugIns;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
