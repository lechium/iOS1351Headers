/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:08 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class TIMobileAssetTimerImpl;

@interface TIMobileAssetTimer : NSObject {

	TIMobileAssetTimerImpl* _impl;

}
+(id)nextFireDateForDate:(id)arg1 ;
+(id)scheduledTimerWithExpirationHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)initWithExpirationHandler:(/*^block*/id)arg1 ;
@end

