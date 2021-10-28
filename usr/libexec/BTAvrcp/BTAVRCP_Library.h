//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPMediaQuery, NSMutableArray;
@protocol BTAVRCP_LibraryDelegate;

@interface BTAVRCP_Library : NSObject
{
    id <BTAVRCP_LibraryDelegate> _delegate;	// 8 = 0x8
    NSMutableArray *_currentVFSPath;	// 16 = 0x10
    MPMediaQuery *_currentSearchQuery;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100005c1c
@property(retain, nonatomic) MPMediaQuery *currentSearchQuery; // @synthesize currentSearchQuery=_currentSearchQuery;
@property(retain, nonatomic) NSMutableArray *currentVFSPath; // @synthesize currentVFSPath=_currentVFSPath;
@property(nonatomic) __weak id <BTAVRCP_LibraryDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned char)playNowPlayingItemWithUid:(unsigned long long)arg1;	// IMP=0x0000000100005b14
- (unsigned char)playSearchItemWithUid:(unsigned long long)arg1;	// IMP=0x0000000100005a60
- (unsigned char)playVFSItemWithUid:(unsigned long long)arg1;	// IMP=0x00000001000059e4
- (unsigned long long)getNowPlayingItemsCount;	// IMP=0x0000000100005990
- (unsigned long long)getSearchItemsCount;	// IMP=0x000000010000593c
- (unsigned long long)getVFSItemsCount;	// IMP=0x00000001000058c8
- (void)search:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100005614
- (unsigned char)getNowPlayingItemWithUid:(unsigned long long)arg1 attributeIDs:(id)arg2 reply:(id)arg3;	// IMP=0x00000001000052e4
- (unsigned char)getSearchItemWithUid:(unsigned long long)arg1 attributeIDs:(id)arg2 reply:(id)arg3;	// IMP=0x000000010000520c
- (unsigned char)getVFSItemWithUid:(unsigned long long)arg1 attributeIDs:(id)arg2 reply:(id)arg3;	// IMP=0x000000010000511c
- (void)getNowPlayingItemsFromStart:(unsigned long long)arg1 toEnd:(unsigned long long)arg2 attributeIDs:(id)arg3 replyBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000100004f08
- (void)getSearchItemsFromStart:(unsigned long long)arg1 toEnd:(unsigned long long)arg2 attributeIDs:(id)arg3 replyBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000100004d0c
- (void)getVFSItemsFromStart:(unsigned long long)arg1 toEnd:(unsigned long long)arg2 attributeIDs:(id)arg3 replyBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000100004b10
- (void)changePath:(unsigned long long)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100004810
- (void)getCurrentPath:(CDUnknownBlockType)arg1;	// IMP=0x000000010000453c
- (void)libraryDidChange;	// IMP=0x00000001000044fc
- (void)dealloc;	// IMP=0x0000000100004488
- (id)init;	// IMP=0x0000000100004278

@end
