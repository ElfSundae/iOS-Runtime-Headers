/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

@interface EMMessageFlagChangeAllAction : EMMessageFlagChangeAction {
    NSArray * _mailboxObjectIDs;
}

@property (nonatomic, readonly, copy) NSArray *mailboxObjectIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMailboxes:(id)arg1 messageListItemsToExclude:(id)arg2 flagChange:(id)arg3;
- (id)mailboxObjectIDs;
- (long long)signpostType;

@end
