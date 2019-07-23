/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
 */

@interface CLPPassLocation : PBCodable <NSCopying> {
    double  _age;
    NSMutableArray * _associatedStoreIds;
    struct { 
        unsigned int age : 1; 
        unsigned int serverHash : 1; 
    }  _has;
    CLPLocation * _location;
    int  _passSource;
    NSString * _passTypeId;
    int  _serverHash;
}

@property (nonatomic) double age;
@property (nonatomic, retain) NSMutableArray *associatedStoreIds;
@property (nonatomic) bool hasAge;
@property (nonatomic) bool hasServerHash;
@property (nonatomic, retain) CLPLocation *location;
@property (nonatomic) int passSource;
@property (nonatomic, retain) NSString *passTypeId;
@property (nonatomic) int serverHash;

+ (Class)associatedStoreIdType;

- (void).cxx_destruct;
- (void)addAssociatedStoreId:(id)arg1;
- (double)age;
- (id)associatedStoreIdAtIndex:(unsigned long long)arg1;
- (id)associatedStoreIds;
- (unsigned long long)associatedStoreIdsCount;
- (void)clearAssociatedStoreIds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAge;
- (bool)hasServerHash;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)location;
- (void)mergeFrom:(id)arg1;
- (int)passSource;
- (id)passTypeId;
- (bool)readFrom:(id)arg1;
- (int)serverHash;
- (void)setAge:(double)arg1;
- (void)setAssociatedStoreIds:(id)arg1;
- (void)setHasAge:(bool)arg1;
- (void)setHasServerHash:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setPassSource:(int)arg1;
- (void)setPassTypeId:(id)arg1;
- (void)setServerHash:(int)arg1;
- (void)writeTo:(id)arg1;

@end
