//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "EPResourceProtocol-Protocol.h"
#import "EPResourceResourceManagerDelegate-Protocol.h"

@class NSError, NSString;
@protocol EPResourceManagerProtocol><EPResourceManagerResourceDelegate, EPResourceOwnerDelegate;

@interface EPResource : NSObject <EPResourceResourceManagerDelegate, EPResourceProtocol>
{
    _Bool _invalidated;	// 8 = 0x8
    unsigned long long _availability;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
    id <EPResourceOwnerDelegate> _ownerDelegate;	// 32 = 0x20
    id <EPResourceManagerProtocol><EPResourceManagerResourceDelegate> _resourceManager;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001000c4f34
@property(readonly, nonatomic) id <EPResourceManagerProtocol><EPResourceManagerResourceDelegate> resourceManager; // @synthesize resourceManager=_resourceManager;
@property(readonly, nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(nonatomic) __weak id <EPResourceOwnerDelegate> ownerDelegate; // @synthesize ownerDelegate=_ownerDelegate;
- (void)invalidate;	// IMP=0x00000001000c4ddc
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) unsigned long long availability; // @synthesize availability=_availability;
- (void)setAvailability:(unsigned long long)arg1 withError:(id)arg2;	// IMP=0x00000001000c4ad8
- (void)dealloc;	// IMP=0x00000001000c4a78
- (id)initWithResourceManager:(id)arg1 andOwnerDelegate:(id)arg2;	// IMP=0x00000001000c48e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
