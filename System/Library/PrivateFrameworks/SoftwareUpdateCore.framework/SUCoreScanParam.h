/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:55 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSError, SUCoreDescriptor;

@interface SUCoreScanParam : NSObject <NSSecureCoding> {

	long long _resultCode;
	NSError* _error;
	SUCoreDescriptor* _descriptor;
	SUCoreDescriptor* _fallbackDescriptor;

}

@property (assign,nonatomic) long long resultCode;                               //@synthesize resultCode=_resultCode - In the implementation block
@property (nonatomic,retain) NSError * error;                                    //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) SUCoreDescriptor * descriptor;                      //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,retain) SUCoreDescriptor * fallbackDescriptor;              //@synthesize fallbackDescriptor=_fallbackDescriptor - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(id)copy;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(SUCoreDescriptor *)fallbackDescriptor;
-(SUCoreDescriptor *)descriptor;
-(void)setDescriptor:(SUCoreDescriptor *)arg1 ;
-(id)summary;
-(void)setResultCode:(long long)arg1 ;
-(long long)resultCode;
-(void)setFallbackDescriptor:(SUCoreDescriptor *)arg1 ;
-(id)initWithResult:(long long)arg1 withError:(id)arg2 ;
-(id)initWithDescriptor:(id)arg1 withFallbackDescriptor:(id)arg2 ;
@end

