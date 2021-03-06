//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPMediaItemCollection;

@interface PLPhotosDefaults : NSObject
{
    _Bool _shouldRepeat;
    _Bool _shouldShuffle;
    _Bool _shouldPlayMusic;
    _Bool _summarizeMomentSections;
    int _transition;
    int _secondsPerSlide;
    MPMediaItemCollection *_musicCollection;
}

+ (int)randomTransition;
+ (id)sharedInstance;
- (id)musicCollection;
- (void)setMusicCollection:(id)arg1;
- (void)setShouldPlayMusic:(_Bool)arg1;
- (_Bool)shouldPlayMusic;
- (void)setTransition:(int)arg1;
- (int)transition;
- (int)transitionForAnimationMovingForward:(_Bool)arg1;
- (_Bool)summarizeMomentSections;
- (int)secondsPerSlide;
- (_Bool)shouldShuffle;
- (_Bool)shouldRepeat;
- (id)init;
- (void)_reloadPhotoDefaultValuesAndNotify:(_Bool)arg1;
- (void)reloadPhotoDefaultValues;
- (void)dealloc;

@end

