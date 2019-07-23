/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPSuggestionEntry : PBCodable <NSCopying> {
    NSMutableArray *_displayLines;
    struct { 
        unsigned int serverSearchCompletionEntryIndex : 1; 
        unsigned int serverSearchCompletionSectionIndex : 1; 
        unsigned int type : 1; 
    } _has;
    unsigned int _serverSearchCompletionEntryIndex;
    unsigned int _serverSearchCompletionSectionIndex;
    int _type;
}

@property (nonatomic, retain) NSMutableArray *displayLines;
@property (nonatomic) BOOL hasServerSearchCompletionEntryIndex;
@property (nonatomic) BOOL hasServerSearchCompletionSectionIndex;
@property (nonatomic) BOOL hasType;
@property (nonatomic) unsigned int serverSearchCompletionEntryIndex;
@property (nonatomic) unsigned int serverSearchCompletionSectionIndex;
@property (nonatomic) int type;

- (void)addDisplayLine:(id)arg1;
- (void)clearDisplayLines;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayLineAtIndex:(unsigned int)arg1;
- (id)displayLines;
- (unsigned int)displayLinesCount;
- (BOOL)hasServerSearchCompletionEntryIndex;
- (BOOL)hasServerSearchCompletionSectionIndex;
- (BOOL)hasType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)serverSearchCompletionEntryIndex;
- (unsigned int)serverSearchCompletionSectionIndex;
- (void)setDisplayLines:(id)arg1;
- (void)setHasServerSearchCompletionEntryIndex:(BOOL)arg1;
- (void)setHasServerSearchCompletionSectionIndex:(BOOL)arg1;
- (void)setHasType:(BOOL)arg1;
- (void)setServerSearchCompletionEntryIndex:(unsigned int)arg1;
- (void)setServerSearchCompletionSectionIndex:(unsigned int)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (void)writeTo:(id)arg1;

@end
