/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVCharacteristics : PBCodable <NSCopying> {
    NSMutableArray * _pointCharacteristics;
}

@property (nonatomic, retain) NSMutableArray *pointCharacteristics;

- (void)addPointCharacteristic:(id)arg1;
- (void)clearPointCharacteristics;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)pointCharacteristicAtIndex:(unsigned int)arg1;
- (id)pointCharacteristics;
- (unsigned int)pointCharacteristicsCount;
- (BOOL)readFrom:(id)arg1;
- (void)setPointCharacteristics:(id)arg1;
- (void)writeTo:(id)arg1;

@end
