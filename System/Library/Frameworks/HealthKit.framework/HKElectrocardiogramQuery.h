/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:06 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HKQuery.h>
#import <libobjc.A.dylib/HKElectrocardiogramQueryClientInterface.h>

@class HKElectrocardiogram, NSString;

@interface HKElectrocardiogramQuery : HKQuery <HKElectrocardiogramQueryClientInterface> {

	HKElectrocardiogram* _elecrocardiogram;
	unsigned long long _leadName;
	/*^block*/id _dataHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientInterfaceProtocol;
-(void)queue_deliverError:(id)arg1 ;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(void)_enumerateDataWithHandler:(/*^block*/id)arg1 ;
-(void)client_deliverData;
-(id)initWithElectrocardiogram:(id)arg1 lead:(unsigned long long)arg2 dataHandler:(/*^block*/id)arg3 ;
@end

