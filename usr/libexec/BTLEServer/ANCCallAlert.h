//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ANCAlert.h"

@class NSDate, TUCall, TUCallCenter;

@interface ANCCallAlert : ANCAlert
{
    unsigned char _categoryId;	// 9 = 0x9
    TUCall *_call;	// 16 = 0x10
    TUCallCenter *_callCenter;	// 24 = 0x18
    NSDate *_callDate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100041108
@property(nonatomic) unsigned char categoryId; // @synthesize categoryId=_categoryId;
@property(retain, nonatomic) NSDate *callDate; // @synthesize callDate=_callDate;
@property(retain, nonatomic) TUCallCenter *callCenter; // @synthesize callCenter=_callCenter;
@property(retain, nonatomic) TUCall *call; // @synthesize call=_call;
- (_Bool)performNegativeAction;	// IMP=0x0000000100041074
- (_Bool)performPositiveAction;	// IMP=0x000000010004106c
- (id)negativeActionLabel;	// IMP=0x0000000100041064
- (id)positiveActionLabel;	// IMP=0x000000010004105c
- (_Bool)hasNegativeAction;	// IMP=0x0000000100041054
- (_Bool)hasPositiveAction;	// IMP=0x000000010004104c
- (id)date;	// IMP=0x0000000100041040
- (id)message;	// IMP=0x0000000100041038
- (id)subtitle;	// IMP=0x0000000100040fe4
- (id)title;	// IMP=0x0000000100040ee4
- (id)appIdentifier;	// IMP=0x0000000100040e5c
- (_Bool)isImportant;	// IMP=0x0000000100040e54
- (_Bool)isPhoneNumber:(struct __CFString *)arg1;	// IMP=0x0000000100040e28
- (id)initWithCall:(id)arg1 callCenter:(id)arg2 categoryID:(unsigned char)arg3;	// IMP=0x0000000100040d2c

@end
