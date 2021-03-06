//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CalloutTabButton.h"

@class SearchResult;

__attribute__((visibility("hidden")))
@interface DirectionsCalloutButton : CalloutTabButton
{
    double _expectedTravelTime;
    unsigned long long _transportType;
    SearchResult *_searchResult;
}

@property(retain, nonatomic) SearchResult *searchResult; // @synthesize searchResult=_searchResult;
@property(nonatomic) unsigned long long transportType; // @synthesize transportType=_transportType;
@property(nonatomic) double expectedTravelTime; // @synthesize expectedTravelTime=_expectedTravelTime;
- (void).cxx_destruct;
- (id)_etaStringForExpectedTravelTime:(double)arg1;
- (void)setExpectedTravelTime:(double)arg1 animated:(_Bool)arg2;
- (void)_updateImage;
- (id)initWithFrame:(struct CGRect)arg1;

@end

