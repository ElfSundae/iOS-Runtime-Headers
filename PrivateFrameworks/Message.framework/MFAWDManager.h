/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFAWDManager : NSObject {
    AWDServerConnection * _awdServerConnection;
}

@property (nonatomic, retain) AWDServerConnection *awdServerConnection;

+ (id)sharedManager;
+ (void)submitMailCannotGetMailError:(id)arg1 forAccount:(id)arg2 submitNetworkDiags:(BOOL)arg3;
+ (void)submitMailCannotGetMailErrorDueToErrorDomainCode:(int)arg1 submitNetworkDiags:(BOOL)arg2;
+ (void)submitMailCannotGetMailErrorDueToMailErrorCode:(int)arg1 submitNetworkDiags:(BOOL)arg2;

- (void).cxx_destruct;
- (id)_statisticsKindFromAccount:(id)arg1;
- (BOOL)_submitWithIdentifier:(unsigned long)arg1 metricGenerator:(id /* block */)arg2;
- (id)awdServerConnection;
- (id)init;
- (int)mailErrorCodeFromErrorDomainCode:(int)arg1;
- (id)mailErrorFromErrorDomainCode:(int)arg1;
- (int)mailErrorReportProtocolFromAccount:(id)arg1;
- (int)mailErrorReportProtocolFromAccountStatisticsKind:(id)arg1;
- (int)mailErrorReportProviderFromAccount:(id)arg1;
- (int)mailErrorReportProviderFromAccountStatisticsKind:(id)arg1;
- (void)registerMetrics;
- (void)setAwdServerConnection:(id)arg1;
- (void)submitMailCannotGetMailError:(id)arg1 forAccount:(id)arg2 submitNetworkDiags:(BOOL)arg3;
- (void)submitMailCannotGetMailErrorDueToErrorDomainCode:(int)arg1 submitNetworkDiags:(BOOL)arg2;
- (void)submitMailCannotGetMailErrorDueToMailErrorCode:(int)arg1 submitNetworkDiags:(BOOL)arg2;
- (void)submitMailCannotGetMailErrorForHostname:(id)arg1 protocol:(int)arg2 provider:(int)arg3 mailError:(id)arg4 submitNetworkDiags:(BOOL)arg5;
- (void)submitMailCannotGetMailErrorForHostname:(id)arg1 protocol:(int)arg2 provider:(int)arg3 mfErrorDomainCode:(int)arg4 submitNetworkDiags:(BOOL)arg5;
- (BOOL)submitMailMessageDisplayErrorReport:(id)arg1;
- (void)submitMailNetworkDiagnosticsReport;

@end
