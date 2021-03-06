/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:40 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface MREMeta : NSObject {

	unsigned long long _trackId;
	unsigned long long _songId;
	NSString* _title;
	NSString* _artist;

}

@property (nonatomic,readonly) unsigned long long trackId;              //@synthesize trackId=_trackId - In the implementation block
@property (nonatomic,readonly) unsigned long long songId;               //@synthesize songId=_songId - In the implementation block
@property (nonatomic,retain,readonly) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,retain,readonly) NSString * artist;                //@synthesize artist=_artist - In the implementation block
-(void)dealloc;
-(NSString *)title;
-(NSString *)artist;
-(unsigned long long)trackId;
-(unsigned long long)songId;
-(id)initWithTrackId:(unsigned long long)arg1 songId:(unsigned long long)arg2 title:(id)arg3 artist:(id)arg4 ;
@end

