//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSMemoryEntity.h"

@class NSData, NSDictionary, NSString;

@interface FinishDownloadAssetMemoryEntity : SSMemoryEntity
{
}

+ (id)defaultProperties;
+ (Class)databaseEntityClass;
@property(readonly, nonatomic) NSString *sourceURLString;
@property(readonly, nonatomic) NSData *SINFData;
@property(readonly, nonatomic) unsigned long long processingTypes;
@property(readonly, nonatomic) NSString *pathExtension;
@property(readonly, nonatomic) NSString *localPath;
@property(readonly, nonatomic, getter=isDRMFree) _Bool DRMFree;
@property(readonly, nonatomic) NSString *fileProtectionType;
@property(readonly, nonatomic) NSDictionary *fileAttributes;
@property(readonly, nonatomic) NSData *DPInfoData;
@property(readonly, nonatomic) NSString *destinationURLString;
@property(readonly, nonatomic) NSString *destinationFileName;
@property(readonly, nonatomic) NSString *assetType;

@end

