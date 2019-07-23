/* Generated by RuntimeBrowser.
 */

@protocol NPTunnelDelegate <NSObject>

@required

- (NWTCPConnection *)tunnel:(NPTunnel *)arg1 openConnectionToEndpoint:(NWEndpoint *)arg2 enableTFO:(BOOL)arg3 enableNoTFOCookie:(BOOL)arg4 initialData:(NSData *)arg5 enableMultipath:(BOOL)arg6 enableTLS:(BOOL)arg7 TLSParameters:(NWTLSParameters *)arg8 TLSDelegate:(id <NWTCPConnectionAuthenticationDelegate>)arg9 URL:(NSURL *)arg10;
- (NWUDPSession *)tunnel:(NPTunnel *)arg1 openSessionToEndpoint:(NWEndpoint *)arg2 fromEndpoint:(NWHostEndpoint *)arg3;
- (void)tunnelDidConnect;
- (void)tunnelDidDisconnect;
- (unsigned int)tunnelGetCurrentInterfaceIndex:(NPTunnel *)arg1;
- (int)tunnelGetCurrentMTU:(NPTunnel *)arg1;
- (BOOL)tunnelGetIsNetworkCaptive;
- (BOOL)tunnelGetNetworkHasProxy;

@end
