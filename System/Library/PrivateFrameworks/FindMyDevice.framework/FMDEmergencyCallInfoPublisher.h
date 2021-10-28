/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:11 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class FMDEmergencyCallInfoPublisherConfiguration;

@interface FMDEmergencyCallInfoPublisher : NSObject {

	FMDEmergencyCallInfoPublisherConfiguration* _publisherConfig;

}

@property (nonatomic,retain) FMDEmergencyCallInfoPublisherConfiguration * publisherConfig;              //@synthesize publisherConfig=_publisherConfig - In the implementation block
-(id)initWithConfiguration:(id)arg1 ;
-(void)publishInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(FMDEmergencyCallInfoPublisherConfiguration *)publisherConfig;
-(void)setPublisherConfig:(FMDEmergencyCallInfoPublisherConfiguration *)arg1 ;
@end
