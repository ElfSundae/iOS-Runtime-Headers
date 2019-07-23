/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

@interface TKSmartCardPINFormat : NSObject <NSCopying, NSSecureCoding> {
    int _PINBitOffset;
    int _PINBlockByteLength;
    int _PINJustification;
    int _PINLengthBitOffset;
    int _PINLengthBitSize;
    int _charset;
    int _encoding;
    int _maxPINLength;
    int _minPINLength;
}

@property int PINBitOffset;
@property int PINBlockByteLength;
@property int PINJustification;
@property int PINLengthBitOffset;
@property int PINLengthBitSize;
@property int charset;
@property int encoding;
@property int maxPINLength;
@property int minPINLength;

+ (BOOL)supportsSecureCoding;

- (int)PINBitOffset;
- (int)PINBlockByteLength;
- (int)PINJustification;
- (int)PINLengthBitOffset;
- (int)PINLengthBitSize;
- (int)charset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (int)encoding;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (int)maxPINLength;
- (int)minPINLength;
- (void)setCharset:(int)arg1;
- (void)setEncoding:(int)arg1;
- (void)setMaxPINLength:(int)arg1;
- (void)setMinPINLength:(int)arg1;
- (void)setPINBitOffset:(int)arg1;
- (void)setPINBlockByteLength:(int)arg1;
- (void)setPINJustification:(int)arg1;
- (void)setPINLengthBitOffset:(int)arg1;
- (void)setPINLengthBitSize:(int)arg1;

@end
