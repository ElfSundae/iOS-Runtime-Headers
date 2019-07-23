/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBRunWorkflowIntent : PBCodable <NSCopying, NSSecureCoding, _INPBRunWorkflowIntent> {
    struct { }  _has;
    _INPBIntentMetadata * _intentMetadata;
    _INPBDataString * _workflow;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasWorkflow;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBDataString *workflow;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasIntentMetadata;
- (bool)hasWorkflow;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setWorkflow:(id)arg1;
- (id)workflow;
- (void)writeTo:(id)arg1;

@end
