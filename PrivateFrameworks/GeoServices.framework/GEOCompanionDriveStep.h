/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCompanionDriveStep : PBCodable <GEOCompanionManeuverStep, NSCopying> {
    int  _drivingSide;
    GEONameInfo * _exitNumber;
    struct { 
        unsigned int drivingSide : 1; 
        unsigned int junctionType : 1; 
        unsigned int maneuverType : 1; 
        unsigned int shieldType : 1; 
        unsigned int toFreeway : 1; 
    }  _has;
    struct GEOJunctionElement { int x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; } * _junctionElements;
    unsigned int  _junctionElementsCount;
    unsigned int  _junctionElementsSpace;
    int  _junctionType;
    NSMutableArray * _maneuverNames;
    int  _maneuverType;
    NSString * _shield;
    int  _shieldType;
    NSMutableArray * _signposts;
    BOOL  _toFreeway;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int drivingSide;
@property (nonatomic, retain) GEONameInfo *exitNumber;
@property (nonatomic) BOOL hasDrivingSide;
@property (nonatomic, readonly) BOOL hasExitNumber;
@property (nonatomic) BOOL hasJunctionType;
@property (nonatomic) BOOL hasManeuverType;
@property (nonatomic, readonly) BOOL hasShield;
@property (nonatomic) BOOL hasShieldType;
@property (nonatomic) BOOL hasToFreeway;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) struct GEOJunctionElement { int x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*junctionElements;
@property (nonatomic, readonly) unsigned int junctionElementsCount;
@property (nonatomic) int junctionType;
@property (nonatomic, retain) NSMutableArray *maneuverNames;
@property (nonatomic) int maneuverType;
@property (nonatomic, retain) NSString *shield;
@property (nonatomic) int shieldType;
@property (nonatomic, retain) NSMutableArray *signposts;
@property (readonly) Class superclass;
@property (nonatomic) BOOL toFreeway;
@property (nonatomic, readonly) int transportType;

+ (Class)maneuverNameType;
+ (Class)signpostType;

- (int)StringAsDrivingSide:(id)arg1;
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
- (int)drivingSide;
- (id)drivingSideAsString:(int)arg1;
- (id)exitNumber;
- (BOOL)hasDrivingSide;
- (BOOL)hasExitNumber;
- (BOOL)hasJunctionType;
- (BOOL)hasManeuverType;
- (BOOL)hasShield;
- (BOOL)hasShieldType;
- (BOOL)hasToFreeway;
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
- (void)setDrivingSide:(int)arg1;
- (void)setExitNumber:(id)arg1;
- (void)setHasDrivingSide:(BOOL)arg1;
- (void)setHasJunctionType:(BOOL)arg1;
- (void)setHasManeuverType:(BOOL)arg1;
- (void)setHasShieldType:(BOOL)arg1;
- (void)setHasToFreeway:(BOOL)arg1;
- (void)setJunctionElements:(struct GEOJunctionElement { int x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*)arg1 count:(unsigned int)arg2;
- (void)setJunctionType:(int)arg1;
- (void)setManeuverNames:(id)arg1;
- (void)setManeuverType:(int)arg1;
- (void)setShield:(id)arg1;
- (void)setShieldType:(int)arg1;
- (void)setSignposts:(id)arg1;
- (void)setToFreeway:(BOOL)arg1;
- (id)shield;
- (int)shieldType;
- (id)signpostAtIndex:(unsigned int)arg1;
- (id)signposts;
- (unsigned int)signpostsCount;
- (BOOL)toFreeway;
- (int)transportType;
- (void)writeTo:(id)arg1;

@end
