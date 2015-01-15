//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDateFormatter, NSMutableDictionary, NSString;

@interface CKSQLite : NSObject
{
    _Bool _corrupt;
    NSString *_path;
    NSString *_schema;
    NSString *_schemaVersion;
    NSString *_objectClassPrefix;
    struct sqlite3 *_db;
    unsigned long long _openCount;
    NSMutableDictionary *_statementsBySQL;
    NSDateFormatter *_dateFormatter;
}

@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(readonly, nonatomic) NSMutableDictionary *statementsBySQL; // @synthesize statementsBySQL=_statementsBySQL;
@property(nonatomic) _Bool corrupt; // @synthesize corrupt=_corrupt;
@property(nonatomic) unsigned long long openCount; // @synthesize openCount=_openCount;
@property(nonatomic) struct sqlite3 *db; // @synthesize db=_db;
@property(retain, nonatomic) NSString *objectClassPrefix; // @synthesize objectClassPrefix=_objectClassPrefix;
@property(readonly, nonatomic) NSString *schemaVersion; // @synthesize schemaVersion=_schemaVersion;
@property(readonly, nonatomic) NSString *schema; // @synthesize schema=_schema;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)_boxedValue:(id)arg1 forObjcCProperty:(id)arg2;
- (id)_boxedPropertyDictionary:(id)arg1 forObjCClass:(id)arg2;
- (id)selectObjectOfClass:(Class)arg1 where:(id)arg2 bindings:(id)arg3;
- (id)selectAllObjectsOfClass:(Class)arg1 where:(id)arg2 bindings:(id)arg3;
- (id)selectAllObjectsOfClass:(Class)arg1;
- (long long)insertOrReplaceObject:(id)arg1;
- (id)_tableNameForClass:(Class)arg1;
- (void)deleteFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3;
- (long long)insertOrReplaceInto:(id)arg1 values:(id)arg2;
- (unsigned long long)selectCountFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3;
- (id)selectAllFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3;
- (id)select:(id)arg1 from:(id)arg2 where:(id)arg3 bindings:(id)arg4;
- (id)select:(id)arg1 from:(id)arg2;
- (id)creationDate;
- (void)removePropertyForKey:(id)arg1;
- (void)setDateProperty:(id)arg1 forKey:(id)arg2;
- (id)datePropertyForKey:(id)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (void)dropAllTables;
- (id)allTableNames;
- (void)removeAllStatements;
- (id)statementForSQL:(id)arg1;
- (void)executeSQL:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
- (void)executeSQL:(id)arg1;
- (long long)lastInsertRowID;
- (void)raise:(id)arg1;
- (void)vacuum;
- (void)analyze;
- (void)rollback;
- (void)end;
- (void)begin;
- (void)remove;
- (void)close;
- (void)open;
- (_Bool)openWithError:(id *)arg1;
@property(readonly, nonatomic) _Bool isOpen;
- (id)_createSchemaHash;
- (void)dealloc;
- (id)initWithPath:(id)arg1 schema:(id)arg2;

@end
