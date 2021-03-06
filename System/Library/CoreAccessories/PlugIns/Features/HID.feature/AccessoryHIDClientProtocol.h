/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:33 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/CoreAccessories/PlugIns/Features/HID.feature/HID
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AccessoryHIDClientProtocol <NSObject>
@required
-(id)createHIDDescriptor:(id)arg1;
-(BOOL)deleteHIDDescriptor:(id)arg1;
-(BOOL)processInReport:(id)arg1 forUUID:(id)arg2;
-(BOOL)processGetReportResponse:(id)arg1 reportType:(unsigned char)arg2 reportID:(unsigned char)arg3 forUUID:(id)arg4;

@end

