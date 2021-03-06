/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:10 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BLTAbstractIDSService <NSObject>
@property (nonatomic,readonly) id<BLTAbstractIDSDevice> defaultPairedDevice; 
@required
-(void)removeDelegate:(id)arg1;
-(void)addDelegate:(id)arg1 queue:(id)arg2;
-(id)initWithService:(id)arg1;
-(BOOL)sendProtobuf:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6;
-(void)setProtobufAction:(SEL)arg1 forIncomingRequestsOfType:(unsigned short)arg2;
-(void)setProtobufAction:(SEL)arg1 forIncomingResponsesOfType:(unsigned short)arg2;
-(BOOL)sendResourceAtURL:(id)arg1 metadata:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id*)arg6 error:(id*)arg7;
-(id<BLTAbstractIDSDevice>)defaultPairedDevice;

@end

