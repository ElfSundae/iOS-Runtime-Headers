/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

@interface SignpostObject : SignpostSupportObject {
    NSDictionary * _attributes;
    NSString * _name;
    NSString * _number1Name;
    NSNumber * _number1Value;
    NSString * _number2Name;
    NSNumber * _number2Value;
    unsigned long long  _scope;
    unsigned long long  _signpostId;
    NSString * _string1Name;
    NSString * _string1Value;
    NSString * _string2Name;
    NSString * _string2Value;
    bool  _telemetryEnabled;
}

@property (nonatomic, retain) NSDictionary *attributes;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *number1Name;
@property (nonatomic, retain) NSNumber *number1Value;
@property (nonatomic, retain) NSString *number2Name;
@property (nonatomic, retain) NSNumber *number2Value;
@property (nonatomic) unsigned long long scope;
@property (nonatomic, readonly) NSString *scopeString;
@property (nonatomic) unsigned long long signpostId;
@property (nonatomic, retain) NSString *string1Name;
@property (nonatomic, retain) NSString *string1Value;
@property (nonatomic, retain) NSString *string2Name;
@property (nonatomic, retain) NSString *string2Value;
@property (nonatomic) bool telemetryEnabled;

+ (id)serializationTypeNumber;

- (void).cxx_destruct;
- (id)_descriptionStringForColumn:(unsigned long long)arg1 timeFormat:(unsigned long long)arg2 asBegin:(bool)arg3;
- (id)_dictionaryRepresentationWithIsHumanReadable:(bool)arg1 shouldRedact:(bool)arg2;
- (id)attributes;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSubsystem:(id)arg1 category:(id)arg2 name:(id)arg3 signpostId:(unsigned long long)arg4 scope:(unsigned long long)arg5 timebaseRatio:(double)arg6 attributes:(id)arg7;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)number1Name;
- (id)number1Value;
- (id)number2Name;
- (id)number2Value;
- (unsigned long long)scope;
- (id)scopeString;
- (void)setAttributes:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNumber1Name:(id)arg1;
- (void)setNumber1Value:(id)arg1;
- (void)setNumber2Name:(id)arg1;
- (void)setNumber2Value:(id)arg1;
- (void)setScope:(unsigned long long)arg1;
- (void)setSignpostId:(unsigned long long)arg1;
- (void)setString1Name:(id)arg1;
- (void)setString1Value:(id)arg1;
- (void)setString2Name:(id)arg1;
- (void)setString2Value:(id)arg1;
- (void)setTelemetryEnabled:(bool)arg1;
- (unsigned long long)signpostId;
- (id)string1Name;
- (id)string1Value;
- (id)string2Name;
- (id)string2Value;
- (bool)telemetryEnabled;

@end
