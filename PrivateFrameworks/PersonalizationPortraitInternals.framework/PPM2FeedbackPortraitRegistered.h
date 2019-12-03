/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPM2FeedbackPortraitRegistered : PBCodable <NSCopying> {
    NSString * _clientId;
    int  _domain;
    bool  _fromPortrait;
    struct { 
        unsigned int domain : 1; 
        unsigned int type : 1; 
        unsigned int fromPortrait : 1; 
    }  _has;
    NSString * _mappingId;
    NSMutableArray * _records;
    int  _type;
    NSString * _variantId;
}

@property (nonatomic, retain) NSString *clientId;
@property (nonatomic) int domain;
@property (nonatomic) bool fromPortrait;
@property (nonatomic, readonly) bool hasClientId;
@property (nonatomic) bool hasDomain;
@property (nonatomic) bool hasFromPortrait;
@property (nonatomic, readonly) bool hasMappingId;
@property (nonatomic) bool hasType;
@property (nonatomic, readonly) bool hasVariantId;
@property (nonatomic, retain) NSString *mappingId;
@property (nonatomic, retain) NSMutableArray *records;
@property (nonatomic) int type;
@property (nonatomic, retain) NSString *variantId;

+ (Class)recordsType;

- (void).cxx_destruct;
- (int)StringAsDomain:(id)arg1;
- (int)StringAsType:(id)arg1;
- (void)addRecords:(id)arg1;
- (void)clearRecords;
- (id)clientId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)domain;
- (id)domainAsString:(int)arg1;
- (bool)fromPortrait;
- (bool)hasClientId;
- (bool)hasDomain;
- (bool)hasFromPortrait;
- (bool)hasMappingId;
- (bool)hasType;
- (bool)hasVariantId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mappingId;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)records;
- (id)recordsAtIndex:(unsigned long long)arg1;
- (unsigned long long)recordsCount;
- (void)setClientId:(id)arg1;
- (void)setDomain:(int)arg1;
- (void)setFromPortrait:(bool)arg1;
- (void)setHasDomain:(bool)arg1;
- (void)setHasFromPortrait:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setMappingId:(id)arg1;
- (void)setRecords:(id)arg1;
- (void)setType:(int)arg1;
- (void)setVariantId:(id)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)variantId;
- (void)writeTo:(id)arg1;

@end
