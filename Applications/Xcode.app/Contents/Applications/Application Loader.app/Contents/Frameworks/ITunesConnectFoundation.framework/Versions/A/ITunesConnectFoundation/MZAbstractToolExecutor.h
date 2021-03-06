//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MZTaskDelegate.h"

@class NSMutableData, NSString;

@interface MZAbstractToolExecutor : NSObject <MZTaskDelegate>
{
    NSMutableData *_stdout;
    NSMutableData *_stderr;
    unsigned long long _encoding;
    NSString *_currentDirectoryPath;
    long long _code;
}

@property(nonatomic) long long code; // @synthesize code=_code;
@property(retain, nonatomic) NSString *currentDirectoryPath; // @synthesize currentDirectoryPath=_currentDirectoryPath;
- (void)taskDidTerminate:(id)arg1;
- (void)task:(id)arg1 didAppendToStandardError:(id)arg2;
- (void)task:(id)arg1 didAppendToStandardOutput:(id)arg2;
- (id)standardError;
- (id)standardOut;
- (void)setOutputEncoding:(unsigned long long)arg1;
- (unsigned long long)outputEncoding;
- (id)execute;
- (id)createResult;
- (void)evaluateOutputAndWaitIfNeeded:(long long)arg1;
- (void)dealloc;
- (id)init;
- (void)processExitCode:(id)arg1;
- (id)taskWithError:(id *)arg1;
- (Class)executorResultClass;
- (BOOL)expectsStandardOutputWithSuccessfulExit;

@end

