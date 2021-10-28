/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:53 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface QLMovieEdits : NSObject {

	unsigned long long _rightRotationsCount;
	double _trimStartTime;
	double _trimEndTime;

}

@property (assign,nonatomic) unsigned long long rightRotationsCount;              //@synthesize rightRotationsCount=_rightRotationsCount - In the implementation block
@property (assign,nonatomic) double trimStartTime;                                //@synthesize trimStartTime=_trimStartTime - In the implementation block
@property (assign,nonatomic) double trimEndTime;                                  //@synthesize trimEndTime=_trimEndTime - In the implementation block
+(id)editsWithRightRotationsCount:(unsigned long long)arg1 trimStartTime:(double)arg2 trimEndTime:(double)arg3 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(double)trimStartTime;
-(double)trimEndTime;
-(void)resetEditingValues;
-(void)setRightRotationsCount:(unsigned long long)arg1 ;
-(void)setTrimStartTime:(double)arg1 ;
-(void)setTrimEndTime:(double)arg1 ;
-(unsigned long long)rightRotationsCount;
-(void)resetTrimmingValues;
-(BOOL)rotated;
-(BOOL)trimmed;
-(void)incrementRightRotationsCount;
-(BOOL)hasEdits;
@end
