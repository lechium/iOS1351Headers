/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:52 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PRBeaconDelegate <NSObject>
@optional
-(void)beacon:(id)arg1 didOutputRangeResults:(id)arg2;
-(void)beacon:(id)arg1 didOutputSuperframeStats:(id)arg2;

@required
-(void)beacon:(id)arg1 didChangeState:(unsigned long long)arg2;
-(void)beacon:(id)arg1 didFailWithError:(id)arg2;

@end
