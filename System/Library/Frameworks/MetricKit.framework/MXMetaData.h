/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MXMetaData : NSObject <NSSecureCoding> {

	NSString* _regionFormat;
	NSString* _osVersion;
	NSString* _deviceType;
	NSString* _applicationBuildVersion;

}

@property (readonly) NSString * regionFormat;                         //@synthesize regionFormat=_regionFormat - In the implementation block
@property (readonly) NSString * osVersion;                            //@synthesize osVersion=_osVersion - In the implementation block
@property (readonly) NSString * deviceType;                           //@synthesize deviceType=_deviceType - In the implementation block
@property (readonly) NSString * applicationBuildVersion;              //@synthesize applicationBuildVersion=_applicationBuildVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)deviceType;
-(NSString *)osVersion;
-(id)toDictionary;
-(id)JSONRepresentation;
-(id)initWithRegionFormat:(id)arg1 osVersion:(id)arg2 deviceType:(id)arg3 appBuildVersion:(id)arg4 ;
-(id)DictionaryRepresentation;
-(NSString *)regionFormat;
-(NSString *)applicationBuildVersion;
@end
