/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
 */

@interface NFCNDEFMessage : NSObject <NSSecureCoding> {
    NSArray * _records;
}

@property (nonatomic, copy) NSArray *records;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEmptyNdefMessage;
- (id)initWithNDEFPayloads:(id)arg1;
- (id)initWithNDEFRecords:(id)arg1;
- (id)initWithNFNdefMessage:(id)arg1;
- (id)records;
- (void)setRecords:(id)arg1;

@end
