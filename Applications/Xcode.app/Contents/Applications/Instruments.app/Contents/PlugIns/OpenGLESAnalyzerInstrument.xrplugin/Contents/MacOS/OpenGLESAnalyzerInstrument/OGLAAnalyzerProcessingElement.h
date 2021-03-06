//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PFTDataElement.h"

@class NSButton, NSTextView;

@interface OGLAAnalyzerProcessingElement : PFTDataElement
{
    NSTextView *_progressText;
    NSButton *_button;
    long long _tracelinesProcessed;
    long long _estimatedTotalTracelines;
    BOOL _isRecording;
    BOOL _analysisWasCanceled;
}

- (id)createView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)unbindTarget;
- (void)_buttonClicked:(id)arg1;

@end

