//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MKLocationProvider.h"
#import "MNMotionContextProvider.h"

@class CLLocation, GEODirectionsRequest, GEODirectionsResponse, MNTestLogger, MNTrace, NSArray, NSBundle, NSData, NSDate, NSHashTable, NSIndexSet, NSMutableArray, NSString, NSTimer, SearchResult;

__attribute__((visibility("hidden")))
@interface MNTracePlayer : NSObject <MKLocationProvider, MNMotionContextProvider>
{
    NSHashTable *_observers;
    id <MKLocationProviderDelegate> _locationDelegate;
    id <MNMotionContextProviderDelegate> _motionDelegate;
    MNTrace *_trace;
    MNTestLogger *_testLogger;
    unsigned long long _currentRequestId;
    int _dbResult;
    _Bool _isPlaying;
    _Bool _isPlayingETAUpdates;
    _Bool _isPaused;
    _Bool _rawGPSMode;
    NSDate *_playStartTime;
    NSArray *_locations;
    NSArray *_vehicleSpeedData;
    NSArray *_vehicleHeadingData;
    unsigned long long _lastPlayedIndex;
    NSArray *_guideMeSelections;
    unsigned long long _playingIndex;
    NSTimer *_vehicleUpdateSpeedTimer;
    NSTimer *_vehicleUpdateHeadingTimer;
    unsigned long long _lastReportedVehicleSpeedIndex;
    unsigned long long _lastReportedVehicleHeadingIndex;
    unsigned long long _etaUpdateIndex;
    _Bool _requestingRoute;
    CDUnknownBlockType _delayedFinishedHandler;
    CDUnknownBlockType _delayedErrorHandler;
    NSArray *_directions;
    unsigned long long _routeRequestIndex;
    NSArray *_routeSelections;
    NSArray *_etaUpdates;
    NSDate *_dateOfLastSkip;
    unsigned long long bookmarkIndexOfLastSkip;
    struct sqlite3_stmt *_selectBookmarkImage;
    NSArray *_likelyRoutes;
    double _speedMultiplier;
    double _traceStartTime;
    SearchResult *_source;
    SearchResult *_destination;
    int _mainTransportType;
    double _duration;
    _Bool _isReplay;
    _Bool _isSimulation;
    _Bool _isRouteGenius;
    _Bool _usesCLMapCorrection;
    int _traceVersion;
    int _originalVersion;
    double _initialCourse;
    NSMutableArray *_etaUpdaters;
    NSTimer *_playTimer;
    NSIndexSet *_boringIndices;
    CDUnknownBlockType _authorizationRequestBlock;
}

