/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:04 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FCHeadlineMetadata.h>

@class NSDate, NSString;

@interface NewsUI2.MagazineFeedArticle : NSObject <FCHeadlineMetadata> {

	 articleID;
	 title;
	 storyType;
	 shortExcerpt;

}

@property (readonly,nonatomic) NSString * title; 
@property (readonly,nonatomic) NSDate * displayDate; 
@property (readonly,nonatomic) NSString * storyType; 
@property (readonly,nonatomic) NSString * shortExcerpt; 
-(id)init;
-(NSString *)title;
-(NSDate *)displayDate;
-(NSString *)shortExcerpt;
-(NSString *)storyType;
@end
