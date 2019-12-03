/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNChangeHistoryPreferredContactForImageEvent : CNChangeHistoryEvent {
    CNContact * _preferredContact;
    CNContact * _unifiedContact;
}

@property (nonatomic, readonly) CNContact *preferredContact;
@property (nonatomic, readonly) CNContact *unifiedContact;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)acceptEventVisitor:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPreferredContact:(id)arg1 unifiedContact:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)preferredContact;
- (id)unifiedContact;

@end
