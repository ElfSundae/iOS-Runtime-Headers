/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONavigationServer : NSObject {
    NSData *_guidanceStateData;
    NSMutableArray *_peers;
    NSData *_routeSummaryData;
    NSData *_transitSummaryData;
}

+ (id)identifier;

- (void)_requestGuidanceStateWithPeer:(id)arg1;
- (void)_requestRouteSummaryWithPeer:(id)arg1;
- (void)_requestTransitSummaryWithPeer:(id)arg1;
- (void)_sendMessage:(int)arg1 data:(id)arg2 toPeer:(id)arg3;
- (void)_updateAllPeersWithMessage:(int)arg1 data:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)setRouteSummaryWithGuidanceStateData:(id)arg1;
- (void)setRouteSummaryWithNavigationRouteSummaryData:(id)arg1;
- (void)setRouteSummaryWithTransitSummaryData:(id)arg1;
- (BOOL)shouldAcceptNewConnection:(id)arg1 shouldCreateNavigationPeer:(BOOL)arg2;

@end
