/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

@interface TKSmartCardUserInteractionForSecurePINVerification : TKSmartCardUserInteractionForPINOperation <NSSecureCoding> {
    NSData *_APDU;
    int _PINByteOffset;
    TKSmartCardPINFormat *_PINFormat;
    TKSmartCardSlot *_slot;
}

@property (retain) NSData *APDU;
@property int PINByteOffset;
@property (retain) TKSmartCardPINFormat *PINFormat;
@property TKSmartCardSlot *slot;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)APDU;
- (int)PINByteOffset;
- (id)PINFormat;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)runWithReply:(id /* block */)arg1;
- (void)setAPDU:(id)arg1;
- (void)setPINByteOffset:(int)arg1;
- (void)setPINFormat:(id)arg1;
- (void)setSlot:(id)arg1;
- (void)setSlot:(id)arg1 PINFormat:(id)arg2 APDU:(id)arg3 PINByteOffset:(int)arg4;
- (id)slot;

@end
