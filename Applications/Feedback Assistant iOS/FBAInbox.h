//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage, UIImageSymbolConfiguration;

@interface FBAInbox : NSObject
{
    long long _type;	// 8 = 0x8
}

@property(readonly) long long type; // @synthesize type=_type;
- (id)predicateForProgram:(id)arg1;	// IMP=0x000000010005bca8
- (id)inboxItemsForProgram:(id)arg1 withSortDescriptors:(id)arg2;	// IMP=0x000000010005bae8
- (unsigned long long)unreadCountForProgram:(id)arg1;	// IMP=0x000000010005bae0
@property(readonly) UIImage *icon;
@property(readonly) NSString *iconSystemImageName;
@property(readonly) UIImageSymbolConfiguration *iconConfiguration;
@property(readonly) NSString *displayText;

@end
