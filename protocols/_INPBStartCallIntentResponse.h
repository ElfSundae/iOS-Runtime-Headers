/* Generated by RuntimeBrowser.
 */

@protocol _INPBStartCallIntentResponse <NSObject>

@required

- (int)StringAsConfirmationReason:(NSString *)arg1;
- (int)confirmationReason;
- (NSString *)confirmationReasonAsString:(int)arg1;
- (bool)hasConfirmationReason;
- (bool)hasShouldDoEmergencyCountdown;
- (void)setConfirmationReason:(int)arg1;
- (void)setHasConfirmationReason:(bool)arg1;
- (void)setHasShouldDoEmergencyCountdown:(bool)arg1;
- (void)setShouldDoEmergencyCountdown:(bool)arg1;
- (bool)shouldDoEmergencyCountdown;

@end