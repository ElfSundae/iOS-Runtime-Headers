/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TITypologyLog : NSObject <NSCopying> {
    NSString * _buildVersion;
    NSString * _clientIdentifier;
    NSDictionary * _config;
    NSDate * _date;
    TIKeyboardState * _lastKeyboardState;
    NSUUID * _lastRecordUUID;
    NSMutableSet * _loggedRecordClasses;
    TIRollingLog * _records;
    NSString * _systemVersion;
    TIRollingLog * _traceLog;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) NSString *buildVersion;
@property (nonatomic, copy) NSString *clientIdentifier;
@property (nonatomic, retain) NSDictionary *config;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, retain) TIKeyboardState *lastKeyboardState;
@property (nonatomic, copy) NSUUID *lastRecordUUID;
@property (nonatomic, retain) NSMutableSet *loggedRecordClasses;
@property (nonatomic, readonly) TIRollingLog *records;
@property (nonatomic, readonly) NSString *systemVersion;
@property (nonatomic, readonly) TIRollingLog *traceLog;
@property (nonatomic, readonly) NSUUID *uuid;

- (void).cxx_destruct;
- (id)buildVersion;
- (id)clientIdentifier;
- (id)config;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (void)enumerateHumanReadableTraceEntriesWithBlock:(id /* block */)arg1;
- (void)enumerateRecordsWithBlock:(id /* block */)arg1;
- (id)filename;
- (id)init;
- (id)initWithPropertyList:(id)arg1;
- (id)initWithTypologyLog:(id)arg1;
- (id)lastKeyboardState;
- (id)lastRecordUUID;
- (void)logRecord:(id)arg1;
- (void)logToHumanReadableTrace:(id)arg1;
- (id)loggedRecordClasses;
- (bool)loggedRecordOfClass:(Class)arg1;
- (id)propertyList;
- (id)recordSummary;
- (id)records;
- (void)setClientIdentifier:(id)arg1;
- (void)setConfig:(id)arg1;
- (void)setLastKeyboardState:(id)arg1;
- (void)setLastRecordUUID:(id)arg1;
- (void)setLoggedRecordClasses:(id)arg1;
- (id)systemVersion;
- (id)textSummary;
- (id)timestamp;
- (id)traceLog;
- (id)uuid;

@end
