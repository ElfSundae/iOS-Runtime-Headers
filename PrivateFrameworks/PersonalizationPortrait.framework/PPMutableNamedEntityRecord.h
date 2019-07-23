/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

@interface PPMutableNamedEntityRecord : PPNamedEntityRecord

@property (nonatomic) unsigned long long algorithm;
@property (nonatomic) unsigned char changeType;
@property (nonatomic) double decayRate;
@property (nonatomic, retain) PPNamedEntity *entity;
@property (nonatomic) unsigned long long extractionAssetVersion;
@property (nonatomic, retain) NSString *extractionOsBuild;
@property (nonatomic) double initialScore;
@property (nonatomic, retain) PPSource *source;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setAlgorithm:(unsigned long long)arg1;
- (void)setChangeType:(unsigned char)arg1;
- (void)setDecayRate:(double)arg1;
- (void)setEntity:(id)arg1;
- (void)setExtractionAssetVersion:(unsigned long long)arg1;
- (void)setExtractionOsBuild:(id)arg1;
- (void)setInitialScore:(double)arg1;
- (void)setSource:(id)arg1;

@end
