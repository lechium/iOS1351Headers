/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NTKTimeView <NSObject>
@property (assign,getter=isFrozen,nonatomic) BOOL frozen; 
@required
-(BOOL)isFrozen;
-(void)setTimeOffset:(double)arg1;
-(void)setFrozen:(BOOL)arg1;
-(void)setOverrideDate:(id)arg1 duration:(double)arg2;

@end

