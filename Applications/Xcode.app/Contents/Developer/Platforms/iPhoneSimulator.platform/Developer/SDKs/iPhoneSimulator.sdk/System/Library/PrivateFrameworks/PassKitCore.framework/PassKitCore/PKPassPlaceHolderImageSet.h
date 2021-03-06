//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKPassImageSet.h>

@class PKImage;

@interface PKPassPlaceHolderImageSet : PKPassImageSet
{
    PKImage *_placeHolderImage;
    struct CGRect _logoRect;
}

+ (_Bool)supportsSecureCoding;
+ (long long)currentVersion;
+ (id)archiveName;
+ (long long)imageSetType;
@property(nonatomic) struct CGRect logoRect; // @synthesize logoRect=_logoRect;
@property(retain, nonatomic) PKImage *placeHolderImage; // @synthesize placeHolderImage=_placeHolderImage;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)preheatImages;
- (void)dealloc;
- (id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4;

@end

