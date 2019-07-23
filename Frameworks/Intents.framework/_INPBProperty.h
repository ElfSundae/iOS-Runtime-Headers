/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBProperty : PBCodable <NSCopying, NSSecureCoding, _INPBProperty> {
    struct { }  _has;
    _INPBIntentSlotValue * _payload;
    NSString * _role;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasPayload;
@property (nonatomic, readonly) bool hasRole;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentSlotValue *payload;
@property (nonatomic, copy) NSString *role;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasPayload;
- (bool)hasRole;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)payload;
- (bool)readFrom:(id)arg1;
- (id)role;
- (void)setPayload:(id)arg1;
- (void)setRole:(id)arg1;
- (void)writeTo:(id)arg1;

@end
