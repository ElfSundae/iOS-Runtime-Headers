/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface SISchemaUIStateTransition : PBCodable <NSSecureCoding, SISchemaUIStateTransition> {
    int  _currentState;
    int  _previousState;
    int  _siriPresentationType;
}

@property (nonatomic) int currentState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int previousState;
@property (nonatomic) int siriPresentationType;
@property (readonly) Class superclass;

- (int)currentState;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)previousState;
- (bool)readFrom:(id)arg1;
- (void)setCurrentState:(int)arg1;
- (void)setPreviousState:(int)arg1;
- (void)setSiriPresentationType:(int)arg1;
- (int)siriPresentationType;
- (void)writeTo:(id)arg1;

@end