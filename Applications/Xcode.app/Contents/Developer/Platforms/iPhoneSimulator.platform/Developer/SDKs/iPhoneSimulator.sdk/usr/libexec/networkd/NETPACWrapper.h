//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NETPACWrapper : NSObject
{
    id <NETPACWrapperDelegate> _delegate;
    id _runLoopSource;
    id _pacScript;
    id _pacURL;
    id _targetURL;
}

@property(retain, nonatomic) id targetURL; // @synthesize targetURL=_targetURL;
@property(retain, nonatomic) id pacURL; // @synthesize pacURL=_pacURL;
@property(retain, nonatomic) id pacScript; // @synthesize pacScript=_pacScript;
@property(retain, nonatomic) id runLoopSource; // @synthesize runLoopSource=_runLoopSource;
@property(nonatomic) __weak id <NETPACWrapperDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)initWithScript:(id)arg1 forURL:(id)arg2;
- (id)initWithURL:(id)arg1 forURL:(id)arg2;
- (void)dealloc;
- (void)cancel;
- (void)start;
- (void)handlePACResolution:(id)arg1 error:(id)arg2;

@end