@property(readonly, nonatomic) NSArray *traceETAUpdaters; // @synthesize traceETAUpdaters=_etaUpdaters;
@property(copy, nonatomic) CDUnknownBlockType authorizationRequestBlock; // @synthesize authorizationRequestBlock=_authorizationRequestBlock;
@property(readonly, nonatomic) _Bool usesCLMapCorrection; // @synthesize usesCLMapCorrection=_usesCLMapCorrection;
@property(readonly, nonatomic) _Bool isSimulation; // @synthesize isSimulation=_isSimulation;
@property(nonatomic) _Bool isReplay; // @synthesize isReplay=_isReplay;
@property(readonly, nonatomic) double initialCourse; // @synthesize initialCourse=_initialCourse;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) int mainTransportType; // @synthesize mainTransportType=_mainTransportType;
@property(retain, nonatomic) SearchResult *destination; // @synthesize destination=_destination;
@property(retain, nonatomic) SearchResult *source; // @synthesize source=_source;
@property(retain, nonatomic) NSIndexSet *boringIndices; // @synthesize boringIndices=_boringIndices;
@property(copy, nonatomic) CDUnknownBlockType delayedErrorHandler; // @synthesize delayedErrorHandler=_delayedErrorHandler;
@property(copy, nonatomic) CDUnknownBlockType delayedFinishedHandler; // @synthesize delayedFinishedHandler=_delayedFinishedHandler;
@property(nonatomic) double speedMultiplier; // @synthesize speedMultiplier=_speedMultiplier;
@property(nonatomic) _Bool requestingRoute; // @synthesize requestingRoute=_requestingRoute;
@property(retain, nonatomic) NSTimer *playTimer; // @synthesize playTimer=_playTimer;
@property(retain, nonatomic) NSDate *playStartTime; // @synthesize playStartTime=_playStartTime;
@property(readonly, nonatomic) _Bool isRouteGenius; // @synthesize isRouteGenius=_isRouteGenius;
@property(nonatomic) _Bool rawGPSMode; // @synthesize rawGPSMode=_rawGPSMode;
@property(nonatomic) _Bool isPlayingETAUpdates; // @synthesize isPlayingETAUpdates=_isPlayingETAUpdates;
@property(nonatomic) _Bool isPaused; // @synthesize isPaused=_isPaused;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(readonly, nonatomic) NSArray *guideMeSelections; // @synthesize guideMeSelections=_guideMeSelections;
@property(retain, nonatomic) NSArray *likelyRoutes; // @synthesize likelyRoutes=_likelyRoutes;
@property(retain, nonatomic) NSArray *routeSelections; // @synthesize routeSelections=_routeSelections;
@property(retain, nonatomic) NSArray *directions; // @synthesize directions=_directions;
@property(retain, nonatomic) NSArray *locations; // @synthesize locations=_locations;
@property(nonatomic) __weak id <MNMotionContextProviderDelegate> motionDelegate; // @synthesize motionDelegate=_motionDelegate;
@property(nonatomic) __weak id <MKLocationProviderDelegate> delegate; // @synthesize delegate=_locationDelegate;
@property(retain, nonatomic) MNTestLogger *testLogger; // @synthesize testLogger=_testLogger;
@property(retain, nonatomic) MNTrace *trace; // @synthesize trace=_trace;
- (void).cxx_destruct;
- (void)stopMotionUpdates;
- (void)startMotionUpdates;
- (void)dismissHeadingCalibrationDisplay;
@property(readonly, nonatomic) _Bool isTracePlayer;
@property(readonly, nonatomic) _Bool airplaneModeBlocksLocation;
@property(readonly, nonatomic) int authorizationStatus;
@property(readonly, nonatomic) double expectedGpsUpdateInterval;
@property(nonatomic) int headingOrientation;
@property(nonatomic) long long activityType;
@property(nonatomic) _Bool matchInfoEnabled;
@property(nonatomic) double distanceFilter;
@property(nonatomic, getter=isLocationServicesPreferencesDialogEnabled) _Bool locationServicesPreferencesDialogEnabled;
@property(nonatomic) double desiredAccuracy;
@property(copy, nonatomic) NSString *effectiveBundleIdentifier;
@property(retain, nonatomic) NSBundle *effectiveBundle;
- (void)stopUpdatingVehicleHeading;
- (void)startUpdatingVehicleHeading;
- (void)stopUpdatingVehicleSpeed;
- (void)startUpdatingVehicleSpeed;
- (void)stopUpdatingHeading;
- (void)startUpdatingHeading;
- (void)matchLocations;
- (void)loadImageForBookmarkId:(unsigned long long)arg1 onLoad:(CDUnknownBlockType)arg2;
- (void)addTraceETAUpdater:(id)arg1;
- (double)_responseTimeIntervalForRequest:(id)arg1;
- (_Bool)requestNextRouteWithHandler:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (_Bool)isReadyForRequest:(id)arg1;
@property(readonly, nonatomic) NSData *firstDirectionsResponseID;
@property(readonly, nonatomic) GEODirectionsResponse *firstDirectionsResponse;
@property(readonly, nonatomic) GEODirectionsRequest *firstDirectionsRequest;
- (id)selectedRouteID;
- (_Bool)isPlayingPointTrace;
- (void)_playRouteResponseForRequestIndex:(unsigned long long)arg1 requestId:(unsigned long long)arg2;
- (void)resumePlaying;
- (void)pausePlaying;
- (void)stopUpdatingLocation;
- (void)jumpToLeg:(id)arg1;
- (void)jumpToBookmarkId:(unsigned long long)arg1;
- (void)skipByTimeInterval:(double)arg1;
- (id)boringIndicesWithinTrace:(id)arg1;
- (void)jumpToTime:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateETAUpdateIndexForCurrentTimestamp;
- (void)playIndex;
- (void)forceLocationUpdate;
@property(readonly, nonatomic) CLLocation *startLocation;
- (id)locationAtIndex:(long long)arg1;
- (id)_playbackAdjustedLocationFromLocationRow:(id)arg1;
- (void)killTimers;
- (void)startPlayTimerWithInterval:(double)arg1;
- (void)playStaleIndex;
- (void)startPlayTimerWithTargetTimestamp:(double)arg1;
@property(readonly, nonatomic) NSDate *currentRecordedDate;
@property(readonly, nonatomic) double currentRecordedTimestamp;
@property(readonly, nonatomic) double playCurrentTimestamp;
- (void)_playETAUpdateRequestFromPlayIndex:(unsigned long long)arg1;
- (void)_updateVehicleHeadingTimerFired:(unsigned long long)arg1;
- (void)_updateVehicleSpeedTimerFired:(unsigned long long)arg1;
- (void)_scheduleVehicleHeadingUpdatesFromTime:(double)arg1;
- (void)_scheduleVehicleSpeedUpdatesFromTime:(double)arg1;
- (id)_scheduleVehicleDataUpdatesFromTime:(double)arg1 vehicleData:(id)arg2 lastReportedIndex:(unsigned long long)arg3 vehicleDataUpdatedCallback:(SEL)arg4;
- (void)startUpdatingLocation;
- (void)dealloc;
- (_Bool)_loadTraceWithPath:(id)arg1;
- (_Bool)_runQuery:(id)arg1 withPreparedHandler:(CDUnknownBlockType)arg2 stepHandler:(CDUnknownBlockType)arg3;
- (_Bool)_upgradeTraceFromVersion:(unsigned long long)arg1;
- (id)_migratorSQLForVersion:(unsigned long long)arg1;
- (void)_logSqliteErrorWithFile:(const char *)arg1 line:(int)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)initWithTruthTracePath:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)initWithPath:(id)arg1 isReplay:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

