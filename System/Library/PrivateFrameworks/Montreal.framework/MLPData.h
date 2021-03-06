/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:23 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData;

@interface MLPData : NSObject {

	unsigned _label;
	NSData* _oneHot;
	NSData* _pixels;
	NSData* _classDist;

}

@property (assign) unsigned label;                  //@synthesize label=_label - In the implementation block
@property (retain) NSData * oneHot;                 //@synthesize oneHot=_oneHot - In the implementation block
@property (retain) NSData * pixels;                 //@synthesize pixels=_pixels - In the implementation block
@property (retain) NSData * classDist;              //@synthesize classDist=_classDist - In the implementation block
-(void)setLabel:(unsigned)arg1 ;
-(unsigned)label;
-(NSData *)oneHot;
-(void)setOneHot:(NSData *)arg1 ;
-(NSData *)pixels;
-(void)setPixels:(NSData *)arg1 ;
-(NSData *)classDist;
-(void)setClassDist:(NSData *)arg1 ;
@end

