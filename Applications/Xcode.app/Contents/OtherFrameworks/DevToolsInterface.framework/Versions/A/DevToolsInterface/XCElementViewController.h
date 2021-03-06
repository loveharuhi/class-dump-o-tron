//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class NSMutableDictionary, XCElementView;

@interface XCElementViewController : NSViewController
{
    XCElementView *_elementView;
    NSMutableDictionary *_vars;
}

@property(retain, nonatomic) XCElementView *elementView; // @synthesize elementView=_elementView;
- (void)dealloc;
- (id)initWithElementView:(id)arg1;
- (void)receiveXCESignal:(id)arg1;
- (id)representedObject;
- (void)setRepresentedObject:(id)arg1;
- (void)discardEditing;
- (void)commitEditingWithDelegate:(id)arg1 didCommitSelector:(SEL)arg2 contextInfo:(void *)arg3;
- (BOOL)commitEditing;
- (void)loadView;
- (void)highlightSearchResult:(id)arg1;
- (id)searchResultsFor:(id)arg1;
@property(readonly, nonatomic) NSMutableDictionary *vars; // @dynamic vars;

@end

