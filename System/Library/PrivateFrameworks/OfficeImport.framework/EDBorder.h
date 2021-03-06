/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class EDResources, EDColorReference;

@interface EDBorder : NSObject {

	EDResources* mResources;
	int mType;
	EDColorReference* mColorReference;
	int mDiagonalType;

}
+(id)borderWithType:(int)arg1 colorReference:(id)arg2 resources:(id)arg3 ;
+(id)borderWithType:(int)arg1 colorReference:(id)arg2 diagonalType:(int)arg3 resources:(id)arg4 ;
+(id)borderWithType:(int)arg1 color:(id)arg2 resources:(id)arg3 ;
+(id)borderWithType:(int)arg1 color:(id)arg2 diagonalType:(int)arg3 resources:(id)arg4 ;
+(id)borderWithType:(int)arg1 resources:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)color;
-(id)initWithResources:(id)arg1 ;
-(void)setDiagonalType:(int)arg1 ;
-(id)colorReference;
-(int)diagonalType;
-(BOOL)isEqualToBorder:(id)arg1 ;
@end

