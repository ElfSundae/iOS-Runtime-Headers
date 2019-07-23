/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MIPSeries : PBCodable <NSCopying> {
    struct { 
        unsigned int storeId : 1; 
    } _has;
    NSString *_name;
    NSString *_sortName;
    long long _storeId;
}

@property (nonatomic, readonly) BOOL hasName;
@property (nonatomic, readonly) BOOL hasSortName;
@property (nonatomic) BOOL hasStoreId;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *sortName;
@property (nonatomic) long long storeId;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasName;
- (BOOL)hasSortName;
- (BOOL)hasStoreId;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (BOOL)readFrom:(id)arg1;
- (void)setHasStoreId:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)setSortName:(id)arg1;
- (void)setStoreId:(long long)arg1;
- (id)sortName;
- (long long)storeId;
- (void)writeTo:(id)arg1;

@end
