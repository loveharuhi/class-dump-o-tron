//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSSQLiteEntity.h"

@interface PersistentDownloadManagerEntity : SSSQLiteEntity
{
}

+ (void)initialize;
+ (id)foreignKeyColumnForTable:(id)arg1;
+ (id)foreignDatabaseTablesToDelete;
+ (id)databaseTable;
- (void)performNewsstandMigration1InDatabase:(id)arg1;
- (id)finishPersistentDownloadsWithDownloadIDs:(id)arg1;

@end

