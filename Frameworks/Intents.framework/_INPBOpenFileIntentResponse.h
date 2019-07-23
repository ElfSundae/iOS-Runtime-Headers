/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBOpenFileIntentResponse : PBCodable <NSCopying> {
    NSMutableArray * _entities;
    struct { 
        unsigned int success : 1; 
    }  _has;
    _INPBInteger * _numResults;
    _INPBString * _query;
    BOOL  _success;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *entities;
@property (nonatomic, readonly) BOOL hasNumResults;
@property (nonatomic, readonly) BOOL hasQuery;
@property (nonatomic) BOOL hasSuccess;
@property (nonatomic, retain) _INPBInteger *numResults;
@property (nonatomic, retain) _INPBString *query;
@property (nonatomic) BOOL success;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)entitiesType;
+ (id)options;

- (void).cxx_destruct;
- (void)addEntities:(id)arg1;
- (void)clearEntities;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entities;
- (id)entitiesAtIndex:(unsigned int)arg1;
- (unsigned int)entitiesCount;
- (BOOL)hasNumResults;
- (BOOL)hasQuery;
- (BOOL)hasSuccess;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)numResults;
- (id)query;
- (BOOL)readFrom:(id)arg1;
- (void)setEntities:(id)arg1;
- (void)setHasSuccess:(BOOL)arg1;
- (void)setNumResults:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setSuccess:(BOOL)arg1;
- (BOOL)success;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
