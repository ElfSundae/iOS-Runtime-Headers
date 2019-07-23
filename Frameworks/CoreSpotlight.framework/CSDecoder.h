/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

@interface CSDecoder : NSObject <CSCoderData> {
    const struct __CFAllocator { } *_contentDeallocator;
    NSData *_data;
    struct { 
        char *containerBytes; 
        struct { 
            unsigned int embeddedReference; 
            unsigned char type; 
        } reference; 
    } _obj;
}

@property (nonatomic, readonly) const struct __CFAllocator { }*contentDeallocator;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) struct { char *x1; struct { unsigned int x_2_1_1; unsigned char x_2_1_2; } x2; } obj;

- (void).cxx_destruct;
- (const struct __CFAllocator { }*)contentDeallocator;
- (id)data;
- (void)dealloc;
- (id)debugDescription;
- (id)decodeObject:(struct { char *x1; struct { unsigned int x_2_1_1; unsigned char x_2_1_2; } x2; })arg1;
- (id)decodeObjectNoCopy:(struct { char *x1; struct { unsigned int x_2_1_1; unsigned char x_2_1_2; } x2; })arg1;
- (id)description;
- (id)initWithData:(id)arg1;
- (id)initWithData:(id)arg1 obj:(struct { char *x1; struct { unsigned int x_2_1_1; unsigned char x_2_1_2; } x2; })arg2;
- (struct { char *x1; struct { unsigned int x_2_1_1; unsigned char x_2_1_2; } x2; })obj;

@end
