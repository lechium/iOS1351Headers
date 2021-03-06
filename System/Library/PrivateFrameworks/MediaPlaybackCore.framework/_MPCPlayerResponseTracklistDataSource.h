/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:30 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/MPLazySectionedCollectionDataSource.h>

@class MPCPlayerResponse, NSIndexPath, NSString;

@interface _MPCPlayerResponseTracklistDataSource : NSObject <MPLazySectionedCollectionDataSource> {

	MPCPlayerResponse* _response;
	NSIndexPath* _playingItemIndexPath;

}

@property (nonatomic,__weak,readonly) MPCPlayerResponse * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSIndexPath * playingItemIndexPath;                 //@synthesize playingItemIndexPath=_playingItemIndexPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MPCPlayerResponse *)response;
-(unsigned long long)numberOfSections;
-(unsigned long long)numberOfItemsInSection:(unsigned long long)arg1 ;
-(id)sectionAtIndex:(unsigned long long)arg1 ;
-(id)itemAtIndexPath:(id)arg1 ;
-(NSIndexPath *)playingItemIndexPath;
-(void)setPlayingItemIndexPath:(NSIndexPath *)arg1 ;
-(id)initWithResponse:(id)arg1 playingItemIndexPath:(id)arg2 ;
@end

