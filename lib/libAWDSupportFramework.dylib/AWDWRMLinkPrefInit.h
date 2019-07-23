/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWRMLinkPrefInit : PBCodable <NSCopying> {
    unsigned int  _countCellular;
    unsigned int  _countWifi;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int countCellular : 1; 
        unsigned int countWifi : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int countCellular;
@property (nonatomic) unsigned int countWifi;
@property (nonatomic) BOOL hasCountCellular;
@property (nonatomic) BOOL hasCountWifi;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)countCellular;
- (unsigned int)countWifi;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCountCellular;
- (BOOL)hasCountWifi;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setCountCellular:(unsigned int)arg1;
- (void)setCountWifi:(unsigned int)arg1;
- (void)setHasCountCellular:(BOOL)arg1;
- (void)setHasCountWifi:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
