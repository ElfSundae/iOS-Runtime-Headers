/* Generated by RuntimeBrowser.
 */

@protocol MapsSuggestionsPredictor <NSObject, MapsSuggestionsObject>

@required

- (bool)predictedTransportModeForDestinationEntry:(void *)arg1 originCoordinate:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 9: MapsSuggestionsEntry *, struct CLLocationCoordinate2D { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct NSArray { Class x1; }*, NSError *, void*
- (bool)predictedTransportModeForDestinationMapItem:(void *)arg1 originCoordinate:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 9: struct GEOMapItemStorage { Class x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; unsigned int x12; unsigned int x13; struct os_unfair_lock_s { unsigned int x_14_1_1; } x14; struct { unsigned int x_15_1_1 : 1; unsigned int x_15_1_2 : 1; unsigned int x_15_1_3 : 1; unsigned int x_15_1_4 : 1; unsigned int x_15_1_5 : 1; unsigned int x_15_1_6 : 1; unsigned int x_15_1_7 : 1; unsigned int x_15_1_8 : 1; unsigned int x_15_1_9 : 1; unsigned int x_15_1_10 : 1; unsigned int x_15_1_11 : 1; unsigned int x_15_1_12 : 1; unsigned int x_15_1_13 : 1; unsigned int x_15_1_14 : 1; unsigned int x_15_1_15 : 1; unsigned int x_15_1_16 : 1; unsigned int x_15_1_17 : 1; unsigned int x_15_1_18 : 1; } x15; }*, struct CLLocationCoordinate2D { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct NSArray { Class x1; }*, NSError *, void*

@optional

- (void)cancelCapturingAnalytics;
- (void)captureActualTransportationMode:(int)arg1 originMapItem:(struct GEOMapItemStorage { Class x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; unsigned int x12; unsigned int x13; struct os_unfair_lock_s { unsigned int x_14_1_1; } x14; struct { unsigned int x_15_1_1 : 1; unsigned int x_15_1_2 : 1; unsigned int x_15_1_3 : 1; unsigned int x_15_1_4 : 1; unsigned int x_15_1_5 : 1; unsigned int x_15_1_6 : 1; unsigned int x_15_1_7 : 1; unsigned int x_15_1_8 : 1; unsigned int x_15_1_9 : 1; unsigned int x_15_1_10 : 1; unsigned int x_15_1_11 : 1; unsigned int x_15_1_12 : 1; unsigned int x_15_1_13 : 1; unsigned int x_15_1_14 : 1; unsigned int x_15_1_15 : 1; unsigned int x_15_1_16 : 1; unsigned int x_15_1_17 : 1; unsigned int x_15_1_18 : 1; } x15; }*)arg2 destinationMapItem:(struct GEOMapItemStorage { Class x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; unsigned int x12; unsigned int x13; struct os_unfair_lock_s { unsigned int x_14_1_1; } x14; struct { unsigned int x_15_1_1 : 1; unsigned int x_15_1_2 : 1; unsigned int x_15_1_3 : 1; unsigned int x_15_1_4 : 1; unsigned int x_15_1_5 : 1; unsigned int x_15_1_6 : 1; unsigned int x_15_1_7 : 1; unsigned int x_15_1_8 : 1; unsigned int x_15_1_9 : 1; unsigned int x_15_1_10 : 1; unsigned int x_15_1_11 : 1; unsigned int x_15_1_12 : 1; unsigned int x_15_1_13 : 1; unsigned int x_15_1_14 : 1; unsigned int x_15_1_15 : 1; unsigned int x_15_1_16 : 1; unsigned int x_15_1_17 : 1; unsigned int x_15_1_18 : 1; } x15; }*)arg3;
- (void)capturePredictedTransportationMode:(int)arg1;

@end
