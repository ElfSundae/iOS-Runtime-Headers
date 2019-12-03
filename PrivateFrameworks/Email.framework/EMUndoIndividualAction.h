/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

@interface EMUndoIndividualAction : NSObject <NSSecureCoding> {
    long long  _actionType;
    NSURL * _destinationMailboxURL;
    ECMessageFlagChange * _flagChange;
    NSArray * _messageDatabaseIDs;
}

@property (nonatomic) long long actionType;
@property (nonatomic, retain) NSURL *destinationMailboxURL;
@property (nonatomic, retain) ECMessageFlagChange *flagChange;
@property (nonatomic, retain) NSArray *messageDatabaseIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)actionType;
- (id)destinationMailboxURL;
- (void)encodeWithCoder:(id)arg1;
- (id)flagChange;
- (id)initWithCoder:(id)arg1;
- (id)messageDatabaseIDs;
- (void)setActionType:(long long)arg1;
- (void)setDestinationMailboxURL:(id)arg1;
- (void)setFlagChange:(id)arg1;
- (void)setMessageDatabaseIDs:(id)arg1;

@end
