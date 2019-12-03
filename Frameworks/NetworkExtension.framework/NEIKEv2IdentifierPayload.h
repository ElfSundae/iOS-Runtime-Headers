/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEIKEv2IdentifierPayload : NEIKEv2Payload {
    NEIKEv2Identifier * _identifier;
}

@property (retain) NEIKEv2Identifier *identifier;

+ (id)copyTypeDescription;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (bool)generatePayloadData;
- (bool)hasRequiredFields;
- (id)identifier;
- (bool)parsePayloadData;
- (void)setIdentifier:(id)arg1;

@end
