//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SearchRecentsOperation : NSOperation
{
    NSString *_query;
    id <SearchRecentsOperationDelegate> _delegate;
}

@property(nonatomic) __weak id <SearchRecentsOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)main;
- (id)initWithSearchQuery:(id)arg1;

@end

