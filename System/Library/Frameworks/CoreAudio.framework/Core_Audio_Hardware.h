/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:33:14 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreAudio.framework/CoreAudio
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol Core_Audio_Hardware
@required
-(void)create_aggregate_device:(id)arg1 reply:(/*^block*/id)arg2;
-(void)destroy_aggregate_device:(unsigned)arg1 reply:(/*^block*/id)arg2;
-(void)add_property_listener:(id)arg1 reply:(/*^block*/id)arg2;
-(void)handle_io_message:(unsigned)arg1 with:(unsigned)arg2 incoming:(id)arg3 reply:(/*^block*/id)arg4;
-(void)audio_object_get_property_info:(unsigned)arg1 token:(unsigned)arg2 at:(AudioObjectPropertyAddress)arg3 reply:(/*^block*/id)arg4;
-(void)create_device_for_client_io:(unsigned)arg1 with:(unsigned)arg2 reply:(/*^block*/id)arg3;
-(void)create_io_client_on:(unsigned)arg1 using_listener:(id)arg2 reply:(/*^block*/id)arg3;
-(void)audio_object_get_property_data:(unsigned)arg1 token:(unsigned)arg2 at:(AudioObjectPropertyAddress)arg3 with:(id)arg4 reply:(/*^block*/id)arg5;
-(void)audio_object_set_property_data:(unsigned)arg1 token:(unsigned)arg2 at:(AudioObjectPropertyAddress)arg3 with:(id)arg4 value:(id)arg5 reply:(/*^block*/id)arg6;
-(void)ping:(int)arg1 reply:(/*^block*/id)arg2;

@end
