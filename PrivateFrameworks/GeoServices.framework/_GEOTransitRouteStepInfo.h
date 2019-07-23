/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOTransitRouteStepInfo : NSObject {
    unsigned int  _duration;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _maneuverPointRange;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _pointRange;
    int  _routeLegType;
    GEOTransitStep * _transitStep;
    GEOStep * _walkingStep;
}

@property (nonatomic) unsigned int duration;
@property (nonatomic) struct _NSRange { unsigned int x1; unsigned int x2; } maneuverPointRange;
@property (nonatomic) struct _NSRange { unsigned int x1; unsigned int x2; } pointRange;
@property (nonatomic) int routeLegType;
@property (nonatomic, retain) GEOTransitStep *transitStep;
@property (nonatomic, retain) GEOStep *walkingStep;

- (void)dealloc;
- (unsigned int)duration;
- (struct _NSRange { unsigned int x1; unsigned int x2; })maneuverPointRange;
- (struct _NSRange { unsigned int x1; unsigned int x2; })pointRange;
- (int)routeLegType;
- (void)setDuration:(unsigned int)arg1;
- (void)setManeuverPointRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setPointRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setRouteLegType:(int)arg1;
- (void)setTransitStep:(id)arg1;
- (void)setWalkingStep:(id)arg1;
- (id)transitStep;
- (id)walkingStep;

@end
