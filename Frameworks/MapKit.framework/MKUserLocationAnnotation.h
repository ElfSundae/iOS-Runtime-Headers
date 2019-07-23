/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKUserLocationAnnotation : NSObject <MKAnnotationPrivate> {
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    CLLocation * _location;
}

@property (nonatomic) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CLLocation *location;
@property (nonatomic, readonly) long long representation;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (id)location;
- (void)setCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)setLocation:(id)arg1;

@end
