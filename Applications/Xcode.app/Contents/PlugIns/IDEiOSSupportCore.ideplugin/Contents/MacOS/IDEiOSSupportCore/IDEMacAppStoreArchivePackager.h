//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEiOSSupportCore/IDEAppStorePackager.h>

@interface IDEMacAppStoreArchivePackager : IDEAppStorePackager
{
}

- (id)packageFilenameForArchive:(id)arg1;
- (id)_packagingOperationForArchive:(id)arg1 withCodesignIdentity:(id)arg2 installerIdentity:(id)arg3 includeSymbolCache:(BOOL)arg4 temporaryDir:(id)arg5 operationGroup:(id)arg6 andError:(id *)arg7;
- (id)sdk;
- (_Bool)supportsSymbolUploads;
- (_Bool)supportsInstallerSigning;
- (_Bool)supportsCodeSigning;

@end

