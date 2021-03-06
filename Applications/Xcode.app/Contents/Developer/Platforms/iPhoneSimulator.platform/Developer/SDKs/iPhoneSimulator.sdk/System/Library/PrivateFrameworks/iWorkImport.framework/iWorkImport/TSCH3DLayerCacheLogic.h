//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSCH3DLayerCacheLogicProtocol.h"
#import "TSCHUnretainedParent.h"

@class CALayer;

__attribute__((visibility("hidden")))
@interface TSCH3DLayerCacheLogic : NSObject <TSCHUnretainedParent, TSCH3DLayerCacheLogicProtocol>
{
    CALayer *mParent;
    struct CGRect mDrawingBounds;
    id mRepLayerDelegate;
}

+ (_Bool)cacheable;
@property(nonatomic) id repLayerDelegate; // @synthesize repLayerDelegate=mRepLayerDelegate;
- (id).cxx_construct;
- (_Bool)isClippedAreaVisibleInRect:(struct CGRect)arg1;
- (_Bool)isClipped;
- (void)setDrawingBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setContentsIsValid:(_Bool)arg1 highQuality:(_Bool)arg2;
- (void)setContentsIsValid:(_Bool)arg1;
- (_Bool)contentsIsHighQuality;
- (_Bool)contentsIsValid;
- (id)description;
- (void)clearParent;
- (void)dealloc;
- (id)initWithParent:(id)arg1;

@end

