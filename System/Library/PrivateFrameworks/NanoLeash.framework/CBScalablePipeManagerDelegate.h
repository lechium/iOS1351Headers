/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:31 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoLeash.framework/NanoLeash
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CBScalablePipeManagerDelegate <NSObject>
@optional
-(void)scalablePipeManager:(id)arg1 didRegisterEndpoint:(id)arg2 error:(id)arg3;
-(void)scalablePipeManager:(id)arg1 didUnregisterEndpoint:(id)arg2;
-(void)scalablePipeManager:(id)arg1 pipeDidConnect:(id)arg2;
-(void)scalablePipeManager:(id)arg1 pipeDidDisconnect:(id)arg2 error:(id)arg3;

@required
-(void)scalablePipeManagerDidUpdateState:(id)arg1;

@end
