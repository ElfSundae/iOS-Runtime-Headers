/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBFilePropertyValue : PBCodable <NSCopying> {
    _INPBDateTimeRange * _dateTime;
    int  _fileType;
    struct { 
        unsigned int fileType : 1; 
    }  _has;
    _INPBContact * _person;
    _INPBLong * _quantity;
    PBUnknownFields * _unknownFields;
    _INPBString * _value;
}

@property (nonatomic, retain) _INPBDateTimeRange *dateTime;
@property (nonatomic) int fileType;
@property (nonatomic, readonly) BOOL hasDateTime;
@property (nonatomic) BOOL hasFileType;
@property (nonatomic, readonly) BOOL hasPerson;
@property (nonatomic, readonly) BOOL hasQuantity;
@property (nonatomic, readonly) BOOL hasValue;
@property (nonatomic, retain) _INPBContact *person;
@property (nonatomic, retain) _INPBLong *quantity;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) _INPBString *value;

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateTime;
- (id)description;
- (id)dictionaryRepresentation;
- (int)fileType;
- (BOOL)hasDateTime;
- (BOOL)hasFileType;
- (BOOL)hasPerson;
- (BOOL)hasQuantity;
- (BOOL)hasValue;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)person;
- (id)quantity;
- (BOOL)readFrom:(id)arg1;
- (void)setDateTime:(id)arg1;
- (void)setFileType:(int)arg1;
- (void)setHasFileType:(BOOL)arg1;
- (void)setPerson:(id)arg1;
- (void)setQuantity:(id)arg1;
- (void)setValue:(id)arg1;
- (id)unknownFields;
- (id)value;
- (void)writeTo:(id)arg1;

@end
