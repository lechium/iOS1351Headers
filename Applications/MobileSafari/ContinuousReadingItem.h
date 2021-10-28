//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL, WebBookmark;

@interface ContinuousReadingItem : NSObject
{
    WebBookmark *_readingListBookmark;	// 8 = 0x8
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;	// IMP=0x0000000100166e98
+ (id)itemWithReadingListItem:(id)arg1;	// IMP=0x0000000100166c88
- (void).cxx_destruct;	// IMP=0x0000000100167318
@property(retain, nonatomic, setter=_setReadingListBookmark:) WebBookmark *readingListBookmark; // @synthesize readingListBookmark=_readingListBookmark;
- (void)_readingListItemDidUpdate:(id)arg1;	// IMP=0x0000000100167258
- (id)_initWithReadingListItem:(id)arg1;	// IMP=0x0000000100167180
- (id)_siteNameForReadingListItem;	// IMP=0x00000001001670f8
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, retain, nonatomic) NSURL *URL;
@property(readonly, copy, nonatomic) NSString *previewText;
@property(readonly, copy, nonatomic) NSString *title;
- (unsigned long long)hash;	// IMP=0x0000000100166e4c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100166d50
- (void)dealloc;	// IMP=0x0000000100166cd8

@end
