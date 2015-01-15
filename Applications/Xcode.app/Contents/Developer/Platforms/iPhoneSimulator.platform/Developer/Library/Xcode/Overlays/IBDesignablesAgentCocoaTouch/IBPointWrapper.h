//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

__attribute__((visibility("hidden")))
@interface IBPointWrapper : NSObject <NSCoding>
{
    double x;
    double y;
}

+ (id)pointWrapperWithCGPoint:(struct CGPoint)arg1;
- (id)description;
- (struct CGPoint)cgPointValue;
- (id)replacementObjectForPortCoder:(id)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithX:(double)arg1 y:(double)arg2;

@end
