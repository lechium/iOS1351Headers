//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCATModernMenuSheet.h"

@class NSString, SCATModernMenuItem;

@interface SCATModernMenuDeviceSheet : SCATModernMenuSheet
{
    NSString *_springBoardActionHandlerIdentifier;	// 16 = 0x10
    SCATModernMenuItem *_muteItem;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100051070
@property(retain, nonatomic) SCATModernMenuItem *muteItem; // @synthesize muteItem=_muteItem;
@property(copy, nonatomic) NSString *springBoardActionHandlerIdentifier; // @synthesize springBoardActionHandlerIdentifier=_springBoardActionHandlerIdentifier;
- (void)_insertObjectsOnSameRow:(id)arg1 intoArray:(id)arg2;	// IMP=0x0000000100050e60
- (id)makeMenuItemsIfNeeded;	// IMP=0x0000000100050b10
- (void)dealloc;	// IMP=0x0000000100050a68
- (id)initWithMenu:(id)arg1;	// IMP=0x000000010005083c

@end

