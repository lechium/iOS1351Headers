/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:33:14 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreAudio.framework/CoreAudio
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreAudio/CoreAudio-Structs.h>
#import <CoreAudio/Core_Audio_Gateway.h>
#import <CoreAudio/Core_Audio_IO.h>

@interface Core_Audio_IO_Gateway : Core_Audio_Gateway <Core_Audio_IO> {

	Client_Side_IO_Gateway* _client_gateway;

}

@property (assign,nonatomic) Client_Side_IO_Gateway* client_gateway;              //@synthesize client_gateway=_client_gateway - In the implementation block
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)handle_server_disconnected;
-(void)setClient_gateway:(Client_Side_IO_Gateway*)arg1 ;
-(void)handle_io_message:(unsigned)arg1 with:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)stop_before_io_device_change:(unsigned)arg1 reply:(/*^block*/id)arg2 ;
-(void)start_after_io_device_change:(unsigned)arg1 ;
-(Client_Side_IO_Gateway*)client_gateway;
@end

