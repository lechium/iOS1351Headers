/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:22 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <PrototypeTools/PTSettings.h>

@interface PTPointSettings : PTSettings {

	double _x;
	double _y;

}

@property (assign,x,nonatomic) double x;                      //@synthesize x=_x - In the implementation block
@property (assign,y,nonatomic) double y;                      //@synthesize y=_y - In the implementation block
@property (assign,nonatomic) CGPoint pointValue; 
+(id)settingsControllerModule;
+(BOOL)ignoresKey:(id)arg1 ;
-(CGPoint)pointValue;
-(double)x;
-(double)y;
-(void)setX:(double)arg1 ;
-(void)setY:(double)arg1 ;
-(id)drillDownSummary;
-(void)setPointValue:(CGPoint)arg1 ;
@end
