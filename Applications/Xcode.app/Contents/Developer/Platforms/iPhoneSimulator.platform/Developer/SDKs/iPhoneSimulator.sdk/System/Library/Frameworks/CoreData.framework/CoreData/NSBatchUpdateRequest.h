//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreData/NSPersistentStoreRequest.h>

#import "NSPredicatedStoreRequest.h"

@class NSDictionary, NSEntityDescription, NSPredicate, NSString;

@interface NSBatchUpdateRequest : NSPersistentStoreRequest <NSPredicatedStoreRequest>
{
    id _entity;
    NSPredicate *_predicate;
    struct _requestFlags {
        unsigned int includesSubentities:1;
        unsigned int resultType:2;
        unsigned int entityIsName:1;
        unsigned int _RESERVED:28;
    } _flags;
    NSDictionary *_columnsToUpdate;
    NSString *_entityName;
}

+ (id)batchUpdateRequestWithEntityName:(id)arg1;
@property(readonly, copy) NSString *entityName; // @synthesize entityName=_entityName;
@property(readonly) NSEntityDescription *entity; // @synthesize entity=_entity;
@property(retain) NSPredicate *predicate; // @synthesize predicate=_predicate;
- (void)_resolveEntityWithContext:(id)arg1;
@property(copy) NSDictionary *propertiesToUpdate; // @synthesize propertiesToUpdate=_columnsToUpdate;
- (void)_setValidatedPropertiesToUpdate:(id)arg1;
- (id)_newValidatedPropertiesToUpdate:(id)arg1 error:(id *)arg2;
@property unsigned long long resultType;
@property _Bool includesSubentities;
- (unsigned long long)requestType;
- (void)dealloc;
- (id)initWithEntity:(id)arg1;
- (id)initWithEntityName:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
