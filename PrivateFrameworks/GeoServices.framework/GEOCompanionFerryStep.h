/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCompanionFerryStep : PBCodable <GEOCompanionManeuverStep, NSCopying> {
    struct { 
        unsigned int junctionType : 1; 
        unsigned int maneuverType : 1; 
    }  _has;
    struct GEOJunctionElement { int x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; } * _junctionElements;
    unsigned int  _junctionElementsCount;
    unsigned int  _junctionElementsSpace;
    int  _junctionType;
    NSMutableArray * _maneuverNames;
    int  _maneuverType;
    NSMutableArray * _signposts;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasJunctionType;
@property (nonatomic) BOOL hasManeuverType;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) struct GEOJunctionElement { int x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*junctionElements;
@property (nonatomic, readonly) unsigned int junctionElementsCount;
@property (nonatomic) int junctionType;
@property (nonatomic, retain) NSMutableArray *maneuverNames;
@property (nonatomic) int maneuverType;
@property (nonatomic, retain) NSMutableArray *signposts;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int transportType;

+ (Class)maneuverNameType;
+ (Class)signpostType;

- (int)StringAsJunctionType:(id)arg1;
- (int)StringAsManeuverType:(id)arg1;
- (void)addJunctionElement:(struct GEOJunctionElement { int x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })arg1;
- (void)addManeuverName:(id)arg1;
- (void)addSignpost:(id)arg1;
- (void)clearJunctionElements;
- (void)clearManeuverNames;
- (void)clearSignposts;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasJunctionType;
- (BOOL)hasManeuverType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (struct GEOJunctionElement { int x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })junctionElementAtIndex:(unsigned int)arg1;
- (struct GEOJunctionElement { int x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*)junctionElements;
- (unsigned int)junctionElementsCount;
- (int)junctionType;
- (id)junctionTypeAsString:(int)arg1;
- (id)maneuverNameAtIndex:(unsigned int)arg1;
- (id)maneuverNames;
- (unsigned int)maneuverNamesCount;
- (int)maneuverType;
- (id)maneuverTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasJunctionType:(BOOL)arg1;
- (void)setHasManeuverType:(BOOL)arg1;
- (void)setJunctionElements:(struct GEOJunctionElement { int x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*)arg1 count:(unsigned int)arg2;
- (void)setJunctionType:(int)arg1;
- (void)setManeuverNames:(id)arg1;
- (void)setManeuverType:(int)arg1;
- (void)setSignposts:(id)arg1;
- (id)signpostAtIndex:(unsigned int)arg1;
- (id)signposts;
- (unsigned int)signpostsCount;
- (int)transportType;
- (void)writeTo:(id)arg1;

@end
