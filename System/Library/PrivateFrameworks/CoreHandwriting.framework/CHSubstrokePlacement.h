/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:12 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CHSubstroke;

@interface CHSubstrokePlacement : NSObject <NSCopying> {

	CHSubstroke* _substroke;
	long long _originalWritingDirectionIndex;
	CGVector _writingOrientation;
	CGVector _strokeDeviation;
	CGPoint _coalescedCenter;

}

@property (nonatomic,retain,readonly) CHSubstroke * substroke;                     //@synthesize substroke=_substroke - In the implementation block
@property (assign,nonatomic) CGVector writingOrientation;                          //@synthesize writingOrientation=_writingOrientation - In the implementation block
@property (assign,nonatomic) CGVector strokeDeviation;                             //@synthesize strokeDeviation=_strokeDeviation - In the implementation block
@property (assign,nonatomic) long long originalWritingDirectionIndex;              //@synthesize originalWritingDirectionIndex=_originalWritingDirectionIndex - In the implementation block
@property (assign,nonatomic) CGPoint coalescedCenter;                              //@synthesize coalescedCenter=_coalescedCenter - In the implementation block
@property (nonatomic,readonly) CGRect rotatedBounds; 
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGRect)rotatedBounds;
-(CHSubstroke *)substroke;
-(id)initWithSubstroke:(id)arg1 ;
-(CGVector)writingOrientation;
-(void)setWritingOrientation:(CGVector)arg1 ;
-(CGVector)strokeDeviation;
-(void)setStrokeDeviation:(CGVector)arg1 ;
-(long long)originalWritingDirectionIndex;
-(void)setOriginalWritingDirectionIndex:(long long)arg1 ;
-(CGPoint)coalescedCenter;
-(void)setCoalescedCenter:(CGPoint)arg1 ;
@end
