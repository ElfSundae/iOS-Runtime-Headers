/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDCorrelationInsertionJournalEntry : HDJournalEntry {
    NSUUID *_correlationUUID;
    NSData *_objectUUIDsData;
    int _provenance;
}

@property (nonatomic, readonly) NSUUID *correlationUUID;
@property (nonatomic, readonly) NSData *objectUUIDsData;
@property (nonatomic, readonly) int provenance;

+ (void)applyEntries:(id)arg1 withDaemon:(id)arg2;
+ (int)behavior;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)correlationUUID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCorrelationUUID:(id)arg1 objectUUIDsData:(id)arg2 provenance:(int)arg3;
- (id)objectUUIDsData;
- (int)provenance;

@end
