/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDHoneybeeSignature : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int instances : 1; 
    } _has;
    int _instances;
    NSMutableArray *_keywords;
    NSString *_radarAttachmentFilename;
    NSMutableArray *_radarAttachmentTypes;
    NSString *_radarAttachmentUUID;
    NSString *_radarComponent;
    NSString *_radarDescription;
    NSString *_radarSignature;
    NSString *_radarTitle;
    NSString *_radarVersion;
    unsigned long long _timestamp;
}

@property (nonatomic) BOOL hasInstances;
@property (nonatomic, readonly) BOOL hasRadarAttachmentFilename;
@property (nonatomic, readonly) BOOL hasRadarAttachmentUUID;
@property (nonatomic, readonly) BOOL hasRadarComponent;
@property (nonatomic, readonly) BOOL hasRadarDescription;
@property (nonatomic, readonly) BOOL hasRadarSignature;
@property (nonatomic, readonly) BOOL hasRadarTitle;
@property (nonatomic, readonly) BOOL hasRadarVersion;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int instances;
@property (nonatomic, retain) NSMutableArray *keywords;
@property (nonatomic, retain) NSString *radarAttachmentFilename;
@property (nonatomic, retain) NSMutableArray *radarAttachmentTypes;
@property (nonatomic, retain) NSString *radarAttachmentUUID;
@property (nonatomic, retain) NSString *radarComponent;
@property (nonatomic, retain) NSString *radarDescription;
@property (nonatomic, retain) NSString *radarSignature;
@property (nonatomic, retain) NSString *radarTitle;
@property (nonatomic, retain) NSString *radarVersion;
@property (nonatomic) unsigned long long timestamp;

+ (Class)keywordsType;
+ (Class)radarAttachmentTypesType;

- (void)addKeywords:(id)arg1;
- (void)addRadarAttachmentTypes:(id)arg1;
- (void)clearKeywords;
- (void)clearRadarAttachmentTypes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasInstances;
- (BOOL)hasRadarAttachmentFilename;
- (BOOL)hasRadarAttachmentUUID;
- (BOOL)hasRadarComponent;
- (BOOL)hasRadarDescription;
- (BOOL)hasRadarSignature;
- (BOOL)hasRadarTitle;
- (BOOL)hasRadarVersion;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (int)instances;
- (BOOL)isEqual:(id)arg1;
- (id)keywords;
- (id)keywordsAtIndex:(unsigned int)arg1;
- (unsigned int)keywordsCount;
- (void)mergeFrom:(id)arg1;
- (id)radarAttachmentFilename;
- (id)radarAttachmentTypes;
- (id)radarAttachmentTypesAtIndex:(unsigned int)arg1;
- (unsigned int)radarAttachmentTypesCount;
- (id)radarAttachmentUUID;
- (id)radarComponent;
- (id)radarDescription;
- (id)radarSignature;
- (id)radarTitle;
- (id)radarVersion;
- (BOOL)readFrom:(id)arg1;
- (void)setHasInstances:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setInstances:(int)arg1;
- (void)setKeywords:(id)arg1;
- (void)setRadarAttachmentFilename:(id)arg1;
- (void)setRadarAttachmentTypes:(id)arg1;
- (void)setRadarAttachmentUUID:(id)arg1;
- (void)setRadarComponent:(id)arg1;
- (void)setRadarDescription:(id)arg1;
- (void)setRadarSignature:(id)arg1;
- (void)setRadarTitle:(id)arg1;
- (void)setRadarVersion:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
