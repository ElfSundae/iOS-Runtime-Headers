/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTransitRouteBuilder : NSObject {
    GEOMapRegion * _boundingMapRegion;
    GEOTransitDecoderData * _decoderData;
    NSMutableArray * _legs;
    NSMutableArray * _pointSections;
    NSMutableData * _pointsData;
    NSMutableArray * _stepInfos;
    NSMutableArray * _steps;
    GEOTransitSuggestedRoute * _suggestedRoute;
    unsigned int  _tripCount;
    BOOL  _usesZilch;
}

- (struct _NSRange { unsigned int x1; unsigned int x2; })_appendPointData:(id)arg1 withContinuity:(BOOL)arg2;
- (void)_buildArrivalStepInfo:(id)arg1;
- (void)_buildExpandedWalkingStepInfos:(id)arg1;
- (void)_buildPointSectionsForRoute:(id)arg1;
- (double)_buildPointSectionsForRoute:(id)arg1 pointRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 stepIndex:(unsigned int)arg3 currentTransitLineColor:(id)arg4 startDistance:(double)arg5;
- (void)_buildRouteFromSections:(id)arg1;
- (void)_buildRouteFromSteps:(id)arg1;
- (void)_buildTransitStepInfo:(id)arg1;
- (BOOL)_index:(unsigned int)arg1 matchesArray:(unsigned int*)arg2 ofLength:(unsigned int)arg3;
- (id)_legForSteps:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 route:(id)arg2;
- (void)_reset;
- (id)_sectionForRoute:(id)arg1 pointRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 stepIndex:(unsigned int)arg3 bounds:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg4 currentTransitLineColor:(id)arg5 startDistance:(double)arg6;
- (BOOL)_shouldBreakPointSectionAtStep:(id)arg1 previousStep:(id)arg2;
- (unsigned int)_stepCountForLegWithStartingStepIndex:(unsigned int)arg1;
- (id)_stepForStepInfo:(unsigned int)arg1 route:(id)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_validPointRangeForStepInfoIndex:(unsigned int)arg1;
- (id)_walkingStepForStepInfoIndex:(unsigned int)arg1 route:(id)arg2 validPointRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)buildRoute:(id)arg1;
- (void)dealloc;
- (id)initWithSuggestedRoute:(id)arg1 data:(id)arg2;

@end
