/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNiOSABDisabledContainersPredicate : CNPredicate <CNiOSContainerPredicate> {
    BOOL  _includesDisabledContainers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL includesDisabledContainers;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;

- (struct __CFArray { }*)cn_copyContainersInAddressBook:(void*)arg1 error:(struct __CFError {}**)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)includesDisabledContainers;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisabledContainersIncluded:(BOOL)arg1;
- (id)initWithPredicate:(id)arg1;

@end
