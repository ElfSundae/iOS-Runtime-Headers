/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

@interface MapsSuggestionsEntry : NSObject <MapsSuggestionsObject, NSCopying, NSSecureCoding> {
    bool  _deleted;
    NSDate * _expires;
    struct GEOMapItemStorage { Class x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; unsigned int x12; unsigned int x13; struct os_unfair_lock_s { unsigned int x_14_1_1; } x14; struct { unsigned int x_15_1_1 : 1; unsigned int x_15_1_2 : 1; unsigned int x_15_1_3 : 1; unsigned int x_15_1_4 : 1; unsigned int x_15_1_5 : 1; unsigned int x_15_1_6 : 1; unsigned int x_15_1_7 : 1; unsigned int x_15_1_8 : 1; unsigned int x_15_1_9 : 1; unsigned int x_15_1_10 : 1; unsigned int x_15_1_11 : 1; unsigned int x_15_1_12 : 1; unsigned int x_15_1_13 : 1; unsigned int x_15_1_14 : 1; unsigned int x_15_1_15 : 1; unsigned int x_15_1_16 : 1; unsigned int x_15_1_17 : 1; unsigned int x_15_1_18 : 1; } x15; } * _geoMapItem;
    NSData * _iconData;
    struct NSString { Class x1; } * _originatingSourceName;
    NSMutableDictionary * _sourceSpecificInfo;
    NSString * _subtitle;
    NSString * _subtitleWhenLocked;
    NSString * _title;
    NSString * _titleWhenLocked;
    long long  _type;
    NSMutableSet * _typeHistory;
    NSString * _undecoratedSubtitle;
    NSString * _undecoratedSubtitleWhenLocked;
    NSString * _undecoratedTitle;
    NSString * _undecoratedTitleWhenLocked;
    double  _weight;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool deleted;
@property (nonatomic, readonly, copy) NSString *description;
@property (nonatomic, retain) NSDate *expires;
@property (nonatomic, readonly, copy) NSString *fullDescription;
@property (nonatomic, retain) GEOMapItemStorage *geoMapItem;
@property (nonatomic, readonly) bool hasExpired;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSData *iconData;
@property (nonatomic, readonly) bool isPureShortcut;
@property (nonatomic, readonly) bool isShortcut;
@property (nonatomic, readonly) bool isShortcutForSetup;
@property (nonatomic, retain) NSString *originatingSourceName;
@property (nonatomic, readonly, copy) NSString *serializedBase64String;
@property (nonatomic, readonly, copy) NSString *serializedHexString;
@property (nonatomic, readonly, copy) NSString *shortDescription;
@property (nonatomic, readonly) NSString *shortcutIdentifier;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) NSString *subtitleWhenLocked;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *titleWhenLocked;
@property (nonatomic, readonly) long long type;
@property (nonatomic, retain) NSString *undecoratedSubtitle;
@property (nonatomic, retain) NSString *undecoratedSubtitleWhenLocked;
@property (nonatomic, retain) NSString *undecoratedTitle;
@property (nonatomic, retain) NSString *undecoratedTitleWhenLocked;
@property (nonatomic, readonly) NSString *uniqueIdentifier;
@property (nonatomic, readonly) NSString *uniqueName;
@property (nonatomic) double weight;

