//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreImage/CIFeature.h>

@class NSString;

@interface CIQRCodeFeature : CIFeature
{
    struct CGRect bounds;
    struct CGPoint topLeft;
    struct CGPoint topRight;
    struct CGPoint bottomLeft;
    struct CGPoint bottomRight;
    NSString *messageString;
}

+ (id)barcodeFeaturesWithBoundsArray:(const struct CGRect *)arg1 count:(unsigned long long)arg2;
+ (id)barcodeFeatureWithBounds:(struct CGRect)arg1;
@property(copy) NSString *messageString; // @synthesize messageString;
@property struct CGPoint bottomRight; // @synthesize bottomRight;
@property struct CGPoint bottomLeft; // @synthesize bottomLeft;
@property struct CGPoint topRight; // @synthesize topRight;
@property struct CGPoint topLeft; // @synthesize topLeft;
@property struct CGRect bounds; // @synthesize bounds;
- (id).cxx_construct;
- (id)initWithBounds:(struct CGRect)arg1 topLeft:(struct CGPoint)arg2 topRight:(struct CGPoint)arg3 bottomLeft:(struct CGPoint)arg4 bottomRight:(struct CGPoint)arg5 messageString:(id)arg6;
- (id)initWithBounds:(struct CGRect)arg1;
- (id)type;

@end

