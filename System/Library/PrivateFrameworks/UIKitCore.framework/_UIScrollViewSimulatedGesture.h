/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:16 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface _UIScrollViewSimulatedGesture : NSObject {

	double _simulationDuration;
	double _beginTime;
	/*^block*/id _beginBlock;
	/*^block*/id _updateBlock;
	/*^block*/id _endBlock;

}
-(id)initWithDuration:(double)arg1 begin:(/*^block*/id)arg2 update:(/*^block*/id)arg3 end:(/*^block*/id)arg4 ;
-(BOOL)updateSimulation;
@end

