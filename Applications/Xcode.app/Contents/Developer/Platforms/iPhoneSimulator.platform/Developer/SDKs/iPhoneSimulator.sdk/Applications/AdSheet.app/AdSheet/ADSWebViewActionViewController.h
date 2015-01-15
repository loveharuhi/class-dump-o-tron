//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ADSActionViewController.h"

#import "ADSWebViewControllerDelegate.h"

@class NSString, UITapGestureRecognizer;

@interface ADSWebViewActionViewController : ADSActionViewController <ADSWebViewControllerDelegate>
{
    UITapGestureRecognizer *_homeButtonGestureRecognizer;
}

@property(retain, nonatomic) UITapGestureRecognizer *homeButtonGestureRecognizer; // @synthesize homeButtonGestureRecognizer=_homeButtonGestureRecognizer;
- (void)adWebViewControllerDidDismissViewController:(id)arg1;
- (void)adWebViewControllerWillPresentViewController:(id)arg1;
- (void)adWebViewController:(id)arg1 routeExternalURL:(id)arg2;
- (void)adWebViewControllerShouldDismiss:(id)arg1;
- (void)_homeButtonTapped:(id)arg1;
- (void)clientApplicationDidEnterBackground;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)didSetAdSpaceController;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
