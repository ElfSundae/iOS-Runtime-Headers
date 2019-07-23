/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBPlace : PBCodable <NSCopying, NSSecureCoding, _INPBPlace> {
    struct { 
        unsigned int personalPlaceType : 1; 
    }  _has;
    int  _personalPlaceType;
    NSArray * _placeDescriptors;
    _INPBString * _placeSubType;
    _INPBString * _placeType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasPersonalPlaceType;
@property (nonatomic, readonly) bool hasPlaceSubType;
@property (nonatomic, readonly) bool hasPlaceType;
@property (readonly) unsigned long long hash;
@property (nonatomic) int personalPlaceType;
@property (nonatomic, copy) NSArray *placeDescriptors;
@property (nonatomic, readonly) unsigned long long placeDescriptorsCount;
@property (nonatomic, retain) _INPBString *placeSubType;
@property (nonatomic, retain) _INPBString *placeType;
@property (readonly) Class superclass;

+ (Class)placeDescriptorsType;

- (void).cxx_destruct;
- (int)StringAsPersonalPlaceType:(id)arg1;
- (void)addPlaceDescriptors:(id)arg1;
- (void)clearPlaceDescriptors;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasPersonalPlaceType;
- (bool)hasPlaceSubType;
- (bool)hasPlaceType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)personalPlaceType;
- (id)personalPlaceTypeAsString:(int)arg1;
- (id)placeDescriptors;
- (id)placeDescriptorsAtIndex:(unsigned long long)arg1;
- (unsigned long long)placeDescriptorsCount;
- (id)placeSubType;
- (id)placeType;
- (bool)readFrom:(id)arg1;
- (void)setHasPersonalPlaceType:(bool)arg1;
- (void)setPersonalPlaceType:(int)arg1;
- (void)setPlaceDescriptors:(id)arg1;
- (void)setPlaceSubType:(id)arg1;
- (void)setPlaceType:(id)arg1;
- (void)writeTo:(id)arg1;

@end
