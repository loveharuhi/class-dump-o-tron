//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSKCommand.h>

@class KNAbstractSlide, KNBuildChunk;

__attribute__((visibility("hidden")))
@interface KNCommandSlideInsertBuildChunk : TSKCommand
{
    KNAbstractSlide *mSlide;
    KNBuildChunk *mBuildChunk;
    unsigned long long mIndex;
}

@property(readonly, nonatomic) unsigned long long index; // @synthesize index=mIndex;
@property(readonly, nonatomic) KNBuildChunk *buildChunk; // @synthesize buildChunk=mBuildChunk;
@property(readonly, nonatomic) KNAbstractSlide *slide; // @synthesize slide=mSlide;
- (id)description;
- (void)redo;
- (void)undo;
- (void)commit;
- (_Bool)process;
- (void)dealloc;
- (id)initWithSlide:(id)arg1 buildChunk:(id)arg2 atIndex:(unsigned long long)arg3;

@end

