/* Generated by RuntimeBrowser.
 */

@protocol CDPRemoteDeviceSecretValidatorProtocol

@required

- (void)approveFromAnotherDeviceWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (void)cancelApproveFromAnotherDevice;
- (void)cancelValidationWithError:(NSError *)arg1;
- (void)resetAccountCDPState;
- (void)setSupportedEscapeOfferMask:(unsigned int)arg1;
- (unsigned int)supportedEscapeOfferMask;
- (void)supportedEscapeOfferMaskCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned int, void*
- (void)validateSecret:(void *)arg1 devices:(void *)arg2 type:(void *)arg3 withCompletion:(void *)arg4; // needs 4 arg types, found 11: NSString *, NSArray *, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, BOOL, NSError *, void*

@end
