/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:44 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Silex/Silex-Structs.h>
#import <Silex/SXComponentLayoutAttributeDescriptor.h>

@class SXTextExclusionPath;

@interface SXTextComponentLayoutAttributeDescriptor : SXComponentLayoutAttributeDescriptor {

	SXTextExclusionPath* _resultingExclusionPath;
	NSRange _range;

}

@property (assign,nonatomic) NSRange range;                                             //@synthesize range=_range - In the implementation block
@property (nonatomic,retain) SXTextExclusionPath * resultingExclusionPath;              //@synthesize resultingExclusionPath=_resultingExclusionPath - In the implementation block
+(id)descriptorWithFromLayoutAttribute:(int)arg1 toLayoutAttribute:(int)arg2 ignoreMargin:(BOOL)arg3 withRange:(NSRange)arg4 ;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
-(SXTextExclusionPath *)resultingExclusionPath;
-(void)setResultingExclusionPath:(SXTextExclusionPath *)arg1 ;
@end
