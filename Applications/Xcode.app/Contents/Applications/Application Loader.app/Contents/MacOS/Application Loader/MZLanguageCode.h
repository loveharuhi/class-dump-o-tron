//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MZLanguageCode : NSObject
{
    NSString *_language;
    NSString *_country;
}

+ (id)codeWithString:(id)arg1;
+ (id)rfc4646CodeWithLongName:(id)arg1;
+ (id)decomposeLongNameString:(id)arg1 language:(id *)arg2 country:(id *)arg3;
+ (id)decomposeRFC4646String:(id)arg1 language:(id *)arg2 country:(id *)arg3;
+ (BOOL)isRFC4646Code:(id)arg1;
+ (id)longNameExpression;
+ (id)codeExpression;
- (id)longName;
- (id)code;
- (void)setCountry:(id)arg1;
- (id)country;
- (void)setLanguage:(id)arg1;
- (id)language;
- (void)dealloc;
- (id)initWithCode:(id)arg1;

@end

