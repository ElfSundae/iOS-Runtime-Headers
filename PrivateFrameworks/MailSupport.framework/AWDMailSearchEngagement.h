/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

@interface AWDMailSearchEngagement : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _atoms;
    NSMutableArray * _engagements;
    struct { 
        unsigned int numSearchResults : 1; 
        unsigned int searchScope : 1; 
    }  _has;
    unsigned long long  _numSearchResults;
    int  _searchScope;
}

@property (nonatomic, readonly) int*atoms;
@property (nonatomic, readonly) unsigned int atomsCount;
@property (nonatomic, retain) NSMutableArray *engagements;
@property (nonatomic) BOOL hasNumSearchResults;
@property (nonatomic) BOOL hasSearchScope;
@property (nonatomic) unsigned long long numSearchResults;
@property (nonatomic) int searchScope;

+ (Class)engagementsType;

- (void).cxx_destruct;
- (int)StringAsAtoms:(id)arg1;
- (int)StringAsSearchScope:(id)arg1;
- (void)addAtoms:(int)arg1;
- (void)addEngagements:(id)arg1;
- (int*)atoms;
- (id)atomsAsString:(int)arg1;
- (int)atomsAtIndex:(unsigned int)arg1;
- (unsigned int)atomsCount;
- (void)clearAtoms;
- (void)clearEngagements;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)engagements;
- (id)engagementsAtIndex:(unsigned int)arg1;
- (unsigned int)engagementsCount;
- (BOOL)hasNumSearchResults;
- (BOOL)hasSearchScope;
- (unsigned int)hash;
- (id)initWithAtoms:(id)arg1 searchScope:(BOOL)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)numSearchResults;
- (BOOL)readFrom:(id)arg1;
- (int)searchScope;
- (id)searchScopeAsString:(int)arg1;
- (void)setAtoms:(int*)arg1 count:(unsigned int)arg2;
- (void)setEngagements:(id)arg1;
- (void)setHasNumSearchResults:(BOOL)arg1;
- (void)setHasSearchScope:(BOOL)arg1;
- (void)setNumSearchResults:(unsigned long long)arg1;
- (void)setSearchScope:(int)arg1;
- (void)writeTo:(id)arg1;

@end
