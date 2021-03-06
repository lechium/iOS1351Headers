/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:42 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCSecureCoding.h>

@class NSString;

@interface BKSContextRelativePoint : NSObject <BSXPCSecureCoding> {

	unsigned _contextID;
	CGPoint _point;

}

@property (nonatomic,readonly) CGPoint point;                       //@synthesize point=_point - In the implementation block
@property (nonatomic,readonly) unsigned contextID;                  //@synthesize contextID=_contextID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsBSXPCSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned)contextID;
-(CGPoint)point;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(id)initWithPoint:(CGPoint)arg1 contextID:(unsigned)arg2 ;
@end

