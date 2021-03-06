//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACAccount, ACAccountStore, NSMutableDictionary, NSMutableSet, NSOperationQueue;

@interface SLTwitterContactUpdater : NSObject
{
    void *_addressBook;
    ACAccount *_account;
    ACAccountStore *_accountStore;
    NSMutableDictionary *_personDictionary;
    NSOperationQueue *_operationQueue;
    NSMutableSet *_updatedPeople;
    int _expectedBatchJobs;
    int _completedBatchJobs;
    float _partialBatchJobsCompleted;
    int _expectedPhotoJobs;
    int _completedPhotoJobs;
    _Bool _warnedOfFailure;
    id <SLTwitterContactUpdaterDelegate> _delegate;
}

@property(nonatomic) __weak id <SLTwitterContactUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)photoLookupFinished:(id)arg1;
- (void)batchLookupFinished:(id)arg1;
- (void)batchLookupProgress:(id)arg1;
- (void)cancel;
- (void)updatePhotos;
- (void)updateContacts;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 store:(id)arg2;

@end

