//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DOMPersonality, NSDictionary, NSNumber, NSString;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface DOMDevice : NSObject
{
    _Bool _isHub;	// 8 = 0x8
    _Bool _isAttachedToHub;	// 9 = 0x9
    _Bool _powerHog;	// 10 = 0xa
    _Bool _isBillboardDevice;	// 11 = 0xb
    _Bool _isThunderboltDevice;	// 12 = 0xc
    unsigned int _io_service;	// 16 = 0x10
    unsigned int _io_notification;	// 20 = 0x14
    unsigned long long _IORegEntryID;	// 24 = 0x18
    NSDictionary *_properties;	// 32 = 0x20
    NSString *_name;	// 40 = 0x28
    NSObject<OS_os_transaction> *_domDeviceTransaction;	// 48 = 0x30
    DOMPersonality *_winningDomPersonality;	// 56 = 0x38
    unsigned long long _winningIORegEntryID;	// 64 = 0x40
    NSNumber *_winningScore;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_queue;	// 80 = 0x50
    NSString *_dialogTitleKey;	// 88 = 0x58
    NSString *_dialogBodyKey;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000100007160
@property(retain, nonatomic) NSString *dialogBodyKey; // @synthesize dialogBodyKey=_dialogBodyKey;
@property(retain, nonatomic) NSString *dialogTitleKey; // @synthesize dialogTitleKey=_dialogTitleKey;
@property unsigned int io_notification; // @synthesize io_notification=_io_notification;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSNumber *winningScore; // @synthesize winningScore=_winningScore;
@property unsigned long long winningIORegEntryID; // @synthesize winningIORegEntryID=_winningIORegEntryID;
@property(retain, nonatomic) DOMPersonality *winningDomPersonality; // @synthesize winningDomPersonality=_winningDomPersonality;
@property unsigned int io_service; // @synthesize io_service=_io_service;
@property(readonly) _Bool isThunderboltDevice; // @synthesize isThunderboltDevice=_isThunderboltDevice;
@property(readonly) _Bool isBillboardDevice; // @synthesize isBillboardDevice=_isBillboardDevice;
@property(retain, nonatomic) NSObject<OS_os_transaction> *domDeviceTransaction; // @synthesize domDeviceTransaction=_domDeviceTransaction;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
@property unsigned long long IORegEntryID; // @synthesize IORegEntryID=_IORegEntryID;
@property(readonly) _Bool powerHog; // @synthesize powerHog=_powerHog;
@property(readonly) _Bool isAttachedToHub; // @synthesize isAttachedToHub=_isAttachedToHub;
@property(readonly) _Bool isHub; // @synthesize isHub=_isHub;
- (_Bool)shouldMatchDevice;	// IMP=0x0000000100006de8
- (void)evaluateScore:(id)arg1 fromDomPersonality:(id)arg2 withIORegEntryID:(unsigned long long)arg3;	// IMP=0x0000000100006b44
- (_Bool)compositeDeviceIsConfigured;	// IMP=0x0000000100006acc
- (_Bool)isCompositeDevice;	// IMP=0x00000001000069c8
- (id)description;	// IMP=0x000000010000685c
- (void)handleIONotification:(unsigned int)arg1 arg:(void *)arg2;	// IMP=0x00000001000064e8
- (void)updateDeviceProperties;	// IMP=0x0000000100006458
- (void)dealloc;	// IMP=0x0000000100006354
- (id)initWithIOService:(unsigned int)arg1 notificationPort:(struct IONotificationPort *)arg2;	// IMP=0x0000000100005ac0

@end

