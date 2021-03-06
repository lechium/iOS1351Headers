/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:35 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface SRDevice : NSObject {

	NSString* _name;
	NSString* _model;
	NSString* _systemName;
	NSString* _systemVersion;
	NSString* _deviceIdentifier;
	NSString* _buildVersion;

}

@property (copy) NSString * deviceIdentifier;                    //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (copy) NSString * buildVersion;                        //@synthesize buildVersion=_buildVersion - In the implementation block
@property (copy,readonly) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSString * model;                      //@synthesize model=_model - In the implementation block
@property (copy,readonly) NSString * systemName;                 //@synthesize systemName=_systemName - In the implementation block
@property (copy,readonly) NSString * systemVersion;              //@synthesize systemVersion=_systemVersion - In the implementation block
+(id)currentDevice;
-(void)dealloc;
-(NSString *)name;
-(NSString *)systemVersion;
-(NSString *)model;
-(NSString *)deviceIdentifier;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(NSString *)systemName;
-(NSString *)buildVersion;
-(void)setBuildVersion:(NSString *)arg1 ;
-(id)sr_dictionaryRepresentation;
-(id)initWithDeviceDetails:(id)arg1 ;
@end

