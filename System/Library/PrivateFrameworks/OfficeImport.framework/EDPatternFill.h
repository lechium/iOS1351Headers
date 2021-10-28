/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EDFill.h>

@class EDColorReference;

@interface EDPatternFill : EDFill {

	int mType;
	EDColorReference* mBackColorReference;
	EDColorReference* mForeColorReference;

}
+(id)patternFillWithType:(int)arg1 resources:(id)arg2 ;
+(id)patternFillWithType:(int)arg1 foreColor:(id)arg2 resources:(id)arg3 ;
+(id)patternFillWithType:(int)arg1 foreColor:(id)arg2 backColor:(id)arg3 resources:(id)arg4 ;
+(id)patternFillWithType:(int)arg1 foreColorReference:(id)arg2 backColorReference:(id)arg3 resources:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)initWithResources:(id)arg1 ;
-(id)foreColor;
-(id)backColor;
-(void)setForeColorReference:(id)arg1 ;
-(void)setBackColorReference:(id)arg1 ;
-(id)foreColorReference;
-(id)backColorReference;
-(void)setForeColor:(id)arg1 ;
-(void)setBackColor:(id)arg1 ;
-(BOOL)isEqualToPatternFill:(id)arg1 ;
-(id)initWithType:(int)arg1 foreColor:(id)arg2 backColor:(id)arg3 resources:(id)arg4 ;
-(id)initWithType:(int)arg1 foreColorReference:(id)arg2 backColorReference:(id)arg3 resources:(id)arg4 ;
@end
