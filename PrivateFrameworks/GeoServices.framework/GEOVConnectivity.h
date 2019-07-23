/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVConnectivity : PBCodable <NSCopying> {
    NSMutableArray * _junctions;
}

@property (nonatomic, retain) NSMutableArray *junctions;

- (void)addJunction:(id)arg1;
- (void)clearJunctions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)junctionAtIndex:(unsigned int)arg1;
- (id)junctions;
- (unsigned int)junctionsCount;
- (BOOL)readFrom:(id)arg1;
- (void)setJunctions:(id)arg1;
- (void)writeTo:(id)arg1;

@end
