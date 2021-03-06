//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class SoftwareProperties;

@interface InstallSoftwareOperation : ISOperation
{
    SoftwareProperties *_softwareProperties;	// 96 = 0x60
}

- (_Bool)_verifyApplication:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000cf494
- (id)_newInstallationOptions;	// IMP=0x00000001000cf018
- (_Bool)_installPackage:(id *)arg1;	// IMP=0x00000001000ce8d4
- (void)run;	// IMP=0x00000001000ce7cc
- (void)main;	// IMP=0x00000001000ce464
@property(readonly) SoftwareProperties *softwareProperties;
- (void)dealloc;	// IMP=0x00000001000ce3ec
- (id)initWithSoftwareProperties:(id)arg1;	// IMP=0x00000001000ce384

@end

