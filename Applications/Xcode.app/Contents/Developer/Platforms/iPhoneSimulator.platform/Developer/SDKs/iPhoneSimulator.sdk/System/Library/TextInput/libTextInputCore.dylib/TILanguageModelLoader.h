//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CPLRUDictionary, NSString, TIInputMode;

@interface TILanguageModelLoader : NSObject
{
    CPLRUDictionary *_clientRecords;
    TIInputMode *_inputMode;
    NSString *_dynamicResourcePath;
}

+ (void)performMaintenance;
+ (void)clearDynamicLearningCaches;
+ (void)clearDynamicResourcesAtPath:(id)arg1;
+ (id)sharedLanguageModelLoaderForInputMode:(id)arg1 dynamicResourcePath:(id)arg2;
+ (shared_ptr_e9f752ce)modelForLocale:(id)arg1 appContext:(id)arg2 dynamicResourcePath:(id)arg3;
@property(readonly, nonatomic) NSString *dynamicResourcePath; // @synthesize dynamicResourcePath=_dynamicResourcePath;
@property(readonly, nonatomic) TIInputMode *inputMode; // @synthesize inputMode=_inputMode;
- (shared_ptr_e9f752ce)languageModelForAppContext:(id)arg1;
- (shared_ptr_e9f752ce)sharedLanguageModelForClient:(id)arg1 withRecipient:(id)arg2;
- (CDUnknownBlockType)modelGetterForClient:(id)arg1 withRecipient:(id)arg2;
- (id)recordForClient:(id)arg1;
- (void)performLearningIfNecessaryForClient:(id)arg1 withModel:(shared_ptr_e9f752ce)arg2;
- (void)clearDynamicLearningCaches;
- (id)initWithInputMode:(id)arg1 dynamicResourcePath:(id)arg2;
- (void)dealloc;

@end

