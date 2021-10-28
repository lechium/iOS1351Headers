//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ICSAnnouncement.h"

@class CNContactStore, NSArray, NSString;

@interface ICSCallAnnouncement : ICSAnnouncement
{
    NSString *_callerName;	// 8 = 0x8
    long long _callerNameType;	// 16 = 0x10
    NSString *_callServiceName;	// 24 = 0x18
    NSString *_callDestinationID;	// 32 = 0x20
    CNContactStore *_contactStore;	// 40 = 0x28
    NSArray *_contacts;	// 48 = 0x30
    NSString *_callDisplayName;	// 56 = 0x38
    NSString *_callISOCountryCode;	// 64 = 0x40
    NSString *_contactIdentifier;	// 72 = 0x48
}

+ (id)announcementWithCall:(id)arg1;	// IMP=0x00000001000d5a7c
- (void).cxx_destruct;	// IMP=0x00000001000d6c8c
@property(copy, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(copy, nonatomic) NSString *callISOCountryCode; // @synthesize callISOCountryCode=_callISOCountryCode;
@property(copy, nonatomic) NSString *callDisplayName; // @synthesize callDisplayName=_callDisplayName;
@property(retain, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(copy, nonatomic) NSString *callDestinationID; // @synthesize callDestinationID=_callDestinationID;
@property(copy, nonatomic) NSString *callServiceName; // @synthesize callServiceName=_callServiceName;
@property(nonatomic) long long callerNameType; // @synthesize callerNameType=_callerNameType;
@property(copy, nonatomic) NSString *callerName; // @synthesize callerName=_callerName;
- (void)handleContactStoreDidChangeNotification:(id)arg1;	// IMP=0x00000001000d6b8c
- (id)contactsForDestinationID:(id)arg1 isoCountryCode:(id)arg2;	// IMP=0x00000001000d6828
- (id)contactForIdentifier:(id)arg1;	// IMP=0x00000001000d6674
@property(readonly, copy, nonatomic) NSArray *contactKeyDescriptors;
- (id)text;	// IMP=0x00000001000d6410
- (id)callServiceNameForCall:(id)arg1;	// IMP=0x00000001000d6188
- (long long)callerNameTypeForCall:(id)arg1;	// IMP=0x00000001000d6098
- (id)callerNameForCall:(id)arg1;	// IMP=0x00000001000d5f74
- (void)dealloc;	// IMP=0x00000001000d5d48
- (id)initWithCall:(id)arg1;	// IMP=0x00000001000d5b58
- (id)init;	// IMP=0x00000001000d5ad8

@end
