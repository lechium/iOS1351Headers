/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:52 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, FMDispatchTimer;

@interface FMNanoIDSRequest : NSObject {

	NSString* _idsMessageID;
	/*^block*/id _responseHandler;
	FMDispatchTimer* _timer;

}

@property (nonatomic,retain) NSString * idsMessageID;              //@synthesize idsMessageID=_idsMessageID - In the implementation block
@property (nonatomic,copy) id responseHandler;                     //@synthesize responseHandler=_responseHandler - In the implementation block
@property (nonatomic,retain) FMDispatchTimer * timer;              //@synthesize timer=_timer - In the implementation block
-(FMDispatchTimer *)timer;
-(void)setTimer:(FMDispatchTimer *)arg1 ;
-(void)setResponseHandler:(id)arg1 ;
-(id)responseHandler;
-(NSString *)idsMessageID;
-(void)setIdsMessageID:(NSString *)arg1 ;
@end

