/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTPBFullBulletinList : PBCodable <NSCopying> {
    NSMutableArray *_sectionBulletinLists;
}

@property (nonatomic, retain) NSMutableArray *sectionBulletinLists;

- (void).cxx_destruct;
- (void)addSectionBulletinList:(id)arg1;
- (void)clearSectionBulletinLists;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)sectionBulletinListAtIndex:(unsigned int)arg1;
- (id)sectionBulletinLists;
- (unsigned int)sectionBulletinListsCount;
- (void)setSectionBulletinLists:(id)arg1;
- (void)writeTo:(id)arg1;

@end
