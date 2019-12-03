/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCluster : PBCodable <NSCopying> {
    GEOPlaceResult * _container;
    struct { 
        unsigned int read_indexs : 1; 
        unsigned int read_container : 1; 
        unsigned int wrote_indexs : 1; 
        unsigned int wrote_container : 1; 
    }  _flags;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _indexs;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic, retain) GEOPlaceResult *container;
@property (nonatomic, readonly) bool hasContainer;
@property (nonatomic, readonly) int*indexs;
@property (nonatomic, readonly) unsigned long long indexsCount;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)_addNoFlagsIndex:(int)arg1;
- (void)_readContainer;
- (void)_readIndexs;
- (void)addIndex:(int)arg1;
- (void)clearIndexs;
- (void)clearSensitiveFields;
- (id)container;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContainer;
- (unsigned long long)hash;
- (int)indexAtIndex:(unsigned long long)arg1;
- (int*)indexs;
- (unsigned long long)indexsCount;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setIndexs:(int*)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end
