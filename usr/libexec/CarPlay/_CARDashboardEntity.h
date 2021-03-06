//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class CARDashboardWorkspaceStateChangeItem, NSString;

@interface _CARDashboardEntity : NSObject <NSCopying>
{
    NSString *_identifier;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010007c734
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (_Bool)isProxiedApplicationEntity;	// IMP=0x000000010007c724
- (_Bool)isApplicationEntity;	// IMP=0x000000010007c71c
- (_Bool)isHomescreenEntity;	// IMP=0x000000010007c714
- (_Bool)isSiriEntity;	// IMP=0x000000010007c70c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010007c708
- (void)_buildDescriptionWithBuilder:(id)arg1;	// IMP=0x000000010007c6d4
- (id)description;	// IMP=0x000000010007c65c
- (id)_initWithIdentifier:(id)arg1;	// IMP=0x000000010007c5e4
- (id)init;	// IMP=0x000000010007c5cc
@property(retain, nonatomic, setter=_setSR_associatedChangeItem:) CARDashboardWorkspaceStateChangeItem *_sr_associatedChangeItem;

@end

