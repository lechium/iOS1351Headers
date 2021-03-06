/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:35 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SRSensorKitServiceClientWriting.h>

@class SRSensorWriter;

@interface SRSensorWriterClient : NSObject <SRSensorKitServiceClientWriting> {

	SRSensorWriter* _writer;

}

@property (__weak) SRSensorWriter * writer;              //@synthesize writer=_writer - In the implementation block
+(id)sensorWriterClientWithWriter:(id)arg1 ;
-(void)setMonitoring:(BOOL)arg1 ;
-(void)setWriter:(SRSensorWriter *)arg1 ;
-(SRSensorWriter *)writer;
-(void)resetDatastoreFiles:(id)arg1 ;
-(id)initWithWriter:(id)arg1 ;
@end

