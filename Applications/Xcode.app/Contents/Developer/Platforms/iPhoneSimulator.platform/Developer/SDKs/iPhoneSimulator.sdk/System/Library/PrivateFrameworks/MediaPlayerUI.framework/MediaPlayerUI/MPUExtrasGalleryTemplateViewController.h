//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayerUI/MPUExtrasTemplateViewController.h>

@class MPUExtrasBannerController, MPUExtrasGridElementViewController;

@interface MPUExtrasGalleryTemplateViewController : MPUExtrasTemplateViewController
{
    MPUExtrasBannerController *_bannerController;
    MPUExtrasGridElementViewController *_gridViewController;
    unsigned long long _selectedItemIndex;
}

@property(nonatomic) unsigned long long selectedItemIndex; // @synthesize selectedItemIndex=_selectedItemIndex;
- (void).cxx_destruct;
- (void)_prepareLayout;
- (void)viewDidLoad;
- (id)templateElement;
- (id)contentScrollView;
- (_Bool)showsPlaceholder;

@end

