/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:21 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNRequestConfiguration.h>

@class NSDictionary, NSMutableArray, NSString;

@interface VNFaceAnalyzerCompoundRequestConfiguration : VNRequestConfiguration {

	NSDictionary* _detectorConfigurationOptions;
	NSMutableArray* _originalRequests;
	NSString* _detectorType;

}

@property (nonatomic,copy) NSDictionary * detectorConfigurationOptions;              //@synthesize detectorConfigurationOptions=_detectorConfigurationOptions - In the implementation block
@property (nonatomic,readonly) NSMutableArray * originalRequests;                    //@synthesize originalRequests=_originalRequests - In the implementation block
@property (nonatomic,copy) NSString * detectorType;                                  //@synthesize detectorType=_detectorType - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)originalRequests;
-(id)initWithRequestClass:(Class)arg1 ;
-(void)setDetectorConfigurationOption:(id)arg1 value:(id)arg2 ;
-(NSDictionary *)detectorConfigurationOptions;
-(NSString *)detectorType;
-(void)setDetectorType:(NSString *)arg1 ;
-(void)setDetectorConfigurationOptions:(NSDictionary *)arg1 ;
@end
