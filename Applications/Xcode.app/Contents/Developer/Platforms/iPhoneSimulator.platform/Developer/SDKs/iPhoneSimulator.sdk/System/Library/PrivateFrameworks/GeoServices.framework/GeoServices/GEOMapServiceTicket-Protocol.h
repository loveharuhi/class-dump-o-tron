//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOMapRegion, GEOMapServiceTraits, GEORPCorrectedSearch;

@protocol GEOMapServiceTicket <NSObject>
@property(readonly, nonatomic) GEOMapRegion *resultBoundingRegion;
@property(readonly, nonatomic) GEOMapServiceTraits *traits;
- (void)applyToCorrectedSearch:(GEORPCorrectedSearch *)arg1;
- (void)cancel;
- (void)submitWithRefinedHandler:(void (^)(NSArray *, NSArray *, NSError *))arg1 timeout:(long long)arg2 networkActivity:(void (^)(_Bool))arg3;
- (void)submitWithHandler:(void (^)(NSArray *, NSError *))arg1 timeout:(long long)arg2 networkActivity:(void (^)(_Bool))arg3;
- (void)submitWithRefinedHandler:(void (^)(NSArray *, NSArray *, NSError *))arg1 networkActivity:(void (^)(_Bool))arg2;
- (void)submitWithHandler:(void (^)(NSArray *, NSError *))arg1 networkActivity:(void (^)(_Bool))arg2;
@end
