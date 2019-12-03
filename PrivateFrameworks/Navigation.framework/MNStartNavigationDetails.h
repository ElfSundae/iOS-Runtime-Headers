/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNStartNavigationDetails : NSObject <NSSecureCoding> {
    bool  _copyTraceToCrashReporter;
    GEODirectionsRequest * _directionsRequest;
    GEODirectionsResponse * _directionsResponse;
    bool  _fullGuidance;
    bool  _isReconnecting;
    int  _navigationType;
    NSString * _requestingAppIdentifier;
    GEORouteAttributes * _routeAttributes;
    NSArray * _routes;
    unsigned long long  _selectedRouteIndex;
    bool  _shouldSimulateLocations;
    NSString * _tracePlaybackPath;
    MNTraceRecordingData * _traceRecordingData;
    NSString * _traceRecordingNameOverride;
    NSDictionary * _traffic;
}

@property (nonatomic) bool copyTraceToCrashReporter;
@property (nonatomic, copy) GEODirectionsRequest *directionsRequest;
@property (nonatomic, copy) GEODirectionsResponse *directionsResponse;
@property (nonatomic, readonly) NSString *fullDescription;
@property (nonatomic) bool fullGuidance;
@property (nonatomic) bool isReconnecting;
@property (nonatomic) int navigationType;
@property (nonatomic, copy) NSString *requestingAppIdentifier;
@property (nonatomic, copy) GEORouteAttributes *routeAttributes;
@property (nonatomic, copy) NSArray *routes;
@property (nonatomic) unsigned long long selectedRouteIndex;
@property (nonatomic) bool shouldSimulateLocations;
@property (nonatomic, copy) NSString *tracePlaybackPath;
@property (nonatomic, retain) MNTraceRecordingData *traceRecordingData;
@property (nonatomic, copy) NSString *traceRecordingNameOverride;
@property (nonatomic, copy) NSDictionary *traffic;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)copyTraceToCrashReporter;
- (id)description;
- (id)directionsRequest;
- (id)directionsResponse;
- (void)encodeWithCoder:(id)arg1;
- (id)fullDescription;
- (bool)fullGuidance;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isReconnecting;
- (int)navigationType;
- (id)requestingAppIdentifier;
- (id)routeAttributes;
- (id)routes;
- (unsigned long long)selectedRouteIndex;
- (void)setCopyTraceToCrashReporter:(bool)arg1;
- (void)setDirectionsRequest:(id)arg1;
- (void)setDirectionsResponse:(id)arg1;
- (void)setFullGuidance:(bool)arg1;
- (void)setIsReconnecting:(bool)arg1;
- (void)setNavigationType:(int)arg1;
- (void)setRequestingAppIdentifier:(id)arg1;
- (void)setRouteAttributes:(id)arg1;
- (void)setRoutes:(id)arg1;
- (void)setSelectedRouteIndex:(unsigned long long)arg1;
- (void)setShouldSimulateLocations:(bool)arg1;
- (void)setTracePlaybackPath:(id)arg1;
- (void)setTraceRecordingData:(id)arg1;
- (void)setTraceRecordingNameOverride:(id)arg1;
- (void)setTraffic:(id)arg1;
- (bool)shouldSimulateLocations;
- (id)tracePlaybackPath;
- (id)traceRecordingData;
- (id)traceRecordingNameOverride;
- (id)traffic;

@end
