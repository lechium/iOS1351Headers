/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:04 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSString;

@interface VUIFamilySharingGenre : NSObject {

	NSArray* _genreIdentifiers;
	NSString* _genreTitle;

}

@property (nonatomic,retain) NSArray * genreIdentifiers;              //@synthesize genreIdentifiers=_genreIdentifiers - In the implementation block
@property (nonatomic,retain) NSString * genreTitle;                   //@synthesize genreTitle=_genreTitle - In the implementation block
-(NSString *)genreTitle;
-(void)setGenreTitle:(NSString *)arg1 ;
-(NSArray *)genreIdentifiers;
-(void)setGenreIdentifiers:(NSArray *)arg1 ;
@end
