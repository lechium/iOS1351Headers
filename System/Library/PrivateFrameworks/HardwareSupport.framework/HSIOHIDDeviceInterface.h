/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HardwareSupport.framework/HardwareSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HSIOHIDDeviceInterface <NSObject>
@required
-(id)valueForProperty:(const CFStringRef)arg1;
-(BOOL)setValue:(id)arg1 forProperty:(const CFStringRef)arg2;
-(BOOL)open:(id*)arg1;
-(BOOL)close:(id*)arg1;
-(BOOL)setOutputReportWithID:(long long)arg1 data:(id)arg2 error:(id*)arg3;
-(BOOL)setFeatureReportWithID:(long long)arg1 data:(id)arg2 error:(id*)arg3;
-(id)featureReportWithID:(long long)arg1 error:(id*)arg2;
-(void)scheduleWithRunLoop:(CFRunLoopRef)arg1 mode:(const CFStringRef)arg2;
-(void)unscheduleFromRunLoop:(CFRunLoopRef)arg1 mode:(const CFStringRef)arg2;
-(void)setDeviceRemovedCallback:(/*^block*/id)arg1;
-(void)setInputReportCallback:(/*^block*/id)arg1;

@end

