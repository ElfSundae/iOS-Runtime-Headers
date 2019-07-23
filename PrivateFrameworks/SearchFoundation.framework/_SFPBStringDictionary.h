/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBStringDictionary : PBCodable <NSSecureCoding, _SFPBStringDictionary> {
    NSArray * _keyValues;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *keyValues;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addKeyValues:(id)arg1;
- (void)clearKeyValues;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithNSDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)keyValues;
- (id)keyValuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)keyValuesCount;
- (bool)readFrom:(id)arg1;
- (void)setKeyValues:(id)arg1;
- (void)writeTo:(id)arg1;

@end
