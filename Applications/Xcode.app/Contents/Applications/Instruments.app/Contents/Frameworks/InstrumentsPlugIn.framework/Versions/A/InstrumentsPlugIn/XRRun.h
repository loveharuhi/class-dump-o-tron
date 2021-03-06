//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSLock, NSMutableArray, NSMutableDictionary, NSString, NSURL, XRDatasetExpertSpace, XRInstrument, XRManagedObjectList;

@interface XRRun : NSObject <NSCoding>
{
    long long _runNumber;
    double _startTime;
    double _endTime;
    NSString *_path;
    NSString *_errMessage;
    NSString *_errSection;
    NSString *_helpReference;
    NSMutableDictionary *_runData;
    NSMutableArray *_trackSegments;
    BOOL _dataChanged;
    BOOL _fetchedArchInfo;
    BOOL _is64BitTarget;
    NSMutableArray *_flags;
    NSLock *_flagsLock;
    XRManagedObjectList *_bookmarkFlags;
    struct _XRDeviceTimeInfo _deviceTimeInfo;
    XRInstrument *_instrument;
    XRDatasetExpertSpace *_datasetExpertSpace;
    NSString *_coreProfileTapUUID;
}

+ (void)initialize;
@property(retain) NSString *coreProfileTapUUID; // @synthesize coreProfileTapUUID=_coreProfileTapUUID;
@property BOOL dataChanged; // @synthesize dataChanged=_dataChanged;
- (void)selectRowsFromDatasetExpert:(id)arg1;
@property(readonly) XRDatasetExpertSpace *datasetExpertSpace;
- (void)didInitializeDatasetExpertSpace:(id)arg1;
- (id)eventDescriptorForIdentifier:(id)arg1;
- (id)threadStrategyController;
- (id)helpReference;
- (void)setHelpReference:(id)arg1;
- (id)errorSection;
- (id)errorMessage;
- (void)setErrorMessage:(id)arg1;
- (void)setErrorMessage:(id)arg1 inSection:(id)arg2;
- (void)resymbolicationDidComplete;
- (void)setIs64bit:(BOOL)arg1;
- (BOOL)is64Bit;
- (id)interfaceObjectForKey:(id)arg1;
- (void)setInterfaceObject:(id)arg1 forKey:(id)arg2;
- (id)userInterfaceData;
- (id)dataContextObjectForKey:(id)arg1;
- (void)setDataContextObject:(id)arg1 forKey:(id)arg2;
- (id)dataContexts;
- (id)bookmarkFlags;
@property(readonly) const struct _XRDeviceTimeInfo *deviceTimeInfo;
- (void)highlightFlag:(id)arg1 focus:(BOOL)arg2;
- (id)flagWithValue:(id)arg1 forKey:(id)arg2;
- (id)flagList;
- (unsigned long long)flagCount;
- (BOOL)hasFlags;
- (void)removeFlag:(id)arg1;
- (void)addFlag:(id)arg1;
- (Class)connectionDecoratorForStrategy:(id)arg1;
- (Class)decoratorForStrategy:(id)arg1;
- (void)cleanupFromView;
- (void)stopCurrentTrackSegmentNow;
- (void)addTrackSegment:(id)arg1;
- (void)clearTrackSegments;
- (void)_addTrackSegment:(id)arg1;
- (id)allSegments;
- (int)targetProcessIdentifier;
- (void)setTargetProcessIdentifier:(int)arg1;
@property(readonly) struct XRTimeRange timeRange;
- (BOOL)isRunning;
- (void)setEnd:(double)arg1;
- (double)endTime;
- (void)setStart:(double)arg1;
- (double)startTime;
@property(readonly) NSURL *coreProfileTapURL;
@property(readonly) NSURL *intermediatesURL;
- (id)path;
- (id)displayName;
- (long long)runNumber;
@property XRInstrument *instrument;
- (BOOL)shouldSaveToDocument;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (void)setPath:(id)arg1;
- (void)setupWithRunNumber:(long long)arg1 atPath:(id)arg2;
- (id)init;
- (void)finishedImportingSession:(id)arg1;
- (void)prepareToImportSession:(id)arg1;

@end

