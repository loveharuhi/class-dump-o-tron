//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTTextDocumentLocation, IDESourceControlLogItem;

@interface IDESourceCodeBlameItem : NSObject
{
    IDESourceControlLogItem *_logItem;
    DVTTextDocumentLocation *_paragraphLocation;
}

@property(readonly) IDESourceControlLogItem *logItem; // @synthesize logItem=_logItem;
@property(readonly) DVTTextDocumentLocation *paragraphLocation; // @synthesize paragraphLocation=_paragraphLocation;
- (void).cxx_destruct;
- (id)description;
- (id)initWithParagraphLocation:(id)arg1 logItem:(id)arg2;

@end

