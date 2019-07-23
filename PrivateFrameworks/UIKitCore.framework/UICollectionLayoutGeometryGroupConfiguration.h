/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UICollectionLayoutGeometryGroupConfiguration : NSObject <UICollectionLayoutGeometryGroupConfiguration> {
    bool  _alignJustified;
    bool  _alignOrthogonallyCentered;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    NSArray * _customItemConfigurations;
    UICollectionLayoutGeometryGroupItemConfiguration * _defaultItemConfiguration;
    long long  _gridColumns;
    bool  _gridGroup;
    long long  _gridRows;
    double  _height;
    bool  _heightSizedToContainerHeight;
    double  _heightSizedToContainerHeightFactor;
    bool  _heightSizedToContentHeight;
    bool  _horizontalGroup;
    double  _interitemSpacing;
    double  _lineSpacing;
    long long  _maximumNumberOfItems;
    long long  _repeatCount;
    bool  _verticalGroup;
    double  _width;
    bool  _widthSizedToContainerWidth;
    double  _widthSizedToContainerWidthFactor;
    bool  _widthSizedToContentWidth;
}

@property (nonatomic) bool alignJustified;
@property (nonatomic) bool alignOrthogonallyCentered;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic, copy) NSArray *customItemConfigurations;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) UICollectionLayoutGeometryGroupItemConfiguration *defaultItemConfiguration;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long gridColumns;
@property (getter=isGridGroup, nonatomic) bool gridGroup;
@property (nonatomic) long long gridRows;
@property (readonly) unsigned long long hash;
@property (nonatomic) double height;
@property (nonatomic) bool heightSizedToContainerHeight;
@property (nonatomic) double heightSizedToContainerHeightFactor;
@property (nonatomic) bool heightSizedToContentHeight;
@property (getter=isHorizontalGroup, nonatomic) bool horizontalGroup;
@property (nonatomic) double interitemSpacing;
@property (nonatomic, readonly) NSArray *itemConfigurations;
@property (nonatomic) double lineSpacing;
@property (nonatomic) long long maximumNumberOfItems;
@property (nonatomic) long long repeatCount;
@property (readonly) Class superclass;
@property (getter=isVerticalGroup, nonatomic) bool verticalGroup;
@property (nonatomic) double width;
@property (nonatomic) bool widthSizedToContainerWidth;
@property (nonatomic) double widthSizedToContainerWidthFactor;
@property (nonatomic) bool widthSizedToContentWidth;

+ (id)gridGroup;
+ (id)gridGroupWithRows:(long long)arg1 columns:(long long)arg2;
+ (id)horizontalGroup;
+ (id)verticalGroup;

- (void).cxx_destruct;
- (void)_resetGroupStyle;
- (void)_resetHeight;
- (void)_resetWidth;
- (bool)alignJustified;
- (bool)alignOrthogonallyCentered;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customItemConfigurations;
- (id)defaultItemConfiguration;
- (long long)gridColumns;
- (long long)gridRows;
- (double)height;
- (bool)heightSizedToContainerHeight;
- (double)heightSizedToContainerHeightFactor;
- (bool)heightSizedToContentHeight;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (double)interitemSpacing;
- (bool)isGridGroup;
- (bool)isHorizontalGroup;
- (bool)isVerticalGroup;
- (id)itemConfigurations;
- (double)lineSpacing;
- (long long)maximumNumberOfItems;
- (long long)repeatCount;
- (void)setAlignJustified:(bool)arg1;
- (void)setAlignOrthogonallyCentered:(bool)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setCustomItemConfigurations:(id)arg1;
- (void)setDefaultItemConfiguration:(id)arg1;
- (void)setGridColumns:(long long)arg1;
- (void)setGridGroup:(bool)arg1;
- (void)setGridRows:(long long)arg1;
- (void)setHeight:(double)arg1;
- (void)setHeightSizedToContainerHeight:(bool)arg1;
- (void)setHeightSizedToContainerHeightFactor:(double)arg1;
- (void)setHeightSizedToContentHeight:(bool)arg1;
- (void)setHorizontalGroup:(bool)arg1;
- (void)setInteritemSpacing:(double)arg1;
- (void)setLineSpacing:(double)arg1;
- (void)setMaximumNumberOfItems:(long long)arg1;
- (void)setRepeatCount:(long long)arg1;
- (void)setVerticalGroup:(bool)arg1;
- (void)setWidth:(double)arg1;
- (void)setWidthSizedToContainerWidth:(bool)arg1;
- (void)setWidthSizedToContainerWidthFactor:(double)arg1;
- (void)setWidthSizedToContentWidth:(bool)arg1;
- (double)width;
- (bool)widthSizedToContainerWidth;
- (double)widthSizedToContainerWidthFactor;
- (bool)widthSizedToContentWidth;

@end
