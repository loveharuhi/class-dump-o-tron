//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsCore/Xcode3Group.h>

#import "IDELocalizedGroup.h"

@class DVTFileDataType, DVTObservingToken, NSString, PBXVariantGroup, Xcode3FileTypeItem, Xcode3SourceTreeItem, Xcode3VariantFileReference;

@interface Xcode3VariantGroup : Xcode3Group <IDELocalizedGroup>
{
    PBXVariantGroup *_variantGroup;
    Xcode3VariantFileReference *_defaultReference;
    DVTObservingToken *_subitemsObservingToken;
}

+ (id)keyPathsForValuesAffectingAssignedDataType;
+ (Class)_groupClassForSubitems;
+ (Class)_fileReferenceClassForSubitems;
+ (void)variantGroupByWrappingReference:(id)arg1 forLocalization:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (void)_moveFileReference:(id)arg1 intoVariantGroup:(id)arg2 atLocaleIdentifier:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
- (void)removeVariantForLocale:(id)arg1 deleteFile:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)addNewReferenceForLocale:(id)arg1 filePath:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)moveVariantFileFromLocale:(id)arg1 toLocale:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)copyVariantFileFromLocale:(id)arg1 toLocale:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_copyVariantFileFromLocale:(id)arg1 toLocale:(id)arg2 withDirectory:(id)arg3 deleteOriginal:(BOOL)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)makeGlobalWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)proposedFilePathForLocalization:(id)arg1 fileType:(id)arg2;
- (void)setTextEncoding:(unsigned long long)arg1;
- (unsigned long long)textEncoding;
- (BOOL)isConvertibleVariantGroup;
@property(readonly) DVTFileDataType *fileConversionDataType;
@property(copy) DVTFileDataType *assignedDataType;
@property(copy) DVTFileDataType *fileDataType;
@property(retain) Xcode3FileTypeItem *fileTypeItem;
@property(retain) Xcode3SourceTreeItem *sourceTreeItem;
- (void)setPath:(id)arg1 resolutionStrategies:(id)arg2;
- (id)locales;
- (BOOL)structureEditSetName:(id)arg1 inContext:(id)arg2;
- (BOOL)canStructureEditName;
- (BOOL)createNewSubgroupAtIndex:(unsigned long long)arg1;
- (BOOL)structureEditRemoveSubitemsAtIndexes:(id)arg1 error:(id *)arg2;
- (id)structureEditInsertFileURLs:(id)arg1 atIndex:(unsigned long long)arg2 createGroupsForFolders:(BOOL)arg3;
- (BOOL)canStructureEditInsertFileURLs:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)structureEditInsertSubitems:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)canStructureEditInsertSubitems:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)allowUserModificationOfSubitems;
- (void)primitiveInvalidate;
- (id)ideModelObjectTypeIdentifier;
@property(readonly) Xcode3VariantFileReference *defaultReference;
- (void)_invalidateDefaultReference;
- (id)localizedContainer;
- (id)subitemForMainLocale;
- (id)subitemForLocale:(id)arg1;
- (id)_newSubitemForReference:(id)arg1;
@property(readonly) PBXVariantGroup *variantGroup;
- (id)initWithPBXVariantGroup:(id)arg1;
- (id)initWithPBXGroup:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

