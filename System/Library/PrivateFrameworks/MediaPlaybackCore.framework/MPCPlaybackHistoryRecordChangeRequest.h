/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:30 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPModelPlayEvent, MPModelGenericObject;

@interface MPCPlaybackHistoryRecordChangeRequest : NSObject <NSCopying> {

	BOOL _allowsStoreContainerImport;
	BOOL _updateHistoryPlaylist;
	MPModelPlayEvent* _playEvent;
	MPModelGenericObject* _itemGenericObject;
	long long _repeatType;

}

@property (assign,nonatomic) BOOL allowsStoreContainerImport;                       //@synthesize allowsStoreContainerImport=_allowsStoreContainerImport - In the implementation block
@property (nonatomic,retain) MPModelPlayEvent * playEvent;                          //@synthesize playEvent=_playEvent - In the implementation block
@property (nonatomic,retain) MPModelGenericObject * itemGenericObject;              //@synthesize itemGenericObject=_itemGenericObject - In the implementation block
@property (assign,nonatomic) long long repeatType;                                  //@synthesize repeatType=_repeatType - In the implementation block
@property (assign,nonatomic) BOOL updateHistoryPlaylist;                            //@synthesize updateHistoryPlaylist=_updateHistoryPlaylist - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(long long)repeatType;
-(void)setRepeatType:(long long)arg1 ;
-(void)setItemGenericObject:(MPModelGenericObject *)arg1 ;
-(void)setPlayEvent:(MPModelPlayEvent *)arg1 ;
-(void)setAllowsStoreContainerImport:(BOOL)arg1 ;
-(void)setUpdateHistoryPlaylist:(BOOL)arg1 ;
-(MPModelGenericObject *)itemGenericObject;
-(MPModelPlayEvent *)playEvent;
-(BOOL)updateHistoryPlaylist;
-(BOOL)allowsStoreContainerImport;
@end
