//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ApplicationHandle;

@interface ApplicationWorkspaceOperation : NSObject
{
    ApplicationHandle *_applicationHandle;	// 8 = 0x8
}

@property(readonly, nonatomic) ApplicationHandle *applicationHandle; // @synthesize applicationHandle=_applicationHandle;
- (void)runWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010004fde8
@property(readonly, nonatomic) _Bool blocksAppInstallation;
- (_Bool)applicationIsInstalled:(id)arg1;	// IMP=0x000000010004fd58
- (void)dealloc;	// IMP=0x000000010004fd10
- (id)initWithApplicationHandle:(id)arg1;	// IMP=0x000000010004fcb0

@end
