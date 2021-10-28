/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:02 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MRNowPlayingArtwork.h>

@class NSData, NSString;

@interface MRNowPlayingArtworkImage : MRNowPlayingArtwork {

	NSData* _imageData;
	NSString* _mimeType;

}

@property (nonatomic,copy,readonly) NSData * imageData;               //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,copy,readonly) NSString * mimeType;              //@synthesize mimeType=_mimeType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(unsigned)type;
-(NSString *)mimeType;
-(NSData *)imageData;
-(BOOL)hasArtworkData;
-(id)initWithImageData:(id)arg1 mimeType:(id)arg2 ;
-(id)copyImageData;
@end
