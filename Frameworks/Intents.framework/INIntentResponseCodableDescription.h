/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INIntentResponseCodableDescription : INRootCodableDescription {
    NSString * _attributeKeyPrefix;
    NSString * _attributesKeyPrefix;
    NSMutableDictionary * _intentResponseCodableCodes;
    NSString * _outputAttributeName;
    NSArray * _responseCodes;
}

@property (setter=_setOutputAttributeName:, nonatomic, retain) NSString *_outputAttributeName;
@property (nonatomic, readonly) INCodableAttribute *outputAttribute;
@property (nonatomic, copy) NSArray *responseCodes;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_attributeKeyPrefix;
- (id)_attributesKeyPrefix;
- (id)_ignoredAttributeTags;
- (id)_outputAttributeName;
- (void)_setOutputAttributeName:(id)arg1;
- (id)attributes;
- (id)dictionaryRepresentationForLanguage:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)intentResponseCodeWithCode:(long long)arg1;
- (id)keyPrefix;
- (id)outputAttribute;
- (id)responseCodes;
- (void)setResponseCodes:(id)arg1;
- (void)updateWithDictionary:(id)arg1;

@end
