/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceNearbyAppsMetricsCoordinator : NSObject {
    NSMutableArray *_callbacks;
    BOOL _controllerReady;
    SSMetricsController *_metricsController;
    NSString *_pageContext;
    NSString *_topic;
    SSURLBag *_urlBag;
}

@property (nonatomic, readonly) NSMutableArray *callbacks;
@property (nonatomic) BOOL controllerReady;
@property (nonatomic, copy) NSString *pageContext;
@property (nonatomic, copy) NSString *topic;
@property (nonatomic, readonly) SSURLBag *urlBag;

- (void).cxx_destruct;
- (id)callbacks;
- (BOOL)controllerReady;
- (void)getMetricsControllerWithCompletionHandler:(id /* block */)arg1;
- (id)initWithConfigurationIdentifier:(id)arg1;
- (id)pageContext;
- (void)performCallbacks;
- (void)sendEvent:(id)arg1;
- (void)setControllerReady:(BOOL)arg1;
- (void)setPageConfiguration:(id)arg1;
- (void)setPageContext:(id)arg1;
- (void)setTopic:(id)arg1;
- (id)topic;
- (id)urlBag;

@end
