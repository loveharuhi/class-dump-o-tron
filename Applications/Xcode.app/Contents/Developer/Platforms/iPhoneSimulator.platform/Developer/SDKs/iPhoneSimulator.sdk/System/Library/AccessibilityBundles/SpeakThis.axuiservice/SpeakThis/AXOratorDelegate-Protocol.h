//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AXOrator, NSString;

@protocol AXOratorDelegate <NSObject>

@optional
- (void)orator:(AXOrator *)arg1 willSpeakRange:(struct _NSRange)arg2 ofContent:(NSString *)arg3;
- (void)oratorDidCancelSpeaking:(AXOrator *)arg1;
- (void)oratorDidResumeSpeaking:(AXOrator *)arg1;
- (void)oratorDidPauseSpeaking:(AXOrator *)arg1;
- (void)oratorDidFinishSpeaking:(AXOrator *)arg1;
- (void)oratorDidStartSpeaking:(AXOrator *)arg1;
@end

