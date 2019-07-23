/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUMapAnnotation : NSObject <PUMapAnnotationAnimatable> {
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    unsigned int  _hash;
    PUMapItem * _mapItem;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _originalCoordinate;
    unsigned int  _relativeOrder;
}

@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (nonatomic, readonly) unsigned int count;
@property (nonatomic, readonly, retain) NSDate *dateCreated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, retain) NSObject *itemId;
@property (nonatomic, retain) PUMapItem *mapItem;
@property (nonatomic, readonly) NSArray *mapItems;
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } originalCoordinate;
@property (nonatomic) unsigned int relativeOrder;
@property (nonatomic, readonly, retain) NSMutableSet *subAnnotations;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;

+ (id /* block */)annotationSortingComparatorNewestToOldest;
+ (id /* block */)annotationSortingComparatorOldestToNewest;
+ (id)compactDescriptionForAnnotations:(id)arg1;

- (void).cxx_destruct;
- (id)_dateString;
- (int)annotationSortingCompareWithAnnotation:(id)arg1;
- (id)compactDescription;
- (int)compare:(id)arg1;
- (BOOL)containsAnnotation:(id)arg1;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (id)dateCreated;
- (id)description;
- (unsigned int)hash;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (BOOL)isEqual:(id)arg1;
- (id)itemId;
- (id)mapItem;
- (id)mapItems;
- (id)newestMaxMapItems:(unsigned int)arg1;
- (struct CLLocationCoordinate2D { double x1; double x2; })originalCoordinate;
- (unsigned int)relativeOrder;
- (void)resetCoordinateToOriginal;
- (void)setCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)setMapItem:(id)arg1;
- (void)setRelativeOrder:(unsigned int)arg1;
- (id)subAnnotations;
- (id)subtitle;
- (id)title;

@end
