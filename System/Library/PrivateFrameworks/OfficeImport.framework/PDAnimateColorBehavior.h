/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/PDAnimateBehavior.h>

@class OADColor;

@interface PDAnimateColorBehavior : PDAnimateBehavior {

	BOOL mHasBy;
	double mBy[3];
	BOOL mHasFrom;
	OADColor* mFrom;
	BOOL mHasTo;
	OADColor* mTo;
	BOOL mHasColorSpace;
	int mColorSpace;
	BOOL mHasColorDirection;
	int mDirection;

}
-(int)colorSpace;
-(void)setColorSpace:(int)arg1 ;
-(id)to;
-(int)direction;
-(void)setDirection:(int)arg1 ;
-(id)from;
-(void)setFrom:(id)arg1 ;
-(void)setTo:(id)arg1 ;
-(BOOL)hasFrom;
-(BOOL)hasTo;
-(double*)by;
-(void)setBy:(double)arg1 ;
-(BOOL)hasBy;
-(BOOL)hasColorSpace;
-(BOOL)hasColorDirection;
@end

