/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADSubBlip : OCDDelayedMedia {
    NSData * mData;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mFrame;
    int  mSizeInBytes;
    struct CGSize { 
        double width; 
        double height; 
    }  mSizeInPoints;
    int  mType;
}

- (void).cxx_destruct;
- (id)data;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (unsigned long long)hash;
- (id)initWithData:(id)arg1 type:(int)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isLoaded;
- (void)setData:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSizeInBytes:(int)arg1;
- (void)setSizeInPoints:(struct CGSize { double x1; double x2; })arg1;
- (void)setType:(int)arg1;
- (int)sizeInBytes;
- (struct CGSize { double x1; double x2; })sizeInPoints;
- (int)type;

@end
