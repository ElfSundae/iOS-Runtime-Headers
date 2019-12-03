/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONavigationListener : NSObject <GEONavigationServerListenerXPCInterface> {
    id /* block */  _activeRouteDetailsDataUpdatedHandler;
    NSXPCConnection * _connection;
    NSString * _currentRoadName;
    <GEONavigationListenerDelegate> * _delegate;
    id /* block */  _guidanceStateUpdatedHandler;
    int  _navigationRoutePreviewToken;
    int  _navigationStartedToken;
    unsigned long long  _navigationState;
    int  _navigationStoppedToken;
    id /* block */  _navigationVoiceVolumeUpdatedHandler;
    id /* block */  _positionFromDestinationUpdatedHandler;
    id /* block */  _positionFromManeuverUpdatedHandler;
    id /* block */  _positionFromSignUpdatedHandler;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _rideSelectionsUpdatedHandler;
    id /* block */  _routeSummaryUpdatedHandler;
    id /* block */  _stepIndexUpdatedHandler;
    id /* block */  _trafficIncidentAlertDetailsDataUpdatedHandler;
    id /* block */  _transitSummaryUpdatedHandler;
    int  _transportType;
}

@property (nonatomic, copy) id /* block */ activeRouteDetailsDataUpdatedHandler;
@property (nonatomic, readonly) NSString *currentRoadName;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <GEONavigationListenerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ guidanceStateUpdatedHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long navigationState;
@property (nonatomic, copy) id /* block */ navigationVoiceVolumeUpdatedHandler;
@property (nonatomic, copy) id /* block */ positionFromDestinationUpdatedHandler;
@property (nonatomic, copy) id /* block */ positionFromManeuverUpdatedHandler;
@property (nonatomic, copy) id /* block */ positionFromSignUpdatedHandler;
@property (nonatomic, copy) id /* block */ rideSelectionsUpdatedHandler;
@property (nonatomic, copy) id /* block */ routeSummaryUpdatedHandler;
@property (nonatomic, copy) id /* block */ stepIndexUpdatedHandler;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ trafficIncidentAlertDetailsDataUpdatedHandler;
@property (nonatomic, copy) id /* block */ transitSummaryUpdatedHandler;

- (void).cxx_destruct;
- (void)_close;
- (void)_connectToDaemonIfNeeded;
- (unsigned long long)_listenerStateForSessionState:(unsigned long long)arg1;
- (void)_notifyWithActiveRouteDetailsData:(id)arg1;
- (void)_notifyWithGuidanceState:(id)arg1;
- (void)_notifyWithNavigationVoiceVolume:(int)arg1;
- (void)_notifyWithPositionFromDestination:(struct { double x1; double x2; })arg1;
- (void)_notifyWithPositionFromManeuver:(struct { double x1; double x2; })arg1;
- (void)_notifyWithPositionFromSign:(struct { double x1; double x2; })arg1;
- (void)_notifyWithRideSelections:(id)arg1;
- (void)_notifyWithRouteSummary:(id)arg1;
- (void)_notifyWithStepIndex:(unsigned long long)arg1;
- (void)_notifyWithStepNameInfo:(id)arg1;
- (void)_notifyWithTrafficIncidentDetailsData:(id)arg1;
- (void)_notifyWithTransitSummary:(id)arg1;
- (void)_open;
- (id /* block */)activeRouteDetailsDataUpdatedHandler;
- (id)currentRoadName;
- (void)currentRoadNameUpdated:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id /* block */)guidanceStateUpdatedHandler;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (unsigned long long)navigationState;
- (void)navigationStateChanged:(unsigned long long)arg1 transportType:(int)arg2;
- (void)navigationUpdatedWithVoiceVolumeData:(id)arg1;
- (id /* block */)navigationVoiceVolumeUpdatedHandler;
- (id /* block */)positionFromDestinationUpdatedHandler;
- (id /* block */)positionFromManeuverUpdatedHandler;
- (id /* block */)positionFromSignUpdatedHandler;
- (void)requestActiveRouteDetailsData;
- (void)requestGuidanceState;
- (void)requestNavigationVoiceVolume;
- (void)requestPositionFromDestination;
- (void)requestPositionFromManeuver;
- (void)requestPositionFromSign;
- (void)requestRideSelections;
- (void)requestRouteSummary;
- (void)requestStepIndex;
- (void)requestStepNameInfo;
- (void)requestTrafficIncidentDetailsData;
- (void)requestTransitSummary;
- (id /* block */)rideSelectionsUpdatedHandler;
- (id /* block */)routeSummaryUpdatedHandler;
- (void)routeSummaryUpdatedWithActiveRouteDetailsData:(id)arg1;
- (void)routeSummaryUpdatedWithGuidanceStateData:(id)arg1;
- (void)routeSummaryUpdatedWithNavigationRouteSummaryData:(id)arg1;
- (void)routeSummaryUpdatedWithPositionFromDestinationData:(id)arg1;
- (void)routeSummaryUpdatedWithPositionFromManeuverData:(id)arg1;
- (void)routeSummaryUpdatedWithPositionFromSignData:(id)arg1;
- (void)routeSummaryUpdatedWithRideSelectionData:(id)arg1;
- (void)routeSummaryUpdatedWithStepIndexData:(id)arg1;
- (void)routeSummaryUpdatedWithStepNameInfoData:(id)arg1;
- (void)routeSummaryUpdatedWithTrafficIncidentAlertDetailsData:(id)arg1;
- (void)routeSummaryUpdatedWithTransitSummaryData:(id)arg1;
- (void)setActiveRouteDetailsDataUpdatedHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGuidanceStateUpdatedHandler:(id /* block */)arg1;
- (void)setNavigationVoiceVolumeUpdatedHandler:(id /* block */)arg1;
- (void)setPositionFromDestinationUpdatedHandler:(id /* block */)arg1;
- (void)setPositionFromManeuverUpdatedHandler:(id /* block */)arg1;
- (void)setPositionFromSignUpdatedHandler:(id /* block */)arg1;
- (void)setRideSelectionsUpdatedHandler:(id /* block */)arg1;
- (void)setRouteSummaryUpdatedHandler:(id /* block */)arg1;
- (void)setStepIndexUpdatedHandler:(id /* block */)arg1;
- (void)setTrafficIncidentAlertDetailsDataUpdatedHandler:(id /* block */)arg1;
- (void)setTransitSummaryUpdatedHandler:(id /* block */)arg1;
- (id /* block */)stepIndexUpdatedHandler;
- (id /* block */)trafficIncidentAlertDetailsDataUpdatedHandler;
- (id /* block */)transitSummaryUpdatedHandler;

@end
