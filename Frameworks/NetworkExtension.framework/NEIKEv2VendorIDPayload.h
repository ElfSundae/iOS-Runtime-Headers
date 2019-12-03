/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEIKEv2VendorIDPayload : NEIKEv2Payload {
    NSData * _vendorData;
}

@property (retain) NSData *vendorData;

+ (id)copyTypeDescription;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (bool)generatePayloadData;
- (bool)hasRequiredFields;
- (bool)parsePayloadData;
- (void)setVendorData:(id)arg1;
- (unsigned long long)type;
- (id)vendorData;

@end
