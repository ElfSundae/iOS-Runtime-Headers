/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTransitSignInstruction : PBCodable <NSCopying> {
    NSMutableArray *_commandFormatteds;
    NSMutableArray *_commands;
    NSMutableArray *_detailFormatteds;
    NSMutableArray *_details;
    NSMutableArray *_noticeFormatteds;
    NSMutableArray *_notices;
}

@property (nonatomic, retain) NSMutableArray *commandFormatteds;
@property (nonatomic, retain) NSMutableArray *commands;
@property (nonatomic, retain) NSMutableArray *detailFormatteds;
@property (nonatomic, retain) NSMutableArray *details;
@property (nonatomic, retain) NSMutableArray *noticeFormatteds;
@property (nonatomic, retain) NSMutableArray *notices;

- (void)addCommand:(id)arg1;
- (void)addCommandFormatted:(id)arg1;
- (void)addDetail:(id)arg1;
- (void)addDetailFormatted:(id)arg1;
- (void)addNotice:(id)arg1;
- (void)addNoticeFormatted:(id)arg1;
- (void)clearCommandFormatteds;
- (void)clearCommands;
- (void)clearDetailFormatteds;
- (void)clearDetails;
- (void)clearNoticeFormatteds;
- (void)clearNotices;
- (id)commandAtIndex:(unsigned int)arg1;
- (id)commandFormattedAtIndex:(unsigned int)arg1;
- (id)commandFormatteds;
- (unsigned int)commandFormattedsCount;
- (id)commands;
- (unsigned int)commandsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)detailAtIndex:(unsigned int)arg1;
- (id)detailFormattedAtIndex:(unsigned int)arg1;
- (id)detailFormatteds;
- (unsigned int)detailFormattedsCount;
- (id)details;
- (unsigned int)detailsCount;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)noticeAtIndex:(unsigned int)arg1;
- (id)noticeFormattedAtIndex:(unsigned int)arg1;
- (id)noticeFormatteds;
- (unsigned int)noticeFormattedsCount;
- (id)notices;
- (unsigned int)noticesCount;
- (BOOL)readFrom:(id)arg1;
- (void)setCommandFormatteds:(id)arg1;
- (void)setCommands:(id)arg1;
- (void)setDetailFormatteds:(id)arg1;
- (void)setDetails:(id)arg1;
- (void)setNoticeFormatteds:(id)arg1;
- (void)setNotices:(id)arg1;
- (void)writeTo:(id)arg1;

@end
