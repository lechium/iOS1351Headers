/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:59 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TestFlightCore/TestFlightCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TFFeedbackHandleConfiguration : NSObject <NSCopying> {

	NSString* _bundleIdentifier;
	NSString* _incidentId;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * incidentId;                             //@synthesize incidentId=_incidentId - In the implementation block
+(id)configurationFromUserInfo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)bundleIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(NSString *)incidentId;
-(void)setIncidentId:(NSString *)arg1 ;
-(id)encodedAsUserInfo;
@end

