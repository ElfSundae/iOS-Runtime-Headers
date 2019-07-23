/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDUserDefaultUpdatedJournalEntry : HDJournalEntry {
    HDUserDefault *_userDefault;
}

@property (nonatomic, readonly) HDUserDefault *userDefault;

+ (void)applyEntries:(id)arg1 withDaemon:(id)arg2;
+ (int)behavior;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)userDefault;

@end
