//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FMFAddressBook : NSObject
{
    _Bool _abPrefersNickname;	// 8 = 0x8
}

+ (id)sharedAddressBook;	// IMP=0x0000000100011d14
@property(nonatomic) _Bool abPrefersNickname; // @synthesize abPrefersNickname=_abPrefersNickname;
- (id)prettyNameForHandle:(id)arg1;	// IMP=0x0000000100012498
- (void)addressBookDidChange:(id)arg1;	// IMP=0x0000000100012418
- (void)resetABCachesInSession;	// IMP=0x00000001000121e8
- (void)resetABPreferencesCachesInSession;	// IMP=0x0000000100011fb8
- (void)addressBookPreferencesDidChange:(id)arg1;	// IMP=0x0000000100011f38
- (void)contactStoreDidChange;	// IMP=0x0000000100011ee4

@end
