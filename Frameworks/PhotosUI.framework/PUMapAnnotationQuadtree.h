/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUMapAnnotationQuadtree : NSObject {
    PUMapAnnotationQuadtree * _00;
    PUMapAnnotationQuadtree * _01;
    PUMapAnnotationQuadtree * _10;
    PUMapAnnotationQuadtree * _11;
    PUMapAnnotationQuadtreeAddress * _address;
    <MKAnnotation><NSCopying> * _aggregateAnnotation;
    int  _aggregationCount;
    <PUMapAnnotationQuadtreeDataSource> * _dataSource;
    double  _latitudeSum;
    NSMutableArray * _leafAnnotations;
    double  _longitudeSum;
    <MKAnnotation><NSCopying> * _primaryAnnotation;
}

@property (nonatomic) <PUMapAnnotationQuadtreeDataSource> *dataSource;

+ (void)convertCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 quantizedX:(unsigned int*)arg2 quantizedY:(unsigned int*)arg3;
+ (void)getMinCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; }*)arg1 maxCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; }*)arg2 forAddress:(id)arg3;
+ (unsigned int)treeLevelForLatitudeDelta:(double)arg1 longitudeDelta:(double)arg2;

- (void).cxx_destruct;
- (void)_collectLeafAnnotations:(id)arg1;
- (void)_contributeAnnotations:(id)arg1;
- (void)_freeCachedMemory;
- (void)addAnnotation:(id)arg1;
- (void)addAnnotation:(id)arg1 withCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2 quantizedX:(unsigned int)arg3 quantizedY:(unsigned int)arg4;
- (void)applicationDidReceiveMemoryWarning:(id)arg1;
- (void)collectAnnotations:(id)arg1 atTreeLevel:(unsigned int)arg2 minCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg3 maxCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg4 updateId:(int)arg5 referenceId:(int*)arg6;
- (id)dataSource;
- (void)dealloc;
- (void)getMinCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; }*)arg1 maxCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; }*)arg2;
- (id)initWithTreeLevel:(unsigned int)arg1 quantizedX:(unsigned int)arg2 quantizedY:(unsigned int)arg3;
- (id)nextLevelForQuantizedX:(unsigned int)arg1 quantizedY:(unsigned int)arg2 createIfMissing:(BOOL)arg3;
- (void)removeAnnotation:(id)arg1;
- (BOOL)removeAnnotation:(id)arg1 withCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2 quantizedX:(unsigned int)arg3 quantizedY:(unsigned int)arg4;
- (void)setDataSource:(id)arg1;

@end
