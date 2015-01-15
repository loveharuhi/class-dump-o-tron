//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ITunesPackage/MusicBookletElementBase.h>

#import "Track.h"
#import "TrackNumberAndVolume.h"

@interface MusicBookletElement : MusicBookletElementBase <Track, TrackNumberAndVolume>
{
}

+ (void)initialize;
- (BOOL)isBooklet;
- (BOOL)isITunesLP;
- (BOOL)isBonusMaterial;
- (double)duration;
- (void)setDuration:(double)arg1;
- (id)durationStringWithSeconds;
- (long long)compare:(id)arg1;
- (void)setNameWithAlbumTitle:(id)arg1;
- (id)defaultTitle;
- (void)setFileElement:(id)arg1;
- (id)init;

@end
