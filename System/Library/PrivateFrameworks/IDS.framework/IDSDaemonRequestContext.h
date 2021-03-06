/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:41 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class IDSDaemonResponseHandler, IMTimer;

@interface IDSDaemonRequestContext : NSObject {

	IDSDaemonResponseHandler* _responseHandler;
	/*^block*/id _timeoutBlock;
	IMTimer* _systemTimer;

}
-(void)dealloc;
-(id)responseHandler;
-(id)initWithResponseHandler:(id)arg1 timeoutBlock:(/*^block*/id)arg2 systemTimer:(id)arg3 ;
-(/*^block*/id)timeoutBlock;
-(id)systemTimer;
-(void)killSystemTimer;
@end

