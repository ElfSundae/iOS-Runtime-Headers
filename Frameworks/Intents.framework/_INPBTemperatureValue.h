/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBTemperatureValue : PBCodable <NSCopying> {
    struct { 
        unsigned int magnitude : 1; 
        unsigned int unit : 1; 
    }  _has;
    double  _magnitude;
    int  _unit;
    PBUnknownFields * _unknownFields;
    _INPBValueMetadata * _valueMetadata;
}

@property (nonatomic) BOOL hasMagnitude;
@property (nonatomic) BOOL hasUnit;
@property (nonatomic, readonly) BOOL hasValueMetadata;
@property (nonatomic) double magnitude;
@property (nonatomic) int unit;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) _INPBValueMetadata *valueMetadata;

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasMagnitude;
- (BOOL)hasUnit;
- (BOOL)hasValueMetadata;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (double)magnitude;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasMagnitude:(BOOL)arg1;
- (void)setHasUnit:(BOOL)arg1;
- (void)setMagnitude:(double)arg1;
- (void)setUnit:(int)arg1;
- (void)setValueMetadata:(id)arg1;
- (int)unit;
- (id)unknownFields;
- (id)valueMetadata;
- (void)writeTo:(id)arg1;

@end
