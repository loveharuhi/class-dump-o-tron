//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "ABUnknownPersonViewControllerDelegate.h"

@class ABUnknownPersonViewController, NSString;

__attribute__((visibility("hidden")))
@interface EKUnknownIdentityViewController : UIViewController <ABUnknownPersonViewControllerDelegate>
{
    id <EKIdentityProtocol> _identity;
    ABUnknownPersonViewController *_unknownPersonViewController;
}

- (void).cxx_destruct;
- (void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void *)arg2;
- (void)setIdentity:(id)arg1;
- (void)loadView;
- (id)initWithIdentity:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
