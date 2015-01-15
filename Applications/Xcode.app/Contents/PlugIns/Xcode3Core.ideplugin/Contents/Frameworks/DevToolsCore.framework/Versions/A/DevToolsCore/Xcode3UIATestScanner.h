//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDEWorkspace, NSMutableArray, NSMutableDictionary;

@interface Xcode3UIATestScanner : NSObject
{
    NSMutableDictionary *_importedFiles;
    NSMutableArray *_importSearchDirectories;
    IDEWorkspace *_workspace;
}

+ (id)_generateURLWithString:(id)arg1 relativeToDirectory:(id)arg2 error:(id *)arg3;
+ (id)_makePathURLCompatablePath:(id)arg1;
+ (id)prefixImportStrings;
+ (id)emptyImportStrings;
+ (id)basePrefixImportStrings;
+ (void)initialize;
@property(retain) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
- (void).cxx_destruct;
- (id)_scanImportedFileForLine:(id)arg1 relativeToFilePath:(id)arg2;
- (id)searchFileForFunctionalizedTests:(id)arg1;
- (void)setImportSearchDirectories:(id)arg1;
- (id)importSearchDirectories;
- (BOOL)hasFileBeenImported:(id)arg1;
- (void)addImportedFileRecord:(id)arg1;
- (void)clearImportedRecordCache;
- (id)initWithWorkspace:(id)arg1;
- (id)init;

@end
