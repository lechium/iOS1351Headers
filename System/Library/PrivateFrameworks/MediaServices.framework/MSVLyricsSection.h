/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:56 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaServices/MSVLyricsElement.h>

@class NSString, NSArray;

@interface MSVLyricsSection : MSVLyricsElement {

	long long _songPart;
	NSString* _songPartText;
	NSArray* _lines;

}

@property (assign,nonatomic) long long songPart;                 //@synthesize songPart=_songPart - In the implementation block
@property (nonatomic,copy) NSString * songPartText;              //@synthesize songPartText=_songPartText - In the implementation block
@property (nonatomic,retain) NSArray * lines;                    //@synthesize lines=_lines - In the implementation block
+(long long)_songPartForText:(id)arg1 ;
-(id)init;
-(id)description;
-(NSArray *)lines;
-(void)setLines:(NSArray *)arg1 ;
-(void)setSongPartText:(NSString *)arg1 ;
-(long long)songPart;
-(NSString *)songPartText;
-(void)setSongPart:(long long)arg1 ;
@end

