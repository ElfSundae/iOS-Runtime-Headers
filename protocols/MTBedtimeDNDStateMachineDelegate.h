/* Generated by RuntimeBrowser.
 */

@protocol MTBedtimeDNDStateMachineDelegate <MTStateMachineDelegate>

@required

- (bool)stateMachine:(MTBedtimeDNDStateMachine *)arg1 disengageBedtimeDNDUserRequested:(bool)arg2;
- (bool)stateMachine:(MTBedtimeDNDStateMachine *)arg1 engageBedtimeDNDUntilDate:(NSDate *)arg2 userEngaged:(bool)arg3;
- (void)stateMachine:(MTBedtimeDNDStateMachine *)arg1 keepBedtimeDNDOffUntilDate:(NSDate *)arg2;
- (void)stateMachine:(MTBedtimeDNDStateMachine *)arg1 scheduleUpdateForSecondsFromNow:(double)arg2;
- (void)stateMachineClearKeepBedtimeDNDOff:(MTBedtimeDNDStateMachine *)arg1;

@end
