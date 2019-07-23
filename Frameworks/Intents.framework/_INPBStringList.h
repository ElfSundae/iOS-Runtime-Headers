/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBStringList : PBCodable <NSCopying> {
    _INPBCondition * _conditionType;
    NSMutableArray * _dataStrings;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBCondition *conditionType;
@property (nonatomic, retain) NSMutableArray *dataStrings;
@property (nonatomic, readonly) BOOL hasConditionType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)dataStringType;
+ (id)options;

- (void).cxx_destruct;
- (void)addDataString:(id)arg1;
- (void)clearDataStrings;
- (id)conditionType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataStringAtIndex:(unsigned int)arg1;
- (id)dataStrings;
- (unsigned int)dataStringsCount;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasConditionType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setConditionType:(id)arg1;
- (void)setDataStrings:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
