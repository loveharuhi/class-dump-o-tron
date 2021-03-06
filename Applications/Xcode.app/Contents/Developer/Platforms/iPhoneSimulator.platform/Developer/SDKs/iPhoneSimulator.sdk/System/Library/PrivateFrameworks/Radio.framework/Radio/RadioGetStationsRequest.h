//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Radio/RadioRequest.h>

@class SSMetricsConfiguration, SSMetricsPageEvent, SSURLConnectionRequest;

@interface RadioGetStationsRequest : RadioRequest
{
    long long _nodeType;
    SSURLConnectionRequest *_request;
    SSMetricsConfiguration *_metricsConfiguration;
    SSMetricsPageEvent *_metricsPageEvent;
    long long _numberOfResults;
    long long _parentNodeID;
    long long _resultsOffset;
}

@property(nonatomic) long long resultsOffset; // @synthesize resultsOffset=_resultsOffset;
@property(readonly, nonatomic) long long parentNodeID; // @synthesize parentNodeID=_parentNodeID;
@property(nonatomic) long long numberOfResults; // @synthesize numberOfResults=_numberOfResults;
@property(readonly, copy, nonatomic) SSMetricsPageEvent *metricsPageEvent; // @synthesize metricsPageEvent=_metricsPageEvent;
@property(readonly, nonatomic) SSMetricsConfiguration *metricsConfiguration; // @synthesize metricsConfiguration=_metricsConfiguration;
- (void).cxx_destruct;
- (id)_rootTreeNodeByApplyingResponse:(id)arg1 returningError:(id *)arg2;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancel;
- (id)initWithParentNodeID:(long long)arg1;
- (id)initForFeaturedStations;

@end