+ (int)defaultDirectionsTransportType;
+ (id)entryFromSerializedBase64String:(id)arg1 hasPrefix:(bool)arg2;
+ (id)entryFromSerializedHexString:(id)arg1 hasPrefix:(bool)arg2;
+ (id)entryFromSerializedString:(id)arg1;
+ (id)entryWithData:(id)arg1;
+ (id)entryWithType:(long long)arg1 title:(id)arg2 subtitle:(id)arg3 weight:(double)arg4 expires:(id)arg5 sourceSpecificInfo:(id)arg6;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)ETAForKey:(id)arg1;
- (id)URLForKey:(id)arg1;
- (id)UUIDForKey:(id)arg1;
- (void)_overrideType:(long long)arg1;
- (void)_setValue:(id)arg1 forKey:(id)arg2 class:(Class)arg3;
- (id)_valueForKey:(id)arg1 class:(Class)arg2;
- (bool)_wasEverOfType:(long long)arg1;
- (bool)_wasEverOneOfTypes:(id)arg1;
- (long long)availableRemovalBehaviors;
- (bool)booleanForKey:(id)arg1;
- (bool)booleanForKey:(id)arg1 is:(bool)arg2;
- (id)contacts;
- (bool)containsKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)dateForKey:(id)arg1;
- (bool)deleted;
- (id)departingAirportCode;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endTime;
- (id)expires;
- (bool)expiresBeforeEntry:(id)arg1;
- (id)fullDescription;
- (id)fullFlightCode;
- (struct GEOMapItemStorage { Class x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; unsigned int x12; unsigned int x13; struct os_unfair_lock_s { unsigned int x_14_1_1; } x14; struct { unsigned int x_15_1_1 : 1; unsigned int x_15_1_2 : 1; unsigned int x_15_1_3 : 1; unsigned int x_15_1_4 : 1; unsigned int x_15_1_5 : 1; unsigned int x_15_1_6 : 1; unsigned int x_15_1_7 : 1; unsigned int x_15_1_8 : 1; unsigned int x_15_1_9 : 1; unsigned int x_15_1_10 : 1; unsigned int x_15_1_11 : 1; unsigned int x_15_1_12 : 1; unsigned int x_15_1_13 : 1; unsigned int x_15_1_14 : 1; unsigned int x_15_1_15 : 1; unsigned int x_15_1_16 : 1; unsigned int x_15_1_17 : 1; unsigned int x_15_1_18 : 1; } x15; }*)geoMapItem;
- (bool)hasEndTime;
- (bool)hasEssentialFlightInfo;
- (bool)hasExpired;
- (bool)hasFullFlightInfoAndGate;
- (bool)hasStartAndEndTime;
- (bool)hasStartTime;
- (unsigned long long)hash;
- (id)iconData;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 title:(id)arg2;
- (id)initWithType:(long long)arg1 title:(id)arg2 subtitle:(id)arg3 weight:(double)arg4 expires:(id)arg5 geoMapItem:(struct GEOMapItemStorage { Class x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; unsigned int x12; unsigned int x13; struct os_unfair_lock_s { unsigned int x_14_1_1; } x14; struct { unsigned int x_15_1_1 : 1; unsigned int x_15_1_2 : 1; unsigned int x_15_1_3 : 1; unsigned int x_15_1_4 : 1; unsigned int x_15_1_5 : 1; unsigned int x_15_1_6 : 1; unsigned int x_15_1_7 : 1; unsigned int x_15_1_8 : 1; unsigned int x_15_1_9 : 1; unsigned int x_15_1_10 : 1; unsigned int x_15_1_11 : 1; unsigned int x_15_1_12 : 1; unsigned int x_15_1_13 : 1; unsigned int x_15_1_14 : 1; unsigned int x_15_1_15 : 1; unsigned int x_15_1_16 : 1; unsigned int x_15_1_17 : 1; unsigned int x_15_1_18 : 1; } x15; }*)arg6 sourceSpecificInfo:(id)arg7;
- (id)initWithType:(long long)arg1 title:(id)arg2 subtitle:(id)arg3 weight:(double)arg4 expires:(id)arg5 sourceSpecificInfo:(id)arg6;
- (long long)integerForKey:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEntry:(id)arg1;
- (bool)isPureShortcut;
- (bool)isShortcut;
- (bool)isShortcutForSetup;
- (struct NSData { Class x1; }*)mapItemHandleData;
- (void)mergeFromSuggestionEntry:(id)arg1 behavior:(unsigned long long)arg2;
- (void)mergeFromSuggestionEntry:(id)arg1 behavior:(unsigned long long)arg2 protectTitles:(bool)arg3 protectTitleDecorations:(bool)arg4 protectMapItem:(bool)arg5 protectWeight:(bool)arg6 protectExpiration:(bool)arg7 protectIcon:(bool)arg8;
- (void)mergeSpecificsFromSuggestionEntry:(id)arg1 behavior:(unsigned long long)arg2;
- (id)numberForKey:(id)arg1;
- (struct NSString { Class x1; }*)originatingSourceName;
- (void)replaceByEntry:(id)arg1;
- (void)replaceByEntry:(id)arg1 forceDecoratedOverwrites:(bool)arg2;
- (void)resetAvailableRemovalBehavior:(long long)arg1;
- (id)serializedBase64String;
- (id)serializedHexString;
- (void)setAvailableRemovalBehavior:(long long)arg1;
- (void)setBoolean:(bool)arg1 forKey:(id)arg2;
- (void)setContacts:(id)arg1;
- (void)setDate:(id)arg1 forKey:(id)arg2;
- (void)setDeleted:(bool)arg1;
- (void)setETA:(id)arg1 forKey:(id)arg2;
- (void)setExpires:(id)arg1;
- (void)setGeoMapItem:(struct GEOMapItemStorage { Class x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; unsigned int x12; unsigned int x13; struct os_unfair_lock_s { unsigned int x_14_1_1; } x14; struct { unsigned int x_15_1_1 : 1; unsigned int x_15_1_2 : 1; unsigned int x_15_1_3 : 1; unsigned int x_15_1_4 : 1; unsigned int x_15_1_5 : 1; unsigned int x_15_1_6 : 1; unsigned int x_15_1_7 : 1; unsigned int x_15_1_8 : 1; unsigned int x_15_1_9 : 1; unsigned int x_15_1_10 : 1; unsigned int x_15_1_11 : 1; unsigned int x_15_1_12 : 1; unsigned int x_15_1_13 : 1; unsigned int x_15_1_14 : 1; unsigned int x_15_1_15 : 1; unsigned int x_15_1_16 : 1; unsigned int x_15_1_17 : 1; unsigned int x_15_1_18 : 1; } x15; }*)arg1;
- (void)setIconData:(id)arg1;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (void)setMapItemHandleData:(struct NSData { Class x1; }*)arg1;
- (void)setNumber:(id)arg1 forKey:(id)arg2;
- (void)setOriginatingSourceName:(struct NSString { Class x1; }*)arg1;
- (void)setSourceSpecificInfo:(id)arg1;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (void)setStringArray:(struct NSArray { Class x1; }*)arg1 forKey:(id)arg2;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitleWhenLocked:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleWhenLocked:(id)arg1;
- (void)setURL:(id)arg1 forKey:(id)arg2;
- (void)setUUID:(id)arg1 forKey:(id)arg2;
- (void)setUndecoratedSubtitle:(id)arg1;
- (void)setUndecoratedSubtitleWhenLocked:(id)arg1;
- (void)setUndecoratedTitle:(id)arg1;
- (void)setUndecoratedTitleWhenLocked:(id)arg1;
- (void)setWeight:(double)arg1;
- (id)shortDescription;
- (id)shortcutIdentifier;
- (id)sourceSpecificInfo;
- (id)startTime;
- (bool)startsBeforeEntry:(id)arg1;
- (struct NSArray { Class x1; }*)stringArrayForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)subtitle;
- (id)subtitleWhenLocked;
- (id)title;
- (id)titleWhenLocked;
- (long long)type;
- (unsigned long long)uint64ForKey:(id)arg1;
- (id)undecoratedSubtitle;
- (id)undecoratedSubtitleWhenLocked;
- (id)undecoratedTitle;
- (id)undecoratedTitleWhenLocked;
- (id)uniqueIdentifier;
- (struct NSString { Class x1; }*)uniqueName;
- (bool)updateUndecoratedSubtitle:(id)arg1;
- (bool)updateUndecoratedTitle:(id)arg1;
- (bool)wasEverOfType:(long long)arg1;
- (bool)wasEverOneOfTypes:(id)arg1;
- (double)weight;

@end
