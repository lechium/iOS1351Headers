/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:15 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface EFMeasuredObject : NSObject {

	id _object;
	double _measure;

}

@property (nonatomic,retain) id object;                   //@synthesize object=_object - In the implementation block
@property (assign,nonatomic) double measure;              //@synthesize measure=_measure - In the implementation block
+(id)max:(id)arg1 ;
+(id)object:(id)arg1 withMeasure:(double)arg2 ;
+(id)reverseSortedObjects:(id)arg1 limit:(unsigned long long)arg2 ;
-(id)description;
-(id)object;
-(long long)compare:(id)arg1 ;
-(void)setObject:(id)arg1 ;
-(id)initWithObject:(id)arg1 measure:(double)arg2 ;
-(void)setMeasure:(double)arg1 ;
-(double)measure;
@end

