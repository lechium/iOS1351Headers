/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:21 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface IAMModalBackground : NSObject {

	NSArray* _colors;
	NSArray* _locations;

}

@property (nonatomic,retain) NSArray * colors;                 //@synthesize colors=_colors - In the implementation block
@property (nonatomic,retain) NSArray * locations;              //@synthesize locations=_locations - In the implementation block
+(id)background1;
+(id)background2;
+(id)background3;
-(void)setColors:(NSArray *)arg1 ;
-(void)setLocations:(NSArray *)arg1 ;
-(NSArray *)colors;
-(NSArray *)locations;
-(id)initWithColors:(id)arg1 atLocations:(id)arg2 ;
-(id)initWithStartingColor:(id)arg1 endingColor:(id)arg2 ;
@end

