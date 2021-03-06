/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

@interface CLSInputPeopleClue : CLSInputClue {
    unsigned long long  _numberOfFaces;
    CLSPerson * _person;
    PHPhotoLibrary * _photoLibrary;
}

@property (nonatomic) unsigned long long numberOfFaces;
@property (nonatomic, retain) CLSPerson *person;
@property (nonatomic) PHPhotoLibrary *photoLibrary;

+ (id)clueWithPeople:(id)arg1;
+ (id)clueWithPeopleUUID:(id)arg1 inPhotoLibrary:(id)arg2;
+ (id)cluesWithPeopleUUIDs:(id)arg1 inPhotoLibrary:(id)arg2;
+ (id)cluesWithPeoples:(id)arg1;

- (void).cxx_destruct;
- (void)_prepareWithProgressBlock:(id /* block */)arg1;
- (id)description;
- (bool)isEqualToClue:(id)arg1;
- (id)name;
- (unsigned long long)numberOfFaces;
- (id)person;
- (id)photoLibrary;
- (void)setNumberOfFaces:(unsigned long long)arg1;
- (void)setPerson:(id)arg1;
- (void)setPhotoLibrary:(id)arg1;

@end
