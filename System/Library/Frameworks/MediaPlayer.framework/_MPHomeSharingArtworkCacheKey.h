/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:14 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MediaPlayer/MediaPlayer-Structs.h>
@interface _MPHomeSharingArtworkCacheKey : NSObject {

	unsigned long long _persistentID;
	CGSize _size;

}

@property (nonatomic,readonly) unsigned long long persistentID;              //@synthesize persistentID=_persistentID - In the implementation block
@property (nonatomic,readonly) CGSize size;                                  //@synthesize size=_size - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(CGSize)size;
-(unsigned long long)persistentID;
-(id)initWithPersistentID:(unsigned long long)arg1 size:(CGSize)arg2 ;
@end

