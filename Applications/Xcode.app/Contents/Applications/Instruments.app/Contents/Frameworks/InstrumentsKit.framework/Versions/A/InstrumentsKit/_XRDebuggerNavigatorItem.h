//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, NSView;

@interface _XRDebuggerNavigatorItem : NSObject
{
    NSMutableArray *_subItems;
    NSString *_title;
    NSView *_detailView;
    id <NSObject> _representedObject;
}

@property(retain, nonatomic) id <NSObject> representedObject; // @synthesize representedObject=_representedObject;
@property(readonly, nonatomic) NSView *detailView; // @synthesize detailView=_detailView;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSMutableArray *subItems; // @synthesize subItems=_subItems;
- (void).cxx_destruct;
- (BOOL)isHeader;
- (id)initWithTitle:(id)arg1 detailView:(id)arg2 object:(id)arg3;

@end
