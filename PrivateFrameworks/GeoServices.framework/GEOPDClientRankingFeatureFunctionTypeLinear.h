/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDClientRankingFeatureFunctionTypeLinear : PBCodable <NSCopying> {
    float  _featureMaxRelativeValue;
    float  _featureMeanValue;
    float  _featureWeight;
    struct { 
        unsigned int has_featureMaxRelativeValue : 1; 
        unsigned int has_featureMeanValue : 1; 
        unsigned int has_featureWeight : 1; 
    }  _flags;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) float featureMaxRelativeValue;
@property (nonatomic) float featureMeanValue;
@property (nonatomic) float featureWeight;
@property (nonatomic) bool hasFeatureMaxRelativeValue;
@property (nonatomic) bool hasFeatureMeanValue;
@property (nonatomic) bool hasFeatureWeight;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (float)featureMaxRelativeValue;
- (float)featureMeanValue;
- (float)featureWeight;
- (bool)hasFeatureMaxRelativeValue;
- (bool)hasFeatureMeanValue;
- (bool)hasFeatureWeight;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFeatureMaxRelativeValue:(float)arg1;
- (void)setFeatureMeanValue:(float)arg1;
- (void)setFeatureWeight:(float)arg1;
- (void)setHasFeatureMaxRelativeValue:(bool)arg1;
- (void)setHasFeatureMeanValue:(bool)arg1;
- (void)setHasFeatureWeight:(bool)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end