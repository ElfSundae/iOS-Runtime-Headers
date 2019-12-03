/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

@interface VCDatabaseChange : NSObject <VCSYChange> {
    long long  _changeType;
    WFDatabase * _database;
    NSString * _objectIdentifier;
    WFRecord * _record;
}

@property (nonatomic, readonly) long long changeType;
@property (nonatomic, readonly) WFDatabase *database;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) WFDatabaseObjectDescriptor *descriptor;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *objectIdentifier;
@property (nonatomic, copy) WFRecord *record;
@property (nonatomic, readonly) NSString *sequencer;
@property (readonly) Class superclass;

+ (int)messageType;
+ (Class)recordClass;
+ (id)recordProperties;

- (void).cxx_destruct;
- (long long)changeType;
- (id)database;
- (id)description;
- (id)descriptor;
- (id)initWithDescriptor:(id)arg1 inDatabase:(id)arg2 changeType:(long long)arg3;
- (id)initWithObjectIdentifier:(id)arg1 changeType:(long long)arg2;
- (id)objectIdentifier;
- (bool)readFrom:(id)arg1 error:(id*)arg2;
- (id)record;
- (id)recordWithError:(id*)arg1;
- (id)sequencer;
- (void)setRecord:(id)arg1;
- (bool)writeTo:(id)arg1 error:(id*)arg2;

@end
