//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCSOperation.h"

@interface MCSMessageOperation : MCSOperation
{
}

- (id)localizedShortOperationDescription;	// IMP=0x000000010004aac4
- (id)localizedErrorTitleForMessageCount:(unsigned long long)arg1;	// IMP=0x000000010004aab8
- (id)localizedErrorDescriptionForMessageCount:(unsigned long long)arg1;	// IMP=0x000000010004aaac
- (_Bool)willUnflag;	// IMP=0x000000010004aaa0
- (_Bool)willFlag;	// IMP=0x000000010004aa94
- (_Bool)willMarkUnread;	// IMP=0x000000010004aa88
- (_Bool)willMarkRead;	// IMP=0x000000010004aa7c
- (_Bool)isRevertibleWithMessages:(id)arg1;	// IMP=0x000000010004aa08
- (_Bool)revertOnMessages:(id)arg1 failures:(id)arg2 newMessages:(id)arg3;	// IMP=0x000000010004a960
- (_Bool)commitToMessages:(id)arg1 failures:(id)arg2 newMessages:(id)arg3;	// IMP=0x000000010004a8b8

@end

