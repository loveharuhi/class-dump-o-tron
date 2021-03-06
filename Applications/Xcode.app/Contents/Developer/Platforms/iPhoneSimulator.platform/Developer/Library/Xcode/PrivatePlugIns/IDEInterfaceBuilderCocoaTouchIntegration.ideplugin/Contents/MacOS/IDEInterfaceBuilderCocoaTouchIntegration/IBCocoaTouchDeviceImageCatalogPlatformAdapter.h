//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBAbstractCocoaTouchImageCatalogPlatformAdapter.h>

@class NSString;

@interface IBCocoaTouchDeviceImageCatalogPlatformAdapter : IBAbstractCocoaTouchImageCatalogPlatformAdapter
{
    NSString *_pngcrushPath;
    BOOL _attemptedToFindPNGCrush;
}

- (void).cxx_destruct;
- (BOOL)copyImageRep:(id)arg1 toPath:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (BOOL)writePNGImageData:(id)arg1 toPath:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (BOOL)compressPNGAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
- (id)pngcrushErrorForFile:(id)arg1 codeType:(id)arg2 code:(long long)arg3 standardError:(id)arg4 standardOutput:(id)arg5;
- (id)taskForCompressingPNGAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
- (id)pathForPNGCrushScriptReturningDiagnostics:(id *)arg1;

@end

