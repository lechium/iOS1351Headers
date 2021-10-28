/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:29 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray;

@interface NTKPillView : UIView {

	NSArray* _pillColors;
	unsigned long long _colorLimitCount;

}

@property (nonatomic,copy) NSArray * pillColors;                              //@synthesize pillColors=_pillColors - In the implementation block
@property (assign,nonatomic) unsigned long long colorLimitCount;              //@synthesize colorLimitCount=_colorLimitCount - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setPillColors:(NSArray *)arg1 ;
-(NSArray *)pillColors;
-(unsigned long long)colorLimitCount;
-(void)setColorLimitCount:(unsigned long long)arg1 ;
@end
