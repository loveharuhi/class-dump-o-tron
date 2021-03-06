//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MZAbstractWorker.h"

@class ITunesApplicationSPIExtractor, NSString;

@interface ITunesApplicationSPIExtractorWorker : MZAbstractWorker
{
    ITunesApplicationSPIExtractor *_extractor;
    NSString *_inputDirectory;
    NSString *_outputFilePath;
    id <ITunesApplicationSPIExtractorWorkerDelegate> _nonretainedDelegate;
}

- (void)seriesCompleted;
- (id)cleanupOutputFile;
- (void)run;
- (id)outputFileContents;
- (id)outputFilePath;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setInputDirectory:(id)arg1;
- (id)inputDirectory;
- (void)dealloc;
- (id)initWithInputDirectory:(id)arg1;
- (id)init;

@end

