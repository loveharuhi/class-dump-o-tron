//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SpringBoardFoundation/SBFParallaxSettings.h>

@interface SBFWallpaperParallaxSettings : SBFParallaxSettings
{
    double _overhangX;
    double _overhangY;
    double _perspectiveTransform;
}

+ (id)settingsControllerModule;
+ (struct CGSize)overhangSizeForCurrentDevice;
+ (struct CGSize)minimumWallpaperSizeForCurrentDevice;
+ (struct CGSize)bestWallpaperSizeForParallaxFactor:(double)arg1 portrait:(_Bool)arg2;
+ (struct CGSize)bestWallpaperSizeForParallaxFactor:(double)arg1;
+ (struct CGSize)_requiredOverhangSizeForCurrentDevice;
@property double perspectiveTransform; // @synthesize perspectiveTransform=_perspectiveTransform;
@property double overhangY; // @synthesize overhangY=_overhangY;
@property double overhangX; // @synthesize overhangX=_overhangX;
- (void)setDefaultValues;

@end

