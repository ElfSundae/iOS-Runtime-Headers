/* Generated by RuntimeBrowser.
 */

@protocol VKOverlayContainerDelegate <NSObject>

@required

- (VKOverlayPainter *)overlayContainer:(VKOverlayContainerModel *)arg1 painterForOverlay:(id <VKOverlay>)arg2;
- (VKVectorTile *)overlayContainer:(VKOverlayContainerModel *)arg1 roadTileForTile:(VKMapTile *)arg2;
- (void)overlayContainer:(VKOverlayContainerModel *)arg1 showingOuterHaloOnLabelsDidChange:(BOOL)arg2;
- (BOOL)overlayContainerIsInNavigationMode:(VKOverlayContainerModel *)arg1;
- (BOOL)overlayContainerIsInTransitMode:(VKOverlayContainerModel *)arg1;

@end
