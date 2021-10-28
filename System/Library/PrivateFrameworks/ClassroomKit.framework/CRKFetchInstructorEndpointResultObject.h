/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:03 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Catalyst/CATTaskResultObject.h>

@class NSXPCListenerEndpoint;

@interface CRKFetchInstructorEndpointResultObject : CATTaskResultObject {

	NSXPCListenerEndpoint* _endpoint;

}

@property (nonatomic,retain) NSXPCListenerEndpoint * endpoint;              //@synthesize endpoint=_endpoint - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSXPCListenerEndpoint *)endpoint;
-(void)setEndpoint:(NSXPCListenerEndpoint *)arg1 ;
@end
