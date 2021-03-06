//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsCore/XCFilterOutputStream.h>

@class IDEActivityLogSectionRecorder, NSDictionary, NSString, XCMacroExpansionScope;

@interface XCBuildCommandOutputParser : XCFilterOutputStream
{
    IDEActivityLogSectionRecorder *_logSectionRecorder;
    NSDictionary *_messageCategoryInfo;
    NSDictionary *_severityBasedMessageCategoryInfo;
    NSString *_workingDirectoryPath;
    NSDictionary *_previouslyCopiedFilePaths;
    XCMacroExpansionScope *_macroExpansionScope;
}

@property(retain) XCMacroExpansionScope *macroExpansionScope; // @synthesize macroExpansionScope=_macroExpansionScope;
@property(copy) NSDictionary *previouslyCopiedFilePaths; // @synthesize previouslyCopiedFilePaths=_previouslyCopiedFilePaths;
@property(copy) NSString *workingDirectoryPath; // @synthesize workingDirectoryPath=_workingDirectoryPath;
@property(copy) NSDictionary *severityBasedMessageCategoryInfo; // @synthesize severityBasedMessageCategoryInfo=_severityBasedMessageCategoryInfo;
@property(copy) NSDictionary *messageCategoryInfo; // @synthesize messageCategoryInfo=_messageCategoryInfo;
- (void).cxx_destruct;
- (void)writeBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (void)setLogSectionRecorder:(id)arg1;
- (id)logSectionRecorder;
- (id)initWithNextOutputStream:(id)arg1;

@end

