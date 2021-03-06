/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:31 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AccessoryHID.framework/AccessoryHID
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AccessoryHIDXPCClientProtocol <NSObject>
@required
-(void)registerHIDDescriptor:(id)arg1 componentID:(unsigned short)arg2 dictionary:(id)arg3 withReply:(/*^block*/id)arg4;
-(void)unregisterHIDDescriptor:(id)arg1 componentID:(unsigned short)arg2 withReply:(/*^block*/id)arg3;
-(void)unregisterAllDescriptors:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)inReport:(id)arg1 componentID:(unsigned short)arg2 report:(id)arg3 withReply:(/*^block*/id)arg4;
-(void)getReportResponse:(id)arg1 componentID:(unsigned short)arg2 reportType:(unsigned char)arg3 reportID:(unsigned char)arg4 report:(id)arg5 withReply:(/*^block*/id)arg6;

@end

